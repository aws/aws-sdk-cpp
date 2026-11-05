/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
 * <p>Provides information about a resource that contains a software
 * package.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SoftwareResourceResult">AWS
 * API Reference</a></p>
 */
class SoftwareResourceResult {
 public:
  AWS_SECURITYHUB_API SoftwareResourceResult() = default;
  AWS_SECURITYHUB_API SoftwareResourceResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API SoftwareResourceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  SoftwareResourceResult& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource, for example <code>AWS::EC2::Instance</code> or
   * <code>AWS::Lambda::Function</code>.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  SoftwareResourceResult& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
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
  SoftwareResourceResult& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
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
  SoftwareResourceResult& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider where the resource exists. Valid values are
   * <code>AWS</code> and <code>Azure</code>.</p>
   */
  inline const Aws::String& GetResourceProvider() const { return m_resourceProvider; }
  inline bool ResourceProviderHasBeenSet() const { return m_resourceProviderHasBeenSet; }
  template <typename ResourceProviderT = Aws::String>
  void SetResourceProvider(ResourceProviderT&& value) {
    m_resourceProviderHasBeenSet = true;
    m_resourceProvider = std::forward<ResourceProviderT>(value);
  }
  template <typename ResourceProviderT = Aws::String>
  SoftwareResourceResult& WithResourceProvider(ResourceProviderT&& value) {
    SetResourceProvider(std::forward<ResourceProviderT>(value));
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
  SoftwareResourceResult& WithResourceOwnerOrgId(ResourceOwnerOrgIdT&& value) {
    SetResourceOwnerOrgId(std::forward<ResourceOwnerOrgIdT>(value));
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
  SoftwareResourceResult& WithResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    SetResourceOwnerAccountId(std::forward<ResourceOwnerAccountIdT>(value));
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
  SoftwareResourceResult& WithResourceCloudPartition(ResourceCloudPartitionT&& value) {
    SetResourceCloudPartition(std::forward<ResourceCloudPartitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The native cloud region where the resource is located. For Amazon Web
   * Services, this is an Amazon Web Services Region (for example,
   * <code>us-east-1</code>). For Azure resources, this is the Azure region (for
   * example, <code>westus2</code>).</p>
   */
  inline const Aws::String& GetResourceRegion() const { return m_resourceRegion; }
  inline bool ResourceRegionHasBeenSet() const { return m_resourceRegionHasBeenSet; }
  template <typename ResourceRegionT = Aws::String>
  void SetResourceRegion(ResourceRegionT&& value) {
    m_resourceRegionHasBeenSet = true;
    m_resourceRegion = std::forward<ResourceRegionT>(value);
  }
  template <typename ResourceRegionT = Aws::String>
  SoftwareResourceResult& WithResourceRegion(ResourceRegionT&& value) {
    SetResourceRegion(std::forward<ResourceRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_resourceType;

  Aws::String m_region;

  Aws::String m_resourceId;

  Aws::String m_resourceProvider;

  Aws::String m_resourceOwnerOrgId;

  Aws::String m_resourceOwnerAccountId;

  Aws::String m_resourceCloudPartition;

  Aws::String m_resourceRegion;
  bool m_accountIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceProviderHasBeenSet = false;
  bool m_resourceOwnerOrgIdHasBeenSet = false;
  bool m_resourceOwnerAccountIdHasBeenSet = false;
  bool m_resourceCloudPartitionHasBeenSet = false;
  bool m_resourceRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
