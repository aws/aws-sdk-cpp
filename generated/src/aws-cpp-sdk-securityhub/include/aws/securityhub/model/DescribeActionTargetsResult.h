/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ActionTarget.h>
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
  class DescribeActionTargetsResult
  {
  public:
    AWS_SECURITYHUB_API DescribeActionTargetsResult() = default;
    AWS_SECURITYHUB_API DescribeActionTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DescribeActionTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ActionTarget</code> objects. Each object includes the
     * <code>ActionTargetArn</code>, <code>Description</code>, and <code>Name</code> of
     * a custom action target available in Security Hub.</p>
     */
    inline const Aws::Vector<ActionTarget>& GetActionTargets() const { return m_actionTargets; }
    template<typename ActionTargetsT = Aws::Vector<ActionTarget>>
    void SetActionTargets(ActionTargetsT&& value) { m_actionTargetsHasBeenSet = true; m_actionTargets = std::forward<ActionTargetsT>(value); }
    template<typename ActionTargetsT = Aws::Vector<ActionTarget>>
    DescribeActionTargetsResult& WithActionTargets(ActionTargetsT&& value) { SetActionTargets(std::forward<ActionTargetsT>(value)); return *this;}
    template<typename ActionTargetsT = ActionTarget>
    DescribeActionTargetsResult& AddActionTargets(ActionTargetsT&& value) { m_actionTargetsHasBeenSet = true; m_actionTargets.emplace_back(std::forward<ActionTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeActionTargetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeActionTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActionTarget> m_actionTargets;
    bool m_actionTargetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
