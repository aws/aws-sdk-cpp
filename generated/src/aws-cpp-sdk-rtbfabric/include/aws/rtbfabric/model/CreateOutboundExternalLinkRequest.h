/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/LinkAttributes.h>
#include <aws/rtbfabric/model/LinkLogSettings.h>

#include <utility>

namespace Aws {
namespace RTBFabric {
namespace Model {

/**
 */
class CreateOutboundExternalLinkRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API CreateOutboundExternalLinkRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateOutboundExternalLink"; }

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
  CreateOutboundExternalLinkRequest& WithClientToken(ClientTokenT&& value) {
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
  CreateOutboundExternalLinkRequest& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LinkAttributes& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = LinkAttributes>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = LinkAttributes>
  CreateOutboundExternalLinkRequest& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The public endpoint of the link.</p>
   */
  inline const Aws::String& GetPublicEndpoint() const { return m_publicEndpoint; }
  inline bool PublicEndpointHasBeenSet() const { return m_publicEndpointHasBeenSet; }
  template <typename PublicEndpointT = Aws::String>
  void SetPublicEndpoint(PublicEndpointT&& value) {
    m_publicEndpointHasBeenSet = true;
    m_publicEndpoint = std::forward<PublicEndpointT>(value);
  }
  template <typename PublicEndpointT = Aws::String>
  CreateOutboundExternalLinkRequest& WithPublicEndpoint(PublicEndpointT&& value) {
    SetPublicEndpoint(std::forward<PublicEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LinkLogSettings& GetLogSettings() const { return m_logSettings; }
  inline bool LogSettingsHasBeenSet() const { return m_logSettingsHasBeenSet; }
  template <typename LogSettingsT = LinkLogSettings>
  void SetLogSettings(LogSettingsT&& value) {
    m_logSettingsHasBeenSet = true;
    m_logSettings = std::forward<LogSettingsT>(value);
  }
  template <typename LogSettingsT = LinkLogSettings>
  CreateOutboundExternalLinkRequest& WithLogSettings(LogSettingsT&& value) {
    SetLogSettings(std::forward<LogSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of the key-value pairs of the tag or tags to assign to the
   * resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateOutboundExternalLinkRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateOutboundExternalLinkRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  Aws::String m_gatewayId;
  bool m_gatewayIdHasBeenSet = false;

  LinkAttributes m_attributes;
  bool m_attributesHasBeenSet = false;

  Aws::String m_publicEndpoint;
  bool m_publicEndpointHasBeenSet = false;

  LinkLogSettings m_logSettings;
  bool m_logSettingsHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
