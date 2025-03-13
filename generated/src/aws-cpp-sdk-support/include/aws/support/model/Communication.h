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
    AWS_SUPPORT_API Communication() = default;
    AWS_SUPPORT_API Communication(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Communication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    Communication& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the communication between the customer and Amazon Web Services
     * Support.</p>
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    Communication& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity of the account that submitted, or responded to, the support
     * case. Customer entries include the IAM role as well as the email address (for
     * example, "AdminRole (Role) &lt;janedoe@example.com&gt;). Entries from the Amazon
     * Web Services Support team display "Amazon Web Services," and don't show an email
     * address. </p>
     */
    inline const Aws::String& GetSubmittedBy() const { return m_submittedBy; }
    inline bool SubmittedByHasBeenSet() const { return m_submittedByHasBeenSet; }
    template<typename SubmittedByT = Aws::String>
    void SetSubmittedBy(SubmittedByT&& value) { m_submittedByHasBeenSet = true; m_submittedBy = std::forward<SubmittedByT>(value); }
    template<typename SubmittedByT = Aws::String>
    Communication& WithSubmittedBy(SubmittedByT&& value) { SetSubmittedBy(std::forward<SubmittedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the communication was created.</p>
     */
    inline const Aws::String& GetTimeCreated() const { return m_timeCreated; }
    inline bool TimeCreatedHasBeenSet() const { return m_timeCreatedHasBeenSet; }
    template<typename TimeCreatedT = Aws::String>
    void SetTimeCreated(TimeCreatedT&& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = std::forward<TimeCreatedT>(value); }
    template<typename TimeCreatedT = Aws::String>
    Communication& WithTimeCreated(TimeCreatedT&& value) { SetTimeCreated(std::forward<TimeCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the attachments to the case communication.</p>
     */
    inline const Aws::Vector<AttachmentDetails>& GetAttachmentSet() const { return m_attachmentSet; }
    inline bool AttachmentSetHasBeenSet() const { return m_attachmentSetHasBeenSet; }
    template<typename AttachmentSetT = Aws::Vector<AttachmentDetails>>
    void SetAttachmentSet(AttachmentSetT&& value) { m_attachmentSetHasBeenSet = true; m_attachmentSet = std::forward<AttachmentSetT>(value); }
    template<typename AttachmentSetT = Aws::Vector<AttachmentDetails>>
    Communication& WithAttachmentSet(AttachmentSetT&& value) { SetAttachmentSet(std::forward<AttachmentSetT>(value)); return *this;}
    template<typename AttachmentSetT = AttachmentDetails>
    Communication& AddAttachmentSet(AttachmentSetT&& value) { m_attachmentSetHasBeenSet = true; m_attachmentSet.emplace_back(std::forward<AttachmentSetT>(value)); return *this; }
    ///@}
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
