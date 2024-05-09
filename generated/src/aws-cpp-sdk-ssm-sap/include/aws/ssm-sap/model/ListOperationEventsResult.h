/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/OperationEvent.h>
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
  class ListOperationEventsResult
  {
  public:
    AWS_SSMSAP_API ListOperationEventsResult();
    AWS_SSMSAP_API ListOperationEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API ListOperationEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A returned list of operation events that meet the filter criteria.</p>
     */
    inline const Aws::Vector<OperationEvent>& GetOperationEvents() const{ return m_operationEvents; }

    /**
     * <p>A returned list of operation events that meet the filter criteria.</p>
     */
    inline void SetOperationEvents(const Aws::Vector<OperationEvent>& value) { m_operationEvents = value; }

    /**
     * <p>A returned list of operation events that meet the filter criteria.</p>
     */
    inline void SetOperationEvents(Aws::Vector<OperationEvent>&& value) { m_operationEvents = std::move(value); }

    /**
     * <p>A returned list of operation events that meet the filter criteria.</p>
     */
    inline ListOperationEventsResult& WithOperationEvents(const Aws::Vector<OperationEvent>& value) { SetOperationEvents(value); return *this;}

    /**
     * <p>A returned list of operation events that meet the filter criteria.</p>
     */
    inline ListOperationEventsResult& WithOperationEvents(Aws::Vector<OperationEvent>&& value) { SetOperationEvents(std::move(value)); return *this;}

    /**
     * <p>A returned list of operation events that meet the filter criteria.</p>
     */
    inline ListOperationEventsResult& AddOperationEvents(const OperationEvent& value) { m_operationEvents.push_back(value); return *this; }

    /**
     * <p>A returned list of operation events that meet the filter criteria.</p>
     */
    inline ListOperationEventsResult& AddOperationEvents(OperationEvent&& value) { m_operationEvents.push_back(std::move(value)); return *this; }


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
    inline ListOperationEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListOperationEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline ListOperationEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListOperationEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListOperationEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListOperationEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<OperationEvent> m_operationEvents;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
