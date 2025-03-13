/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/WebACL.h>
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
  class GetWebACLForResourceResult
  {
  public:
    AWS_WAFV2_API GetWebACLForResourceResult() = default;
    AWS_WAFV2_API GetWebACLForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetWebACLForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The web ACL that is associated with the resource. If there is no associated
     * resource, WAF returns a null web ACL.</p>
     */
    inline const WebACL& GetWebACL() const { return m_webACL; }
    template<typename WebACLT = WebACL>
    void SetWebACL(WebACLT&& value) { m_webACLHasBeenSet = true; m_webACL = std::forward<WebACLT>(value); }
    template<typename WebACLT = WebACL>
    GetWebACLForResourceResult& WithWebACL(WebACLT&& value) { SetWebACL(std::forward<WebACLT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWebACLForResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WebACL m_webACL;
    bool m_webACLHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
