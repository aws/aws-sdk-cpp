/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/SupportRequest.h>
#include <aws/support/Support_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Support {
namespace Model {

/**
 */
class AddCommunicationToCaseRequest : public SupportRequest {
 public:
  AWS_SUPPORT_API AddCommunicationToCaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AddCommunicationToCase"; }

  AWS_SUPPORT_API Aws::String SerializePayload() const override;

  AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The support case ID requested or returned in the call. The case ID is an
   * alphanumeric string formatted as shown in this example:
   * case-<i>12345678910-exen-2025-c4c1d2bf33c5cf47</i> </p>
   */
  inline const Aws::String& GetCaseId() const { return m_caseId; }
  inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
  template <typename CaseIdT = Aws::String>
  void SetCaseId(CaseIdT&& value) {
    m_caseIdHasBeenSet = true;
    m_caseId = std::forward<CaseIdT>(value);
  }
  template <typename CaseIdT = Aws::String>
  AddCommunicationToCaseRequest& WithCaseId(CaseIdT&& value) {
    SetCaseId(std::forward<CaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The body of an email communication to add to the support case.</p>
   */
  inline const Aws::String& GetCommunicationBody() const { return m_communicationBody; }
  inline bool CommunicationBodyHasBeenSet() const { return m_communicationBodyHasBeenSet; }
  template <typename CommunicationBodyT = Aws::String>
  void SetCommunicationBody(CommunicationBodyT&& value) {
    m_communicationBodyHasBeenSet = true;
    m_communicationBody = std::forward<CommunicationBodyT>(value);
  }
  template <typename CommunicationBodyT = Aws::String>
  AddCommunicationToCaseRequest& WithCommunicationBody(CommunicationBodyT&& value) {
    SetCommunicationBody(std::forward<CommunicationBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email addresses in the CC line of an email to be added to the support
   * case.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCcEmailAddresses() const { return m_ccEmailAddresses; }
  inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }
  template <typename CcEmailAddressesT = Aws::Vector<Aws::String>>
  void SetCcEmailAddresses(CcEmailAddressesT&& value) {
    m_ccEmailAddressesHasBeenSet = true;
    m_ccEmailAddresses = std::forward<CcEmailAddressesT>(value);
  }
  template <typename CcEmailAddressesT = Aws::Vector<Aws::String>>
  AddCommunicationToCaseRequest& WithCcEmailAddresses(CcEmailAddressesT&& value) {
    SetCcEmailAddresses(std::forward<CcEmailAddressesT>(value));
    return *this;
  }
  template <typename CcEmailAddressesT = Aws::String>
  AddCommunicationToCaseRequest& AddCcEmailAddresses(CcEmailAddressesT&& value) {
    m_ccEmailAddressesHasBeenSet = true;
    m_ccEmailAddresses.emplace_back(std::forward<CcEmailAddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of a set of one or more attachments for the communication to add to
   * the case. Create the set by calling <a>AddAttachmentsToSet</a>. Each attachment
   * in the set must be 5 MB or smaller. To attach files larger than 5 MB, use
   * <code>uploadIds</code>.</p>
   */
  inline const Aws::String& GetAttachmentSetId() const { return m_attachmentSetId; }
  inline bool AttachmentSetIdHasBeenSet() const { return m_attachmentSetIdHasBeenSet; }
  template <typename AttachmentSetIdT = Aws::String>
  void SetAttachmentSetId(AttachmentSetIdT&& value) {
    m_attachmentSetIdHasBeenSet = true;
    m_attachmentSetId = std::forward<AttachmentSetIdT>(value);
  }
  template <typename AttachmentSetIdT = Aws::String>
  AddCommunicationToCaseRequest& WithAttachmentSetId(AttachmentSetIdT&& value) {
    SetAttachmentSetId(std::forward<AttachmentSetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of upload IDs that identify attachments to add to the case. Each
   * <code>uploadId</code> is returned by the <a>GetAttachmentUploadLinks</a>
   * operation. The upload must reach the <code>attachment-ready</code> state by
   * calling <a>CompleteAttachmentUpload</a> before it can be passed here. Use
   * <code>uploadIds</code> to attach files of any supported size, including files
   * larger than 5 MB.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUploadIds() const { return m_uploadIds; }
  inline bool UploadIdsHasBeenSet() const { return m_uploadIdsHasBeenSet; }
  template <typename UploadIdsT = Aws::Vector<Aws::String>>
  void SetUploadIds(UploadIdsT&& value) {
    m_uploadIdsHasBeenSet = true;
    m_uploadIds = std::forward<UploadIdsT>(value);
  }
  template <typename UploadIdsT = Aws::Vector<Aws::String>>
  AddCommunicationToCaseRequest& WithUploadIds(UploadIdsT&& value) {
    SetUploadIds(std::forward<UploadIdsT>(value));
    return *this;
  }
  template <typename UploadIdsT = Aws::String>
  AddCommunicationToCaseRequest& AddUploadIds(UploadIdsT&& value) {
    m_uploadIdsHasBeenSet = true;
    m_uploadIds.emplace_back(std::forward<UploadIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to validate the request without actually adding the
   * communication to the case. When set to <code>true</code>, the request is
   * validated but the communication isn't added, and the operation returns a
   * <code>DryRunOperationException</code>. When omitted or set to
   * <code>false</code>, the request runs normally.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline AddCommunicationToCaseRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_caseId;

  Aws::String m_communicationBody;

  Aws::Vector<Aws::String> m_ccEmailAddresses;

  Aws::String m_attachmentSetId;

  Aws::Vector<Aws::String> m_uploadIds;

  bool m_dryRun{false};
  bool m_caseIdHasBeenSet = false;
  bool m_communicationBodyHasBeenSet = false;
  bool m_ccEmailAddressesHasBeenSet = false;
  bool m_attachmentSetIdHasBeenSet = false;
  bool m_uploadIdsHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace Support
}  // namespace Aws
