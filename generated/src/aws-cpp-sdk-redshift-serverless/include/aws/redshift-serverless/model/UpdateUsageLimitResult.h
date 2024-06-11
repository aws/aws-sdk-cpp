﻿/**
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
  class UpdateUsageLimitResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateUsageLimitResult();
    AWS_REDSHIFTSERVERLESS_API UpdateUsageLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API UpdateUsageLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The updated usage limit object.</p>
     */
    inline const UsageLimit& GetUsageLimit() const{ return m_usageLimit; }
    inline void SetUsageLimit(const UsageLimit& value) { m_usageLimit = value; }
    inline void SetUsageLimit(UsageLimit&& value) { m_usageLimit = std::move(value); }
    inline UpdateUsageLimitResult& WithUsageLimit(const UsageLimit& value) { SetUsageLimit(value); return *this;}
    inline UpdateUsageLimitResult& WithUsageLimit(UsageLimit&& value) { SetUsageLimit(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateUsageLimitResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateUsageLimitResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateUsageLimitResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    UsageLimit m_usageLimit;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
