/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ConnectivityType.h>
#include <aws/rtbfabric/model/LinkAttributes.h>
#include <aws/rtbfabric/model/LinkLogSettings.h>
#include <aws/rtbfabric/model/LinkStatus.h>
#include <aws/rtbfabric/model/ModuleConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {
class GetOutboundExternalLinkResult {
 public:
  AWS_RTBFABRIC_API GetOutboundExternalLinkResult() = default;
  AWS_RTBFABRIC_API GetOutboundExternalLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API GetOutboundExternalLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  GetOutboundExternalLinkResult& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the link.</p>
   */
  inline const Aws::String& GetLinkId() const { return m_linkId; }
  template <typename LinkIdT = Aws::String>
  void SetLinkId(LinkIdT&& value) {
    m_linkIdHasBeenSet = true;
    m_linkId = std::forward<LinkIdT>(value);
  }
  template <typename LinkIdT = Aws::String>
  GetOutboundExternalLinkResult& WithLinkId(LinkIdT&& value) {
    SetLinkId(std::forward<LinkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the request.</p>
   */
  inline LinkStatus GetStatus() const { return m_status; }
  inline void SetStatus(LinkStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetOutboundExternalLinkResult& WithStatus(LinkStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The public endpoint for the link.</p>
   */
  inline const Aws::String& GetPublicEndpoint() const { return m_publicEndpoint; }
  template <typename PublicEndpointT = Aws::String>
  void SetPublicEndpoint(PublicEndpointT&& value) {
    m_publicEndpointHasBeenSet = true;
    m_publicEndpoint = std::forward<PublicEndpointT>(value);
  }
  template <typename PublicEndpointT = Aws::String>
  GetOutboundExternalLinkResult& WithPublicEndpoint(PublicEndpointT&& value) {
    SetPublicEndpoint(std::forward<PublicEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of flow modules.</p>
   */
  inline const Aws::Vector<ModuleConfiguration>& GetFlowModules() const { return m_flowModules; }
  template <typename FlowModulesT = Aws::Vector<ModuleConfiguration>>
  void SetFlowModules(FlowModulesT&& value) {
    m_flowModulesHasBeenSet = true;
    m_flowModules = std::forward<FlowModulesT>(value);
  }
  template <typename FlowModulesT = Aws::Vector<ModuleConfiguration>>
  GetOutboundExternalLinkResult& WithFlowModules(FlowModulesT&& value) {
    SetFlowModules(std::forward<FlowModulesT>(value));
    return *this;
  }
  template <typename FlowModulesT = ModuleConfiguration>
  GetOutboundExternalLinkResult& AddFlowModules(FlowModulesT&& value) {
    m_flowModulesHasBeenSet = true;
    m_flowModules.emplace_back(std::forward<FlowModulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of pending flow modules.</p>
   */
  inline const Aws::Vector<ModuleConfiguration>& GetPendingFlowModules() const { return m_pendingFlowModules; }
  template <typename PendingFlowModulesT = Aws::Vector<ModuleConfiguration>>
  void SetPendingFlowModules(PendingFlowModulesT&& value) {
    m_pendingFlowModulesHasBeenSet = true;
    m_pendingFlowModules = std::forward<PendingFlowModulesT>(value);
  }
  template <typename PendingFlowModulesT = Aws::Vector<ModuleConfiguration>>
  GetOutboundExternalLinkResult& WithPendingFlowModules(PendingFlowModulesT&& value) {
    SetPendingFlowModules(std::forward<PendingFlowModulesT>(value));
    return *this;
  }
  template <typename PendingFlowModulesT = ModuleConfiguration>
  GetOutboundExternalLinkResult& AddPendingFlowModules(PendingFlowModulesT&& value) {
    m_pendingFlowModulesHasBeenSet = true;
    m_pendingFlowModules.emplace_back(std::forward<PendingFlowModulesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LinkAttributes& GetAttributes() const { return m_attributes; }
  template <typename AttributesT = LinkAttributes>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = LinkAttributes>
  GetOutboundExternalLinkResult& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the outbound external link was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetOutboundExternalLinkResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the outbound external link was updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetOutboundExternalLinkResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of the key-value pairs for the tag or tags assigned to the specified
   * resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetOutboundExternalLinkResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetOutboundExternalLinkResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings for the application logs.</p>
   */
  inline const LinkLogSettings& GetLogSettings() const { return m_logSettings; }
  template <typename LogSettingsT = LinkLogSettings>
  void SetLogSettings(LogSettingsT&& value) {
    m_logSettingsHasBeenSet = true;
    m_logSettings = std::forward<LogSettingsT>(value);
  }
  template <typename LogSettingsT = LinkLogSettings>
  GetOutboundExternalLinkResult& WithLogSettings(LogSettingsT&& value) {
    SetLogSettings(std::forward<LogSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connectivity type of the link.</p>
   */
  inline ConnectivityType GetConnectivityType() const { return m_connectivityType; }
  inline void SetConnectivityType(ConnectivityType value) {
    m_connectivityTypeHasBeenSet = true;
    m_connectivityType = value;
  }
  inline GetOutboundExternalLinkResult& WithConnectivityType(ConnectivityType value) {
    SetConnectivityType(value);
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
  GetOutboundExternalLinkResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_gatewayId;

  Aws::String m_linkId;

  LinkStatus m_status{LinkStatus::NOT_SET};

  Aws::String m_publicEndpoint;

  Aws::Vector<ModuleConfiguration> m_flowModules;

  Aws::Vector<ModuleConfiguration> m_pendingFlowModules;

  LinkAttributes m_attributes;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  LinkLogSettings m_logSettings;

  ConnectivityType m_connectivityType{ConnectivityType::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_gatewayIdHasBeenSet = false;
  bool m_linkIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_publicEndpointHasBeenSet = false;
  bool m_flowModulesHasBeenSet = false;
  bool m_pendingFlowModulesHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_logSettingsHasBeenSet = false;
  bool m_connectivityTypeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
