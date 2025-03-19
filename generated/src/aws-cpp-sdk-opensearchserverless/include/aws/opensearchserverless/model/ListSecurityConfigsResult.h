/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/SecurityConfigSummary.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class ListSecurityConfigsResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListSecurityConfigsResult() = default;
    AWS_OPENSEARCHSERVERLESS_API ListSecurityConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API ListSecurityConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the security configurations in your account.</p>
     */
    inline const Aws::Vector<SecurityConfigSummary>& GetSecurityConfigSummaries() const { return m_securityConfigSummaries; }
    template<typename SecurityConfigSummariesT = Aws::Vector<SecurityConfigSummary>>
    void SetSecurityConfigSummaries(SecurityConfigSummariesT&& value) { m_securityConfigSummariesHasBeenSet = true; m_securityConfigSummaries = std::forward<SecurityConfigSummariesT>(value); }
    template<typename SecurityConfigSummariesT = Aws::Vector<SecurityConfigSummary>>
    ListSecurityConfigsResult& WithSecurityConfigSummaries(SecurityConfigSummariesT&& value) { SetSecurityConfigSummaries(std::forward<SecurityConfigSummariesT>(value)); return *this;}
    template<typename SecurityConfigSummariesT = SecurityConfigSummary>
    ListSecurityConfigsResult& AddSecurityConfigSummaries(SecurityConfigSummariesT&& value) { m_securityConfigSummariesHasBeenSet = true; m_securityConfigSummaries.emplace_back(std::forward<SecurityConfigSummariesT>(value)); return *this; }
    ///@}

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
    ListSecurityConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSecurityConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityConfigSummary> m_securityConfigSummaries;
    bool m_securityConfigSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
