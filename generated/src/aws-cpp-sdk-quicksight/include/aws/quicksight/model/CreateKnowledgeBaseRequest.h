/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccessControlConfiguration.h>
#include <aws/quicksight/model/KnowledgeBaseConfiguration.h>
#include <aws/quicksight/model/MediaExtractionConfiguration.h>
#include <aws/quicksight/model/ResourcePermission.h>
#include <aws/quicksight/model/Tag.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class CreateKnowledgeBaseRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API CreateKnowledgeBaseRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateKnowledgeBase"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the knowledge
   * base.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  CreateKnowledgeBaseRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  CreateKnowledgeBaseRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the knowledge base.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateKnowledgeBaseRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the data source for the knowledge base.</p>
   */
  inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
  inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
  template <typename DataSourceArnT = Aws::String>
  void SetDataSourceArn(DataSourceArnT&& value) {
    m_dataSourceArnHasBeenSet = true;
    m_dataSourceArn = std::forward<DataSourceArnT>(value);
  }
  template <typename DataSourceArnT = Aws::String>
  CreateKnowledgeBaseRequest& WithDataSourceArn(DataSourceArnT&& value) {
    SetDataSourceArn(std::forward<DataSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const KnowledgeBaseConfiguration& GetKnowledgeBaseConfiguration() const { return m_knowledgeBaseConfiguration; }
  inline bool KnowledgeBaseConfigurationHasBeenSet() const { return m_knowledgeBaseConfigurationHasBeenSet; }
  template <typename KnowledgeBaseConfigurationT = KnowledgeBaseConfiguration>
  void SetKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) {
    m_knowledgeBaseConfigurationHasBeenSet = true;
    m_knowledgeBaseConfiguration = std::forward<KnowledgeBaseConfigurationT>(value);
  }
  template <typename KnowledgeBaseConfigurationT = KnowledgeBaseConfiguration>
  CreateKnowledgeBaseRequest& WithKnowledgeBaseConfiguration(KnowledgeBaseConfigurationT&& value) {
    SetKnowledgeBaseConfiguration(std::forward<KnowledgeBaseConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the knowledge base. If you don't specify a description, the
   * knowledge base is created without one.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateKnowledgeBaseRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of resource permissions on the knowledge base. Each entry grants a
   * specified Amazon QuickSight principal either owner or viewer access. If you
   * don't specify permissions, only the primary owner (if provided) receives owner
   * access.</p>
   */
  inline const Aws::Vector<ResourcePermission>& GetPermissions() const { return m_permissions; }
  inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
  template <typename PermissionsT = Aws::Vector<ResourcePermission>>
  void SetPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions = std::forward<PermissionsT>(value);
  }
  template <typename PermissionsT = Aws::Vector<ResourcePermission>>
  CreateKnowledgeBaseRequest& WithPermissions(PermissionsT&& value) {
    SetPermissions(std::forward<PermissionsT>(value));
    return *this;
  }
  template <typename PermissionsT = ResourcePermission>
  CreateKnowledgeBaseRequest& AddPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions.emplace_back(std::forward<PermissionsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MediaExtractionConfiguration& GetMediaExtractionConfiguration() const { return m_mediaExtractionConfiguration; }
  inline bool MediaExtractionConfigurationHasBeenSet() const { return m_mediaExtractionConfigurationHasBeenSet; }
  template <typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
  void SetMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) {
    m_mediaExtractionConfigurationHasBeenSet = true;
    m_mediaExtractionConfiguration = std::forward<MediaExtractionConfigurationT>(value);
  }
  template <typename MediaExtractionConfigurationT = MediaExtractionConfiguration>
  CreateKnowledgeBaseRequest& WithMediaExtractionConfiguration(MediaExtractionConfigurationT&& value) {
    SetMediaExtractionConfiguration(std::forward<MediaExtractionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access control configuration for the knowledge base. If you don't specify
   * this parameter, document-level ACLs are disabled.</p>
   */
  inline const AccessControlConfiguration& GetAccessControlConfiguration() const { return m_accessControlConfiguration; }
  inline bool AccessControlConfigurationHasBeenSet() const { return m_accessControlConfigurationHasBeenSet; }
  template <typename AccessControlConfigurationT = AccessControlConfiguration>
  void SetAccessControlConfiguration(AccessControlConfigurationT&& value) {
    m_accessControlConfigurationHasBeenSet = true;
    m_accessControlConfiguration = std::forward<AccessControlConfigurationT>(value);
  }
  template <typename AccessControlConfigurationT = AccessControlConfiguration>
  CreateKnowledgeBaseRequest& WithAccessControlConfiguration(AccessControlConfigurationT&& value) {
    SetAccessControlConfiguration(std::forward<AccessControlConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the primary owner for the knowledge base.
   * The specified user is always granted owner access, regardless of what is
   * specified in the <code>Permissions</code> field. If you don't specify a primary
   * owner, the knowledge base is created without one.</p>
   */
  inline const Aws::String& GetPrimaryOwnerArn() const { return m_primaryOwnerArn; }
  inline bool PrimaryOwnerArnHasBeenSet() const { return m_primaryOwnerArnHasBeenSet; }
  template <typename PrimaryOwnerArnT = Aws::String>
  void SetPrimaryOwnerArn(PrimaryOwnerArnT&& value) {
    m_primaryOwnerArnHasBeenSet = true;
    m_primaryOwnerArn = std::forward<PrimaryOwnerArnT>(value);
  }
  template <typename PrimaryOwnerArnT = Aws::String>
  CreateKnowledgeBaseRequest& WithPrimaryOwnerArn(PrimaryOwnerArnT&& value) {
    SetPrimaryOwnerArn(std::forward<PrimaryOwnerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the knowledge base. If you don't specify tags, the
   * knowledge base is created without tags.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateKnowledgeBaseRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateKnowledgeBaseRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_knowledgeBaseId;

  Aws::String m_name;

  Aws::String m_dataSourceArn;

  KnowledgeBaseConfiguration m_knowledgeBaseConfiguration;

  Aws::String m_description;

  Aws::Vector<ResourcePermission> m_permissions;

  MediaExtractionConfiguration m_mediaExtractionConfiguration;

  AccessControlConfiguration m_accessControlConfiguration;

  Aws::String m_primaryOwnerArn;

  Aws::Vector<Tag> m_tags;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_dataSourceArnHasBeenSet = false;
  bool m_knowledgeBaseConfigurationHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_permissionsHasBeenSet = false;
  bool m_mediaExtractionConfigurationHasBeenSet = false;
  bool m_accessControlConfigurationHasBeenSet = false;
  bool m_primaryOwnerArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
