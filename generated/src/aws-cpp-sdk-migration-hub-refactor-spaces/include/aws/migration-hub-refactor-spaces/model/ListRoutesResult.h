/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migration-hub-refactor-spaces/model/RouteSummary.h>
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
  class ListRoutesResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ListRoutesResult() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API ListRoutesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API ListRoutesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRoutesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <code>RouteSummary</code> objects. </p>
     */
    inline const Aws::Vector<RouteSummary>& GetRouteSummaryList() const { return m_routeSummaryList; }
    template<typename RouteSummaryListT = Aws::Vector<RouteSummary>>
    void SetRouteSummaryList(RouteSummaryListT&& value) { m_routeSummaryListHasBeenSet = true; m_routeSummaryList = std::forward<RouteSummaryListT>(value); }
    template<typename RouteSummaryListT = Aws::Vector<RouteSummary>>
    ListRoutesResult& WithRouteSummaryList(RouteSummaryListT&& value) { SetRouteSummaryList(std::forward<RouteSummaryListT>(value)); return *this;}
    template<typename RouteSummaryListT = RouteSummary>
    ListRoutesResult& AddRouteSummaryList(RouteSummaryListT&& value) { m_routeSummaryListHasBeenSet = true; m_routeSummaryList.emplace_back(std::forward<RouteSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRoutesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RouteSummary> m_routeSummaryList;
    bool m_routeSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
