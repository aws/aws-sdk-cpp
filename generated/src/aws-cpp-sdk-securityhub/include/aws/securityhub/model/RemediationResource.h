/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/CloudProviderName.h>

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
 * <p>Provides comprehensive details about a resource.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationResource">AWS
 * API Reference</a></p>
 */
class RemediationResource {
 public:
  AWS_SECURITYHUB_API RemediationResource() = default;
  AWS_SECURITYHUB_API RemediationResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationResource& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  RemediationResource& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region in which Security Hub recorded the resource
   * data.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  RemediationResource& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
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
  RemediationResource& WithResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
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
  RemediationResource& WithResourceOwnerOrgId(ResourceOwnerOrgIdT&& value) {
    SetResourceOwnerOrgId(std::forward<ResourceOwnerOrgIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  RemediationResource& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resource.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RemediationResource& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for a resource.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  RemediationResource& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

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
  RemediationResource& WithResourceGuid(ResourceGuidT&& value) {
    SetResourceGuid(std::forward<ResourceGuidT>(value));
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
  RemediationResource& WithResourceRegion(ResourceRegionT&& value) {
    SetResourceRegion(std::forward<ResourceRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cloud provider where the resource exists.</p> <ul> <li> <p>
   * <code>AWS</code> specifies that the resource exists in Amazon Web Services.</p>
   * </li> <li> <p> <code>Azure</code> specifies that the resource exists in
   * Microsoft Azure.</p> </li> </ul>
   */
  inline CloudProviderName GetCloudProvider() const { return m_cloudProvider; }
  inline bool CloudProviderHasBeenSet() const { return m_cloudProviderHasBeenSet; }
  inline void SetCloudProvider(CloudProviderName value) {
    m_cloudProviderHasBeenSet = true;
    m_cloudProvider = value;
  }
  inline RemediationResource& WithCloudProvider(CloudProviderName value) {
    SetCloudProvider(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_region;

  Aws::String m_resourceOwnerAccountId;

  Aws::String m_resourceOwnerOrgId;

  Aws::String m_type;

  Aws::String m_name;

  Aws::String m_id;

  Aws::String m_resourceGuid;

  Aws::String m_resourceRegion;

  CloudProviderName m_cloudProvider{CloudProviderName::NOT_SET};
  bool m_accountIdHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_resourceOwnerAccountIdHasBeenSet = false;
  bool m_resourceOwnerOrgIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_resourceGuidHasBeenSet = false;
  bool m_resourceRegionHasBeenSet = false;
  bool m_cloudProviderHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
