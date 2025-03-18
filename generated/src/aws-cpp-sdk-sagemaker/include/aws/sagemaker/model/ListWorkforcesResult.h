/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Workforce.h>
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
namespace SageMaker
{
namespace Model
{
  class ListWorkforcesResult
  {
  public:
    AWS_SAGEMAKER_API ListWorkforcesResult() = default;
    AWS_SAGEMAKER_API ListWorkforcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListWorkforcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list containing information about your workforce.</p>
     */
    inline const Aws::Vector<Workforce>& GetWorkforces() const { return m_workforces; }
    template<typename WorkforcesT = Aws::Vector<Workforce>>
    void SetWorkforces(WorkforcesT&& value) { m_workforcesHasBeenSet = true; m_workforces = std::forward<WorkforcesT>(value); }
    template<typename WorkforcesT = Aws::Vector<Workforce>>
    ListWorkforcesResult& WithWorkforces(WorkforcesT&& value) { SetWorkforces(std::forward<WorkforcesT>(value)); return *this;}
    template<typename WorkforcesT = Workforce>
    ListWorkforcesResult& AddWorkforces(WorkforcesT&& value) { m_workforcesHasBeenSet = true; m_workforces.emplace_back(std::forward<WorkforcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to resume pagination.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkforcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkforcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Workforce> m_workforces;
    bool m_workforcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
