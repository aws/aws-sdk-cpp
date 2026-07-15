/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/ProgressListener.h>
#include <aws/s3-transfer/UploadProgressSnapshot.h>

namespace Aws {
namespace S3 {
namespace Transfer {

class UploadRequest;

/**
 * Callback interface for receiving event-driven updates throughout the lifecycle of an upload.
 * Subclass and override the events of interest; default implementations are empty so unused
 * callbacks can be ignored. Listeners may be registered on the request or on the manager.
 */
class AWS_S3_TRANSFER_API UploadProgressListener
    : public ProgressListener<UploadRequest, UploadProgressSnapshot> {};

}
}
}
