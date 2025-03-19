/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SubscribedWorkteam.h>
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
  class ListSubscribedWorkteamsResult
  {
  public:
    AWS_SAGEMAKER_API ListSubscribedWorkteamsResult() = default;
    AWS_SAGEMAKER_API ListSubscribedWorkteamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListSubscribedWorkteamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Workteam</code> objects, each describing a work team.</p>
     */
    inline const Aws::Vector<SubscribedWorkteam>& GetSubscribedWorkteams() const { return m_subscribedWorkteams; }
    template<typename SubscribedWorkteamsT = Aws::Vector<SubscribedWorkteam>>
    void SetSubscribedWorkteams(SubscribedWorkteamsT&& value) { m_subscribedWorkteamsHasBeenSet = true; m_subscribedWorkteams = std::forward<SubscribedWorkteamsT>(value); }
    template<typename SubscribedWorkteamsT = Aws::Vector<SubscribedWorkteam>>
    ListSubscribedWorkteamsResult& WithSubscribedWorkteams(SubscribedWorkteamsT&& value) { SetSubscribedWorkteams(std::forward<SubscribedWorkteamsT>(value)); return *this;}
    template<typename SubscribedWorkteamsT = SubscribedWorkteam>
    ListSubscribedWorkteamsResult& AddSubscribedWorkteams(SubscribedWorkteamsT&& value) { m_subscribedWorkteamsHasBeenSet = true; m_subscribedWorkteams.emplace_back(std::forward<SubscribedWorkteamsT>(value)); return *this; }
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
    ListSubscribedWorkteamsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSubscribedWorkteamsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SubscribedWorkteam> m_subscribedWorkteams;
    bool m_subscribedWorkteamsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
