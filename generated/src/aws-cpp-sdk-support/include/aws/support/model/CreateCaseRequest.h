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
  class CreateCaseRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API CreateCaseRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCase"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The title of the support case. The title appears in the <b>Subject</b> field
     * on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    CreateCaseRequest& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    CreateCaseRequest& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the urgency of the case. This value determines the
     * response time according to your service level agreement with Amazon Web Services
     * Support. You can use the <a>DescribeSeverityLevels</a> operation to get the
     * possible values for <code>severityCode</code>. </p> <p>For more information, see
     * <a>SeverityLevel</a> and <a
     * href="https://docs.aws.amazon.com/awssupport/latest/user/getting-started.html#choosing-severity">Choosing
     * a Severity</a> in the <i>Amazon Web Services Support User Guide</i>.</p> 
     * <p>The availability of severity levels depends on the support plan for the
     * Amazon Web Services account.</p> 
     */
    inline const Aws::String& GetSeverityCode() const { return m_severityCode; }
    inline bool SeverityCodeHasBeenSet() const { return m_severityCodeHasBeenSet; }
    template<typename SeverityCodeT = Aws::String>
    void SetSeverityCode(SeverityCodeT&& value) { m_severityCodeHasBeenSet = true; m_severityCode = std::forward<SeverityCodeT>(value); }
    template<typename SeverityCodeT = Aws::String>
    CreateCaseRequest& WithSeverityCode(SeverityCodeT&& value) { SetSeverityCode(std::forward<SeverityCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline const Aws::String& GetCategoryCode() const { return m_categoryCode; }
    inline bool CategoryCodeHasBeenSet() const { return m_categoryCodeHasBeenSet; }
    template<typename CategoryCodeT = Aws::String>
    void SetCategoryCode(CategoryCodeT&& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = std::forward<CategoryCodeT>(value); }
    template<typename CategoryCodeT = Aws::String>
    CreateCaseRequest& WithCategoryCode(CategoryCodeT&& value) { SetCategoryCode(std::forward<CategoryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The communication body text that describes the issue. This text appears in
     * the <b>Description</b> field on the Amazon Web Services Support Center <a
     * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
     * page.</p>
     */
    inline const Aws::String& GetCommunicationBody() const { return m_communicationBody; }
    inline bool CommunicationBodyHasBeenSet() const { return m_communicationBodyHasBeenSet; }
    template<typename CommunicationBodyT = Aws::String>
    void SetCommunicationBody(CommunicationBodyT&& value) { m_communicationBodyHasBeenSet = true; m_communicationBody = std::forward<CommunicationBodyT>(value); }
    template<typename CommunicationBodyT = Aws::String>
    CreateCaseRequest& WithCommunicationBody(CommunicationBodyT&& value) { SetCommunicationBody(std::forward<CommunicationBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of email addresses that Amazon Web Services Support copies on case
     * correspondence. Amazon Web Services Support identifies the account that creates
     * the case when you specify your Amazon Web Services credentials in an HTTP POST
     * method or use the <a href="http://aws.amazon.com/tools/">Amazon Web Services
     * SDKs</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCcEmailAddresses() const { return m_ccEmailAddresses; }
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }
    template<typename CcEmailAddressesT = Aws::Vector<Aws::String>>
    void SetCcEmailAddresses(CcEmailAddressesT&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::forward<CcEmailAddressesT>(value); }
    template<typename CcEmailAddressesT = Aws::Vector<Aws::String>>
    CreateCaseRequest& WithCcEmailAddresses(CcEmailAddressesT&& value) { SetCcEmailAddresses(std::forward<CcEmailAddressesT>(value)); return *this;}
    template<typename CcEmailAddressesT = Aws::String>
    CreateCaseRequest& AddCcEmailAddresses(CcEmailAddressesT&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.emplace_back(std::forward<CcEmailAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    CreateCaseRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline const Aws::String& GetIssueType() const { return m_issueType; }
    inline bool IssueTypeHasBeenSet() const { return m_issueTypeHasBeenSet; }
    template<typename IssueTypeT = Aws::String>
    void SetIssueType(IssueTypeT&& value) { m_issueTypeHasBeenSet = true; m_issueType = std::forward<IssueTypeT>(value); }
    template<typename IssueTypeT = Aws::String>
    CreateCaseRequest& WithIssueType(IssueTypeT&& value) { SetIssueType(std::forward<IssueTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a set of one or more attachments for the case. Create the set by
     * using the <a>AddAttachmentsToSet</a> operation.</p>
     */
    inline const Aws::String& GetAttachmentSetId() const { return m_attachmentSetId; }
    inline bool AttachmentSetIdHasBeenSet() const { return m_attachmentSetIdHasBeenSet; }
    template<typename AttachmentSetIdT = Aws::String>
    void SetAttachmentSetId(AttachmentSetIdT&& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = std::forward<AttachmentSetIdT>(value); }
    template<typename AttachmentSetIdT = Aws::String>
    CreateCaseRequest& WithAttachmentSetId(AttachmentSetIdT&& value) { SetAttachmentSetId(std::forward<AttachmentSetIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_severityCode;
    bool m_severityCodeHasBeenSet = false;

    Aws::String m_categoryCode;
    bool m_categoryCodeHasBeenSet = false;

    Aws::String m_communicationBody;
    bool m_communicationBodyHasBeenSet = false;

    Aws::Vector<Aws::String> m_ccEmailAddresses;
    bool m_ccEmailAddressesHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_issueType;
    bool m_issueTypeHasBeenSet = false;

    Aws::String m_attachmentSetId;
    bool m_attachmentSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
