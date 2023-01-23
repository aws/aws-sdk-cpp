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
  class GetOrderResult
  {
  public:
    AWS_OUTPOSTS_API GetOrderResult();
    AWS_OUTPOSTS_API GetOrderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetOrderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Order& GetOrder() const{ return m_order; }

    
    inline void SetOrder(const Order& value) { m_order = value; }

    
    inline void SetOrder(Order&& value) { m_order = std::move(value); }

    
    inline GetOrderResult& WithOrder(const Order& value) { SetOrder(value); return *this;}

    
    inline GetOrderResult& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}

  private:

    Order m_order;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
