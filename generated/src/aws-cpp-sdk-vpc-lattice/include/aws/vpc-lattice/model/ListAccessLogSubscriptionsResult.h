/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/AccessLogSubscriptionSummary.h>
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
namespace VPCLattice
{
namespace Model
{
  class ListAccessLogSubscriptionsResult
  {
  public:
    AWS_VPCLATTICE_API ListAccessLogSubscriptionsResult();
    AWS_VPCLATTICE_API ListAccessLogSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API ListAccessLogSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The access log subscriptions.</p>
     */
    inline const Aws::Vector<AccessLogSubscriptionSummary>& GetItems() const{ return m_items; }

    /**
     * <p>The access log subscriptions.</p>
     */
    inline void SetItems(const Aws::Vector<AccessLogSubscriptionSummary>& value) { m_items = value; }

    /**
     * <p>The access log subscriptions.</p>
     */
    inline void SetItems(Aws::Vector<AccessLogSubscriptionSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>The access log subscriptions.</p>
     */
    inline ListAccessLogSubscriptionsResult& WithItems(const Aws::Vector<AccessLogSubscriptionSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>The access log subscriptions.</p>
     */
    inline ListAccessLogSubscriptionsResult& WithItems(Aws::Vector<AccessLogSubscriptionSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The access log subscriptions.</p>
     */
    inline ListAccessLogSubscriptionsResult& AddItems(const AccessLogSubscriptionSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The access log subscriptions.</p>
     */
    inline ListAccessLogSubscriptionsResult& AddItems(AccessLogSubscriptionSummary&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline ListAccessLogSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline ListAccessLogSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline ListAccessLogSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAccessLogSubscriptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAccessLogSubscriptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAccessLogSubscriptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AccessLogSubscriptionSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
