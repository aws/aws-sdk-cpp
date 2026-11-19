/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>
#include <aws/marketplace-deployment/model/DeploymentConfigurationDetail.h>
#include <aws/marketplace-deployment/model/DeploymentConfigurationJobStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDeployment {
namespace Model {

/**
 * <p>Contains summary information about a deployment configuration job, including
 * its identifier, status, configuration, and creation time.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-deployment-2023-01-25/DeploymentConfigurationJobSummary">AWS
 * API Reference</a></p>
 */
class DeploymentConfigurationJobSummary {
 public:
  AWS_MARKETPLACEDEPLOYMENT_API DeploymentConfigurationJobSummary() = default;
  AWS_MARKETPLACEDEPLOYMENT_API DeploymentConfigurationJobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDEPLOYMENT_API DeploymentConfigurationJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDEPLOYMENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the deployment configuration job.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  DeploymentConfigurationJobSummary& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the deployment configuration job.</p>
   */
  inline DeploymentConfigurationJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DeploymentConfigurationJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeploymentConfigurationJobSummary& WithStatus(DeploymentConfigurationJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment configuration submitted with the job.</p>
   */
  inline const DeploymentConfigurationDetail& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = DeploymentConfigurationDetail>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = DeploymentConfigurationDetail>
  DeploymentConfigurationJobSummary& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DeploymentConfigurationJobSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobId;

  DeploymentConfigurationJobStatus m_status{DeploymentConfigurationJobStatus::NOT_SET};

  DeploymentConfigurationDetail m_configuration;

  Aws::Utils::DateTime m_createdAt{};
  bool m_jobIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
