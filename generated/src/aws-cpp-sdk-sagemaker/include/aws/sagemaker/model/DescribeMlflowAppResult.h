/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AccountDefaultStatus.h>
#include <aws/sagemaker/model/MaintenanceStatus.h>
#include <aws/sagemaker/model/MlflowAppStatus.h>
#include <aws/sagemaker/model/ModelRegistrationMode.h>
#include <aws/sagemaker/model/UserContext.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class DescribeMlflowAppResult {
 public:
  AWS_SAGEMAKER_API DescribeMlflowAppResult() = default;
  AWS_SAGEMAKER_API DescribeMlflowAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeMlflowAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the MLflow App.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DescribeMlflowAppResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the MLflow App.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DescribeMlflowAppResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 URI of the general purpose bucket used as the MLflow App artifact
   * store.</p>
   */
  inline const Aws::String& GetArtifactStoreUri() const { return m_artifactStoreUri; }
  template <typename ArtifactStoreUriT = Aws::String>
  void SetArtifactStoreUri(ArtifactStoreUriT&& value) {
    m_artifactStoreUriHasBeenSet = true;
    m_artifactStoreUri = std::forward<ArtifactStoreUriT>(value);
  }
  template <typename ArtifactStoreUriT = Aws::String>
  DescribeMlflowAppResult& WithArtifactStoreUri(ArtifactStoreUriT&& value) {
    SetArtifactStoreUri(std::forward<ArtifactStoreUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MLflow version used.</p>
   */
  inline const Aws::String& GetMlflowVersion() const { return m_mlflowVersion; }
  template <typename MlflowVersionT = Aws::String>
  void SetMlflowVersion(MlflowVersionT&& value) {
    m_mlflowVersionHasBeenSet = true;
    m_mlflowVersion = std::forward<MlflowVersionT>(value);
  }
  template <typename MlflowVersionT = Aws::String>
  DescribeMlflowAppResult& WithMlflowVersion(MlflowVersionT&& value) {
    SetMlflowVersion(std::forward<MlflowVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for an IAM role in your account that the
   * MLflow App uses to access the artifact store in Amazon S3.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  DescribeMlflowAppResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current creation status of the described MLflow App.</p>
   */
  inline MlflowAppStatus GetStatus() const { return m_status; }
  inline void SetStatus(MlflowAppStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeMlflowAppResult& WithStatus(MlflowAppStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether automatic registration of new MLflow models to the SageMaker Model
   * Registry is enabled.</p>
   */
  inline ModelRegistrationMode GetModelRegistrationMode() const { return m_modelRegistrationMode; }
  inline void SetModelRegistrationMode(ModelRegistrationMode value) {
    m_modelRegistrationModeHasBeenSet = true;
    m_modelRegistrationMode = value;
  }
  inline DescribeMlflowAppResult& WithModelRegistrationMode(ModelRegistrationMode value) {
    SetModelRegistrationMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this MLflow app is the default for the entire account.</p>
   */
  inline AccountDefaultStatus GetAccountDefaultStatus() const { return m_accountDefaultStatus; }
  inline void SetAccountDefaultStatus(AccountDefaultStatus value) {
    m_accountDefaultStatusHasBeenSet = true;
    m_accountDefaultStatus = value;
  }
  inline DescribeMlflowAppResult& WithAccountDefaultStatus(AccountDefaultStatus value) {
    SetAccountDefaultStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of SageMaker Domain IDs for which this MLflow App is the default.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDefaultDomainIdList() const { return m_defaultDomainIdList; }
  template <typename DefaultDomainIdListT = Aws::Vector<Aws::String>>
  void SetDefaultDomainIdList(DefaultDomainIdListT&& value) {
    m_defaultDomainIdListHasBeenSet = true;
    m_defaultDomainIdList = std::forward<DefaultDomainIdListT>(value);
  }
  template <typename DefaultDomainIdListT = Aws::Vector<Aws::String>>
  DescribeMlflowAppResult& WithDefaultDomainIdList(DefaultDomainIdListT&& value) {
    SetDefaultDomainIdList(std::forward<DefaultDomainIdListT>(value));
    return *this;
  }
  template <typename DefaultDomainIdListT = Aws::String>
  DescribeMlflowAppResult& AddDefaultDomainIdList(DefaultDomainIdListT&& value) {
    m_defaultDomainIdListHasBeenSet = true;
    m_defaultDomainIdList.emplace_back(std::forward<DefaultDomainIdListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the MLflow App was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeMlflowAppResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const UserContext& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = UserContext>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = UserContext>
  DescribeMlflowAppResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the MLflow App was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DescribeMlflowAppResult& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
  template <typename LastModifiedByT = UserContext>
  void SetLastModifiedBy(LastModifiedByT&& value) {
    m_lastModifiedByHasBeenSet = true;
    m_lastModifiedBy = std::forward<LastModifiedByT>(value);
  }
  template <typename LastModifiedByT = UserContext>
  DescribeMlflowAppResult& WithLastModifiedBy(LastModifiedByT&& value) {
    SetLastModifiedBy(std::forward<LastModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The day and time of the week when weekly maintenance occurs.</p>
   */
  inline const Aws::String& GetWeeklyMaintenanceWindowStart() const { return m_weeklyMaintenanceWindowStart; }
  template <typename WeeklyMaintenanceWindowStartT = Aws::String>
  void SetWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) {
    m_weeklyMaintenanceWindowStartHasBeenSet = true;
    m_weeklyMaintenanceWindowStart = std::forward<WeeklyMaintenanceWindowStartT>(value);
  }
  template <typename WeeklyMaintenanceWindowStartT = Aws::String>
  DescribeMlflowAppResult& WithWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) {
    SetWeeklyMaintenanceWindowStart(std::forward<WeeklyMaintenanceWindowStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current maintenance status of the MLflow App.</p>
   */
  inline MaintenanceStatus GetMaintenanceStatus() const { return m_maintenanceStatus; }
  inline void SetMaintenanceStatus(MaintenanceStatus value) {
    m_maintenanceStatusHasBeenSet = true;
    m_maintenanceStatus = value;
  }
  inline DescribeMlflowAppResult& WithMaintenanceStatus(MaintenanceStatus value) {
    SetMaintenanceStatus(value);
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
  DescribeMlflowAppResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_artifactStoreUri;

  Aws::String m_mlflowVersion;

  Aws::String m_roleArn;

  MlflowAppStatus m_status{MlflowAppStatus::NOT_SET};

  ModelRegistrationMode m_modelRegistrationMode{ModelRegistrationMode::NOT_SET};

  AccountDefaultStatus m_accountDefaultStatus{AccountDefaultStatus::NOT_SET};

  Aws::Vector<Aws::String> m_defaultDomainIdList;

  Aws::Utils::DateTime m_creationTime{};

  UserContext m_createdBy;

  Aws::Utils::DateTime m_lastModifiedTime{};

  UserContext m_lastModifiedBy;

  Aws::String m_weeklyMaintenanceWindowStart;

  MaintenanceStatus m_maintenanceStatus{MaintenanceStatus::NOT_SET};

  Aws::String m_requestId;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_artifactStoreUriHasBeenSet = false;
  bool m_mlflowVersionHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_modelRegistrationModeHasBeenSet = false;
  bool m_accountDefaultStatusHasBeenSet = false;
  bool m_defaultDomainIdListHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedByHasBeenSet = false;
  bool m_weeklyMaintenanceWindowStartHasBeenSet = false;
  bool m_maintenanceStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
