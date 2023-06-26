/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CheckCapacityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CheckCapacityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CheckCapacityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    long long m_capacity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
