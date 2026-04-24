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
#include <aws/mgn/model/TargetNetworkUpdate.h>
#include <aws/mgn/model/TargetS3ConfigurationUpdate.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class UpdateNetworkMigrationDefinitionRequest : public MgnRequest {
 public:
  AWS_MGN_API UpdateNetworkMigrationDefinitionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkMigrationDefinition"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the network migration definition to update.</p>
   */
  inline const Aws::String& GetNetworkMigrationDefinitionID() const { return m_networkMigrationDefinitionID; }
  inline bool NetworkMigrationDefinitionIDHasBeenSet() const { return m_networkMigrationDefinitionIDHasBeenSet; }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  void SetNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    m_networkMigrationDefinitionIDHasBeenSet = true;
    m_networkMigrationDefinitionID = std::forward<NetworkMigrationDefinitionIDT>(value);
  }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  UpdateNetworkMigrationDefinitionRequest& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    SetNetworkMigrationDefinitionID(std::forward<NetworkMigrationDefinitionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name of the network migration definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateNetworkMigrationDefinitionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the network migration definition.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateNetworkMigrationDefinitionRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated list of source configurations.</p>
   */
  inline const Aws::Vector<SourceConfiguration>& GetSourceConfigurations() const { return m_sourceConfigurations; }
  inline bool SourceConfigurationsHasBeenSet() const { return m_sourceConfigurationsHasBeenSet; }
  template <typename SourceConfigurationsT = Aws::Vector<SourceConfiguration>>
  void SetSourceConfigurations(SourceConfigurationsT&& value) {
    m_sourceConfigurationsHasBeenSet = true;
    m_sourceConfigurations = std::forward<SourceConfigurationsT>(value);
  }
  template <typename SourceConfigurationsT = Aws::Vector<SourceConfiguration>>
  UpdateNetworkMigrationDefinitionRequest& WithSourceConfigurations(SourceConfigurationsT&& value) {
    SetSourceConfigurations(std::forward<SourceConfigurationsT>(value));
    return *this;
  }
  template <typename SourceConfigurationsT = SourceConfiguration>
  UpdateNetworkMigrationDefinitionRequest& AddSourceConfigurations(SourceConfigurationsT&& value) {
    m_sourceConfigurationsHasBeenSet = true;
    m_sourceConfigurations.emplace_back(std::forward<SourceConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated S3 configuration for storing the target network artifacts.</p>
   */
  inline const TargetS3ConfigurationUpdate& GetTargetS3Configuration() const { return m_targetS3Configuration; }
  inline bool TargetS3ConfigurationHasBeenSet() const { return m_targetS3ConfigurationHasBeenSet; }
  template <typename TargetS3ConfigurationT = TargetS3ConfigurationUpdate>
  void SetTargetS3Configuration(TargetS3ConfigurationT&& value) {
    m_targetS3ConfigurationHasBeenSet = true;
    m_targetS3Configuration = std::forward<TargetS3ConfigurationT>(value);
  }
  template <typename TargetS3ConfigurationT = TargetS3ConfigurationUpdate>
  UpdateNetworkMigrationDefinitionRequest& WithTargetS3Configuration(TargetS3ConfigurationT&& value) {
    SetTargetS3Configuration(std::forward<TargetS3ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated target network configuration.</p>
   */
  inline const TargetNetworkUpdate& GetTargetNetwork() const { return m_targetNetwork; }
  inline bool TargetNetworkHasBeenSet() const { return m_targetNetworkHasBeenSet; }
  template <typename TargetNetworkT = TargetNetworkUpdate>
  void SetTargetNetwork(TargetNetworkT&& value) {
    m_targetNetworkHasBeenSet = true;
    m_targetNetwork = std::forward<TargetNetworkT>(value);
  }
  template <typename TargetNetworkT = TargetNetworkUpdate>
  UpdateNetworkMigrationDefinitionRequest& WithTargetNetwork(TargetNetworkT&& value) {
    SetTargetNetwork(std::forward<TargetNetworkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated target deployment configuration.</p>
   */
  inline TargetDeployment GetTargetDeployment() const { return m_targetDeployment; }
  inline bool TargetDeploymentHasBeenSet() const { return m_targetDeploymentHasBeenSet; }
  inline void SetTargetDeployment(TargetDeployment value) {
    m_targetDeploymentHasBeenSet = true;
    m_targetDeployment = value;
  }
  inline UpdateNetworkMigrationDefinitionRequest& WithTargetDeployment(TargetDeployment value) {
    SetTargetDeployment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated scope tags for the network migration definition.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetScopeTags() const { return m_scopeTags; }
  inline bool ScopeTagsHasBeenSet() const { return m_scopeTagsHasBeenSet; }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetScopeTags(ScopeTagsT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags = std::forward<ScopeTagsT>(value);
  }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  UpdateNetworkMigrationDefinitionRequest& WithScopeTags(ScopeTagsT&& value) {
    SetScopeTags(std::forward<ScopeTagsT>(value));
    return *this;
  }
  template <typename ScopeTagsKeyT = Aws::String, typename ScopeTagsValueT = Aws::String>
  UpdateNetworkMigrationDefinitionRequest& AddScopeTags(ScopeTagsKeyT&& key, ScopeTagsValueT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags.emplace(std::forward<ScopeTagsKeyT>(key), std::forward<ScopeTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkMigrationDefinitionID;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<SourceConfiguration> m_sourceConfigurations;

  TargetS3ConfigurationUpdate m_targetS3Configuration;

  TargetNetworkUpdate m_targetNetwork;

  TargetDeployment m_targetDeployment{TargetDeployment::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_scopeTags;
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sourceConfigurationsHasBeenSet = false;
  bool m_targetS3ConfigurationHasBeenSet = false;
  bool m_targetNetworkHasBeenSet = false;
  bool m_targetDeploymentHasBeenSet = false;
  bool m_scopeTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
