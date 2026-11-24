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
class GetEventActorRequest : public WAFV2Request {
 public:
  AWS_WAFV2_API GetEventActorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetEventActor"; }

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
  inline GetEventActorRequest& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the event actor. WAF returns the event actor ID in
   * the event details of <a>ListEvents</a>, <a>ListEventsByWebACL</a>, and
   * <a>GetEvent</a>, and in the response to <a>ListEventActors</a>.</p>
   */
  inline const Aws::String& GetEventActorId() const { return m_eventActorId; }
  inline bool EventActorIdHasBeenSet() const { return m_eventActorIdHasBeenSet; }
  template <typename EventActorIdT = Aws::String>
  void SetEventActorId(EventActorIdT&& value) {
    m_eventActorIdHasBeenSet = true;
    m_eventActorId = std::forward<EventActorIdT>(value);
  }
  template <typename EventActorIdT = Aws::String>
  GetEventActorRequest& WithEventActorId(EventActorIdT&& value) {
    SetEventActorId(std::forward<EventActorIdT>(value));
    return *this;
  }
  ///@}
 private:
  Scope m_scope{Scope::NOT_SET};

  Aws::String m_eventActorId;
  bool m_scopeHasBeenSet = false;
  bool m_eventActorIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
