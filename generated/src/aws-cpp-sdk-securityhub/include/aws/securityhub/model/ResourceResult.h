/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/DiscoveryType.h>
#include <aws/securityhub/model/ResourceCategory.h>
#include <aws/securityhub/model/ResourceFindingsSummary.h>
#include <aws/securityhub/model/ResourceInfo.h>
#include <aws/securityhub/model/ResourceSubCategory.h>
#include <aws/securityhub/model/ResourceTag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Provides comprehensive details about an Amazon Web Services resource and its
 * associated security findings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceResult">AWS
 * API Reference</a></p>
 */
class ResourceResult {
 public:
  AWS_SECURITYHUB_API ResourceResult() = default;
  AWS_SECURITYHUB_API ResourceResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The global identifier used to identify a resource.</p>
   */
  inline const Aws::String& GetResourceGuid() const { return m_resourceGuid; }
  inline bool ResourceGuidHasBeenSet() const { return m_resourceGuidHasBeenSet; }
  template <typename ResourceGuidT = Aws::String>
  void SetResourceGuid(ResourceGuidT&& value) {
    m_resourceGuidHasBeenSet = true;
    m_resourceGuid = std::forward<ResourceGuidT>(value);
  }
  template <typename ResourceGuidT = Aws::String>
  ResourceResult& WithResourceGuid(ResourceGuidT&& value) {
    SetResourceGuid(std::forward<ResourceGuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for a resource.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ResourceResult& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account that recorded the resource data in Security
   * Hub.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ResourceResult& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon Web Services account that's associated with the
   * resource.</p>
   */
  inline const Aws::String& GetAccountName() const { return m_accountName; }
  inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
  template <typename AccountNameT = Aws::String>
  void SetAccountName(AccountNameT&& value) {
    m_accountNameHasBeenSet = true;
    m_accountName = std::forward<AccountNameT>(value);
  }
  template <typename AccountNameT = Aws::String>
  ResourceResult& WithAccountName(AccountNameT&& value) {
    SetAccountName(std::forward<AccountNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region that recorded the resource data in Security
   * Hub.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ResourceResult& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider where the resource exists. Valid values are
   * <code>AWS</code> and <code>Azure</code>. This field is always included.</p>
   */
  inline const Aws::String& GetResourceProvider() const { return m_resourceProvider; }
  inline bool ResourceProviderHasBeenSet() const { return m_resourceProviderHasBeenSet; }
  template <typename ResourceProviderT = Aws::String>
  void SetResourceProvider(ResourceProviderT&& value) {
    m_resourceProviderHasBeenSet = true;
    m_resourceProvider = std::forward<ResourceProviderT>(value);
  }
  template <typename ResourceProviderT = Aws::String>
  ResourceResult& WithResourceProvider(ResourceProviderT&& value) {
    SetResourceProvider(std::forward<ResourceProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the cloud account that owns the resource. For Amazon Web
   * Services resources, this is the Amazon Web Services account ID. For Azure
   * resources, this is the Azure subscription ID.</p>
   */
  inline const Aws::String& GetResourceOwnerAccountId() const { return m_resourceOwnerAccountId; }
  inline bool ResourceOwnerAccountIdHasBeenSet() const { return m_resourceOwnerAccountIdHasBeenSet; }
  template <typename ResourceOwnerAccountIdT = Aws::String>
  void SetResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    m_resourceOwnerAccountIdHasBeenSet = true;
    m_resourceOwnerAccountId = std::forward<ResourceOwnerAccountIdT>(value);
  }
  template <typename ResourceOwnerAccountIdT = Aws::String>
  ResourceResult& WithResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    SetResourceOwnerAccountId(std::forward<ResourceOwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the cloud organization that owns the resource. For Amazon
   * Web Services resources, this is the Organizations ID. For Azure resources, this
   * is the Azure tenant ID.</p>
   */
  inline const Aws::String& GetResourceOwnerOrgId() const { return m_resourceOwnerOrgId; }
  inline bool ResourceOwnerOrgIdHasBeenSet() const { return m_resourceOwnerOrgIdHasBeenSet; }
  template <typename ResourceOwnerOrgIdT = Aws::String>
  void SetResourceOwnerOrgId(ResourceOwnerOrgIdT&& value) {
    m_resourceOwnerOrgIdHasBeenSet = true;
    m_resourceOwnerOrgId = std::forward<ResourceOwnerOrgIdT>(value);
  }
  template <typename ResourceOwnerOrgIdT = Aws::String>
  ResourceResult& WithResourceOwnerOrgId(ResourceOwnerOrgIdT&& value) {
    SetResourceOwnerOrgId(std::forward<ResourceOwnerOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud partition where the resource exists. For Amazon Web Services, valid
   * values include <code>aws</code>, <code>aws-cn</code>, and
   * <code>aws-us-gov</code>. This field isn't returned for cloud providers that
   * don't use partitions.</p>
   */
  inline const Aws::String& GetResourceCloudPartition() const { return m_resourceCloudPartition; }
  inline bool ResourceCloudPartitionHasBeenSet() const { return m_resourceCloudPartitionHasBeenSet; }
  template <typename ResourceCloudPartitionT = Aws::String>
  void SetResourceCloudPartition(ResourceCloudPartitionT&& value) {
    m_resourceCloudPartitionHasBeenSet = true;
    m_resourceCloudPartition = std::forward<ResourceCloudPartitionT>(value);
  }
  template <typename ResourceCloudPartitionT = Aws::String>
  ResourceResult& WithResourceCloudPartition(ResourceCloudPartitionT&& value) {
    SetResourceCloudPartition(std::forward<ResourceCloudPartitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The native cloud region where the resource is located. For Amazon Web
   * Services, this is an Amazon Web Services Region (for example,
   * <code>us-east-1</code>). For Azure resources, this is the Azure region (for
   * example, <code>westus2</code>). This field is always included.</p>
   */
  inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
  inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
  template <typename ResourceRegionT = Aws::String>
  void SetResourceRegion(ResourceRegionT&& value) {
    m_resourceRegionHasBeenSet = true;
    m_resourceRegion = std::forward<ResourceRegionT>(value);
  }
  template <typename ResourceRegionT = Aws::String>
  ResourceResult& WithResourceRegion(ResourceRegionT&& value) {
    SetResourceRegion(std::forward<ResourceRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The grouping where the resource belongs.</p>
   */
  inline ResourceCategory GetResourceCategory() const { return m_resourceCategory; }
  inline bool ResourceCategoryHasBeenSet() const { return m_resourceCategoryHasBeenSet; }
  inline void SetResourceCategory(ResourceCategory value) {
    m_resourceCategoryHasBeenSet = true;
    m_resourceCategory = value;
  }
  inline ResourceResult& WithResourceCategory(ResourceCategory value) {
    SetResourceCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ResourceResult& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resource.</p>
   */
  inline const Aws::String& GetResourceName() const { return m_resourceName; }
  inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
  template <typename ResourceNameT = Aws::String>
  void SetResourceName(ResourceNameT&& value) {
    m_resourceNameHasBeenSet = true;
    m_resourceName = std::forward<ResourceNameT>(value);
  }
  template <typename ResourceNameT = Aws::String>
  ResourceResult& WithResourceName(ResourceNameT&& value) {
    SetResourceName(std::forward<ResourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was created.</p>
   */
  inline const Aws::String& GetResourceCreationTimeDt() const { return m_resourceCreationTimeDt; }
  inline bool ResourceCreationTimeDtHasBeenSet() const { return m_resourceCreationTimeDtHasBeenSet; }
  template <typename ResourceCreationTimeDtT = Aws::String>
  void SetResourceCreationTimeDt(ResourceCreationTimeDtT&& value) {
    m_resourceCreationTimeDtHasBeenSet = true;
    m_resourceCreationTimeDt = std::forward<ResourceCreationTimeDtT>(value);
  }
  template <typename ResourceCreationTimeDtT = Aws::String>
  ResourceResult& WithResourceCreationTimeDt(ResourceCreationTimeDtT&& value) {
    SetResourceCreationTimeDt(std::forward<ResourceCreationTimeDtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when information about the resource was captured.</p>
   */
  inline const Aws::String& GetResourceDetailCaptureTimeDt() const { return m_resourceDetailCaptureTimeDt; }
  inline bool ResourceDetailCaptureTimeDtHasBeenSet() const { return m_resourceDetailCaptureTimeDtHasBeenSet; }
  template <typename ResourceDetailCaptureTimeDtT = Aws::String>
  void SetResourceDetailCaptureTimeDt(ResourceDetailCaptureTimeDtT&& value) {
    m_resourceDetailCaptureTimeDtHasBeenSet = true;
    m_resourceDetailCaptureTimeDt = std::forward<ResourceDetailCaptureTimeDtT>(value);
  }
  template <typename ResourceDetailCaptureTimeDtT = Aws::String>
  ResourceResult& WithResourceDetailCaptureTimeDt(ResourceDetailCaptureTimeDtT&& value) {
    SetResourceDetailCaptureTimeDt(std::forward<ResourceDetailCaptureTimeDtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An aggregated view of security findings associated with a resource.</p>
   */
  inline const Aws::Vector<ResourceFindingsSummary>& GetFindingsSummary() const { return m_findingsSummary; }
  inline bool FindingsSummaryHasBeenSet() const { return m_findingsSummaryHasBeenSet; }
  template <typename FindingsSummaryT = Aws::Vector<ResourceFindingsSummary>>
  void SetFindingsSummary(FindingsSummaryT&& value) {
    m_findingsSummaryHasBeenSet = true;
    m_findingsSummary = std::forward<FindingsSummaryT>(value);
  }
  template <typename FindingsSummaryT = Aws::Vector<ResourceFindingsSummary>>
  ResourceResult& WithFindingsSummary(FindingsSummaryT&& value) {
    SetFindingsSummary(std::forward<FindingsSummaryT>(value));
    return *this;
  }
  template <typename FindingsSummaryT = ResourceFindingsSummary>
  ResourceResult& AddFindingsSummary(FindingsSummaryT&& value) {
    m_findingsSummaryHasBeenSet = true;
    m_findingsSummary.emplace_back(std::forward<FindingsSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key-value pairs associated with a resource.</p>
   */
  inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
  inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
  template <typename ResourceTagsT = Aws::Vector<ResourceTag>>
  void SetResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags = std::forward<ResourceTagsT>(value);
  }
  template <typename ResourceTagsT = Aws::Vector<ResourceTag>>
  ResourceResult& WithResourceTags(ResourceTagsT&& value) {
    SetResourceTags(std::forward<ResourceTagsT>(value));
    return *this;
  }
  template <typename ResourceTagsT = ResourceTag>
  ResourceResult& AddResourceTags(ResourceTagsT&& value) {
    m_resourceTagsHasBeenSet = true;
    m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration details of a resource.</p>
   */
  inline Aws::Utils::DocumentView GetResourceConfig() const { return m_resourceConfig; }
  inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
  template <typename ResourceConfigT = Aws::Utils::Document>
  void SetResourceConfig(ResourceConfigT&& value) {
    m_resourceConfigHasBeenSet = true;
    m_resourceConfig = std::forward<ResourceConfigT>(value);
  }
  template <typename ResourceConfigT = Aws::Utils::Document>
  ResourceResult& WithResourceConfig(ResourceConfigT&& value) {
    SetResourceConfig(std::forward<ResourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AI/ML sub-grouping of the resource. Present only when
   * <code>ResourceCategory</code> is <code>AI/ML</code>.</p>
   */
  inline ResourceSubCategory GetResourceSubCategory() const { return m_resourceSubCategory; }
  inline bool ResourceSubCategoryHasBeenSet() const { return m_resourceSubCategoryHasBeenSet; }
  inline void SetResourceSubCategory(ResourceSubCategory value) {
    m_resourceSubCategoryHasBeenSet = true;
    m_resourceSubCategory = value;
  }
  inline ResourceResult& WithResourceSubCategory(ResourceSubCategory value) {
    SetResourceSubCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how the resource was discovered. If the value is
   * <code>Managed</code>, the resource is natively provided by a cloud service
   * provider. If the value is <code>SelfHosted</code>, the resource is hosted on
   * customer-managed infrastructure, such as a compute instance or container
   * image.</p>
   */
  inline DiscoveryType GetDiscoveryType() const { return m_discoveryType; }
  inline bool DiscoveryTypeHasBeenSet() const { return m_discoveryTypeHasBeenSet; }
  inline void SetDiscoveryType(DiscoveryType value) {
    m_discoveryTypeHasBeenSet = true;
    m_discoveryType = value;
  }
  inline ResourceResult& WithDiscoveryType(DiscoveryType value) {
    SetDiscoveryType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional resource-type-specific details. For self-hosted AI resources and
   * their host resources, contains an <code>AIDetails</code> structure.</p>
   */
  inline const ResourceInfo& GetResourceInfo() const { return m_resourceInfo; }
  inline bool ResourceInfoHasBeenSet() const { return m_resourceInfoHasBeenSet; }
  template <typename ResourceInfoT = ResourceInfo>
  void SetResourceInfo(ResourceInfoT&& value) {
    m_resourceInfoHasBeenSet = true;
    m_resourceInfo = std::forward<ResourceInfoT>(value);
  }
  template <typename ResourceInfoT = ResourceInfo>
  ResourceResult& WithResourceInfo(ResourceInfoT&& value) {
    SetResourceInfo(std::forward<ResourceInfoT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceGuid;

  Aws::String m_resourceId;

  Aws::String m_accountId;

  Aws::String m_accountName;

  Aws::String m_region;

  Aws::String m_resourceProvider;

  Aws::String m_resourceOwnerAccountId;

  Aws::String m_resourceOwnerOrgId;

  Aws::String m_resourceCloudPartition;

  Aws::String m_resourceRegion;

  ResourceCategory m_resourceCategory{ResourceCategory::NOT_SET};

  Aws::String m_resourceType;

  Aws::String m_resourceName;

  Aws::String m_resourceCreationTimeDt;

  Aws::String m_resourceDetailCaptureTimeDt;

  Aws::Vector<ResourceFindingsSummary> m_findingsSummary;

  Aws::Vector<ResourceTag> m_resourceTags;

  Aws::Utils::Document m_resourceConfig;

  ResourceSubCategory m_resourceSubCategory{ResourceSubCategory::NOT_SET};

  DiscoveryType m_discoveryType{DiscoveryType::NOT_SET};

  ResourceInfo m_resourceInfo;
  bool m_resourceGuidHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_accountNameHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_resourceProviderHasBeenSet = false;
  bool m_resourceOwnerAccountIdHasBeenSet = false;
  bool m_resourceOwnerOrgIdHasBeenSet = false;
  bool m_resourceCloudPartitionHasBeenSet = false;
  bool m_resourceRegionHasBeenSet = false;
  bool m_resourceCategoryHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceNameHasBeenSet = false;
  bool m_resourceCreationTimeDtHasBeenSet = false;
  bool m_resourceDetailCaptureTimeDtHasBeenSet = false;
  bool m_findingsSummaryHasBeenSet = false;
  bool m_resourceTagsHasBeenSet = false;
  bool m_resourceConfigHasBeenSet = false;
  bool m_resourceSubCategoryHasBeenSet = false;
  bool m_discoveryTypeHasBeenSet = false;
  bool m_resourceInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
