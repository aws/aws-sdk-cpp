/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/EnvironmentSummary.h>
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
  class ListEnvironmentsResult
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentsResult() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBREFACTORSPACES_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of <code>EnvironmentSummary</code> objects. </p>
     */
    inline const Aws::Vector<EnvironmentSummary>& GetEnvironmentSummaryList() const { return m_environmentSummaryList; }
    template<typename EnvironmentSummaryListT = Aws::Vector<EnvironmentSummary>>
    void SetEnvironmentSummaryList(EnvironmentSummaryListT&& value) { m_environmentSummaryListHasBeenSet = true; m_environmentSummaryList = std::forward<EnvironmentSummaryListT>(value); }
    template<typename EnvironmentSummaryListT = Aws::Vector<EnvironmentSummary>>
    ListEnvironmentsResult& WithEnvironmentSummaryList(EnvironmentSummaryListT&& value) { SetEnvironmentSummaryList(std::forward<EnvironmentSummaryListT>(value)); return *this;}
    template<typename EnvironmentSummaryListT = EnvironmentSummary>
    ListEnvironmentsResult& AddEnvironmentSummaryList(EnvironmentSummaryListT&& value) { m_environmentSummaryListHasBeenSet = true; m_environmentSummaryList.emplace_back(std::forward<EnvironmentSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEnvironmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEnvironmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EnvironmentSummary> m_environmentSummaryList;
    bool m_environmentSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
