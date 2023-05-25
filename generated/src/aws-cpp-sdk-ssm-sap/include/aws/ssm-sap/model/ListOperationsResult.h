/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/Operation.h>
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
namespace SsmSap
{
namespace Model
{
  class ListOperationsResult
  {
  public:
    AWS_SSMSAP_API ListOperationsResult();
    AWS_SSMSAP_API ListOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API ListOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of operations performed by AWS Systems Manager for SAP.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }

    /**
     * <p>List of operations performed by AWS Systems Manager for SAP.</p>
     */
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operations = value; }

    /**
     * <p>List of operations performed by AWS Systems Manager for SAP.</p>
     */
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operations = std::move(value); }

    /**
     * <p>List of operations performed by AWS Systems Manager for SAP.</p>
     */
    inline ListOperationsResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}

    /**
     * <p>List of operations performed by AWS Systems Manager for SAP.</p>
     */
    inline ListOperationsResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>List of operations performed by AWS Systems Manager for SAP.</p>
     */
    inline ListOperationsResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>List of operations performed by AWS Systems Manager for SAP.</p>
     */
    inline ListOperationsResult& AddOperations(Operation&& value) { m_operations.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListOperationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListOperationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListOperationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Operation> m_operations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
