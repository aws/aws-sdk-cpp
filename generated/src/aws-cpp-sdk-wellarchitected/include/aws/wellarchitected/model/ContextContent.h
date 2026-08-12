/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ApplicationType.h>
#include <aws/wellarchitected/model/ContextResourceTag.h>
#include <aws/wellarchitected/model/Criticality.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>Typed content structure for a context. Contains application-specific fields
 * that describe the environment used during recommendation
 * generation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ContextContent">AWS
 * API Reference</a></p>
 */
class ContextContent {
 public:
  AWS_WELLARCHITECTED_API ContextContent() = default;
  AWS_WELLARCHITECTED_API ContextContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API ContextContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services account IDs associated with this application
   * context.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  ContextContent& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  ContextContent& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Regions where this application operates.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  ContextContent& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  ContextContent& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services services used by this application.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAwsServices() const { return m_awsServices; }
  inline bool AwsServicesHasBeenSet() const { return m_awsServicesHasBeenSet; }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  void SetAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices = std::forward<AwsServicesT>(value);
  }
  template <typename AwsServicesT = Aws::Vector<Aws::String>>
  ContextContent& WithAwsServices(AwsServicesT&& value) {
    SetAwsServices(std::forward<AwsServicesT>(value));
    return *this;
  }
  template <typename AwsServicesT = Aws::String>
  ContextContent& AddAwsServices(AwsServicesT&& value) {
    m_awsServicesHasBeenSet = true;
    m_awsServices.emplace_back(std::forward<AwsServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services resource types relevant to this application.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
  inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }
  template <typename ResourceTypesT = Aws::Vector<Aws::String>>
  void SetResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes = std::forward<ResourceTypesT>(value);
  }
  template <typename ResourceTypesT = Aws::Vector<Aws::String>>
  ContextContent& WithResourceTypes(ResourceTypesT&& value) {
    SetResourceTypes(std::forward<ResourceTypesT>(value));
    return *this;
  }
  template <typename ResourceTypesT = Aws::String>
  ContextContent& AddResourceTypes(ResourceTypesT&& value) {
    m_resourceTypesHasBeenSet = true;
    m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Resource tags used to scope this application context.</p>
   */
  inline const Aws::Vector<ContextResourceTag>& GetResourceTags() const { return m_resourceTags; }
  inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
  template <typename ResourceTagsT = Aws::Vector<ContextResourceTag>>
  void SetResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags = std::forward<ResourceTagsT>(value);
  }
  template <typename ResourceTagsT = Aws::Vector<ContextResourceTag>>
  ContextContent& WithResourceTags(ResourceTagsT&& value) {
    SetResourceTags(std::forward<ResourceTagsT>(value));
    return *this;
  }
  template <typename ResourceTagsT = ContextResourceTag>
  ContextContent& AddResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A free-form overview of the application.</p>
   */
  inline const Aws::String& GetApplicationOverview() const { return m_applicationOverview; }
  inline bool ApplicationOverviewHasBeenSet() const { return m_applicationOverviewHasBeenSet; }
  template <typename ApplicationOverviewT = Aws::String>
  void SetApplicationOverview(ApplicationOverviewT&& value) {
    m_applicationOverviewHasBeenSet = true;
    m_applicationOverview = std::forward<ApplicationOverviewT>(value);
  }
  template <typename ApplicationOverviewT = Aws::String>
  ContextContent& WithApplicationOverview(ApplicationOverviewT&& value) {
    SetApplicationOverview(std::forward<ApplicationOverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The industry vertical for this application.</p>
   */
  inline const Aws::String& GetIndustry() const { return m_industry; }
  inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
  template <typename IndustryT = Aws::String>
  void SetIndustry(IndustryT&& value) {
    m_industryHasBeenSet = true;
    m_industry = std::forward<IndustryT>(value);
  }
  template <typename IndustryT = Aws::String>
  ContextContent& WithIndustry(IndustryT&& value) {
    SetIndustry(std::forward<IndustryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the application.</p>
   */
  inline ApplicationType GetApplicationType() const { return m_applicationType; }
  inline bool ApplicationTypeHasBeenSet() const { return m_applicationTypeHasBeenSet; }
  inline void SetApplicationType(ApplicationType value) {
    m_applicationTypeHasBeenSet = true;
    m_applicationType = value;
  }
  inline ContextContent& WithApplicationType(ApplicationType value) {
    SetApplicationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business criticality of the application.</p>
   */
  inline Criticality GetCriticality() const { return m_criticality; }
  inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
  inline void SetCriticality(Criticality value) {
    m_criticalityHasBeenSet = true;
    m_criticality = value;
  }
  inline ContextContent& WithCriticality(Criticality value) {
    SetCriticality(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A free-form description of the application architecture.</p>
   */
  inline const Aws::String& GetArchitectureOverview() const { return m_architectureOverview; }
  inline bool ArchitectureOverviewHasBeenSet() const { return m_architectureOverviewHasBeenSet; }
  template <typename ArchitectureOverviewT = Aws::String>
  void SetArchitectureOverview(ArchitectureOverviewT&& value) {
    m_architectureOverviewHasBeenSet = true;
    m_architectureOverview = std::forward<ArchitectureOverviewT>(value);
  }
  template <typename ArchitectureOverviewT = Aws::String>
  ContextContent& WithArchitectureOverview(ArchitectureOverviewT&& value) {
    SetArchitectureOverview(std::forward<ArchitectureOverviewT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context not captured by other fields.</p>
   */
  inline const Aws::String& GetAdditionalContext() const { return m_additionalContext; }
  inline bool AdditionalContextHasBeenSet() const { return m_additionalContextHasBeenSet; }
  template <typename AdditionalContextT = Aws::String>
  void SetAdditionalContext(AdditionalContextT&& value) {
    m_additionalContextHasBeenSet = true;
    m_additionalContext = std::forward<AdditionalContextT>(value);
  }
  template <typename AdditionalContextT = Aws::String>
  ContextContent& WithAdditionalContext(AdditionalContextT&& value) {
    SetAdditionalContext(std::forward<AdditionalContextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_accountIds;

  Aws::Vector<Aws::String> m_regions;

  Aws::Vector<Aws::String> m_awsServices;

  Aws::Vector<Aws::String> m_resourceTypes;

  Aws::Vector<ContextResourceTag> m_resourceTags;

  Aws::String m_applicationOverview;

  Aws::String m_industry;

  ApplicationType m_applicationType{ApplicationType::NOT_SET};

  Criticality m_criticality{Criticality::NOT_SET};

  Aws::String m_architectureOverview;

  Aws::String m_additionalContext;
  bool m_accountIdsHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_awsServicesHasBeenSet = false;
  bool m_resourceTypesHasBeenSet = false;
  bool m_resourceTagsHasBeenSet = false;
  bool m_applicationOverviewHasBeenSet = false;
  bool m_industryHasBeenSet = false;
  bool m_applicationTypeHasBeenSet = false;
  bool m_criticalityHasBeenSet = false;
  bool m_architectureOverviewHasBeenSet = false;
  bool m_additionalContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
