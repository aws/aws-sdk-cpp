/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/WorkloadShareSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  /**
   * <p>Input for List Workload Share</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloadSharesOutput">AWS
   * API Reference</a></p>
   */
  class ListWorkloadSharesResult
  {
  public:
    AWS_WELLARCHITECTED_API ListWorkloadSharesResult() = default;
    AWS_WELLARCHITECTED_API ListWorkloadSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListWorkloadSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    ListWorkloadSharesResult& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<WorkloadShareSummary>& GetWorkloadShareSummaries() const { return m_workloadShareSummaries; }
    template<typename WorkloadShareSummariesT = Aws::Vector<WorkloadShareSummary>>
    void SetWorkloadShareSummaries(WorkloadShareSummariesT&& value) { m_workloadShareSummariesHasBeenSet = true; m_workloadShareSummaries = std::forward<WorkloadShareSummariesT>(value); }
    template<typename WorkloadShareSummariesT = Aws::Vector<WorkloadShareSummary>>
    ListWorkloadSharesResult& WithWorkloadShareSummaries(WorkloadShareSummariesT&& value) { SetWorkloadShareSummaries(std::forward<WorkloadShareSummariesT>(value)); return *this;}
    template<typename WorkloadShareSummariesT = WorkloadShareSummary>
    ListWorkloadSharesResult& AddWorkloadShareSummaries(WorkloadShareSummariesT&& value) { m_workloadShareSummariesHasBeenSet = true; m_workloadShareSummaries.emplace_back(std::forward<WorkloadShareSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkloadSharesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkloadSharesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::Vector<WorkloadShareSummary> m_workloadShareSummaries;
    bool m_workloadShareSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
