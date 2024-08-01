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
    AWS_SUPPORT_API CaseDetails();
    AWS_SUPPORT_API CaseDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API CaseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline CaseDetails& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}
    inline CaseDetails& WithCaseId(Aws::String&& value) { SetCaseId(std::move(value)); return *this;}
    inline CaseDetails& WithCaseId(const char* value) { SetCaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID displayed for the case in the Amazon Web Services Support Center. This
     * is a numeric string.</p>
     */
    inline const Aws::String& GetDisplayId() const{ return m_displayId; }
    inline bool DisplayIdHasBeenSet() const { return m_displayIdHasBeenSet; }
    inline void SetDisplayId(const Aws::String& value) { m_displayIdHasBeenSet = true; m_displayId = value; }
    inline void SetDisplayId(Aws::String&& value) { m_displayIdHasBeenSet = true; m_displayId = std::move(value); }
    inline void SetDisplayId(const char* value) { m_displayIdHasBeenSet = true; m_displayId.assign(value); }
    inline CaseDetails& WithDisplayId(const Aws::String& value) { SetDisplayId(value); return *this;}
    inline CaseDetails& WithDisplayId(Aws::String&& value) { SetDisplayId(std::move(value)); return *this;}
    inline CaseDetails& WithDisplayId(const char* value) { SetDisplayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line for the case in the Amazon Web Services Support Center.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }
    inline CaseDetails& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline CaseDetails& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline CaseDetails& WithSubject(const char* value) { SetSubject(value); return *this;}
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
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline CaseDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline CaseDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline CaseDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the Amazon Web Services service. You can get a list of codes and
     * the corresponding service names by calling <a>DescribeServices</a>.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline CaseDetails& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline CaseDetails& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline CaseDetails& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of problem for the support case.</p>
     */
    inline const Aws::String& GetCategoryCode() const{ return m_categoryCode; }
    inline bool CategoryCodeHasBeenSet() const { return m_categoryCodeHasBeenSet; }
    inline void SetCategoryCode(const Aws::String& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = value; }
    inline void SetCategoryCode(Aws::String&& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = std::move(value); }
    inline void SetCategoryCode(const char* value) { m_categoryCodeHasBeenSet = true; m_categoryCode.assign(value); }
    inline CaseDetails& WithCategoryCode(const Aws::String& value) { SetCategoryCode(value); return *this;}
    inline CaseDetails& WithCategoryCode(Aws::String&& value) { SetCategoryCode(std::move(value)); return *this;}
    inline CaseDetails& WithCategoryCode(const char* value) { SetCategoryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the severity level returned by the call to
     * <a>DescribeSeverityLevels</a>.</p>
     */
    inline const Aws::String& GetSeverityCode() const{ return m_severityCode; }
    inline bool SeverityCodeHasBeenSet() const { return m_severityCodeHasBeenSet; }
    inline void SetSeverityCode(const Aws::String& value) { m_severityCodeHasBeenSet = true; m_severityCode = value; }
    inline void SetSeverityCode(Aws::String&& value) { m_severityCodeHasBeenSet = true; m_severityCode = std::move(value); }
    inline void SetSeverityCode(const char* value) { m_severityCodeHasBeenSet = true; m_severityCode.assign(value); }
    inline CaseDetails& WithSeverityCode(const Aws::String& value) { SetSeverityCode(value); return *this;}
    inline CaseDetails& WithSeverityCode(Aws::String&& value) { SetSeverityCode(std::move(value)); return *this;}
    inline CaseDetails& WithSeverityCode(const char* value) { SetSeverityCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the account that submitted the case.</p>
     */
    inline const Aws::String& GetSubmittedBy() const{ return m_submittedBy; }
    inline bool SubmittedByHasBeenSet() const { return m_submittedByHasBeenSet; }
    inline void SetSubmittedBy(const Aws::String& value) { m_submittedByHasBeenSet = true; m_submittedBy = value; }
    inline void SetSubmittedBy(Aws::String&& value) { m_submittedByHasBeenSet = true; m_submittedBy = std::move(value); }
    inline void SetSubmittedBy(const char* value) { m_submittedByHasBeenSet = true; m_submittedBy.assign(value); }
    inline CaseDetails& WithSubmittedBy(const Aws::String& value) { SetSubmittedBy(value); return *this;}
    inline CaseDetails& WithSubmittedBy(Aws::String&& value) { SetSubmittedBy(std::move(value)); return *this;}
    inline CaseDetails& WithSubmittedBy(const char* value) { SetSubmittedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the case was created in the Amazon Web Services Support
     * Center.</p>
     */
    inline const Aws::String& GetTimeCreated() const{ return m_timeCreated; }
    inline bool TimeCreatedHasBeenSet() const { return m_timeCreatedHasBeenSet; }
    inline void SetTimeCreated(const Aws::String& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = value; }
    inline void SetTimeCreated(Aws::String&& value) { m_timeCreatedHasBeenSet = true; m_timeCreated = std::move(value); }
    inline void SetTimeCreated(const char* value) { m_timeCreatedHasBeenSet = true; m_timeCreated.assign(value); }
    inline CaseDetails& WithTimeCreated(const Aws::String& value) { SetTimeCreated(value); return *this;}
    inline CaseDetails& WithTimeCreated(Aws::String&& value) { SetTimeCreated(std::move(value)); return *this;}
    inline CaseDetails& WithTimeCreated(const char* value) { SetTimeCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The five most recent communications between you and Amazon Web Services
     * Support Center, including the IDs of any attachments to the communications. Also
     * includes a <code>nextToken</code> that you can use to retrieve earlier
     * communications.</p>
     */
    inline const RecentCaseCommunications& GetRecentCommunications() const{ return m_recentCommunications; }
    inline bool RecentCommunicationsHasBeenSet() const { return m_recentCommunicationsHasBeenSet; }
    inline void SetRecentCommunications(const RecentCaseCommunications& value) { m_recentCommunicationsHasBeenSet = true; m_recentCommunications = value; }
    inline void SetRecentCommunications(RecentCaseCommunications&& value) { m_recentCommunicationsHasBeenSet = true; m_recentCommunications = std::move(value); }
    inline CaseDetails& WithRecentCommunications(const RecentCaseCommunications& value) { SetRecentCommunications(value); return *this;}
    inline CaseDetails& WithRecentCommunications(RecentCaseCommunications&& value) { SetRecentCommunications(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email addresses that receive copies of communication about the case.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcEmailAddresses() const{ return m_ccEmailAddresses; }
    inline bool CcEmailAddressesHasBeenSet() const { return m_ccEmailAddressesHasBeenSet; }
    inline void SetCcEmailAddresses(const Aws::Vector<Aws::String>& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = value; }
    inline void SetCcEmailAddresses(Aws::Vector<Aws::String>&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses = std::move(value); }
    inline CaseDetails& WithCcEmailAddresses(const Aws::Vector<Aws::String>& value) { SetCcEmailAddresses(value); return *this;}
    inline CaseDetails& WithCcEmailAddresses(Aws::Vector<Aws::String>&& value) { SetCcEmailAddresses(std::move(value)); return *this;}
    inline CaseDetails& AddCcEmailAddresses(const Aws::String& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }
    inline CaseDetails& AddCcEmailAddresses(Aws::String&& value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(std::move(value)); return *this; }
    inline CaseDetails& AddCcEmailAddresses(const char* value) { m_ccEmailAddressesHasBeenSet = true; m_ccEmailAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }
    inline CaseDetails& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}
    inline CaseDetails& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}
    inline CaseDetails& WithLanguage(const char* value) { SetLanguage(value); return *this;}
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
