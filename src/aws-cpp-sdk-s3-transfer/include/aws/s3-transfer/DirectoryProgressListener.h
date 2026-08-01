/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/DirectoryProgressSnapshot.h>
#include <aws/s3-transfer/ProgressListener.h>

namespace Aws {
namespace S3 {
namespace Transfer {

class UploadDirectoryRequest;
class DownloadDirectoryRequest;

/**
 * Callback interface for receiving event-driven updates throughout the lifecycle of a directory
 * upload. Subclass and override the events of interest; default implementations are empty so
 * unused callbacks can be ignored. Registered on the directory request.
 *
 * Reuses the single-file ProgressListener event shape, but the snapshot counts files rather than
 * bytes: OnBytesTransferred fires once per file that finishes (successfully or not), carrying the
 * running file tally. Per-file byte progress is available by registering single-file listeners
 * through the request's upload transformer.
 */
class AWS_S3_TRANSFER_API UploadDirectoryProgressListener
    : public ProgressListener<UploadDirectoryRequest, UploadDirectoryProgressSnapshot> {};

/**
 * Callback interface for receiving event-driven updates throughout the lifecycle of a directory
 * download. Mirror of UploadDirectoryProgressListener; see it for how the events map onto files.
 */
class AWS_S3_TRANSFER_API DownloadDirectoryProgressListener
    : public ProgressListener<DownloadDirectoryRequest, DownloadDirectoryProgressSnapshot> {};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
