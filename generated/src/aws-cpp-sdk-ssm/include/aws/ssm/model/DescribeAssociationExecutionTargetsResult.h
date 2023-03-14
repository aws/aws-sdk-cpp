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
    AWS_SSM_API DescribeAssociationExecutionTargetsResult();
    AWS_SSM_API DescribeAssociationExecutionTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeAssociationExecutionTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the execution.</p>
     */
    inline const Aws::Vector<AssociationExecutionTarget>& GetAssociationExecutionTargets() const{ return m_associationExecutionTargets; }

    /**
     * <p>Information about the execution.</p>
     */
    inline void SetAssociationExecutionTargets(const Aws::Vector<AssociationExecutionTarget>& value) { m_associationExecutionTargets = value; }

    /**
     * <p>Information about the execution.</p>
     */
    inline void SetAssociationExecutionTargets(Aws::Vector<AssociationExecutionTarget>&& value) { m_associationExecutionTargets = std::move(value); }

    /**
     * <p>Information about the execution.</p>
     */
    inline DescribeAssociationExecutionTargetsResult& WithAssociationExecutionTargets(const Aws::Vector<AssociationExecutionTarget>& value) { SetAssociationExecutionTargets(value); return *this;}

    /**
     * <p>Information about the execution.</p>
     */
    inline DescribeAssociationExecutionTargetsResult& WithAssociationExecutionTargets(Aws::Vector<AssociationExecutionTarget>&& value) { SetAssociationExecutionTargets(std::move(value)); return *this;}

    /**
     * <p>Information about the execution.</p>
     */
    inline DescribeAssociationExecutionTargetsResult& AddAssociationExecutionTargets(const AssociationExecutionTarget& value) { m_associationExecutionTargets.push_back(value); return *this; }

    /**
     * <p>Information about the execution.</p>
     */
    inline DescribeAssociationExecutionTargetsResult& AddAssociationExecutionTargets(AssociationExecutionTarget&& value) { m_associationExecutionTargets.push_back(std::move(value)); return *this; }


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
    inline DescribeAssociationExecutionTargetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline DescribeAssociationExecutionTargetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline DescribeAssociationExecutionTargetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAssociationExecutionTargetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAssociationExecutionTargetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAssociationExecutionTargetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AssociationExecutionTarget> m_associationExecutionTargets;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
