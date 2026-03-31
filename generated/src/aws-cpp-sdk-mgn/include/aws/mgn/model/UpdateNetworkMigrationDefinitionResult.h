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
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/SourceConfiguration.h>
#include <aws/mgn/model/TargetDeployment.h>
#include <aws/mgn/model/TargetNetwork.h>
#include <aws/mgn/model/TargetS3Configuration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {
class UpdateNetworkMigrationDefinitionResult {
 public:
  AWS_MGN_API UpdateNetworkMigrationDefinitionResult() = default;
  AWS_MGN_API UpdateNetworkMigrationDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MGN_API UpdateNetworkMigrationDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the network migration definition.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateNetworkMigrationDefinitionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the network migration definition.</p>
   */
  inline const Aws::String& GetNetworkMigrationDefinitionID() const { return m_networkMigrationDefinitionID; }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  void SetNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    m_networkMigrationDefinitionIDHasBeenSet = true;
    m_networkMigrationDefinitionID = std::forward<NetworkMigrationDefinitionIDT>(value);
  }
  template <typename NetworkMigrationDefinitionIDT = Aws::String>
  UpdateNetworkMigrationDefinitionResult& WithNetworkMigrationDefinitionID(NetworkMigrationDefinitionIDT&& value) {
    SetNetworkMigrationDefinitionID(std::forward<NetworkMigrationDefinitionIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the network migration definition.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateNetworkMigrationDefinitionResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the network migration definition.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateNetworkMigrationDefinitionResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of source configurations for the network migration.</p>
   */
  inline const Aws::Vector<SourceConfiguration>& GetSourceConfigurations() const { return m_sourceConfigurations; }
  template <typename SourceConfigurationsT = Aws::Vector<SourceConfiguration>>
  void SetSourceConfigurations(SourceConfigurationsT&& value) {
    m_sourceConfigurationsHasBeenSet = true;
    m_sourceConfigurations = std::forward<SourceConfigurationsT>(value);
  }
  template <typename SourceConfigurationsT = Aws::Vector<SourceConfiguration>>
  UpdateNetworkMigrationDefinitionResult& WithSourceConfigurations(SourceConfigurationsT&& value) {
    SetSourceConfigurations(std::forward<SourceConfigurationsT>(value));
    return *this;
  }
  template <typename SourceConfigurationsT = SourceConfiguration>
  UpdateNetworkMigrationDefinitionResult& AddSourceConfigurations(SourceConfigurationsT&& value) {
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
  template <typename TargetS3ConfigurationT = TargetS3Configuration>
  void SetTargetS3Configuration(TargetS3ConfigurationT&& value) {
    m_targetS3ConfigurationHasBeenSet = true;
    m_targetS3Configuration = std::forward<TargetS3ConfigurationT>(value);
  }
  template <typename TargetS3ConfigurationT = TargetS3Configuration>
  UpdateNetworkMigrationDefinitionResult& WithTargetS3Configuration(TargetS3ConfigurationT&& value) {
    SetTargetS3Configuration(std::forward<TargetS3ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target network configuration including topology and CIDR ranges.</p>
   */
  inline const TargetNetwork& GetTargetNetwork() const { return m_targetNetwork; }
  template <typename TargetNetworkT = TargetNetwork>
  void SetTargetNetwork(TargetNetworkT&& value) {
    m_targetNetworkHasBeenSet = true;
    m_targetNetwork = std::forward<TargetNetworkT>(value);
  }
  template <typename TargetNetworkT = TargetNetwork>
  UpdateNetworkMigrationDefinitionResult& WithTargetNetwork(TargetNetworkT&& value) {
    SetTargetNetwork(std::forward<TargetNetworkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target deployment configuration for the migrated network.</p>
   */
  inline TargetDeployment GetTargetDeployment() const { return m_targetDeployment; }
  inline void SetTargetDeployment(TargetDeployment value) {
    m_targetDeploymentHasBeenSet = true;
    m_targetDeployment = value;
  }
  inline UpdateNetworkMigrationDefinitionResult& WithTargetDeployment(TargetDeployment value) {
    SetTargetDeployment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the network migration definition was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  UpdateNetworkMigrationDefinitionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the network migration definition was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateNetworkMigrationDefinitionResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags assigned to the network migration definition.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  UpdateNetworkMigrationDefinitionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  UpdateNetworkMigrationDefinitionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scope tags for the network migration definition.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetScopeTags() const { return m_scopeTags; }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetScopeTags(ScopeTagsT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags = std::forward<ScopeTagsT>(value);
  }
  template <typename ScopeTagsT = Aws::Map<Aws::String, Aws::String>>
  UpdateNetworkMigrationDefinitionResult& WithScopeTags(ScopeTagsT&& value) {
    SetScopeTags(std::forward<ScopeTagsT>(value));
    return *this;
  }
  template <typename ScopeTagsKeyT = Aws::String, typename ScopeTagsValueT = Aws::String>
  UpdateNetworkMigrationDefinitionResult& AddScopeTags(ScopeTagsKeyT&& key, ScopeTagsValueT&& value) {
    m_scopeTagsHasBeenSet = true;
    m_scopeTags.emplace(std::forward<ScopeTagsKeyT>(key), std::forward<ScopeTagsValueT>(value));
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
  UpdateNetworkMigrationDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_networkMigrationDefinitionID;

  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<SourceConfiguration> m_sourceConfigurations;

  TargetS3Configuration m_targetS3Configuration;

  TargetNetwork m_targetNetwork;

  TargetDeployment m_targetDeployment{TargetDeployment::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::Map<Aws::String, Aws::String> m_scopeTags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_networkMigrationDefinitionIDHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sourceConfigurationsHasBeenSet = false;
  bool m_targetS3ConfigurationHasBeenSet = false;
  bool m_targetNetworkHasBeenSet = false;
  bool m_targetDeploymentHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_scopeTagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
