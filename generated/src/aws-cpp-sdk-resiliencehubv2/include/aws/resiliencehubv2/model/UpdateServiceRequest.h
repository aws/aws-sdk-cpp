/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AssociatedSystem.h>
#include <aws/resiliencehubv2/model/DependencyDiscoveryInput.h>
#include <aws/resiliencehubv2/model/PermissionModel.h>
#include <aws/resiliencehubv2/model/ServiceReportConfiguration.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class UpdateServiceRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API UpdateServiceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateService"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  UpdateServiceRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateServiceRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated systems to associate with the service.</p>
   */
  inline const Aws::Vector<AssociatedSystem>& GetAssociatedSystems() const { return m_associatedSystems; }
  inline bool AssociatedSystemsHasBeenSet() const { return m_associatedSystemsHasBeenSet; }
  template <typename AssociatedSystemsT = Aws::Vector<AssociatedSystem>>
  void SetAssociatedSystems(AssociatedSystemsT&& value) {
    m_associatedSystemsHasBeenSet = true;
    m_associatedSystems = std::forward<AssociatedSystemsT>(value);
  }
  template <typename AssociatedSystemsT = Aws::Vector<AssociatedSystem>>
  UpdateServiceRequest& WithAssociatedSystems(AssociatedSystemsT&& value) {
    SetAssociatedSystems(std::forward<AssociatedSystemsT>(value));
    return *this;
  }
  template <typename AssociatedSystemsT = AssociatedSystem>
  UpdateServiceRequest& AddAssociatedSystems(AssociatedSystemsT&& value) {
    m_associatedSystemsHasBeenSet = true;
    m_associatedSystems.emplace_back(std::forward<AssociatedSystemsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  UpdateServiceRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated AWS Regions where the service operates.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  UpdateServiceRequest& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  UpdateServiceRequest& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated permission model for the service.</p>
   */
  inline const PermissionModel& GetPermissionModel() const { return m_permissionModel; }
  inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
  template <typename PermissionModelT = PermissionModel>
  void SetPermissionModel(PermissionModelT&& value) {
    m_permissionModelHasBeenSet = true;
    m_permissionModel = std::forward<PermissionModelT>(value);
  }
  template <typename PermissionModelT = PermissionModel>
  UpdateServiceRequest& WithPermissionModel(PermissionModelT&& value) {
    SetPermissionModel(std::forward<PermissionModelT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline DependencyDiscoveryInput GetDependencyDiscovery() const { return m_dependencyDiscovery; }
  inline bool DependencyDiscoveryHasBeenSet() const { return m_dependencyDiscoveryHasBeenSet; }
  inline void SetDependencyDiscovery(DependencyDiscoveryInput value) {
    m_dependencyDiscoveryHasBeenSet = true;
    m_dependencyDiscovery = value;
  }
  inline UpdateServiceRequest& WithDependencyDiscovery(DependencyDiscoveryInput value) {
    SetDependencyDiscovery(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ServiceReportConfiguration& GetReportConfiguration() const { return m_reportConfiguration; }
  inline bool ReportConfigurationHasBeenSet() const { return m_reportConfigurationHasBeenSet; }
  template <typename ReportConfigurationT = ServiceReportConfiguration>
  void SetReportConfiguration(ReportConfigurationT&& value) {
    m_reportConfigurationHasBeenSet = true;
    m_reportConfiguration = std::forward<ReportConfigurationT>(value);
  }
  template <typename ReportConfigurationT = ServiceReportConfiguration>
  UpdateServiceRequest& WithReportConfiguration(ReportConfigurationT&& value) {
    SetReportConfiguration(std::forward<ReportConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_description;

  Aws::Vector<AssociatedSystem> m_associatedSystems;

  Aws::String m_policyArn;

  Aws::Vector<Aws::String> m_regions;

  PermissionModel m_permissionModel;

  DependencyDiscoveryInput m_dependencyDiscovery{DependencyDiscoveryInput::NOT_SET};

  ServiceReportConfiguration m_reportConfiguration;
  bool m_serviceArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_associatedSystemsHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_permissionModelHasBeenSet = false;
  bool m_dependencyDiscoveryHasBeenSet = false;
  bool m_reportConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
