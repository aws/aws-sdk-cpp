/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/LinkLogSettings.h>
#include <aws/rtbfabric/model/LinkStatus.h>

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
 private:
  Aws::String m_gatewayId;
  bool m_gatewayIdHasBeenSet = false;

  Aws::String m_linkId;
  bool m_linkIdHasBeenSet = false;

  LinkStatus m_status{LinkStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_publicEndpoint;
  bool m_publicEndpointHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  LinkLogSettings m_logSettings;
  bool m_logSettingsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
