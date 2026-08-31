/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/SupportRequest.h>
#include <aws/support/Support_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Support {
namespace Model {

/**
 */
class DescribeAttachmentUploadStatusRequest : public SupportRequest {
 public:
  AWS_SUPPORT_API DescribeAttachmentUploadStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeAttachmentUploadStatus"; }

  AWS_SUPPORT_API Aws::String SerializePayload() const override;

  AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier for the upload. The <code>uploadId</code> is returned
   * by <a>GetAttachmentUploadLinks</a> when you initiate the upload.</p>
   */
  inline const Aws::String& GetUploadId() const { return m_uploadId; }
  inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
  template <typename UploadIdT = Aws::String>
  void SetUploadId(UploadIdT&& value) {
    m_uploadIdHasBeenSet = true;
    m_uploadId = std::forward<UploadIdT>(value);
  }
  template <typename UploadIdT = Aws::String>
  DescribeAttachmentUploadStatusRequest& WithUploadId(UploadIdT&& value) {
    SetUploadId(std::forward<UploadIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to validate the request without actually returning upload
   * status. When set to <code>true</code>, the request is validated but no status is
   * returned, and the operation returns a <code>DryRunOperationException</code>.
   * When omitted or set to <code>false</code>, the request runs normally.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline DescribeAttachmentUploadStatusRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_uploadId;

  bool m_dryRun{false};
  bool m_uploadIdHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
