/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class DescribeCasesRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeCasesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCases"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of ID numbers of the support cases you want returned. The maximum
     * number of cases is 100.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCaseIdList() const { return m_caseIdList; }
    inline bool CaseIdListHasBeenSet() const { return m_caseIdListHasBeenSet; }
    template<typename CaseIdListT = Aws::Vector<Aws::String>>
    void SetCaseIdList(CaseIdListT&& value) { m_caseIdListHasBeenSet = true; m_caseIdList = std::forward<CaseIdListT>(value); }
    template<typename CaseIdListT = Aws::Vector<Aws::String>>
    DescribeCasesRequest& WithCaseIdList(CaseIdListT&& value) { SetCaseIdList(std::forward<CaseIdListT>(value)); return *this;}
    template<typename CaseIdListT = Aws::String>
    DescribeCasesRequest& AddCaseIdList(CaseIdListT&& value) { m_caseIdListHasBeenSet = true; m_caseIdList.emplace_back(std::forward<CaseIdListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID displayed for a case in the Amazon Web Services Support Center user
     * interface.</p>
     */
    inline const Aws::String& GetDisplayId() const { return m_displayId; }
    inline bool DisplayIdHasBeenSet() const { return m_displayIdHasBeenSet; }
    template<typename DisplayIdT = Aws::String>
    void SetDisplayId(DisplayIdT&& value) { m_displayIdHasBeenSet = true; m_displayId = std::forward<DisplayIdT>(value); }
    template<typename DisplayIdT = Aws::String>
    DescribeCasesRequest& WithDisplayId(DisplayIdT&& value) { SetDisplayId(std::forward<DisplayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline const Aws::String& GetAfterTime() const { return m_afterTime; }
    inline bool AfterTimeHasBeenSet() const { return m_afterTimeHasBeenSet; }
    template<typename AfterTimeT = Aws::String>
    void SetAfterTime(AfterTimeT&& value) { m_afterTimeHasBeenSet = true; m_afterTime = std::forward<AfterTimeT>(value); }
    template<typename AfterTimeT = Aws::String>
    DescribeCasesRequest& WithAfterTime(AfterTimeT&& value) { SetAfterTime(std::forward<AfterTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline const Aws::String& GetBeforeTime() const { return m_beforeTime; }
    inline bool BeforeTimeHasBeenSet() const { return m_beforeTimeHasBeenSet; }
    template<typename BeforeTimeT = Aws::String>
    void SetBeforeTime(BeforeTimeT&& value) { m_beforeTimeHasBeenSet = true; m_beforeTime = std::forward<BeforeTimeT>(value); }
    template<typename BeforeTimeT = Aws::String>
    DescribeCasesRequest& WithBeforeTime(BeforeTimeT&& value) { SetBeforeTime(std::forward<BeforeTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include resolved support cases in the
     * <code>DescribeCases</code> response. By default, resolved cases aren't
     * included.</p>
     */
    inline bool GetIncludeResolvedCases() const { return m_includeResolvedCases; }
    inline bool IncludeResolvedCasesHasBeenSet() const { return m_includeResolvedCasesHasBeenSet; }
    inline void SetIncludeResolvedCases(bool value) { m_includeResolvedCasesHasBeenSet = true; m_includeResolvedCases = value; }
    inline DescribeCasesRequest& WithIncludeResolvedCases(bool value) { SetIncludeResolvedCases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A resumption point for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCasesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return before paginating.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeCasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeCasesRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to include communications in the <code>DescribeCases</code>
     * response. By default, communications are included.</p>
     */
    inline bool GetIncludeCommunications() const { return m_includeCommunications; }
    inline bool IncludeCommunicationsHasBeenSet() const { return m_includeCommunicationsHasBeenSet; }
    inline void SetIncludeCommunications(bool value) { m_includeCommunicationsHasBeenSet = true; m_includeCommunications = value; }
    inline DescribeCasesRequest& WithIncludeCommunications(bool value) { SetIncludeCommunications(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_caseIdList;
    bool m_caseIdListHasBeenSet = false;

    Aws::String m_displayId;
    bool m_displayIdHasBeenSet = false;

    Aws::String m_afterTime;
    bool m_afterTimeHasBeenSet = false;

    Aws::String m_beforeTime;
    bool m_beforeTimeHasBeenSet = false;

    bool m_includeResolvedCases{false};
    bool m_includeResolvedCasesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    bool m_includeCommunications{false};
    bool m_includeCommunicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
