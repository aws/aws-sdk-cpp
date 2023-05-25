/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/AttachmentDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Support
{
namespace Model
{

  /**
   * <p>A communication associated with a support case. The communication consists of
   * the case ID, the message body, attachment information, the submitter of the
   * communication, and the date and time of the communication.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/Communication">AWS
   * API Reference</a></p>
   */
  class Communication
  {
  public:
    AWS_SUPPORT_API Communication();
    AWS_SUPPORT_API Communication(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Communication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline bool CaseIdHasBeenSet() const { return m_caseIdHasBeenSet; }

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = std::move(value); }

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline Communication& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline Communication& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}

    /**
     * <p>The support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline Communication& WithCaseId(const char* value) { SetCaseId(value); return *this;}


    /**
     * <p>The text of the communication between the customer and Amazon Web Services
     * Support.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The text of the communication between the customer and Amazon Web Services
     * Support.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The text of the communication between the customer and Amazon Web Services
     * Support.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The text of the communication between the customer and Amazon Web Services
     * Support.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The text of the communication between the customer and Amazon Web Services
     * Support.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The text of the communication between the customer and Amazon Web Services
     * Support.</p>
     */
    inline Communication& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The text of the communication between the customer and Amazon Web Services
     * Support.</p>
     */
    inline Communication& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The text of the communication between the customer and Amazon Web Services
     * Support.</p>
     */
    inline Communication& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The identity of the account that submitted, or responded to, the support
     * case. Customer entries include the role or IAM user as well as the email
     * address. For example, "AdminRole (Role) &lt;janedoe@example.com&gt;. Entries
     * from the Amazon Web Services Support team display "Amazon Web Services," and
     * don't show an email address. </p>
     */
    inline const Aws::String& GetSubmittedBy() const{ return m_submittedBy; }

    /**
     * <p>The identity of the account that submitted, or responded to, the support
     * case. Customer entries include the role or IAM user as well as the email
     * address. For example, "AdminRole (Role) &lt;janedoe@example.com&gt;. Entries
     * from the Amazon Web Services Support team display "Amazon Web Services," and
     * don't show an email address. </p>
     */
    inline bool SubmittedByHasBeenSet() const { return m_submittedByHasBeenSet; }

    /**
     * <p>The identity of the account that submitted, or responded to, the support
     * case. Customer entries include the role or IAM user as well as the email
     * address. For example, "AdminRole (Role) &lt;janedoe@example.com&gt;. Entries
     * from the Amazon Web Services Support team display "Amazon Web Services," and
     * don't show an email address. </p>
     */
    inline void SetSubmittedBy(const Aws::String& value) { m_submittedByHasBeenSet = true; m_submittedBy = value; }

    /**
     * <p>The identity of the account that submitted, or responded to, the support
     * case. Customer entries include the role or IAM user as well as the email
     * address. For example, "AdminRole (Role) &lt;janedoe@example.com&gt;. Entries
     * from the Amazon Web Services Support team display "Amazon Web Services," and
     * don't show an email address. </p>
     */
    inline void SetSubmittedBy(Aws::String&& value) { m_submittedByHasBeenSet = true; m_submittedBy = std::move(value); }

    /**
     * <p>The identity of the account that submitted, or responded to, the support
     * case. Customer entries include the role or IAM user as well as the email
     * address. For example, "AdminRole (Role) &lt;janedoe@example.com&gt;. Entries
     * from the Amazon Web Services Support team display "Amazon Web Services," and
     * don't show an email address. </p>
     */
    inline void SetSubmittedBy(const char* value) { m_submittedByHasBeenSet = true; m_submittedBy.assign(value); }

    /**
     * <p>The identity of the account that submitted, or responded to, the support
     * case. Customer entries include the role or IAM user as well as the email
     * address. For example, "AdminRole (Role) &lt;janedoe@example.com&gt;. Entries
     * from the Amazon Web Services Support team display "Amazon Web Services," and
     * don't show an email address. </p>
     */
    inline Communication& WithSubmittedBy(const Aws::String& value) { SetSubmittedBy(value); return *this;}

    /**
     * <p>The identity of the account that submitted, or responded to, the support
     * case. Customer entries include the role or IAM user as well as the email
     * address. For example, "AdminRole (Role) &lt;janedoe@example.com&gt;. Entries
     * from the Amazon Web Services Support team display "Amazon Web Services," and
     * don't show an email address. </p>
     */
    inline Communication& WithSubmittedBy(Aws::String&& value) { SetSubmittedBy(std::move(value)); return *this;}

    /**
     * <p>The identity of the account that submitted, or responded to, the support
     * case. Customer entries include the role or IAM user as well as the email
     * address. For example, "AdminRole (Role) &lt;janedoe@example.com&gt;. Entries
     * from the Amazon Web Services Support team display "Amazon Web Services," and
     * don't show an email address. </p>
     */
    inline Communication& WithSubmittedBy(const char* value) { SetSubmittedBy(value); return *this;}


    /**
     * <p>The time the communication was created.</p>
     */
    inline const Aws::String& GetTimeCreated() const{ return m_timeCreated; }

    /**
     * <p>The time the communication was created.</p>
     */
    inline bool TimeCreatedHasBeenSet() const { return m_timeCreatedHasBeenSet; }

    /**
     * <p>The time the communication was created.</p>
     */
    inline void SetTimeCreated(const Aws::String& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = value; }

    /**
     * <p>The time the communication was created.</p>
     */
    inline void SetTimeCreated(Aws::String&& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = std::move(value); }

    /**
     * <p>The time the communication was created.</p>
     */
    inline void SetTimeCreated(const char* value) { m_timeCreatedHasBeenSet = true; m_timeCreated.assign(value); }

    /**
     * <p>The time the communication was created.</p>
     */
    inline Communication& WithTimeCreated(const Aws::String& value) { SetTimeCreated(value); return *this;}

    /**
     * <p>The time the communication was created.</p>
     */
    inline Communication& WithTimeCreated(Aws::String&& value) { SetTimeCreated(std::move(value)); return *this;}

    /**
     * <p>The time the communication was created.</p>
     */
    inline Communication& WithTimeCreated(const char* value) { SetTimeCreated(value); return *this;}


    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline const Aws::Vector<AttachmentDetails>& GetAttachmentSet() const{ return m_attachmentSet; }

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline bool AttachmentSetHasBeenSet() const { return m_attachmentSetHasBeenSet; }

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline void SetAttachmentSet(const Aws::Vector<AttachmentDetails>& value) { m_attachmentSetHasBeenSet = true; m_attachmentSet = value; }

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline void SetAttachmentSet(Aws::Vector<AttachmentDetails>&& value) { m_attachmentSetHasBeenSet = true; m_attachmentSet = std::move(value); }

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline Communication& WithAttachmentSet(const Aws::Vector<AttachmentDetails>& value) { SetAttachmentSet(value); return *this;}

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline Communication& WithAttachmentSet(Aws::Vector<AttachmentDetails>&& value) { SetAttachmentSet(std::move(value)); return *this;}

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline Communication& AddAttachmentSet(const AttachmentDetails& value) { m_attachmentSetHasBeenSet = true; m_attachmentSet.push_back(value); return *this; }

    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline Communication& AddAttachmentSet(AttachmentDetails&& value) { m_attachmentSetHasBeenSet = true; m_attachmentSet.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_submittedBy;
    bool m_submittedByHasBeenSet = false;

    Aws::String m_timeCreated;
    bool m_timeCreatedHasBeenSet = false;

    Aws::Vector<AttachmentDetails> m_attachmentSet;
    bool m_attachmentSetHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
