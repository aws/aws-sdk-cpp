/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/Order.h>
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
  class CreateOrderResult
  {
  public:
    AWS_OUTPOSTS_API CreateOrderResult();
    AWS_OUTPOSTS_API CreateOrderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API CreateOrderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about this order.</p>
     */
    inline const Order& GetOrder() const{ return m_order; }

    /**
     * <p>Information about this order.</p>
     */
    inline void SetOrder(const Order& value) { m_order = value; }

    /**
     * <p>Information about this order.</p>
     */
    inline void SetOrder(Order&& value) { m_order = std::move(value); }

    /**
     * <p>Information about this order.</p>
     */
    inline CreateOrderResult& WithOrder(const Order& value) { SetOrder(value); return *this;}

    /**
     * <p>Information about this order.</p>
     */
    inline CreateOrderResult& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}

  private:

    Order m_order;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
