/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/SupportRequest.h>
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/CompletedUpload.h>

#include <utility>

namespace Aws {
namespace Support {
namespace Model {

/**
 */
class CompleteAttachmentUploadRequest : public SupportRequest {
 public:
  AWS_SUPPORT_API CompleteAttachmentUploadRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CompleteAttachmentUpload"; }

  AWS_SUPPORT_API Aws::String SerializePayload() const override;

  AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The identifier associated with the upload to complete.</p>
   */
  inline const Aws::String& GetUploadId() const { return m_uploadId; }
  inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
  template <typename UploadIdT = Aws::String>
  void SetUploadId(UploadIdT&& value) {
    m_uploadIdHasBeenSet = true;
    m_uploadId = std::forward<UploadIdT>(value);
  }
  template <typename UploadIdT = Aws::String>
  CompleteAttachmentUploadRequest& WithUploadId(UploadIdT&& value) {
    SetUploadId(std::forward<UploadIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of parts being reported as completed in this call. Each entry must
   * contain the <code>partIndex</code> of an uploaded part and the <code>ETag</code>
   * returned by Amazon S3 when that part was uploaded.</p>
   */
  inline const Aws::Vector<CompletedUpload>& GetCompletedUploads() const { return m_completedUploads; }
  inline bool CompletedUploadsHasBeenSet() const { return m_completedUploadsHasBeenSet; }
  template <typename CompletedUploadsT = Aws::Vector<CompletedUpload>>
  void SetCompletedUploads(CompletedUploadsT&& value) {
    m_completedUploadsHasBeenSet = true;
    m_completedUploads = std::forward<CompletedUploadsT>(value);
  }
  template <typename CompletedUploadsT = Aws::Vector<CompletedUpload>>
  CompleteAttachmentUploadRequest& WithCompletedUploads(CompletedUploadsT&& value) {
    SetCompletedUploads(std::forward<CompletedUploadsT>(value));
    return *this;
  }
  template <typename CompletedUploadsT = CompletedUpload>
  CompleteAttachmentUploadRequest& AddCompletedUploads(CompletedUploadsT&& value) {
    m_completedUploadsHasBeenSet = true;
    m_completedUploads.emplace_back(std::forward<CompletedUploadsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to validate the request without actually completing the
   * upload. When set to <code>true</code>, the request is validated but the upload
   * isn't finalized, and the operation returns a
   * <code>DryRunOperationException</code>. When omitted or set to
   * <code>false</code>, the request runs normally.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CompleteAttachmentUploadRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_uploadId;

  Aws::Vector<CompletedUpload> m_completedUploads;

  bool m_dryRun{false};
  bool m_uploadIdHasBeenSet = false;
  bool m_completedUploadsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
