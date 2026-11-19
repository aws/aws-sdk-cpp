/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/marketplace-deployment/model/DeploymentConfigurationDetail.h>
#include <aws/marketplace-deployment/model/DeploymentConfigurationJobErrorCode.h>
#include <aws/marketplace-deployment/model/DeploymentConfigurationJobStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDeployment {
namespace Model {
class GetDeploymentConfigurationJobResult {
 public:
  AWS_MARKETPLACEDEPLOYMENT_API GetDeploymentConfigurationJobResult() = default;
  AWS_MARKETPLACEDEPLOYMENT_API GetDeploymentConfigurationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDEPLOYMENT_API GetDeploymentConfigurationJobResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the deployment configuration job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  GetDeploymentConfigurationJobResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment configuration submitted with the job.</p>
   */
  inline const DeploymentConfigurationDetail& GetConfiguration() const { return m_configuration; }
  template <typename ConfigurationT = DeploymentConfigurationDetail>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = DeploymentConfigurationDetail>
  GetDeploymentConfigurationJobResult& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the deployment configuration job.</p>
   */
  inline DeploymentConfigurationJobStatus GetStatus() const { return m_status; }
  inline void SetStatus(DeploymentConfigurationJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDeploymentConfigurationJobResult& WithStatus(DeploymentConfigurationJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetDeploymentConfigurationJobResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the deployment configuration. This field is
   * present only when the job status is <code>SUCCEEDED</code>.</p>
   */
  inline const Aws::String& GetConfigurationArn() const { return m_configurationArn; }
  template <typename ConfigurationArnT = Aws::String>
  void SetConfigurationArn(ConfigurationArnT&& value) {
    m_configurationArnHasBeenSet = true;
    m_configurationArn = std::forward<ConfigurationArnT>(value);
  }
  template <typename ConfigurationArnT = Aws::String>
  GetDeploymentConfigurationJobResult& WithConfigurationArn(ConfigurationArnT&& value) {
    SetConfigurationArn(std::forward<ConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the job reached the <code>SUCCEEDED</code> or
   * <code>FAILED</code> status.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  GetDeploymentConfigurationJobResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error code that describes why the job failed. This field is present only
   * when the job status is <code>FAILED</code>.</p>
   */
  inline DeploymentConfigurationJobErrorCode GetErrorCode() const { return m_errorCode; }
  inline void SetErrorCode(DeploymentConfigurationJobErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline GetDeploymentConfigurationJobResult& WithErrorCode(DeploymentConfigurationJobErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that describes why the job failed. This field is present only when
   * the job status is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  GetDeploymentConfigurationJobResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
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
  GetDeploymentConfigurationJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_jobId;

  DeploymentConfigurationDetail m_configuration;

  DeploymentConfigurationJobStatus m_status{DeploymentConfigurationJobStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_configurationArn;

  Aws::Utils::DateTime m_endedAt{};

  DeploymentConfigurationJobErrorCode m_errorCode{DeploymentConfigurationJobErrorCode::NOT_SET};

  Aws::String m_message;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobIdHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_configurationArnHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
