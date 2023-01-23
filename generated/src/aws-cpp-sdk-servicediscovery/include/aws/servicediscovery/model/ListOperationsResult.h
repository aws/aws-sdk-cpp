/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/OperationSummary.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class ListOperationsResult
  {
  public:
    AWS_SERVICEDISCOVERY_API ListOperationsResult();
    AWS_SERVICEDISCOVERY_API ListOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API ListOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about the operations that match the specified
     * criteria.</p>
     */
    inline const Aws::Vector<OperationSummary>& GetOperations() const{ return m_operations; }

    /**
     * <p>Summary information about the operations that match the specified
     * criteria.</p>
     */
    inline void SetOperations(const Aws::Vector<OperationSummary>& value) { m_operations = value; }

    /**
     * <p>Summary information about the operations that match the specified
     * criteria.</p>
     */
    inline void SetOperations(Aws::Vector<OperationSummary>&& value) { m_operations = std::move(value); }

    /**
     * <p>Summary information about the operations that match the specified
     * criteria.</p>
     */
    inline ListOperationsResult& WithOperations(const Aws::Vector<OperationSummary>& value) { SetOperations(value); return *this;}

    /**
     * <p>Summary information about the operations that match the specified
     * criteria.</p>
     */
    inline ListOperationsResult& WithOperations(Aws::Vector<OperationSummary>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>Summary information about the operations that match the specified
     * criteria.</p>
     */
    inline ListOperationsResult& AddOperations(const OperationSummary& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>Summary information about the operations that match the specified
     * criteria.</p>
     */
    inline ListOperationsResult& AddOperations(OperationSummary&& value) { m_operations.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListOperations</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> operations and
     * then filters them based on the specified criteria. It's possible that no
     * operations in the first <code>MaxResults</code> operations matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> operations do
     * contain operations that match the criteria.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListOperations</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> operations and
     * then filters them based on the specified criteria. It's possible that no
     * operations in the first <code>MaxResults</code> operations matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> operations do
     * contain operations that match the criteria.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListOperations</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> operations and
     * then filters them based on the specified criteria. It's possible that no
     * operations in the first <code>MaxResults</code> operations matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> operations do
     * contain operations that match the criteria.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListOperations</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> operations and
     * then filters them based on the specified criteria. It's possible that no
     * operations in the first <code>MaxResults</code> operations matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> operations do
     * contain operations that match the criteria.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListOperations</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> operations and
     * then filters them based on the specified criteria. It's possible that no
     * operations in the first <code>MaxResults</code> operations matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> operations do
     * contain operations that match the criteria.</p> 
     */
    inline ListOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListOperations</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> operations and
     * then filters them based on the specified criteria. It's possible that no
     * operations in the first <code>MaxResults</code> operations matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> operations do
     * contain operations that match the criteria.</p> 
     */
    inline ListOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListOperations</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p>  <p>Cloud Map gets <code>MaxResults</code> operations and
     * then filters them based on the specified criteria. It's possible that no
     * operations in the first <code>MaxResults</code> operations matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> operations do
     * contain operations that match the criteria.</p> 
     */
    inline ListOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OperationSummary> m_operations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
