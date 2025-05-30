﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/WorkloadSummary.h>
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
   * <p>Output of a list workloads call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListWorkloadsOutput">AWS
   * API Reference</a></p>
   */
  class ListWorkloadsResult
  {
  public:
    AWS_WELLARCHITECTED_API ListWorkloadsResult() = default;
    AWS_WELLARCHITECTED_API ListWorkloadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListWorkloadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<WorkloadSummary>& GetWorkloadSummaries() const { return m_workloadSummaries; }
    template<typename WorkloadSummariesT = Aws::Vector<WorkloadSummary>>
    void SetWorkloadSummaries(WorkloadSummariesT&& value) { m_workloadSummariesHasBeenSet = true; m_workloadSummaries = std::forward<WorkloadSummariesT>(value); }
    template<typename WorkloadSummariesT = Aws::Vector<WorkloadSummary>>
    ListWorkloadsResult& WithWorkloadSummaries(WorkloadSummariesT&& value) { SetWorkloadSummaries(std::forward<WorkloadSummariesT>(value)); return *this;}
    template<typename WorkloadSummariesT = WorkloadSummary>
    ListWorkloadsResult& AddWorkloadSummaries(WorkloadSummariesT&& value) { m_workloadSummariesHasBeenSet = true; m_workloadSummaries.emplace_back(std::forward<WorkloadSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkloadsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkloadsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorkloadSummary> m_workloadSummaries;
    bool m_workloadSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
