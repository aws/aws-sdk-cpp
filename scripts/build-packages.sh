#!/bin/bash
# Build script for generating AWS SDK C++ DEB and RPM packages
# Usage: ./build-packages.sh [BUILD_TYPE] [LIBRARY_TYPE] [BUILD_SERVICES]
#
# Examples:
#   ./build-packages.sh                           # Default: Release, shared, core+s3+ec2+dynamodb
#   ./build-packages.sh Release shared all        # Build all services as shared libraries
#   ./build-packages.sh Release static "s3;ec2"   # Build specific services as static libraries

set -e

# Default values
BUILD_TYPE="${1:-Release}"
LIBRARY_TYPE="${2:-shared}"
BUILD_SERVICES="${3:-core;s3;ec2;dynamodb;lambda}"

# Script directory
SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
SDK_ROOT="$(dirname "$SCRIPT_DIR")"

echo "========================================"
echo "AWS SDK C++ Package Builder"
echo "========================================"
echo "Build Type: $BUILD_TYPE"
echo "Library Type: $LIBRARY_TYPE"
echo "Build Services: $BUILD_SERVICES"
echo "========================================"

# Determine build directory name
if [ "$LIBRARY_TYPE" = "shared" ]; then
    BUILD_SHARED_LIBS=ON
    BUILD_DIR="${SDK_ROOT}/build-packaging-shared"
    echo "Building shared libraries (.so files)"
elif [ "$LIBRARY_TYPE" = "static" ]; then
    BUILD_SHARED_LIBS=OFF
    BUILD_DIR="${SDK_ROOT}/build-packaging-static"
    echo "Building static libraries (.a files)"
else
    echo "Error: LIBRARY_TYPE must be 'shared' or 'static'"
    exit 1
fi

# Create and enter build directory
mkdir -p "$BUILD_DIR"
cd "$BUILD_DIR"

echo ""
echo "Configuring CMake..."
echo "========================================"

# CMake configuration
CMAKE_ARGS=(
    -DCMAKE_BUILD_TYPE="$BUILD_TYPE"
    -DBUILD_SHARED_LIBS="$BUILD_SHARED_LIBS"
    -DSIMPLE_INSTALL=ON
    -DENABLE_CPACK_PACKAGING=ON
    -DCMAKE_INSTALL_PREFIX=/usr
    -DUSE_OPENSSL=ON
    -DFORCE_CURL=ON
    -DENABLE_TESTING=OFF
)

# Determine library installation directory based on architecture
if [ "$(uname -m)" = "x86_64" ]; then
    CMAKE_ARGS+=(-DCMAKE_INSTALL_LIBDIR=lib64)
fi

# Handle build services selection
if [ "$BUILD_SERVICES" = "all" ]; then
    echo "Building all AWS service libraries"
    # Don't add BUILD_ONLY parameter to build all services
else
    CMAKE_ARGS+=(-DBUILD_ONLY="$BUILD_SERVICES")
    echo "Building selected services: $BUILD_SERVICES"
fi

# Run CMake configuration
cmake "${CMAKE_ARGS[@]}" "$SDK_ROOT"

if [ $? -ne 0 ]; then
    echo "Error: CMake configuration failed"
    exit 1
fi

echo ""
echo "Building SDK..."
echo "========================================"

# Build the SDK
NPROC=$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)
make -j"$NPROC"

if [ $? -ne 0 ]; then
    echo "Error: Build failed"
    exit 1
fi

echo ""
echo "Generating packages..."
echo "========================================"

# Generate RPM packages
echo "Generating RPM packages..."
cpack -G RPM

if [ $? -ne 0 ]; then
    echo "Warning: RPM package generation failed"
fi

# Generate DEB packages
echo "Generating DEB packages..."
cpack -G DEB

if [ $? -ne 0 ]; then
    echo "Warning: DEB package generation failed"
fi

echo ""
echo "Package validation..."
echo "========================================"

# List generated packages
echo "Generated RPM packages:"
ls -lh *.rpm 2>/dev/null || echo "No RPM packages found"

echo ""
echo "Generated DEB packages:"
ls -lh *.deb 2>/dev/null || echo "No DEB packages found"

echo ""
echo "Validating package metadata..."

# Validate RPM packages
for rpm in *.rpm 2>/dev/null; do
    if [ -f "$rpm" ]; then
        echo ""
        echo "--- $rpm ---"
        rpm -qp --info "$rpm" 2>/dev/null || true
        echo "Dependencies:"
        rpm -qp --requires "$rpm" 2>/dev/null || true
    fi
done

# Validate DEB packages
for deb in *.deb 2>/dev/null; do
    if [ -f "$deb" ]; then
        echo ""
        echo "--- $deb ---"
        dpkg-deb -I "$deb" 2>/dev/null || true
    fi
done

echo ""
echo "========================================"
echo "Package build complete!"
echo "========================================"
echo "Packages are located in: $BUILD_DIR"
echo ""
echo "To install RPM packages:"
echo "  sudo rpm -ivh $BUILD_DIR/aws-sdk-cpp-core-*.rpm"
echo "  sudo rpm -ivh $BUILD_DIR/aws-sdk-cpp-core-devel-*.rpm"
echo ""
echo "To install DEB packages:"
echo "  sudo dpkg -i $BUILD_DIR/libaws-sdk-cpp-core_*.deb"
echo "  sudo dpkg -i $BUILD_DIR/libaws-sdk-cpp-core-dev_*.deb"
echo ""
echo "Or use your package manager for automatic dependency resolution:"
echo "  sudo yum install $BUILD_DIR/*.rpm"
echo "  sudo apt install $BUILD_DIR/*.deb"
echo ""
