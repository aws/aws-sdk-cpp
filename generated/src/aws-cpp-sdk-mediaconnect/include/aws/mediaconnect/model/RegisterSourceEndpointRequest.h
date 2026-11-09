/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/SourceEndpointConfiguration.h>

#include <utility>

namespace Aws {
namespace MediaConnect {
namespace Model {

/**
 */
class RegisterSourceEndpointRequest : public MediaConnectRequest {
 public:
  AWS_MEDIACONNECT_API RegisterSourceEndpointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RegisterSourceEndpoint"; }

  AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the Amazon Web Services Region in which to register the source
   * endpoint. Defaults to the current region if not specified.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  RegisterSourceEndpointRequest& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description to help you identify the source endpoint.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RegisterSourceEndpointRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration settings for the source endpoint.</p>
   */
  inline const SourceEndpointConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = SourceEndpointConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = SourceEndpointConfiguration>
  RegisterSourceEndpointRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to apply to the source endpoint. Each tag is a key-value pair.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RegisterSourceEndpointRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RegisterSourceEndpointRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If this token matches a previous request, the
   * service ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  RegisterSourceEndpointRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_regionName;

  Aws::String m_description;

  SourceEndpointConfiguration m_configuration;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_regionNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
