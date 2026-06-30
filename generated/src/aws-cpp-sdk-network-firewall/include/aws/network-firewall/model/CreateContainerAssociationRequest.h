/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/NetworkFirewallRequest.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/ContainerMonitoringConfiguration.h>
#include <aws/network-firewall/model/ContainerMonitoringType.h>
#include <aws/network-firewall/model/Tag.h>

#include <utility>

namespace Aws {
namespace NetworkFirewall {
namespace Model {

/**
 */
class CreateContainerAssociationRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API CreateContainerAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateContainerAssociation"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the container association. You can't change the name
   * of a container association after you create it.</p>
   */
  inline const Aws::String& GetContainerAssociationName() const { return m_containerAssociationName; }
  inline bool ContainerAssociationNameHasBeenSet() const { return m_containerAssociationNameHasBeenSet; }
  template <typename ContainerAssociationNameT = Aws::String>
  void SetContainerAssociationName(ContainerAssociationNameT&& value) {
    m_containerAssociationNameHasBeenSet = true;
    m_containerAssociationName = std::forward<ContainerAssociationNameT>(value);
  }
  template <typename ContainerAssociationNameT = Aws::String>
  CreateContainerAssociationRequest& WithContainerAssociationName(ContainerAssociationNameT&& value) {
    SetContainerAssociationName(std::forward<ContainerAssociationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the container association.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateContainerAssociationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of container orchestration platform for the clusters in this
   * association. Valid values are <code>ECS</code> and <code>EKS</code>. You can't
   * change the type after creation.</p>
   */
  inline ContainerMonitoringType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ContainerMonitoringType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateContainerAssociationRequest& WithType(ContainerMonitoringType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of container monitoring configurations that define which clusters
   * and container attributes to monitor.</p>
   */
  inline const Aws::Vector<ContainerMonitoringConfiguration>& GetContainerMonitoringConfigurations() const {
    return m_containerMonitoringConfigurations;
  }
  inline bool ContainerMonitoringConfigurationsHasBeenSet() const { return m_containerMonitoringConfigurationsHasBeenSet; }
  template <typename ContainerMonitoringConfigurationsT = Aws::Vector<ContainerMonitoringConfiguration>>
  void SetContainerMonitoringConfigurations(ContainerMonitoringConfigurationsT&& value) {
    m_containerMonitoringConfigurationsHasBeenSet = true;
    m_containerMonitoringConfigurations = std::forward<ContainerMonitoringConfigurationsT>(value);
  }
  template <typename ContainerMonitoringConfigurationsT = Aws::Vector<ContainerMonitoringConfiguration>>
  CreateContainerAssociationRequest& WithContainerMonitoringConfigurations(ContainerMonitoringConfigurationsT&& value) {
    SetContainerMonitoringConfigurations(std::forward<ContainerMonitoringConfigurationsT>(value));
    return *this;
  }
  template <typename ContainerMonitoringConfigurationsT = ContainerMonitoringConfiguration>
  CreateContainerAssociationRequest& AddContainerMonitoringConfigurations(ContainerMonitoringConfigurationsT&& value) {
    m_containerMonitoringConfigurationsHasBeenSet = true;
    m_containerMonitoringConfigurations.emplace_back(std::forward<ContainerMonitoringConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key:value pairs to associate with the resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateContainerAssociationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateContainerAssociationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_containerAssociationName;

  Aws::String m_description;

  ContainerMonitoringType m_type{ContainerMonitoringType::NOT_SET};

  Aws::Vector<ContainerMonitoringConfiguration> m_containerMonitoringConfigurations;

  Aws::Vector<Tag> m_tags;
  bool m_containerAssociationNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_containerMonitoringConfigurationsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
