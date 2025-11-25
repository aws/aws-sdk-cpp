/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3-crt/S3CrtErrors.h>
#include <aws/transfer-crt/Metadata.h>

#include <atomic>
#include <condition_variable>
#include <fstream>
#include <future>
#include <iostream>
#include <memory>
#include <mutex>
#include <utility>
#include <assert.h>

namespace Aws {
namespace TransferCrt {

enum class TransferStatus : uint8_t {
    //
    // TransferHandle states:
    //
    // The three terminal states are CANCELED, FAILED, and COMPLETED.
    //
    // NOT_STARTED indicates that no S3CrtClient API call has been made yet. This means that no
    // status/progress callbacks will be invoked. Unlike IN_PROGRESS, we do not have to wait for
    // these when transitioning to FAILED or CANCELED.
    //
    // IN_PROGRESS indicates that an API call was made, which means we must wait until its final
    // .shutdown_callback (Handle{Put,Get}ObjectResponse()) is called.  The AWS SDK and aws-c-s3
    // expect all request data structures to still be alive until then (in particular the response
    // body, which may be updated several times in order to record errors).
    //
    // FAILING is an intermediate state that is entered from IN_PROGRESS to record that a failure
    // (e.g. local write error) occurred while the transfer was progressing. It will be converted
    // into FAILED once the .shutdown_callback is called.
    //
    NOT_STARTED,  // No S3CrtClient API call has been made yet.
    IN_PROGRESS,  // An API call was made, and the transfer is running.
    FAILING,      // A failure occurred while the transfer was running.
    CANCELED,     // Transfer was canceled.
    FAILED,       // Transfer failed.
    COMPLETED,    // Transfer completed successfully.
};
Aws::String StatusToString(TransferStatus status);
Aws::OStream &operator<<(Aws::OStream &s, TransferStatus status);

// Interface for interacting with asynchronous UPLOAD/DOWNLOAD transfers.
class TransferHandle final {
 public:
    // Upload to the destination specified in @md.
    TransferHandle(const WriteMetadata &md,
                   const std::shared_ptr<const Aws::Client::AsyncCallerContext> &context);

    // Download from @srcUri.
    TransferHandle(const Aws::String &srcUri,
                   const std::shared_ptr<const Aws::Client::AsyncCallerContext> &context);

    /*
     * Thread-safe Getter methods (values set only at initialization time).
     */

    // Bucket/key part of blob location in Amazon S3.
    Aws::String GetBucket() const;
    Aws::String GetKey() const;

    // S3 storage tags (key/value pairs).
    const Aws::String &GetTagging() const { return tagging_; }

    // Get the user-provided context that was passed at construction time.
    std::shared_ptr<const Aws::Client::AsyncCallerContext> GetContext() const { return m_context; }

    /*
     * Get/set methods called after initialization that are based on atomic variables.
     * These methods synchronize-with each other via the affected atomic variable.
     */
    // Get/Set the CANCEL flag, which cancels any further processing.
    bool ShouldContinue() const { return !m_cancel.load(); }
    void Cancel() { m_cancel.store(true); }

    // Get/update the cumulative byte count transferred since start of the transfer.
    uint64_t GetBytesTransferred() const { return m_bytesTransferred.load(); }
    void UpdateBytesTransferred(uint64_t amount) { m_bytesTransferred.fetch_add(amount); }

    /*
     * Getters/setters called after initialization that synchronize via @m_getterSetterLock.
     */

    // Return the blob metadata information (populated for both download and upload).
    // Pre-condition: function may only be called if BytesTotalSizeHasBeenSet() returns true.
    const ReadMetadata &GetReadMetadata() const {
        std::lock_guard<std::mutex> guard{m_getterSetterLock};
        assert(total_size_has_been_set_);
        return rmd_;
    }

    // Set the total size of the object being transferred. May be called at most once.
    void SetBytesTotalSize(uint64_t size) {
        std::lock_guard<std::mutex> guard{m_getterSetterLock};
        assert(!total_size_has_been_set_);
        total_size_has_been_set_ = true;
        rmd_.size = size;
    }
    // Check whether SetBytesTotalSize has been called (see TransferManager::GetObject for details).
    bool BytesTotalSizeHasBeenSet() const { return total_size_has_been_set_; }

    // Set the LastModified time of the blob.
    void SetLastModified(const Aws::Utils::DateTime &lastDateTime) {
        std::lock_guard<std::mutex> guard{m_getterSetterLock};
        rmd_.last_modified = lastDateTime.UnderlyingTimestamp();
    }

    // Set the ETag of the blob.
    void SetETag(const Aws::String &etag) {
        std::lock_guard<std::mutex> guard{m_getterSetterLock};
        rmd_.etag = etag;
    }

    // Set the Content-Type of the blob.
    void SetContentType(const Aws::String &contentType) {
        std::lock_guard<std::mutex> guard{m_getterSetterLock};
        rmd_.content_type = contentType;
    }

    // Set the Content-Encoding of the blob (e.g. "gzip" when compressing content).
    void SetContentEncoding(const Aws::String &encoding) {
        std::lock_guard<std::mutex> guard{m_getterSetterLock};
        rmd_.content_encoding = encoding;
    }

    // Set the metadata key/value pairs associated with the blob.
    void SetMetadata(const Aws::Map<Aws::String, Aws::String> &metadata) {
        std::lock_guard<std::mutex> guard{m_getterSetterLock};
        rmd_.metadata = metadata;
    }

    // Get/set the last error that was encountered (if any).
    // Check GetStatus() first, as the default value is S3Crt::S3CrtErrors::UNKNOWN.
    const Aws::Client::AWSError<Aws::S3Crt::S3CrtErrors> GetLastError() const {
        std::lock_guard<std::mutex> guard{m_getterSetterLock};
        return m_lastError;
    }
    void SetError(const Aws::Client::AWSError<Aws::S3Crt::S3CrtErrors> &error) {
        std::lock_guard<std::mutex> guard{m_getterSetterLock};
        m_lastError = error;
    }

    /*
     * Modifiers that only synchronize via @m_statusLock.
     */
    // Get current TransferStatus of this handle.
    // Synchronizes-with UpdateStatus.
    TransferStatus GetStatus() const;

    // Block on (internal) condition variable until handle reaches a 'finished' status.
    // Synchronizes-with UpdateStatus.
    void WaitUntilFinished() const;

    // Conditionally transition into @status.
    void UpdateStatus(TransferStatus status);

    // Return true if @value equals one of the terminal states.
    static bool IsFinishedStatus(TransferStatus value) {
        return value == TransferStatus::COMPLETED || value == TransferStatus::FAILED ||
               value == TransferStatus::CANCELED;
    }

 private:
    std::atomic<uint64_t> m_bytesTransferred{0};
    std::atomic<bool> m_cancel{false};
    const std::shared_ptr<const Aws::Client::AsyncCallerContext> m_context{nullptr};
    // S3 storage tags (upload only).
    const Aws::String tagging_;

    // Variables that are protected by @m_getterSetterLock:
    mutable std::mutex m_getterSetterLock;
    // Blob metadata (uri, size, ...) - used for both upload and download blobs.
    ReadMetadata rmd_{};
    // Flag that indicates whether @rmd_.size has been initialized.
    std::atomic<bool> total_size_has_been_set_{false};
    Aws::Client::AWSError<S3Crt::S3CrtErrors> m_lastError{S3Crt::S3CrtErrors::UNKNOWN, true};

    // Variables that are protected by @m_statusLock:
    mutable std::mutex m_statusLock;
    mutable std::promise<void> m_finishedSignal;
    TransferStatus m_status = TransferStatus::NOT_STARTED;
};

}  // namespace TransferCrt
}  // namespace Aws
