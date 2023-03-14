/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{
  class CreateLongTermPricingResult
  {
  public:
    AWS_SNOWBALL_API CreateLongTermPricingResult();
    AWS_SNOWBALL_API CreateLongTermPricingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API CreateLongTermPricingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline const Aws::String& GetLongTermPricingId() const{ return m_longTermPricingId; }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline void SetLongTermPricingId(const Aws::String& value) { m_longTermPricingId = value; }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline void SetLongTermPricingId(Aws::String&& value) { m_longTermPricingId = std::move(value); }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline void SetLongTermPricingId(const char* value) { m_longTermPricingId.assign(value); }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline CreateLongTermPricingResult& WithLongTermPricingId(const Aws::String& value) { SetLongTermPricingId(value); return *this;}

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline CreateLongTermPricingResult& WithLongTermPricingId(Aws::String&& value) { SetLongTermPricingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline CreateLongTermPricingResult& WithLongTermPricingId(const char* value) { SetLongTermPricingId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateLongTermPricingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateLongTermPricingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateLongTermPricingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_longTermPricingId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
