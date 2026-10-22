/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/NatGatewaySupportState.h>
#include <aws/networkmanager/model/NatRule.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {
class UpdateAttachmentNatConfigurationResult {
 public:
  AWS_NETWORKMANAGER_API UpdateAttachmentNatConfigurationResult() = default;
  AWS_NETWORKMANAGER_API UpdateAttachmentNatConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKMANAGER_API UpdateAttachmentNatConfigurationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the attachment.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  UpdateAttachmentNatConfigurationResult& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of NAT gateway support on the attachment. The transitional states
   * <code>ENABLING</code> and <code>DISABLING</code> change to <code>ENABLED</code>
   * or <code>DISABLED</code> after the update is applied. The state is
   * <code>PENDING_ATTACHMENT_ACCEPTANCE</code> when NAT gateway support is enabled
   * on an attachment that is pending acceptance.</p>
   */
  inline NatGatewaySupportState GetNatGatewaySupport() const { return m_natGatewaySupport; }
  inline void SetNatGatewaySupport(NatGatewaySupportState value) {
    m_natGatewaySupportHasBeenSet = true;
    m_natGatewaySupport = value;
  }
  inline UpdateAttachmentNatConfigurationResult& WithNatGatewaySupport(NatGatewaySupportState value) {
    SetNatGatewaySupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the core network installs system routes for the NAT CIDR
   * blocks of the attachment's NAT rules.</p>
   */
  inline bool GetNatSystemRouteSupport() const { return m_natSystemRouteSupport; }
  inline void SetNatSystemRouteSupport(bool value) {
    m_natSystemRouteSupportHasBeenSet = true;
    m_natSystemRouteSupport = value;
  }
  inline UpdateAttachmentNatConfigurationResult& WithNatSystemRouteSupport(bool value) {
    SetNatSystemRouteSupport(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The NAT rules of the attachment, including rules that are being deleted.</p>
   */
  inline const Aws::Vector<NatRule>& GetNatGatewayRules() const { return m_natGatewayRules; }
  template <typename NatGatewayRulesT = Aws::Vector<NatRule>>
  void SetNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules = std::forward<NatGatewayRulesT>(value);
  }
  template <typename NatGatewayRulesT = Aws::Vector<NatRule>>
  UpdateAttachmentNatConfigurationResult& WithNatGatewayRules(NatGatewayRulesT&& value) {
    SetNatGatewayRules(std::forward<NatGatewayRulesT>(value));
    return *this;
  }
  template <typename NatGatewayRulesT = NatRule>
  UpdateAttachmentNatConfigurationResult& AddNatGatewayRules(NatGatewayRulesT&& value) {
    m_natGatewayRulesHasBeenSet = true;
    m_natGatewayRules.emplace_back(std::forward<NatGatewayRulesT>(value));
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
  UpdateAttachmentNatConfigurationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_attachmentId;

  NatGatewaySupportState m_natGatewaySupport{NatGatewaySupportState::NOT_SET};

  bool m_natSystemRouteSupport{false};

  Aws::Vector<NatRule> m_natGatewayRules;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_attachmentIdHasBeenSet = false;
  bool m_natGatewaySupportHasBeenSet = false;
  bool m_natSystemRouteSupportHasBeenSet = false;
  bool m_natGatewayRulesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
