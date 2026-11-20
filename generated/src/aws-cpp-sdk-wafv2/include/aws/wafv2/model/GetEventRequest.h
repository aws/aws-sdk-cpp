/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/Scope.h>

#include <utility>

namespace Aws {
namespace WAFV2 {
namespace Model {

/**
 */
class GetEventRequest : public WAFV2Request {
 public:
  AWS_WAFV2_API GetEventRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetEvent"; }

  AWS_WAFV2_API Aws::String SerializePayload() const override;

  AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies whether this is for a global resource type, such as a Amazon
   * CloudFront distribution. For an Amplify application, use
   * <code>CLOUDFRONT</code>.</p> <p>To work with CloudFront, you must also specify
   * the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
   * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
   * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
   * the Region endpoint us-east-1. </p> </li> </ul>
   */
  inline Scope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(Scope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline GetEventRequest& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the event. WAF returns the event ID in the responses
   * to <a>ListEvents</a> and <a>ListEventsByWebACL</a>.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  GetEventRequest& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the web ACL that the event is associated
   * with.</p>
   */
  inline const Aws::String& GetWebAclArn() const { return m_webAclArn; }
  inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }
  template <typename WebAclArnT = Aws::String>
  void SetWebAclArn(WebAclArnT&& value) {
    m_webAclArnHasBeenSet = true;
    m_webAclArn = std::forward<WebAclArnT>(value);
  }
  template <typename WebAclArnT = Aws::String>
  GetEventRequest& WithWebAclArn(WebAclArnT&& value) {
    SetWebAclArn(std::forward<WebAclArnT>(value));
    return *this;
  }
  ///@}
 private:
  Scope m_scope{Scope::NOT_SET};

  Aws::String m_eventId;

  Aws::String m_webAclArn;
  bool m_scopeHasBeenSet = false;
  bool m_eventIdHasBeenSet = false;
  bool m_webAclArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
