/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/WhatsAppCallPermission.h>
#include <aws/socialmessaging/model/WhatsAppCallPermissionAction.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {
class GetWhatsAppCallPermissionResult {
 public:
  AWS_SOCIALMESSAGING_API GetWhatsAppCallPermissionResult() = default;
  AWS_SOCIALMESSAGING_API GetWhatsAppCallPermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SOCIALMESSAGING_API GetWhatsAppCallPermissionResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current calling permission state for the end user.</p>
   */
  inline const WhatsAppCallPermission& GetPermission() const { return m_permission; }
  template <typename PermissionT = WhatsAppCallPermission>
  void SetPermission(PermissionT&& value) {
    m_permissionHasBeenSet = true;
    m_permission = std::forward<PermissionT>(value);
  }
  template <typename PermissionT = WhatsAppCallPermission>
  GetWhatsAppCallPermissionResult& WithPermission(PermissionT&& value) {
    SetPermission(std::forward<PermissionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calling actions the business can take with the end user, and any limits
   * that apply to each action.</p>
   */
  inline const Aws::Vector<WhatsAppCallPermissionAction>& GetActions() const { return m_actions; }
  template <typename ActionsT = Aws::Vector<WhatsAppCallPermissionAction>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<WhatsAppCallPermissionAction>>
  GetWhatsAppCallPermissionResult& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  template <typename ActionsT = WhatsAppCallPermissionAction>
  GetWhatsAppCallPermissionResult& AddActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions.emplace_back(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetWhatsAppCallPermissionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  WhatsAppCallPermission m_permission;

  Aws::Vector<WhatsAppCallPermissionAction> m_actions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_permissionHasBeenSet = false;
  bool m_actionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
