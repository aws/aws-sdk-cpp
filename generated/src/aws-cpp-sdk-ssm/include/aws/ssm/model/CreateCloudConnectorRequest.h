/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CloudConnectorConfiguration.h>
#include <aws/ssm/model/Tag.h>

#include <utility>

namespace Aws {
namespace SSM {
namespace Model {

/**
 */
class CreateCloudConnectorRequest : public SSMRequest {
 public:
  AWS_SSM_API CreateCloudConnectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCloudConnector"; }

  AWS_SSM_API Aws::String SerializePayload() const override;

  AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A friendly name for the cloud connector.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateCloudConnectorRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the cloud connector uses
   * to communicate with the third-party cloud environment.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateCloudConnectorRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the cloud connector.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateCloudConnectorRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration details for connecting to the third-party cloud
   * environment.</p>
   */
  inline const CloudConnectorConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = CloudConnectorConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = CloudConnectorConfiguration>
  CreateCloudConnectorRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services Config connector associated with this
   * cloud connector.</p>
   */
  inline const Aws::String& GetConfigConnectorArn() const { return m_configConnectorArn; }
  inline bool ConfigConnectorArnHasBeenSet() const { return m_configConnectorArnHasBeenSet; }
  template <typename ConfigConnectorArnT = Aws::String>
  void SetConfigConnectorArn(ConfigConnectorArnT&& value) {
    m_configConnectorArnHasBeenSet = true;
    m_configConnectorArn = std::forward<ConfigConnectorArnT>(value);
  }
  template <typename ConfigConnectorArnT = Aws::String>
  CreateCloudConnectorRequest& WithConfigConnectorArn(ConfigConnectorArnT&& value) {
    SetConfigConnectorArn(std::forward<ConfigConnectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional metadata that you assign to a resource. Tags enable you to
   * categorize a resource in different ways, such as by purpose, owner, or
   * environment.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateCloudConnectorRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateCloudConnectorRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;

  Aws::String m_roleArn;

  Aws::String m_description;

  CloudConnectorConfiguration m_configuration;

  Aws::String m_configConnectorArn;

  Aws::Vector<Tag> m_tags;
  bool m_displayNameHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_configConnectorArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
