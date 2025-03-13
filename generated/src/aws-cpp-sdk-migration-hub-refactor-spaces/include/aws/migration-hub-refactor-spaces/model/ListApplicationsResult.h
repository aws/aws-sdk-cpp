/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/ApplicationSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  class ListApplicationsResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ListApplicationsResult() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of <code>ApplicationSummary</code> objects. </p>
     */
    inline const Aws::Vector<ApplicationSummary>& GetApplicationSummaryList() const { return m_applicationSummaryList; }
    template<typename ApplicationSummaryListT = Aws::Vector<ApplicationSummary>>
    void SetApplicationSummaryList(ApplicationSummaryListT&& value) { m_applicationSummaryListHasBeenSet = true; m_applicationSummaryList = std::forward<ApplicationSummaryListT>(value); }
    template<typename ApplicationSummaryListT = Aws::Vector<ApplicationSummary>>
    ListApplicationsResult& WithApplicationSummaryList(ApplicationSummaryListT&& value) { SetApplicationSummaryList(std::forward<ApplicationSummaryListT>(value)); return *this;}
    template<typename ApplicationSummaryListT = ApplicationSummary>
    ListApplicationsResult& AddApplicationSummaryList(ApplicationSummaryListT&& value) { m_applicationSummaryListHasBeenSet = true; m_applicationSummaryList.emplace_back(std::forward<ApplicationSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApplicationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApplicationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApplicationSummary> m_applicationSummaryList;
    bool m_applicationSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
