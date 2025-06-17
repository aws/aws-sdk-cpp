/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/GroupByResult.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetFindingStatisticsV2Result
  {
  public:
    AWS_SECURITYHUB_API GetFindingStatisticsV2Result() = default;
    AWS_SECURITYHUB_API GetFindingStatisticsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetFindingStatisticsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Aggregated statistics about security findings based on specified grouping
     * criteria.</p>
     */
    inline const Aws::Vector<GroupByResult>& GetGroupByResults() const { return m_groupByResults; }
    template<typename GroupByResultsT = Aws::Vector<GroupByResult>>
    void SetGroupByResults(GroupByResultsT&& value) { m_groupByResultsHasBeenSet = true; m_groupByResults = std::forward<GroupByResultsT>(value); }
    template<typename GroupByResultsT = Aws::Vector<GroupByResult>>
    GetFindingStatisticsV2Result& WithGroupByResults(GroupByResultsT&& value) { SetGroupByResults(std::forward<GroupByResultsT>(value)); return *this;}
    template<typename GroupByResultsT = GroupByResult>
    GetFindingStatisticsV2Result& AddGroupByResults(GroupByResultsT&& value) { m_groupByResultsHasBeenSet = true; m_groupByResults.emplace_back(std::forward<GroupByResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingStatisticsV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GroupByResult> m_groupByResults;
    bool m_groupByResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
