/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <functional>
#include <iostream>
#include <memory>
#include <mutex>
#include <streambuf>
#include <utility>

namespace Aws {
namespace TransferCrt {

// Used by the classes below to notify the receiver of low-level file errors.
using ErrorCallback = std::function<void(Aws::String someDescriptiveErrorMessage)>;

// Default size for the put buffer (which is bypassed when xsputn is used).
// Measurements in "The Linux Programming Interface" show that a minimum 4096B is
// required when O_SYNC is enabled. Use a larger value to aggregate small writes.
constexpr size_t DEFAULT_BUFSIZE = 1 << 20;

// Helper class for DownloadStream.
//
// This implements only what DownloadStream needs: a simple, file-descriptor based streambuf.
// Hence many std::streambuf operations, such as seekoff/pos, are not supported.
// The expected use-case is that mostly xsputn(const char *, size_t) will be called.
//
// The ErrorCallback that is passed into the constructor is invoked when encountering a
// low-level write error, receiving a string describing the error cause (based on errno).
class FileDescriptorBuf : public std::streambuf {
 public:
    // Class does not own the file descriptor @fd - caller is responsible for closing it.
    FileDescriptorBuf(int fd, ErrorCallback errorCallback, size_t bufsize = DEFAULT_BUFSIZE)
        : fd_{fd}, errorCallback_{errorCallback}, buffer_{Aws::MakeUniqueArray<char>(bufsize, "FdBuf")} {
        setp(buffer_.get(), buffer_.get() + bufsize);
    }

 protected:
    int sync() override;
    int overflow(int_type c) override;
    std::streamsize xsputn(const char *data, std::streamsize datalen) override;

 private:
    int fd_;
    ErrorCallback errorCallback_;
    Aws::UniqueArrayPtr<char> buffer_;
};

// Download output stream class for a given @dstPath.
//
// This takes an Error Callback which gets invoked with descriptive error message when a failure
// occurs in either this class, or the contained FileDescriptorBuf.
//
// The constructor does the following:
//   1. Create any missing directory components of @dstPath.
//   2. Generate a temporary .partial file to write to. This file will be renamed into @dstPath
//      upon successful completion, or removed on failure. The implementation uses mkostemp(3),
//      which is the reason we are using a file-descriptor based backend.
//   3. Open a file descriptor to the temporary file and advise the kernel about its use.
//   4. Complete the construction of the iostream, using a FileDescriptorBuf as rdbuf.
//
// The Error Callback @ec may be invoked already before the constructor call returns.
// It is also invoked by the contained FileDescriptorBuf, and during close().
class DownloadStream final : public std::iostream {
 public:
    // Create a DownloadStream for @dstPath, calling @ec if any failure happens.
    // Enabling O_SYNC via @sync_always is optional, as it degrades download performance.
    DownloadStream(const Aws::String &dstPath, ErrorCallback ec, bool sync_always = false);
    ~DownloadStream();

    // Set eof, close the temporary file and atomically rename it into @dstPath.
    void close() noexcept;

 private:
    void _error(Aws::String msg) {
        setstate(std::ios::badbit);
        errorCallback_(std::move(msg));
    }

 private:
    const Aws::String dstPath_;
    Aws::String dstTempPath_;
    ErrorCallback errorCallback_;

    int fd_ = -1;
    Aws::UniquePtr<FileDescriptorBuf> buf_;
    std::mutex close_mutex_;
};

}  // namespace TransferCrt
}  // namespace Aws
