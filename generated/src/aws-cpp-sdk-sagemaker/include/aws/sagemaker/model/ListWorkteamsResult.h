/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Workteam.h>
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
  class ListWorkteamsResult
  {
  public:
    AWS_SAGEMAKER_API ListWorkteamsResult() = default;
    AWS_SAGEMAKER_API ListWorkteamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListWorkteamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline const Aws::Vector<Workteam>& GetWorkteams() const { return m_workteams; }
    template<typename WorkteamsT = Aws::Vector<Workteam>>
    void SetWorkteams(WorkteamsT&& value) { m_workteamsHasBeenSet = true; m_workteams = std::forward<WorkteamsT>(value); }
    template<typename WorkteamsT = Aws::Vector<Workteam>>
    ListWorkteamsResult& WithWorkteams(WorkteamsT&& value) { SetWorkteams(std::forward<WorkteamsT>(value)); return *this;}
    template<typename WorkteamsT = Workteam>
    ListWorkteamsResult& AddWorkteams(WorkteamsT&& value) { m_workteamsHasBeenSet = true; m_workteams.emplace_back(std::forward<WorkteamsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of work teams, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkteamsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkteamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Workteam> m_workteams;
    bool m_workteamsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
