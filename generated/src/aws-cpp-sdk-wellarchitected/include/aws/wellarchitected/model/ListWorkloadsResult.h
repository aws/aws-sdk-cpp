/**
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
    AWS_WELLARCHITECTED_API ListWorkloadsResult();
    AWS_WELLARCHITECTED_API ListWorkloadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListWorkloadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<WorkloadSummary>& GetWorkloadSummaries() const{ return m_workloadSummaries; }

    
    inline void SetWorkloadSummaries(const Aws::Vector<WorkloadSummary>& value) { m_workloadSummaries = value; }

    
    inline void SetWorkloadSummaries(Aws::Vector<WorkloadSummary>&& value) { m_workloadSummaries = std::move(value); }

    
    inline ListWorkloadsResult& WithWorkloadSummaries(const Aws::Vector<WorkloadSummary>& value) { SetWorkloadSummaries(value); return *this;}

    
    inline ListWorkloadsResult& WithWorkloadSummaries(Aws::Vector<WorkloadSummary>&& value) { SetWorkloadSummaries(std::move(value)); return *this;}

    
    inline ListWorkloadsResult& AddWorkloadSummaries(const WorkloadSummary& value) { m_workloadSummaries.push_back(value); return *this; }

    
    inline ListWorkloadsResult& AddWorkloadSummaries(WorkloadSummary&& value) { m_workloadSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListWorkloadsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListWorkloadsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListWorkloadsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WorkloadSummary> m_workloadSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
