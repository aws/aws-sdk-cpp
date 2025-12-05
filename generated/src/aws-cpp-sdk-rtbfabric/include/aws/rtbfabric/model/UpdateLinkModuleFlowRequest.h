/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ModuleConfiguration.h>

#include <utility>

namespace Aws {
namespace RTBFabric {
namespace Model {

/**
 */
class UpdateLinkModuleFlowRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API UpdateLinkModuleFlowRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLinkModuleFlow"; }

  AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique client token.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateLinkModuleFlowRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  UpdateLinkModuleFlowRequest& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the link.</p>
   */
  inline const Aws::String& GetLinkId() const { return m_linkId; }
  inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
  template <typename LinkIdT = Aws::String>
  void SetLinkId(LinkIdT&& value) {
    m_linkIdHasBeenSet = true;
    m_linkId = std::forward<LinkIdT>(value);
  }
  template <typename LinkIdT = Aws::String>
  UpdateLinkModuleFlowRequest& WithLinkId(LinkIdT&& value) {
    SetLinkId(std::forward<LinkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of a module.</p>
   */
  inline const Aws::Vector<ModuleConfiguration>& GetModules() const { return m_modules; }
  inline bool ModulesHasBeenSet() const { return m_modulesHasBeenSet; }
  template <typename ModulesT = Aws::Vector<ModuleConfiguration>>
  void SetModules(ModulesT&& value) {
    m_modulesHasBeenSet = true;
    m_modules = std::forward<ModulesT>(value);
  }
  template <typename ModulesT = Aws::Vector<ModuleConfiguration>>
  UpdateLinkModuleFlowRequest& WithModules(ModulesT&& value) {
    SetModules(std::forward<ModulesT>(value));
    return *this;
  }
  template <typename ModulesT = ModuleConfiguration>
  UpdateLinkModuleFlowRequest& AddModules(ModulesT&& value) {
    m_modulesHasBeenSet = true;
    m_modules.emplace_back(std::forward<ModulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_gatewayId;

  Aws::String m_linkId;

  Aws::Vector<ModuleConfiguration> m_modules;
  bool m_clientTokenHasBeenSet = true;
  bool m_gatewayIdHasBeenSet = false;
  bool m_linkIdHasBeenSet = false;
  bool m_modulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
