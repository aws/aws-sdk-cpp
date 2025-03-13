/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AssociationExecutionTarget.h>
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
namespace SSM
{
namespace Model
{
  class DescribeAssociationExecutionTargetsResult
  {
  public:
    AWS_SSM_API DescribeAssociationExecutionTargetsResult() = default;
    AWS_SSM_API DescribeAssociationExecutionTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeAssociationExecutionTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the execution.</p>
     */
    inline const Aws::Vector<AssociationExecutionTarget>& GetAssociationExecutionTargets() const { return m_associationExecutionTargets; }
    template<typename AssociationExecutionTargetsT = Aws::Vector<AssociationExecutionTarget>>
    void SetAssociationExecutionTargets(AssociationExecutionTargetsT&& value) { m_associationExecutionTargetsHasBeenSet = true; m_associationExecutionTargets = std::forward<AssociationExecutionTargetsT>(value); }
    template<typename AssociationExecutionTargetsT = Aws::Vector<AssociationExecutionTarget>>
    DescribeAssociationExecutionTargetsResult& WithAssociationExecutionTargets(AssociationExecutionTargetsT&& value) { SetAssociationExecutionTargets(std::forward<AssociationExecutionTargetsT>(value)); return *this;}
    template<typename AssociationExecutionTargetsT = AssociationExecutionTarget>
    DescribeAssociationExecutionTargetsResult& AddAssociationExecutionTargets(AssociationExecutionTargetsT&& value) { m_associationExecutionTargetsHasBeenSet = true; m_associationExecutionTargets.emplace_back(std::forward<AssociationExecutionTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAssociationExecutionTargetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssociationExecutionTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociationExecutionTarget> m_associationExecutionTargets;
    bool m_associationExecutionTargetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
