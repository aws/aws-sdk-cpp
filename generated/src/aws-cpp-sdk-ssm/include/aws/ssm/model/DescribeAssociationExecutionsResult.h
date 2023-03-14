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
    AWS_SSM_API DescribeAssociationExecutionsResult();
    AWS_SSM_API DescribeAssociationExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeAssociationExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline const Aws::Vector<AssociationExecution>& GetAssociationExecutions() const{ return m_associationExecutions; }

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline void SetAssociationExecutions(const Aws::Vector<AssociationExecution>& value) { m_associationExecutions = value; }

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline void SetAssociationExecutions(Aws::Vector<AssociationExecution>&& value) { m_associationExecutions = std::move(value); }

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline DescribeAssociationExecutionsResult& WithAssociationExecutions(const Aws::Vector<AssociationExecution>& value) { SetAssociationExecutions(value); return *this;}

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline DescribeAssociationExecutionsResult& WithAssociationExecutions(Aws::Vector<AssociationExecution>&& value) { SetAssociationExecutions(std::move(value)); return *this;}

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline DescribeAssociationExecutionsResult& AddAssociationExecutions(const AssociationExecution& value) { m_associationExecutions.push_back(value); return *this; }

    /**
     * <p>A list of the executions for the specified association ID.</p>
     */
    inline DescribeAssociationExecutionsResult& AddAssociationExecutions(AssociationExecution&& value) { m_associationExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline DescribeAssociationExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline DescribeAssociationExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline DescribeAssociationExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAssociationExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAssociationExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAssociationExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AssociationExecution> m_associationExecutions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
