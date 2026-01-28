/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterNetworkInterfaceConfiguration.h>
#include <aws/mediaconnect/model/RouterNetworkInterfaceState.h>
#include <aws/mediaconnect/model/RouterNetworkInterfaceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>A router network interface in AWS Elemental MediaConnect. A router network
 * interface is a network interface that can be associated with one or more router
 * inputs and outputs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterNetworkInterface">AWS
 * API Reference</a></p>
 */
class RouterNetworkInterface {
 public:
  AWS_MEDIACONNECT_API RouterNetworkInterface() = default;
  AWS_MEDIACONNECT_API RouterNetworkInterface(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterNetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the router network interface.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RouterNetworkInterface& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the router network interface.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RouterNetworkInterface& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the router network interface.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  RouterNetworkInterface& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the router network interface.</p>
   */
  inline RouterNetworkInterfaceState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RouterNetworkInterfaceState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline RouterNetworkInterface& WithState(RouterNetworkInterfaceState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the router network interface.</p>
   */
  inline RouterNetworkInterfaceType GetNetworkInterfaceType() const { return m_networkInterfaceType; }
  inline bool NetworkInterfaceTypeHasBeenSet() const { return m_networkInterfaceTypeHasBeenSet; }
  inline void SetNetworkInterfaceType(RouterNetworkInterfaceType value) {
    m_networkInterfaceTypeHasBeenSet = true;
    m_networkInterfaceType = value;
  }
  inline RouterNetworkInterface& WithNetworkInterfaceType(RouterNetworkInterfaceType value) {
    SetNetworkInterfaceType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const RouterNetworkInterfaceConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = RouterNetworkInterfaceConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = RouterNetworkInterfaceConfiguration>
  RouterNetworkInterface& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of router outputs associated with the network interface.</p>
   */
  inline int GetAssociatedOutputCount() const { return m_associatedOutputCount; }
  inline bool AssociatedOutputCountHasBeenSet() const { return m_associatedOutputCountHasBeenSet; }
  inline void SetAssociatedOutputCount(int value) {
    m_associatedOutputCountHasBeenSet = true;
    m_associatedOutputCount = value;
  }
  inline RouterNetworkInterface& WithAssociatedOutputCount(int value) {
    SetAssociatedOutputCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of router inputs associated with the network interface.</p>
   */
  inline int GetAssociatedInputCount() const { return m_associatedInputCount; }
  inline bool AssociatedInputCountHasBeenSet() const { return m_associatedInputCountHasBeenSet; }
  inline void SetAssociatedInputCount(int value) {
    m_associatedInputCountHasBeenSet = true;
    m_associatedInputCount = value;
  }
  inline RouterNetworkInterface& WithAssociatedInputCount(int value) {
    SetAssociatedInputCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where the router network interface is
   * located.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  RouterNetworkInterface& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the router network interface was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  RouterNetworkInterface& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the router network interface was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  RouterNetworkInterface& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key-value pairs that can be used to tag and organize this router network
   * interface.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RouterNetworkInterface& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RouterNetworkInterface& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_id;

  RouterNetworkInterfaceState m_state{RouterNetworkInterfaceState::NOT_SET};

  RouterNetworkInterfaceType m_networkInterfaceType{RouterNetworkInterfaceType::NOT_SET};

  RouterNetworkInterfaceConfiguration m_configuration;

  int m_associatedOutputCount{0};

  int m_associatedInputCount{0};

  Aws::String m_regionName;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_networkInterfaceTypeHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_associatedOutputCountHasBeenSet = false;
  bool m_associatedInputCountHasBeenSet = false;
  bool m_regionNameHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
