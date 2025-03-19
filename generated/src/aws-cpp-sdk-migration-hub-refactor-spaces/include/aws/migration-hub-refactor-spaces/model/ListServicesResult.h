/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migration-hub-refactor-spaces/model/ServiceSummary.h>
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
  class ListServicesResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ListServicesResult() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API ListServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API ListServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of <code>ServiceSummary</code> objects. </p>
     */
    inline const Aws::Vector<ServiceSummary>& GetServiceSummaryList() const { return m_serviceSummaryList; }
    template<typename ServiceSummaryListT = Aws::Vector<ServiceSummary>>
    void SetServiceSummaryList(ServiceSummaryListT&& value) { m_serviceSummaryListHasBeenSet = true; m_serviceSummaryList = std::forward<ServiceSummaryListT>(value); }
    template<typename ServiceSummaryListT = Aws::Vector<ServiceSummary>>
    ListServicesResult& WithServiceSummaryList(ServiceSummaryListT&& value) { SetServiceSummaryList(std::forward<ServiceSummaryListT>(value)); return *this;}
    template<typename ServiceSummaryListT = ServiceSummary>
    ListServicesResult& AddServiceSummaryList(ServiceSummaryListT&& value) { m_serviceSummaryListHasBeenSet = true; m_serviceSummaryList.emplace_back(std::forward<ServiceSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ServiceSummary> m_serviceSummaryList;
    bool m_serviceSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
