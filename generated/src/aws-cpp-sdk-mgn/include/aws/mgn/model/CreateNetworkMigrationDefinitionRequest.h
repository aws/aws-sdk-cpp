/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SourceConfiguration.h>
#include <aws/mgn/model/TargetDeployment.h>
#include <aws/mgn/model/TargetNetwork.h>
#include <aws/mgn/model/TargetS3Configuration.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class CreateNetworkMigrationDefinitionRequest : public MgnRequest {
 public:
  AWS_MGN_API CreateNetworkMigrationDefinitionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkMigrationDefinition"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the network migration definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateNetworkMigrationDefinitionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the network migration definition.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateNetworkMigrationDefinitionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of source configurations for the network migration.</p>
   */
  inline const Aws::Vector<SourceConfiguration>& GetSourceConfigurations() const { return m_sourceConfigurations; }
  inline bool SourceConfigurationsHasBeenSet() const { return m_sourceConfigurationsHasBeenSet; }
  template <typename SourceConfigurationsT = Aws::Vector<SourceConfiguration>>
  void SetSourceConfigurations(SourceConfigurationsT&& value) {
    m_sourceConfigurationsHasBeenSet = true;
    m_sourceConfigurations = std::forward<SourceConfigurationsT>(value);
  }
  template <typename SourceConfigurationsT = Aws::Vector<SourceConfiguration>>
  CreateNetworkMigrationDefinitionRequest& WithSourceConfigurations(SourceConfigurationsT&& value) {
    SetSourceConfigurations(std::forward<SourceConfigurationsT>(value));
    return *this;
  }
  template <typename SourceConfigurationsT = SourceConfiguration>
  CreateNetworkMigrationDefinitionRequest& AddSourceConfigurations(SourceConfigurationsT&& value) {
    m_sourceConfigurationsHasBeenSet = true;
    m_sourceConfigurations.emplace_back(std::forward<SourceConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 configuration for storing the target network artifacts.</p>
   */
  inline const TargetS3Configuration& GetTargetS3Configuration() const { return m_targetS3Configuration; }
  inline bool TargetS3ConfigurationHasBeenSet() const { return m_targetS3ConfigurationHasBeenSet; }
  template <typename TargetS3ConfigurationT = TargetS3Configuration>
  void SetTargetS3Configuration(TargetS3ConfigurationT&& value) {
    m_targetS3ConfigurationHasBeenSet = true;
    m_targetS3Configuration = std::forward<TargetS3ConfigurationT>(value);
  }
  template <typename TargetS3ConfigurationT = TargetS3Configuration>
  CreateNetworkMigrationDefinitionRequest& WithTargetS3Configuration(TargetS3ConfigurationT&& value) {
    SetTargetS3Configuration(std::forward<TargetS3ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target network configuration including topology and CIDR ranges.</p>
   */
  inline const TargetNetwork& GetTargetNetwork() const { return m_targetNetwork; }
  inline bool TargetNetworkHasBeenSet() const { return m_targetNetworkHasBeenSet; }
  template <typename TargetNetworkT = TargetNetwork>
  void SetTargetNetwork(TargetNetworkT&& value) {
    m_targetNetworkHasBeenSet = true;
    m_targetNetwork = std::forward<TargetNetworkT>(value);
  }
  template <typename TargetNetworkT = TargetNetwork>
  CreateNetworkMigrationDefinitionRequest& WithTargetNetwork(TargetNetworkT&& value) {
    SetTargetNetwork(std::forward<TargetNetworkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target deployment configuration for the migrated network.</p>
   */
  inline TargetDeployment GetTargetDeployment() const { return m_targetDeployment; }
  inline bool TargetDeploymentHasBeenSet() const { return m_targetDeploymentHasBeenSet; }
  inline void SetTargetDeployment(TargetDeployment value) {
    m_targetDeploymentHasBeenSet = true;
    m_targetDeployment = value;
  }
  inline CreateNetworkMigrationDefinitionRequest& WithTargetDeployment(TargetDeployment value) {
    SetTargetDeployment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to assign to the network migration definition.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateNetworkMigrationDefinitionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateNetworkMigrationDefinitionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scope tags for the network migration definition to control access and
   * organization.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetScopeTags() const { return m_scopeTags; }
  inline bool ScopeTagsHasBeenSet() const { return m_scopeTagsHasBeenSet; }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetScopeTags(ScopeTagsT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags = std::forward<ScopeTagsT>(value);
  }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  CreateNetworkMigrationDefinitionRequest& WithScopeTags(ScopeTagsT&& value) {
    SetScopeTags(std::forward<ScopeTagsT>(value));
    return *this;
  }
  template <typename ScopeTagsKeyT = Aws::String, typename ScopeTagsValueT = Aws::String>
  CreateNetworkMigrationDefinitionRequest& AddScopeTags(ScopeTagsKeyT&& key, ScopeTagsValueT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags.emplace(std::forward<ScopeTagsKeyT>(key), std::forward<ScopeTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<SourceConfiguration> m_sourceConfigurations;

  TargetS3Configuration m_targetS3Configuration;

  TargetNetwork m_targetNetwork;

  TargetDeployment m_targetDeployment{TargetDeployment::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::Map<Aws::String, Aws::String> m_scopeTags;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sourceConfigurationsHasBeenSet = false;
  bool m_targetS3ConfigurationHasBeenSet = false;
  bool m_targetNetworkHasBeenSet = false;
  bool m_targetDeploymentHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_scopeTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
