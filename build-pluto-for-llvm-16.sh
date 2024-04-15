# Set the name of the build dir
# BUILD_DIR="build/"


# Where you want to install the bins
INSTALL_PREFIX=$HOME/compiler-projects/all-pluto-tests/pluto-with-llvm-16/installation


# The LLVM build location
CLANG_INSTALL_PATH=$HOME/compiler-projects/llvm-16-src-build/installation



# Configure flags
CONFIGURE_FLAGS="--enable-portable-binary --enable-static"


# Handle the build dir
if [ -d $INSTALL_PREFIX ]; then
    echo "$INSTALL_PREFIX exists. Deleting..."
    rm -R $INSTALL_PREFIX
    echo "$INSTALL_PREFIX Creating..."
    mkdir -p $INSTALL_PREFIX
else
    echo "$$INSTALL_PREFIX directory does not exist. Creating $$INSTALL_PREFIX .."
    mkdir -p $INSTALL_PREFIX
fi

# cd $BUILD_DIR

# Idea of configure command
# ../configure --prefix=$MY_EXTERNAL_SDD_WORK_DIR/compiler-projects/all-pluto-test/pluto-with-llvm-16/installation --with-clang-prefix=$MY_EXTERNAL_SDD_WORK_DIR/compiler-projects/llvm-src-build/installation --enable-portable-binary --enable-static




./configure --prefix=$INSTALL_PREFIX --with-clang-prefix=$CLANG_INSTALL_PATH $CONFIGURE_FLAGS

make -j$(nproc)

make install
