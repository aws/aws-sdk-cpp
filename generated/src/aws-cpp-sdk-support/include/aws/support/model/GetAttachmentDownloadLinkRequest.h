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
class GetAttachmentDownloadLinkRequest : public SupportRequest {
 public:
  AWS_SUPPORT_API GetAttachmentDownloadLinkRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAttachmentDownloadLink"; }

  AWS_SUPPORT_API Aws::String SerializePayload() const override;

  AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the attachment for which to retrieve a download
   * link. Attachment IDs are returned in the <code>AttachmentDetails</code> objects
   * in the <code>attachments</code> field of a <a>Communication</a> returned by
   * <a>DescribeCommunications</a> or <a>DescribeCases</a>.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  GetAttachmentDownloadLinkRequest& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to validate the request without actually returning a
   * download link. When set to <code>true</code>, the request is validated but no
   * URL is returned, and the operation returns a
   * <code>DryRunOperationException</code>. When omitted or set to
   * <code>false</code>, the request runs normally.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline GetAttachmentDownloadLinkRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_attachmentId;

  bool m_dryRun{false};
  bool m_attachmentIdHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
