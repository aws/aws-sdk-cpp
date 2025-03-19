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
  class GetWebACLResult
  {
  public:
    AWS_WAFV2_API GetWebACLResult() = default;
    AWS_WAFV2_API GetWebACLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetWebACLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The web ACL specification. You can modify the settings in this web ACL and
     * use it to update this web ACL or create a new one.</p>
     */
    inline const WebACL& GetWebACL() const { return m_webACL; }
    template<typename WebACLT = WebACL>
    void SetWebACL(WebACLT&& value) { m_webACLHasBeenSet = true; m_webACL = std::forward<WebACLT>(value); }
    template<typename WebACLT = WebACL>
    GetWebACLResult& WithWebACL(WebACLT&& value) { SetWebACL(std::forward<WebACLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetLockToken() const { return m_lockToken; }
    template<typename LockTokenT = Aws::String>
    void SetLockToken(LockTokenT&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::forward<LockTokenT>(value); }
    template<typename LockTokenT = Aws::String>
    GetWebACLResult& WithLockToken(LockTokenT&& value) { SetLockToken(std::forward<LockTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to use in SDK integrations with Amazon Web Services managed rule
     * groups. For example, you can use the integration SDKs with the account takeover
     * prevention managed rule group <code>AWSManagedRulesATPRuleSet</code> and the
     * account creation fraud prevention managed rule group
     * <code>AWSManagedRulesACFPRuleSet</code>. This is only populated if you are using
     * a rule group in your web ACL that integrates with your applications in this way.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-application-integration.html">WAF
     * client application integration</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline const Aws::String& GetApplicationIntegrationURL() const { return m_applicationIntegrationURL; }
    template<typename ApplicationIntegrationURLT = Aws::String>
    void SetApplicationIntegrationURL(ApplicationIntegrationURLT&& value) { m_applicationIntegrationURLHasBeenSet = true; m_applicationIntegrationURL = std::forward<ApplicationIntegrationURLT>(value); }
    template<typename ApplicationIntegrationURLT = Aws::String>
    GetWebACLResult& WithApplicationIntegrationURL(ApplicationIntegrationURLT&& value) { SetApplicationIntegrationURL(std::forward<ApplicationIntegrationURLT>(value)); return *this;}
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

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet = false;

    Aws::String m_applicationIntegrationURL;
    bool m_applicationIntegrationURLHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
