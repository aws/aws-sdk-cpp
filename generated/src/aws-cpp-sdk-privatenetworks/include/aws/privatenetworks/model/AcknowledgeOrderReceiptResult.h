/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
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
  class AcknowledgeOrderReceiptResult
  {
  public:
    AWS_PRIVATENETWORKS_API AcknowledgeOrderReceiptResult();
    AWS_PRIVATENETWORKS_API AcknowledgeOrderReceiptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API AcknowledgeOrderReceiptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the order.</p>
     */
    inline const Order& GetOrder() const{ return m_order; }

    /**
     * <p>Information about the order.</p>
     */
    inline void SetOrder(const Order& value) { m_order = value; }

    /**
     * <p>Information about the order.</p>
     */
    inline void SetOrder(Order&& value) { m_order = std::move(value); }

    /**
     * <p>Information about the order.</p>
     */
    inline AcknowledgeOrderReceiptResult& WithOrder(const Order& value) { SetOrder(value); return *this;}

    /**
     * <p>Information about the order.</p>
     */
    inline AcknowledgeOrderReceiptResult& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}

  private:

    Order m_order;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
