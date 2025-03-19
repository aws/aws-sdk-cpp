/**
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
    AWS_REDSHIFTSERVERLESS_API ListUsageLimitsResult() = default;
    AWS_REDSHIFTSERVERLESS_API ListUsageLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListUsageLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUsageLimitsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of returned usage limit objects.</p>
     */
    inline const Aws::Vector<UsageLimit>& GetUsageLimits() const { return m_usageLimits; }
    template<typename UsageLimitsT = Aws::Vector<UsageLimit>>
    void SetUsageLimits(UsageLimitsT&& value) { m_usageLimitsHasBeenSet = true; m_usageLimits = std::forward<UsageLimitsT>(value); }
    template<typename UsageLimitsT = Aws::Vector<UsageLimit>>
    ListUsageLimitsResult& WithUsageLimits(UsageLimitsT&& value) { SetUsageLimits(std::forward<UsageLimitsT>(value)); return *this;}
    template<typename UsageLimitsT = UsageLimit>
    ListUsageLimitsResult& AddUsageLimits(UsageLimitsT&& value) { m_usageLimitsHasBeenSet = true; m_usageLimits.emplace_back(std::forward<UsageLimitsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUsageLimitsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<UsageLimit> m_usageLimits;
    bool m_usageLimitsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
