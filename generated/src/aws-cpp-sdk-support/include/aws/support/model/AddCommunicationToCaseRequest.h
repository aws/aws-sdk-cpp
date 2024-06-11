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
    AWS_SUPPORT_API AddCommunicationToCaseRequest();

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
    inline const Aws::String& GetCaseId() const{ return m_caseId; }
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }
    inline AddCommunicationToCaseRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline AddCommunicationToCaseRequest& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline AddCommunicationToCaseRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The body of an email communication to add to the support case.</p>
     */
    inline const Aws::String& GetCommunicationBody() const{ return m_communicationBody; }
    inline bool CommunicationBodyHasBeenSet() const { return m_communicationBodyHasBeenSet; }
    inline void SetCommunicationBody(const Aws::String& value) { m_communicationBodyHasBeenSet = true; m_communicationBody = value; }
    inline void SetCommunicationBody(Aws::String&& value) { m_communicationBodyHasBeenSet = true; m_communicationBody = std::move(value); }
    inline void SetCommunicationBody(const char* value) { m_communicationBodyHasBeenSet = true; m_communicationBody.assign(value); }
    inline AddCommunicationToCaseRequest& WithCommunicationBody(const Aws::String& value) { SetCommunicationBody(value); return *this;}
    inline AddCommunicationToCaseRequest& WithCommunicationBody(Aws::String&& value) { SetCommunicationBody(std::move(value)); return *this;}
    inline AddCommunicationToCaseRequest& WithCommunicationBody(const char* value) { SetCommunicationBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email addresses in the CC line of an email to be added to the support
     * case.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcEmailAddresses() const{ return m_ccEmailAddresses; }
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }
    inline void SetCcEmailAddresses(const Aws::Vector<Aws::String>& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = value; }
    inline void SetCcEmailAddresses(Aws::Vector<Aws::String>&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::move(value); }
    inline AddCommunicationToCaseRequest& WithCcEmailAddresses(const Aws::Vector<Aws::String>& value) { SetCcEmailAddresses(value); return *this;}
    inline AddCommunicationToCaseRequest& WithCcEmailAddresses(Aws::Vector<Aws::String>&& value) { SetCcEmailAddresses(std::move(value)); return *this;}
    inline AddCommunicationToCaseRequest& AddCcEmailAddresses(const Aws::String& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }
    inline AddCommunicationToCaseRequest& AddCcEmailAddresses(Aws::String&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(std::move(value)); return *this; }
    inline AddCommunicationToCaseRequest& AddCcEmailAddresses(const char* value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of a set of one or more attachments for the communication to add to
     * the case. Create the set by calling <a>AddAttachmentsToSet</a> </p>
     */
    inline const Aws::String& GetAttachmentSetId() const{ return m_attachmentSetId; }
    inline bool AttachmentSetIdHasBeenSet() const { return m_attachmentSetIdHasBeenSet; }
    inline void SetAttachmentSetId(const Aws::String& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = value; }
    inline void SetAttachmentSetId(Aws::String&& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = std::move(value); }
    inline void SetAttachmentSetId(const char* value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId.assign(value); }
    inline AddCommunicationToCaseRequest& WithAttachmentSetId(const Aws::String& value) { SetAttachmentSetId(value); return *this;}
    inline AddCommunicationToCaseRequest& WithAttachmentSetId(Aws::String&& value) { SetAttachmentSetId(std::move(value)); return *this;}
    inline AddCommunicationToCaseRequest& WithAttachmentSetId(const char* value) { SetAttachmentSetId(value); return *this;}
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
