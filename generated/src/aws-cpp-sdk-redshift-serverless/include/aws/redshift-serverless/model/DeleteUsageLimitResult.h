/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/UsageLimit.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class DeleteUsageLimitResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API DeleteUsageLimitResult();
    AWS_REDSHIFTSERVERLESS_API DeleteUsageLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API DeleteUsageLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The deleted usage limit object.</p>
     */
    inline const UsageLimit& GetUsageLimit() const{ return m_usageLimit; }

    /**
     * <p>The deleted usage limit object.</p>
     */
    inline void SetUsageLimit(const UsageLimit& value) { m_usageLimit = value; }

    /**
     * <p>The deleted usage limit object.</p>
     */
    inline void SetUsageLimit(UsageLimit&& value) { m_usageLimit = std::move(value); }

    /**
     * <p>The deleted usage limit object.</p>
     */
    inline DeleteUsageLimitResult& WithUsageLimit(const UsageLimit& value) { SetUsageLimit(value); return *this;}

    /**
     * <p>The deleted usage limit object.</p>
     */
    inline DeleteUsageLimitResult& WithUsageLimit(UsageLimit&& value) { SetUsageLimit(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteUsageLimitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteUsageLimitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteUsageLimitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    UsageLimit m_usageLimit;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
