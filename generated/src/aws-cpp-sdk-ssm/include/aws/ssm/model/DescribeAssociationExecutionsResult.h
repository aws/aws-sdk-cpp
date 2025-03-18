/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AssociationExecution.h>
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
  class DescribeAssociationExecutionsResult
  {
  public:
    AWS_SSM_API DescribeAssociationExecutionsResult() = default;
    AWS_SSM_API DescribeAssociationExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeAssociationExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline const Aws::Vector<AssociationExecution>& GetAssociationExecutions() const { return m_associationExecutions; }
    template<typename AssociationExecutionsT = Aws::Vector<AssociationExecution>>
    void SetAssociationExecutions(AssociationExecutionsT&& value) { m_associationExecutionsHasBeenSet = true; m_associationExecutions = std::forward<AssociationExecutionsT>(value); }
    template<typename AssociationExecutionsT = Aws::Vector<AssociationExecution>>
    DescribeAssociationExecutionsResult& WithAssociationExecutions(AssociationExecutionsT&& value) { SetAssociationExecutions(std::forward<AssociationExecutionsT>(value)); return *this;}
    template<typename AssociationExecutionsT = AssociationExecution>
    DescribeAssociationExecutionsResult& AddAssociationExecutions(AssociationExecutionsT&& value) { m_associationExecutionsHasBeenSet = true; m_associationExecutions.emplace_back(std::forward<AssociationExecutionsT>(value)); return *this; }
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
    DescribeAssociationExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAssociationExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociationExecution> m_associationExecutions;
    bool m_associationExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
