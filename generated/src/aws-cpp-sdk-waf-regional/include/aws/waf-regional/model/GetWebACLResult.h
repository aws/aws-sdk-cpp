/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/WebACL.h>
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
  class GetWebACLResult
  {
  public:
    AWS_WAFREGIONAL_API GetWebACLResult() = default;
    AWS_WAFREGIONAL_API GetWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>WebACL</a> that you specified in the
     * <code>GetWebACL</code> request. For more information, see the following
     * topics:</p> <ul> <li> <p> <a>WebACL</a>: Contains <code>DefaultAction</code>,
     * <code>MetricName</code>, <code>Name</code>, an array of <code>Rule</code>
     * objects, and <code>WebACLId</code> </p> </li> <li> <p>
     * <code>DefaultAction</code> (Data type is <a>WafAction</a>): Contains
     * <code>Type</code> </p> </li> <li> <p> <code>Rules</code>: Contains an array of
     * <code>ActivatedRule</code> objects, which contain <code>Action</code>,
     * <code>Priority</code>, and <code>RuleId</code> </p> </li> <li> <p>
     * <code>Action</code>: Contains <code>Type</code> </p> </li> </ul>
     */
    inline const WebACL& GetWebACL() const { return m_webACL; }
    template<typename WebACLT = WebACL>
    void SetWebACL(WebACLT&& value) { m_webACLHasBeenSet = true; m_webACL = std::forward<WebACLT>(value); }
    template<typename WebACLT = WebACL>
    GetWebACLResult& WithWebACL(WebACLT&& value) { SetWebACL(std::forward<WebACLT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWebACLResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WebACL m_webACL;
    bool m_webACLHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
