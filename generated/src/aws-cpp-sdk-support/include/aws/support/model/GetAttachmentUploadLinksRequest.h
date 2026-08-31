/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/SupportRequest.h>
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/UploadRange.h>

#include <utility>

namespace Aws {
namespace Support {
namespace Model {

/**
 */
class GetAttachmentUploadLinksRequest : public SupportRequest {
 public:
  AWS_SUPPORT_API GetAttachmentUploadLinksRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAttachmentUploadLinks"; }

  AWS_SUPPORT_API Aws::String SerializePayload() const override;

  AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the file to upload, including the file extension. This value is
   * required when you initiate a new upload.</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  GetAttachmentUploadLinksRequest& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total size of the file in bytes. The service uses this value to calculate
   * the total number of parts and the size of each part. Required when you initiate
   * a new upload (when <code>uploadId</code> isn't provided). Valid range: 1 to
   * 157,286,400 bytes (approximately 150 MB).</p>
   */
  inline long long GetFileSizeBytes() const { return m_fileSizeBytes; }
  inline bool FileSizeBytesHasBeenSet() const { return m_fileSizeBytesHasBeenSet; }
  inline void SetFileSizeBytes(long long value) {
    m_fileSizeBytesHasBeenSet = true;
    m_fileSizeBytes = value;
  }
  inline GetAttachmentUploadLinksRequest& WithFileSizeBytes(long long value) {
    SetFileSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of an in-progress multipart upload, returned by a
   * previous call to <code>GetAttachmentUploadLinks</code>. Specify
   * <code>uploadId</code> to retrieve additional presigned upload URLs for an upload
   * that has already been initiated. Required when <code>fileSizeBytes</code> isn't
   * provided. Length: 1 to 2,048 characters.</p>
   */
  inline const Aws::String& GetUploadId() const { return m_uploadId; }
  inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
  template <typename UploadIdT = Aws::String>
  void SetUploadId(UploadIdT&& value) {
    m_uploadIdHasBeenSet = true;
    m_uploadId = std::forward<UploadIdT>(value);
  }
  template <typename UploadIdT = Aws::String>
  GetAttachmentUploadLinksRequest& WithUploadId(UploadIdT&& value) {
    SetUploadId(std::forward<UploadIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The range of part indexes for which to return presigned upload URLs. Use this
   * parameter to page through the upload URLs for a large file across multiple
   * calls. If you omit this parameter, the service determines the range to
   * return.</p>
   */
  inline const UploadRange& GetUploadRange() const { return m_uploadRange; }
  inline bool UploadRangeHasBeenSet() const { return m_uploadRangeHasBeenSet; }
  template <typename UploadRangeT = UploadRange>
  void SetUploadRange(UploadRangeT&& value) {
    m_uploadRangeHasBeenSet = true;
    m_uploadRange = std::forward<UploadRangeT>(value);
  }
  template <typename UploadRangeT = UploadRange>
  GetAttachmentUploadLinksRequest& WithUploadRange(UploadRangeT&& value) {
    SetUploadRange(std::forward<UploadRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to validate the request without actually generating upload
   * URLs. When set to <code>true</code>, the request is validated but no URLs are
   * returned, and the operation returns a <code>DryRunOperationException</code>.
   * When omitted or set to <code>false</code>, the request runs normally.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline GetAttachmentUploadLinksRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileName;

  long long m_fileSizeBytes{0};

  Aws::String m_uploadId;

  UploadRange m_uploadRange;

  bool m_dryRun{false};
  bool m_fileNameHasBeenSet = false;
  bool m_fileSizeBytesHasBeenSet = false;
  bool m_uploadIdHasBeenSet = false;
  bool m_uploadRangeHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
