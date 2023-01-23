/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/OrderSummary.h>
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
namespace Outposts
{
namespace Model
{
  class ListOrdersResult
  {
  public:
    AWS_OUTPOSTS_API ListOrdersResult();
    AWS_OUTPOSTS_API ListOrdersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListOrdersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the orders. </p>
     */
    inline const Aws::Vector<OrderSummary>& GetOrders() const{ return m_orders; }

    /**
     * <p> Information about the orders. </p>
     */
    inline void SetOrders(const Aws::Vector<OrderSummary>& value) { m_orders = value; }

    /**
     * <p> Information about the orders. </p>
     */
    inline void SetOrders(Aws::Vector<OrderSummary>&& value) { m_orders = std::move(value); }

    /**
     * <p> Information about the orders. </p>
     */
    inline ListOrdersResult& WithOrders(const Aws::Vector<OrderSummary>& value) { SetOrders(value); return *this;}

    /**
     * <p> Information about the orders. </p>
     */
    inline ListOrdersResult& WithOrders(Aws::Vector<OrderSummary>&& value) { SetOrders(std::move(value)); return *this;}

    /**
     * <p> Information about the orders. </p>
     */
    inline ListOrdersResult& AddOrders(const OrderSummary& value) { m_orders.push_back(value); return *this; }

    /**
     * <p> Information about the orders. </p>
     */
    inline ListOrdersResult& AddOrders(OrderSummary&& value) { m_orders.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListOrdersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListOrdersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListOrdersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OrderSummary> m_orders;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
