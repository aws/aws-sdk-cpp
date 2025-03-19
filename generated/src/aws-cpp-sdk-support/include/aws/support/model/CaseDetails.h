/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/RecentCaseCommunications.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A JSON-formatted object that contains the metadata for a support case. It is
   * contained in the response from a <a>DescribeCases</a> request.
   * <b>CaseDetails</b> contains the following fields:</p> <ul> <li> <p>
   * <b>caseId</b> - The support case ID requested or returned in the call. The case
   * ID is an alphanumeric string formatted as shown in this example:
   * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i>.</p> </li> <li> <p>
   * <b>categoryCode</b> - The category of problem for the support case. Corresponds
   * to the <code>CategoryCode</code> values returned by a call to
   * <a>DescribeServices</a>.</p> </li> <li> <p> <b>displayId</b> - The identifier
   * for the case on pages in the Amazon Web Services Support Center.</p> </li> <li>
   * <p> <b>language</b> - The language in which Amazon Web Services Support handles
   * the case. Amazon Web Services Support currently supports Chinese (“zh”), English
   * ("en"), Japanese ("ja") and Korean (“ko”). You must specify the ISO 639-1 code
   * for the <code>language</code> parameter if you want support in that
   * language.</p> </li> <li> <p> <b>nextToken</b> - A resumption point for
   * pagination.</p> </li> <li> <p> <b>recentCommunications</b> - One or more
   * <a>Communication</a> objects. Fields of these objects are
   * <code>attachments</code>, <code>body</code>, <code>caseId</code>,
   * <code>submittedBy</code>, and <code>timeCreated</code>.</p> </li> <li> <p>
   * <b>serviceCode</b> - The identifier for the Amazon Web Services service that
   * corresponds to the service code defined in the call to
   * <a>DescribeServices</a>.</p> </li> <li> <p> <b>severityCode</b> - The severity
   * code assigned to the case. Contains one of the values returned by the call to
   * <a>DescribeSeverityLevels</a>. The possible values are: <code>low</code>,
   * <code>normal</code>, <code>high</code>, <code>urgent</code>, and
   * <code>critical</code>.</p> </li> <li> <p> <b>status</b> - The status of the case
   * in the Amazon Web Services Support Center. Valid values:</p> <ul> <li> <p>
   * <code>all-open</code> </p> </li> <li> <p> <code>customer-action-completed</code>
   * </p> </li> <li> <p> <code>opened</code> </p> </li> <li> <p>
   * <code>pending-customer-action</code> </p> </li> <li> <p> <code>reopened</code>
   * </p> </li> <li> <p> <code>resolved</code> </p> </li> <li> <p>
   * <code>unassigned</code> </p> </li> <li> <p> <code>work-in-progress</code> </p>
   * </li> </ul> </li> <li> <p> <b>subject</b> - The subject line of the case.</p>
   * </li> <li> <p> <b>submittedBy</b> - The email address of the account that
   * submitted the case.</p> </li> <li> <p> <b>timeCreated</b> - The time the case
   * was created, in ISO-8601 format.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CaseDetails">AWS
   * API Reference</a></p>
   */
  class CaseDetails
  {
  public:
    AWS_SUPPORT_API CaseDetails() = default;
    AWS_SUPPORT_API CaseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API CaseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    CaseDetails& WithCaseId(CaseIdT&& value) { SetCaseId(std::forward<CaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID displayed for the case in the Amazon Web Services Support Center. This
     * is a numeric string.</p>
     */
    inline const Aws::String& GetDisplayId() const { return m_displayId; }
    inline bool DisplayIdHasBeenSet() const { return m_displayIdHasBeenSet; }
    template<typename DisplayIdT = Aws::String>
    void SetDisplayId(DisplayIdT&& value) { m_displayIdHasBeenSet = true; m_displayId = std::forward<DisplayIdT>(value); }
    template<typename DisplayIdT = Aws::String>
    CaseDetails& WithDisplayId(DisplayIdT&& value) { SetDisplayId(std::forward<DisplayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line for the case in the Amazon Web Services Support Center.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    CaseDetails& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the case.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>all-open</code> </p> </li> <li> <p> <code>customer-action-completed</code>
     * </p> </li> <li> <p> <code>opened</code> </p> </li> <li> <p>
     * <code>pending-customer-action</code> </p> </li> <li> <p> <code>reopened</code>
     * </p> </li> <li> <p> <code>resolved</code> </p> </li> <li> <p>
     * <code>unassigned</code> </p> </li> <li> <p> <code>work-in-progress</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    CaseDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the Amazon Web Services service. You can get a list of codes and
     * the corresponding service names by calling <a>DescribeServices</a>.</p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    CaseDetails& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of problem for the support case.</p>
     */
    inline const Aws::String& GetCategoryCode() const { return m_categoryCode; }
    inline bool CategoryCodeHasBeenSet() const { return m_categoryCodeHasBeenSet; }
    template<typename CategoryCodeT = Aws::String>
    void SetCategoryCode(CategoryCodeT&& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = std::forward<CategoryCodeT>(value); }
    template<typename CategoryCodeT = Aws::String>
    CaseDetails& WithCategoryCode(CategoryCodeT&& value) { SetCategoryCode(std::forward<CategoryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p>
     */
    inline const Aws::String& GetSeverityCode() const { return m_severityCode; }
    inline bool SeverityCodeHasBeenSet() const { return m_severityCodeHasBeenSet; }
    template<typename SeverityCodeT = Aws::String>
    void SetSeverityCode(SeverityCodeT&& value) { m_severityCodeHasBeenSet = true; m_severityCode = std::forward<SeverityCodeT>(value); }
    template<typename SeverityCodeT = Aws::String>
    CaseDetails& WithSeverityCode(SeverityCodeT&& value) { SetSeverityCode(std::forward<SeverityCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the account that submitted the case.</p>
     */
    inline const Aws::String& GetSubmittedBy() const { return m_submittedBy; }
    inline bool SubmittedByHasBeenSet() const { return m_submittedByHasBeenSet; }
    template<typename SubmittedByT = Aws::String>
    void SetSubmittedBy(SubmittedByT&& value) { m_submittedByHasBeenSet = true; m_submittedBy = std::forward<SubmittedByT>(value); }
    template<typename SubmittedByT = Aws::String>
    CaseDetails& WithSubmittedBy(SubmittedByT&& value) { SetSubmittedBy(std::forward<SubmittedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the case was created in the Amazon Web Services Support
     * Center.</p>
     */
    inline const Aws::String& GetTimeCreated() const { return m_timeCreated; }
    inline bool TimeCreatedHasBeenSet() const { return m_timeCreatedHasBeenSet; }
    template<typename TimeCreatedT = Aws::String>
    void SetTimeCreated(TimeCreatedT&& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = std::forward<TimeCreatedT>(value); }
    template<typename TimeCreatedT = Aws::String>
    CaseDetails& WithTimeCreated(TimeCreatedT&& value) { SetTimeCreated(std::forward<TimeCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The five most recent communications between you and Amazon Web Services
     * Support Center, including the IDs of any attachments to the communications. Also
     * includes a <code>nextToken</code> that you can use to retrieve earlier
     * communications.</p>
     */
    inline const RecentCaseCommunications& GetRecentCommunications() const { return m_recentCommunications; }
    inline bool RecentCommunicationsHasBeenSet() const { return m_recentCommunicationsHasBeenSet; }
    template<typename RecentCommunicationsT = RecentCaseCommunications>
    void SetRecentCommunications(RecentCommunicationsT&& value) { m_recentCommunicationsHasBeenSet = true; m_recentCommunications = std::forward<RecentCommunicationsT>(value); }
    template<typename RecentCommunicationsT = RecentCaseCommunications>
    CaseDetails& WithRecentCommunications(RecentCommunicationsT&& value) { SetRecentCommunications(std::forward<RecentCommunicationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcEmailAddresses() const { return m_ccEmailAddresses; }
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }
    template<typename CcEmailAddressesT = Aws::Vector<Aws::String>>
    void SetCcEmailAddresses(CcEmailAddressesT&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::forward<CcEmailAddressesT>(value); }
    template<typename CcEmailAddressesT = Aws::Vector<Aws::String>>
    CaseDetails& WithCcEmailAddresses(CcEmailAddressesT&& value) { SetCcEmailAddresses(std::forward<CcEmailAddressesT>(value)); return *this;}
    template<typename CcEmailAddressesT = Aws::String>
    CaseDetails& AddCcEmailAddresses(CcEmailAddressesT&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.emplace_back(std::forward<CcEmailAddressesT>(value)); return *this; }
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
    CaseDetails& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_caseId;
    bool m_caseIdHasBeenSet = false;

    Aws::String m_displayId;
    bool m_displayIdHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_categoryCode;
    bool m_categoryCodeHasBeenSet = false;

    Aws::String m_severityCode;
    bool m_severityCodeHasBeenSet = false;

    Aws::String m_submittedBy;
    bool m_submittedByHasBeenSet = false;

    Aws::String m_timeCreated;
    bool m_timeCreatedHasBeenSet = false;

    RecentCaseCommunications m_recentCommunications;
    bool m_recentCommunicationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ccEmailAddresses;
    bool m_ccEmailAddressesHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
