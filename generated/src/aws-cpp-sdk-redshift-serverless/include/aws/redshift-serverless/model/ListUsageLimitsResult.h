﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/UsageLimit.h>
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
  class ListUsageLimitsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListUsageLimitsResult();
    AWS_REDSHIFTSERVERLESS_API ListUsageLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListUsageLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUsageLimitsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUsageLimitsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUsageLimitsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of returned usage limit objects.</p>
     */
    inline const Aws::Vector<UsageLimit>& GetUsageLimits() const{ return m_usageLimits; }
    inline void SetUsageLimits(const Aws::Vector<UsageLimit>& value) { m_usageLimits = value; }
    inline void SetUsageLimits(Aws::Vector<UsageLimit>&& value) { m_usageLimits = std::move(value); }
    inline ListUsageLimitsResult& WithUsageLimits(const Aws::Vector<UsageLimit>& value) { SetUsageLimits(value); return *this;}
    inline ListUsageLimitsResult& WithUsageLimits(Aws::Vector<UsageLimit>&& value) { SetUsageLimits(std::move(value)); return *this;}
    inline ListUsageLimitsResult& AddUsageLimits(const UsageLimit& value) { m_usageLimits.push_back(value); return *this; }
    inline ListUsageLimitsResult& AddUsageLimits(UsageLimit&& value) { m_usageLimits.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUsageLimitsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUsageLimitsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUsageLimitsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<UsageLimit> m_usageLimits;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
