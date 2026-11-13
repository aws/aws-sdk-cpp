/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/GcpConfigurationTargets.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {

/**
 * <p>The access details and targets for connecting to a Google Cloud Platform
 * (GCP) environment, including the workload identity pool provider and service
 * account used for authentication and the projects to target.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GcpConfiguration">AWS
 * API Reference</a></p>
 */
class GcpConfiguration {
 public:
  AWS_SSM_API GcpConfiguration() = default;
  AWS_SSM_API GcpConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API GcpConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the GCP organization.</p>
   */
  inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
  inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
  template <typename OrganizationIdT = Aws::String>
  void SetOrganizationId(OrganizationIdT&& value) {
    m_organizationIdHasBeenSet = true;
    m_organizationId = std::forward<OrganizationIdT>(value);
  }
  template <typename OrganizationIdT = Aws::String>
  GcpConfiguration& WithOrganizationId(OrganizationIdT&& value) {
    SetOrganizationId(std::forward<OrganizationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The full resource name of the GCP workload identity pool provider used for
   * authentication.</p>
   */
  inline const Aws::String& GetWorkloadIdentityPoolProvider() const { return m_workloadIdentityPoolProvider; }
  inline bool WorkloadIdentityPoolProviderHasBeenSet() const { return m_workloadIdentityPoolProviderHasBeenSet; }
  template <typename WorkloadIdentityPoolProviderT = Aws::String>
  void SetWorkloadIdentityPoolProvider(WorkloadIdentityPoolProviderT&& value) {
    m_workloadIdentityPoolProviderHasBeenSet = true;
    m_workloadIdentityPoolProvider = std::forward<WorkloadIdentityPoolProviderT>(value);
  }
  template <typename WorkloadIdentityPoolProviderT = Aws::String>
  GcpConfiguration& WithWorkloadIdentityPoolProvider(WorkloadIdentityPoolProviderT&& value) {
    SetWorkloadIdentityPoolProvider(std::forward<WorkloadIdentityPoolProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address of the GCP service account used for authentication.</p>
   */
  inline const Aws::String& GetServiceAccountEmail() const { return m_serviceAccountEmail; }
  inline bool ServiceAccountEmailHasBeenSet() const { return m_serviceAccountEmailHasBeenSet; }
  template <typename ServiceAccountEmailT = Aws::String>
  void SetServiceAccountEmail(ServiceAccountEmailT&& value) {
    m_serviceAccountEmailHasBeenSet = true;
    m_serviceAccountEmail = std::forward<ServiceAccountEmailT>(value);
  }
  template <typename ServiceAccountEmailT = Aws::String>
  GcpConfiguration& WithServiceAccountEmail(ServiceAccountEmailT&& value) {
    SetServiceAccountEmail(std::forward<ServiceAccountEmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target GCP projects for the cloud connector.</p>
   */
  inline const GcpConfigurationTargets& GetTargets() const { return m_targets; }
  inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
  template <typename TargetsT = GcpConfigurationTargets>
  void SetTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets = std::forward<TargetsT>(value);
  }
  template <typename TargetsT = GcpConfigurationTargets>
  GcpConfiguration& WithTargets(TargetsT&& value) {
    SetTargets(std::forward<TargetsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_organizationId;

  Aws::String m_workloadIdentityPoolProvider;

  Aws::String m_serviceAccountEmail;

  GcpConfigurationTargets m_targets;
  bool m_organizationIdHasBeenSet = false;
  bool m_workloadIdentityPoolProviderHasBeenSet = false;
  bool m_serviceAccountEmailHasBeenSet = false;
  bool m_targetsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
