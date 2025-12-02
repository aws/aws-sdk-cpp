/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AccountDefaultStatus.h>
#include <aws/sagemaker/model/ModelRegistrationMode.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class CreateMlflowAppRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API CreateMlflowAppRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateMlflowApp"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A string identifying the MLflow app name. This string is not part of the
   * tracking server ARN.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateMlflowAppRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 URI for a general purpose bucket to use as the MLflow App artifact
   * store.</p>
   */
  inline const Aws::String& GetArtifactStoreUri() const { return m_artifactStoreUri; }
  inline bool ArtifactStoreUriHasBeenSet() const { return m_artifactStoreUriHasBeenSet; }
  template <typename ArtifactStoreUriT = Aws::String>
  void SetArtifactStoreUri(ArtifactStoreUriT&& value) {
    m_artifactStoreUriHasBeenSet = true;
    m_artifactStoreUri = std::forward<ArtifactStoreUriT>(value);
  }
  template <typename ArtifactStoreUriT = Aws::String>
  CreateMlflowAppRequest& WithArtifactStoreUri(ArtifactStoreUriT&& value) {
    SetArtifactStoreUri(std::forward<ArtifactStoreUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for an IAM role in your account that the
   * MLflow App uses to access the artifact store in Amazon S3. The role should have
   * the <code>AmazonS3FullAccess</code> permission.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateMlflowAppRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to enable or disable automatic registration of new MLflow models to
   * the SageMaker Model Registry. To enable automatic model registration, set this
   * value to <code>AutoModelRegistrationEnabled</code>. To disable automatic model
   * registration, set this value to <code>AutoModelRegistrationDisabled</code>. If
   * not specified, <code>AutomaticModelRegistration</code> defaults to
   * <code>AutoModelRegistrationDisabled</code>.</p>
   */
  inline ModelRegistrationMode GetModelRegistrationMode() const { return m_modelRegistrationMode; }
  inline bool ModelRegistrationModeHasBeenSet() const { return m_modelRegistrationModeHasBeenSet; }
  inline void SetModelRegistrationMode(ModelRegistrationMode value) {
    m_modelRegistrationModeHasBeenSet = true;
    m_modelRegistrationMode = value;
  }
  inline CreateMlflowAppRequest& WithModelRegistrationMode(ModelRegistrationMode value) {
    SetModelRegistrationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
   * standard time that weekly maintenance updates are scheduled. For example:
   * TUE:03:30.</p>
   */
  inline const Aws::String& GetWeeklyMaintenanceWindowStart() const { return m_weeklyMaintenanceWindowStart; }
  inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }
  template <typename WeeklyMaintenanceWindowStartT = Aws::String>
  void SetWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) {
    m_weeklyMaintenanceWindowStartHasBeenSet = true;
    m_weeklyMaintenanceWindowStart = std::forward<WeeklyMaintenanceWindowStartT>(value);
  }
  template <typename WeeklyMaintenanceWindowStartT = Aws::String>
  CreateMlflowAppRequest& WithWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) {
    SetWeeklyMaintenanceWindowStart(std::forward<WeeklyMaintenanceWindowStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this MLflow app is the default for the entire account.</p>
   */
  inline AccountDefaultStatus GetAccountDefaultStatus() const { return m_accountDefaultStatus; }
  inline bool AccountDefaultStatusHasBeenSet() const { return m_accountDefaultStatusHasBeenSet; }
  inline void SetAccountDefaultStatus(AccountDefaultStatus value) {
    m_accountDefaultStatusHasBeenSet = true;
    m_accountDefaultStatus = value;
  }
  inline CreateMlflowAppRequest& WithAccountDefaultStatus(AccountDefaultStatus value) {
    SetAccountDefaultStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of SageMaker domain IDs for which this MLflow App is used as the
   * default.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDefaultDomainIdList() const { return m_defaultDomainIdList; }
  inline bool DefaultDomainIdListHasBeenSet() const { return m_defaultDomainIdListHasBeenSet; }
  template <typename DefaultDomainIdListT = Aws::Vector<Aws::String>>
  void SetDefaultDomainIdList(DefaultDomainIdListT&& value) {
    m_defaultDomainIdListHasBeenSet = true;
    m_defaultDomainIdList = std::forward<DefaultDomainIdListT>(value);
  }
  template <typename DefaultDomainIdListT = Aws::Vector<Aws::String>>
  CreateMlflowAppRequest& WithDefaultDomainIdList(DefaultDomainIdListT&& value) {
    SetDefaultDomainIdList(std::forward<DefaultDomainIdListT>(value));
    return *this;
  }
  template <typename DefaultDomainIdListT = Aws::String>
  CreateMlflowAppRequest& AddDefaultDomainIdList(DefaultDomainIdListT&& value) {
    m_defaultDomainIdListHasBeenSet = true;
    m_defaultDomainIdList.emplace_back(std::forward<DefaultDomainIdListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags consisting of key-value pairs used to manage metadata for the MLflow
   * App.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateMlflowAppRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateMlflowAppRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_artifactStoreUri;
  bool m_artifactStoreUriHasBeenSet = false;

  Aws::String m_roleArn;
  bool m_roleArnHasBeenSet = false;

  ModelRegistrationMode m_modelRegistrationMode{ModelRegistrationMode::NOT_SET};
  bool m_modelRegistrationModeHasBeenSet = false;

  Aws::String m_weeklyMaintenanceWindowStart;
  bool m_weeklyMaintenanceWindowStartHasBeenSet = false;

  AccountDefaultStatus m_accountDefaultStatus{AccountDefaultStatus::NOT_SET};
  bool m_accountDefaultStatusHasBeenSet = false;

  Aws::Vector<Aws::String> m_defaultDomainIdList;
  bool m_defaultDomainIdListHasBeenSet = false;

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
