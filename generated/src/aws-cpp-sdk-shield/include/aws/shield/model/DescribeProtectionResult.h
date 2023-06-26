/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/Protection.h>
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
namespace Shield
{
namespace Model
{
  class DescribeProtectionResult
  {
  public:
    AWS_SHIELD_API DescribeProtectionResult();
    AWS_SHIELD_API DescribeProtectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeProtectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a>Protection</a> that you requested. </p>
     */
    inline const Protection& GetProtection() const{ return m_protection; }

    /**
     * <p>The <a>Protection</a> that you requested. </p>
     */
    inline void SetProtection(const Protection& value) { m_protection = value; }

    /**
     * <p>The <a>Protection</a> that you requested. </p>
     */
    inline void SetProtection(Protection&& value) { m_protection = std::move(value); }

    /**
     * <p>The <a>Protection</a> that you requested. </p>
     */
    inline DescribeProtectionResult& WithProtection(const Protection& value) { SetProtection(value); return *this;}

    /**
     * <p>The <a>Protection</a> that you requested. </p>
     */
    inline DescribeProtectionResult& WithProtection(Protection&& value) { SetProtection(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeProtectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeProtectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeProtectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Protection m_protection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
