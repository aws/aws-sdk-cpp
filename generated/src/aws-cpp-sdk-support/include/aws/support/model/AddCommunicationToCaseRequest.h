/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class AddCommunicationToCaseRequest : public SupportRequest
  {
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
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline const Aws::String& GetCaseId() const { return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    template<typename CaseIdT = Aws::String>
    void SetCaseId(CaseIdT&& value) { m_caseIdHasBeenSet = true; m_caseId = std::forward<CaseIdT>(value); }
    template<typename CaseIdT = Aws::String>
    AddCommunicationToCaseRequest& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of an email communication to add to the support case.</p>
     */
    inline const Aws::String& GetCommunicationBody() const { return m_communicationBody; }
    inline bool CommunicationBodyHasBeenSet() const { return m_communicationBodyHasBeenSet; }
    template<typename CommunicationBodyT = Aws::String>
    void SetCommunicationBody(CommunicationBodyT&& value) { m_communicationBodyHasBeenSet = true; m_communicationBody = std::forward<CommunicationBodyT>(value); }
    template<typename CommunicationBodyT = Aws::String>
    AddCommunicationToCaseRequest& WithCommunicationBody(CommunicationBodyT&& value) { SetCommunicationBody(std::forward<CommunicationBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcEmailAddresses() const { return m_ccEmailAddresses; }
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }
    template<typename CcEmailAddressesT = Aws::Vector<Aws::String>>
    void SetCcEmailAddresses(CcEmailAddressesT&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::forward<CcEmailAddressesT>(value); }
    template<typename CcEmailAddressesT = Aws::Vector<Aws::String>>
    AddCommunicationToCaseRequest& WithCcEmailAddresses(CcEmailAddressesT&& value) { SetCcEmailAddresses(std::forward<CcEmailAddressesT>(value)); return *this;}
    template<typename CcEmailAddressesT = Aws::String>
    AddCommunicationToCaseRequest& AddCcEmailAddresses(CcEmailAddressesT&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.emplace_back(std::forward<CcEmailAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of a set of one or more attachments for the communication to add to
     * the case. Create the set by calling <a>AddAttachmentsToSet</a> </p>
     */
    inline const Aws::String& GetAttachmentSetId() const { return m_attachmentSetId; }
    inline bool AttachmentSetIdHasBeenSet() const { return m_attachmentSetIdHasBeenSet; }
    template<typename AttachmentSetIdT = Aws::String>
    void SetAttachmentSetId(AttachmentSetIdT&& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = std::forward<AttachmentSetIdT>(value); }
    template<typename AttachmentSetIdT = Aws::String>
    AddCommunicationToCaseRequest& WithAttachmentSetId(AttachmentSetIdT&& value) { SetAttachmentSetId(std::forward<AttachmentSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_communicationBody;
    bool m_communicationBodyHasBeenSet = false;

    Aws::Vector<Aws::String> m_ccEmailAddresses;
    bool m_ccEmailAddressesHasBeenSet = false;

    Aws::String m_attachmentSetId;
    bool m_attachmentSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
