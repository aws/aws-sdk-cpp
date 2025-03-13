/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/WebACLSummary.h>
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
namespace WAFRegional
{
namespace Model
{
  class GetWebACLForResourceResult
  {
  public:
    AWS_WAFREGIONAL_API GetWebACLForResourceResult() = default;
    AWS_WAFREGIONAL_API GetWebACLForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetWebACLForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the web ACL that you specified in the
     * <code>GetWebACLForResource</code> request. If there is no associated resource, a
     * null WebACLSummary is returned.</p>
     */
    inline const WebACLSummary& GetWebACLSummary() const { return m_webACLSummary; }
    template<typename WebACLSummaryT = WebACLSummary>
    void SetWebACLSummary(WebACLSummaryT&& value) { m_webACLSummaryHasBeenSet = true; m_webACLSummary = std::forward<WebACLSummaryT>(value); }
    template<typename WebACLSummaryT = WebACLSummary>
    GetWebACLForResourceResult& WithWebACLSummary(WebACLSummaryT&& value) { SetWebACLSummary(std::forward<WebACLSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWebACLForResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WebACLSummary m_webACLSummary;
    bool m_webACLSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
