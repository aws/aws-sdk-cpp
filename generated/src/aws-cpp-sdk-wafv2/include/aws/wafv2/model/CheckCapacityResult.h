/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>

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
namespace WAFV2
{
namespace Model
{
  class CheckCapacityResult
  {
  public:
    AWS_WAFV2_API CheckCapacityResult();
    AWS_WAFV2_API CheckCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API CheckCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The capacity required by the rules and scope.</p>
     */
    inline long long GetCapacity() const{ return m_capacity; }

    /**
     * <p>The capacity required by the rules and scope.</p>
     */
    inline void SetCapacity(long long value) { m_capacity = value; }

    /**
     * <p>The capacity required by the rules and scope.</p>
     */
    inline CheckCapacityResult& WithCapacity(long long value) { SetCapacity(value); return *this;}

  private:

    long long m_capacity;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
