/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/ActivateReadSetJobItem.h>
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
namespace Omics
{
namespace Model
{
  class ListReadSetActivationJobsResult
  {
  public:
    AWS_OMICS_API ListReadSetActivationJobsResult() = default;
    AWS_OMICS_API ListReadSetActivationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListReadSetActivationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReadSetActivationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<ActivateReadSetJobItem>& GetActivationJobs() const { return m_activationJobs; }
    template<typename ActivationJobsT = Aws::Vector<ActivateReadSetJobItem>>
    void SetActivationJobs(ActivationJobsT&& value) { m_activationJobsHasBeenSet = true; m_activationJobs = std::forward<ActivationJobsT>(value); }
    template<typename ActivationJobsT = Aws::Vector<ActivateReadSetJobItem>>
    ListReadSetActivationJobsResult& WithActivationJobs(ActivationJobsT&& value) { SetActivationJobs(std::forward<ActivationJobsT>(value)); return *this;}
    template<typename ActivationJobsT = ActivateReadSetJobItem>
    ListReadSetActivationJobsResult& AddActivationJobs(ActivationJobsT&& value) { m_activationJobsHasBeenSet = true; m_activationJobs.emplace_back(std::forward<ActivationJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReadSetActivationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ActivateReadSetJobItem> m_activationJobs;
    bool m_activationJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
