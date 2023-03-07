/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transfer-crt/TransferHandle.h>
#include <numeric>
#include <utility>
#include <assert.h>

namespace Aws {
namespace TransferCrt {

namespace {
using KeyValue = std::pair<Aws::String, Aws::String>;
// Encode @key_values as query-parameter string.
Aws::String encode_query_string(const Aws::Map<Aws::String, Aws::String> &key_values) {
    return std::accumulate(key_values.begin(),
                           key_values.end(),
                           Aws::String{},
                           [](const Aws::String &prev, const KeyValue &cur) {
                               return (prev.empty() ? "" : prev + "&") + cur.first +
                                      (cur.second.empty() ? "" : "=") + cur.second;
                           });
}
} // namespace

TransferHandle::TransferHandle(const WriteMetadata &md,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext> &ctx)
    : m_context{ctx}, tagging_{encode_query_string(md.tags)}, rmd_{} {
    rmd_.uri = md.uri;
    SetContentType(md.content_type);
    SetContentEncoding(md.content_encoding);
    SetMetadata(md.metadata);
}

TransferHandle::TransferHandle(const Aws::String &srcUri,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext> &ctx)
    : m_context{ctx}, rmd_{} {
    rmd_.uri = srcUri;
}

Aws::String TransferHandle::GetBucket() const {
    const size_t start = sizeof("s3://") - 1;
    const size_t end = rmd_.uri.find('/', start);
    return rmd_.uri.substr(start, end - start);
}

Aws::String TransferHandle::GetKey() const {
    const size_t bucket_start = sizeof("s3://") - 1;
    const size_t bucket_end = rmd_.uri.find('/', bucket_start);
    if (bucket_end == Aws::String::npos) {
        return "";
    }
    return rmd_.uri.substr(bucket_end + 1);
}

void TransferHandle::UpdateStatus(TransferStatus value) {
    // Release any pending per-chunk requests on failure.
    if (value == TransferStatus::FAILING || value == TransferStatus::FAILED) {
        Cancel();
    }

    std::unique_lock<std::mutex> lock(m_statusLock);
    assert(m_status != TransferStatus::FAILING || value == TransferStatus::FAILED);

    // The following ensures exactly one transition from "not finished" to "finished":
    if (!IsFinishedStatus(m_status) && value != m_status) {
        m_status = value;
        if (IsFinishedStatus(value)) {
            m_finishedSignal.set_value();
        }
    }
}

TransferStatus TransferHandle::GetStatus() const {
    std::lock_guard<std::mutex> lock(m_statusLock);
    return m_status;
}

void TransferHandle::WaitUntilFinished() const {
    if (!IsFinishedStatus(GetStatus())) {
        m_finishedSignal.get_future().wait();
    }
}

Aws::String StatusToString(TransferStatus status) {
    switch (status) {
        case TransferStatus::NOT_STARTED:
            return "NOT_STARTED";
        case TransferStatus::IN_PROGRESS:
            return "IN_PROGRESS";
        case TransferStatus::FAILING:
            return "FAILING";
        case TransferStatus::CANCELED:
            return "CANCELED";
        case TransferStatus::FAILED:
            return "FAILED";
        case TransferStatus::COMPLETED:
            return "COMPLETED";
    }
    return "UNKNOWN";
}

Aws::OStream &operator<<(Aws::OStream &s, TransferStatus status) {
    return s << StatusToString(status);
}

}  // namespace TransferCrt
}  // namespace Aws
