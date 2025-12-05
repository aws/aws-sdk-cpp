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

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class UpdateMlflowAppRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API UpdateMlflowAppRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateMlflowApp"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the MLflow App to update.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateMlflowAppRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the MLflow App to update.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateMlflowAppRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new S3 URI for the general purpose bucket to use as the artifact store
   * for the MLflow App.</p>
   */
  inline const Aws::String& GetArtifactStoreUri() const { return m_artifactStoreUri; }
  inline bool ArtifactStoreUriHasBeenSet() const { return m_artifactStoreUriHasBeenSet; }
  template <typename ArtifactStoreUriT = Aws::String>
  void SetArtifactStoreUri(ArtifactStoreUriT&& value) {
    m_artifactStoreUriHasBeenSet = true;
    m_artifactStoreUri = std::forward<ArtifactStoreUriT>(value);
  }
  template <typename ArtifactStoreUriT = Aws::String>
  UpdateMlflowAppRequest& WithArtifactStoreUri(ArtifactStoreUriT&& value) {
    SetArtifactStoreUri(std::forward<ArtifactStoreUriT>(value));
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
   * <code>AutoModelRegistrationEnabled</code> </p>
   */
  inline ModelRegistrationMode GetModelRegistrationMode() const { return m_modelRegistrationMode; }
  inline bool ModelRegistrationModeHasBeenSet() const { return m_modelRegistrationModeHasBeenSet; }
  inline void SetModelRegistrationMode(ModelRegistrationMode value) {
    m_modelRegistrationModeHasBeenSet = true;
    m_modelRegistrationMode = value;
  }
  inline UpdateMlflowAppRequest& WithModelRegistrationMode(ModelRegistrationMode value) {
    SetModelRegistrationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new weekly maintenance window start day and time to update. The
   * maintenance window day and time should be in Coordinated Universal Time (UTC)
   * 24-hour standard time. For example: TUE:03:30.</p>
   */
  inline const Aws::String& GetWeeklyMaintenanceWindowStart() const { return m_weeklyMaintenanceWindowStart; }
  inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }
  template <typename WeeklyMaintenanceWindowStartT = Aws::String>
  void SetWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) {
    m_weeklyMaintenanceWindowStartHasBeenSet = true;
    m_weeklyMaintenanceWindowStart = std::forward<WeeklyMaintenanceWindowStartT>(value);
  }
  template <typename WeeklyMaintenanceWindowStartT = Aws::String>
  UpdateMlflowAppRequest& WithWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) {
    SetWeeklyMaintenanceWindowStart(std::forward<WeeklyMaintenanceWindowStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of SageMaker Domain IDs for which this MLflow App is the default.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDefaultDomainIdList() const { return m_defaultDomainIdList; }
  inline bool DefaultDomainIdListHasBeenSet() const { return m_defaultDomainIdListHasBeenSet; }
  template <typename DefaultDomainIdListT = Aws::Vector<Aws::String>>
  void SetDefaultDomainIdList(DefaultDomainIdListT&& value) {
    m_defaultDomainIdListHasBeenSet = true;
    m_defaultDomainIdList = std::forward<DefaultDomainIdListT>(value);
  }
  template <typename DefaultDomainIdListT = Aws::Vector<Aws::String>>
  UpdateMlflowAppRequest& WithDefaultDomainIdList(DefaultDomainIdListT&& value) {
    SetDefaultDomainIdList(std::forward<DefaultDomainIdListT>(value));
    return *this;
  }
  template <typename DefaultDomainIdListT = Aws::String>
  UpdateMlflowAppRequest& AddDefaultDomainIdList(DefaultDomainIdListT&& value) {
    m_defaultDomainIdListHasBeenSet = true;
    m_defaultDomainIdList.emplace_back(std::forward<DefaultDomainIdListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this this MLflow App is the default for the account.</p>
   */
  inline AccountDefaultStatus GetAccountDefaultStatus() const { return m_accountDefaultStatus; }
  inline bool AccountDefaultStatusHasBeenSet() const { return m_accountDefaultStatusHasBeenSet; }
  inline void SetAccountDefaultStatus(AccountDefaultStatus value) {
    m_accountDefaultStatusHasBeenSet = true;
    m_accountDefaultStatus = value;
  }
  inline UpdateMlflowAppRequest& WithAccountDefaultStatus(AccountDefaultStatus value) {
    SetAccountDefaultStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_artifactStoreUri;

  ModelRegistrationMode m_modelRegistrationMode{ModelRegistrationMode::NOT_SET};

  Aws::String m_weeklyMaintenanceWindowStart;

  Aws::Vector<Aws::String> m_defaultDomainIdList;

  AccountDefaultStatus m_accountDefaultStatus{AccountDefaultStatus::NOT_SET};
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_artifactStoreUriHasBeenSet = false;
  bool m_modelRegistrationModeHasBeenSet = false;
  bool m_weeklyMaintenanceWindowStartHasBeenSet = false;
  bool m_defaultDomainIdListHasBeenSet = false;
  bool m_accountDefaultStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
