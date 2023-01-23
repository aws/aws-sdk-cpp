/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/privatenetworks/model/Order.h>
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
namespace PrivateNetworks
{
namespace Model
{
  class ListOrdersResult
  {
  public:
    AWS_PRIVATENETWORKS_API ListOrdersResult();
    AWS_PRIVATENETWORKS_API ListOrdersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ListOrdersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListOrdersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListOrdersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline ListOrdersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the orders.</p>
     */
    inline const Aws::Vector<Order>& GetOrders() const{ return m_orders; }

    /**
     * <p>Information about the orders.</p>
     */
    inline void SetOrders(const Aws::Vector<Order>& value) { m_orders = value; }

    /**
     * <p>Information about the orders.</p>
     */
    inline void SetOrders(Aws::Vector<Order>&& value) { m_orders = std::move(value); }

    /**
     * <p>Information about the orders.</p>
     */
    inline ListOrdersResult& WithOrders(const Aws::Vector<Order>& value) { SetOrders(value); return *this;}

    /**
     * <p>Information about the orders.</p>
     */
    inline ListOrdersResult& WithOrders(Aws::Vector<Order>&& value) { SetOrders(std::move(value)); return *this;}

    /**
     * <p>Information about the orders.</p>
     */
    inline ListOrdersResult& AddOrders(const Order& value) { m_orders.push_back(value); return *this; }

    /**
     * <p>Information about the orders.</p>
     */
    inline ListOrdersResult& AddOrders(Order&& value) { m_orders.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Order> m_orders;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
