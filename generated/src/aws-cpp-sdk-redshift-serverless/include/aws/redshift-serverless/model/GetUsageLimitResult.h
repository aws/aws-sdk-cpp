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
  class GetUsageLimitResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetUsageLimitResult() = default;
    AWS_REDSHIFTSERVERLESS_API GetUsageLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetUsageLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned usage limit object.</p>
     */
    inline const UsageLimit& GetUsageLimit() const { return m_usageLimit; }
    template<typename UsageLimitT = UsageLimit>
    void SetUsageLimit(UsageLimitT&& value) { m_usageLimitHasBeenSet = true; m_usageLimit = std::forward<UsageLimitT>(value); }
    template<typename UsageLimitT = UsageLimit>
    GetUsageLimitResult& WithUsageLimit(UsageLimitT&& value) { SetUsageLimit(std::forward<UsageLimitT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUsageLimitResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UsageLimit m_usageLimit;
    bool m_usageLimitHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
