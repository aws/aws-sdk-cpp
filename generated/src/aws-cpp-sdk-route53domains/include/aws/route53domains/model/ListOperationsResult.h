/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/OperationSummary.h>
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
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The ListOperations response includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ListOperationsResponse">AWS
   * API Reference</a></p>
   */
  class ListOperationsResult
  {
  public:
    AWS_ROUTE53DOMAINS_API ListOperationsResult();
    AWS_ROUTE53DOMAINS_API ListOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API ListOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists summaries of the operations.</p>
     */
    inline const Aws::Vector<OperationSummary>& GetOperations() const{ return m_operations; }
    inline void SetOperations(const Aws::Vector<OperationSummary>& value) { m_operations = value; }
    inline void SetOperations(Aws::Vector<OperationSummary>&& value) { m_operations = std::move(value); }
    inline ListOperationsResult& WithOperations(const Aws::Vector<OperationSummary>& value) { SetOperations(value); return *this;}
    inline ListOperationsResult& WithOperations(Aws::Vector<OperationSummary>&& value) { SetOperations(std::move(value)); return *this;}
    inline ListOperationsResult& AddOperations(const OperationSummary& value) { m_operations.push_back(value); return *this; }
    inline ListOperationsResult& AddOperations(OperationSummary&& value) { m_operations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more operations than you specified for <code>MaxItems</code> in
     * the request, submit another request and include the value of
     * <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline const Aws::String& GetNextPageMarker() const{ return m_nextPageMarker; }
    inline void SetNextPageMarker(const Aws::String& value) { m_nextPageMarker = value; }
    inline void SetNextPageMarker(Aws::String&& value) { m_nextPageMarker = std::move(value); }
    inline void SetNextPageMarker(const char* value) { m_nextPageMarker.assign(value); }
    inline ListOperationsResult& WithNextPageMarker(const Aws::String& value) { SetNextPageMarker(value); return *this;}
    inline ListOperationsResult& WithNextPageMarker(Aws::String&& value) { SetNextPageMarker(std::move(value)); return *this;}
    inline ListOperationsResult& WithNextPageMarker(const char* value) { SetNextPageMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOperationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOperationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOperationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<OperationSummary> m_operations;

    Aws::String m_nextPageMarker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
