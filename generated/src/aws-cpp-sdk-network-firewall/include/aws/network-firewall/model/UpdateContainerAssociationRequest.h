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
class UpdateContainerAssociationRequest : public NetworkFirewallRequest {
 public:
  AWS_NETWORKFIREWALL_API UpdateContainerAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateContainerAssociation"; }

  AWS_NETWORKFIREWALL_API Aws::String SerializePayload() const override;

  AWS_NETWORKFIREWALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The descriptive name of the container association. You must specify the ARN
   * or the name, and you can specify both.</p>
   */
  inline const Aws::String& GetContainerAssociationName() const { return m_containerAssociationName; }
  inline bool ContainerAssociationNameHasBeenSet() const { return m_containerAssociationNameHasBeenSet; }
  template <typename ContainerAssociationNameT = Aws::String>
  void SetContainerAssociationName(ContainerAssociationNameT&& value) {
    m_containerAssociationNameHasBeenSet = true;
    m_containerAssociationName = std::forward<ContainerAssociationNameT>(value);
  }
  template <typename ContainerAssociationNameT = Aws::String>
  UpdateContainerAssociationRequest& WithContainerAssociationName(ContainerAssociationNameT&& value) {
    SetContainerAssociationName(std::forward<ContainerAssociationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the container association. You must specify
   * the ARN or the name, and you can specify both.</p>
   */
  inline const Aws::String& GetContainerAssociationArn() const { return m_containerAssociationArn; }
  inline bool ContainerAssociationArnHasBeenSet() const { return m_containerAssociationArnHasBeenSet; }
  template <typename ContainerAssociationArnT = Aws::String>
  void SetContainerAssociationArn(ContainerAssociationArnT&& value) {
    m_containerAssociationArnHasBeenSet = true;
    m_containerAssociationArn = std::forward<ContainerAssociationArnT>(value);
  }
  template <typename ContainerAssociationArnT = Aws::String>
  UpdateContainerAssociationRequest& WithContainerAssociationArn(ContainerAssociationArnT&& value) {
    SetContainerAssociationArn(std::forward<ContainerAssociationArnT>(value));
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
  UpdateContainerAssociationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of container orchestration platform. This must match the type
   * specified when the container association was created.</p>
   */
  inline ContainerMonitoringType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ContainerMonitoringType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline UpdateContainerAssociationRequest& WithType(ContainerMonitoringType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated list of container monitoring configurations that define which
   * clusters and container attributes to monitor.</p>
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
  UpdateContainerAssociationRequest& WithContainerMonitoringConfigurations(ContainerMonitoringConfigurationsT&& value) {
    SetContainerMonitoringConfigurations(std::forward<ContainerMonitoringConfigurationsT>(value));
    return *this;
  }
  template <typename ContainerMonitoringConfigurationsT = ContainerMonitoringConfiguration>
  UpdateContainerAssociationRequest& AddContainerMonitoringConfigurations(ContainerMonitoringConfigurationsT&& value) {
    m_containerMonitoringConfigurationsHasBeenSet = true;
    m_containerMonitoringConfigurations.emplace_back(std::forward<ContainerMonitoringConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key:value pairs associated with the resource.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  UpdateContainerAssociationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  UpdateContainerAssociationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic locking. Network Firewall returns a token to your
   * requests that access the container association. The token marks the state of the
   * container association resource at the time of the request. To make an update to
   * the container association, provide the token in your request. Network Firewall
   * uses the token to ensure that the container association hasn't changed since you
   * last retrieved it. If it has changed, the operation fails with an
   * <code>InvalidTokenException</code>. If this happens, retrieve the container
   * association again to get a current copy of it with a new token. Reapply your
   * changes as needed, then try the operation again using the new token.</p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateContainerAssociationRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_containerAssociationName;

  Aws::String m_containerAssociationArn;

  Aws::String m_description;

  ContainerMonitoringType m_type{ContainerMonitoringType::NOT_SET};

  Aws::Vector<ContainerMonitoringConfiguration> m_containerMonitoringConfigurations;

  Aws::Vector<Tag> m_tags;

  Aws::String m_updateToken;
  bool m_containerAssociationNameHasBeenSet = false;
  bool m_containerAssociationArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_containerMonitoringConfigurationsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
