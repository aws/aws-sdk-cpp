/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationCreatedDateFilter.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationEntityIdFilter.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationLastModifiedDateFilter.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationNameFilter.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationResourceIdFilter.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationResourceNameFilter.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationStatusFilter.h>
#include <aws/marketplace-catalog/model/SubsidiaryAuthorizationSubsidiaryAccountIdFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>The filters that you can use with the <code>ListEntities</code> operation to
 * filter subsidiary authorizations. You can filter by <code>EntityId</code>,
 * <code>Status</code>, <code>ResourceId</code>, <code>ResourceName</code>,
 * <code>Name</code>, <code>SubsidiaryAccountId</code>, <code>CreatedDate</code>,
 * and <code>LastModifiedDate</code>. You can add only one wildcard filter in a
 * single <code>ListEntities</code> request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SubsidiaryAuthorizationFilters">AWS
 * API Reference</a></p>
 */
class SubsidiaryAuthorizationFilters {
 public:
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationFilters() = default;
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A filter that matches subsidiary authorizations by entity ID.</p>
   */
  inline const SubsidiaryAuthorizationEntityIdFilter& GetEntityId() const { return m_entityId; }
  inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
  template <typename EntityIdT = SubsidiaryAuthorizationEntityIdFilter>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = SubsidiaryAuthorizationEntityIdFilter>
  SubsidiaryAuthorizationFilters& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that matches subsidiary authorizations by status.</p>
   */
  inline const SubsidiaryAuthorizationStatusFilter& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = SubsidiaryAuthorizationStatusFilter>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = SubsidiaryAuthorizationStatusFilter>
  SubsidiaryAuthorizationFilters& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that matches subsidiary authorizations by the ID of the authorized
   * resource.</p>
   */
  inline const SubsidiaryAuthorizationResourceIdFilter& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = SubsidiaryAuthorizationResourceIdFilter>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = SubsidiaryAuthorizationResourceIdFilter>
  SubsidiaryAuthorizationFilters& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that matches subsidiary authorizations by the name of the authorized
   * resource.</p>
   */
  inline const SubsidiaryAuthorizationResourceNameFilter& GetResourceName() const { return m_resourceName; }
  inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
  template <typename ResourceNameT = SubsidiaryAuthorizationResourceNameFilter>
  void SetResourceName(ResourceNameT&& value) {
    m_resourceNameHasBeenSet = true;
    m_resourceName = std::forward<ResourceNameT>(value);
  }
  template <typename ResourceNameT = SubsidiaryAuthorizationResourceNameFilter>
  SubsidiaryAuthorizationFilters& WithResourceName(ResourceNameT&& value) {
    SetResourceName(std::forward<ResourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that matches subsidiary authorizations by name.</p>
   */
  inline const SubsidiaryAuthorizationNameFilter& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = SubsidiaryAuthorizationNameFilter>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = SubsidiaryAuthorizationNameFilter>
  SubsidiaryAuthorizationFilters& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that matches subsidiary authorizations by the AWS account ID of the
   * subsidiary account.</p>
   */
  inline const SubsidiaryAuthorizationSubsidiaryAccountIdFilter& GetSubsidiaryAccountId() const { return m_subsidiaryAccountId; }
  inline bool SubsidiaryAccountIdHasBeenSet() const { return m_subsidiaryAccountIdHasBeenSet; }
  template <typename SubsidiaryAccountIdT = SubsidiaryAuthorizationSubsidiaryAccountIdFilter>
  void SetSubsidiaryAccountId(SubsidiaryAccountIdT&& value) {
    m_subsidiaryAccountIdHasBeenSet = true;
    m_subsidiaryAccountId = std::forward<SubsidiaryAccountIdT>(value);
  }
  template <typename SubsidiaryAccountIdT = SubsidiaryAuthorizationSubsidiaryAccountIdFilter>
  SubsidiaryAuthorizationFilters& WithSubsidiaryAccountId(SubsidiaryAccountIdT&& value) {
    SetSubsidiaryAccountId(std::forward<SubsidiaryAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that matches subsidiary authorizations by creation date.</p>
   */
  inline const SubsidiaryAuthorizationCreatedDateFilter& GetCreatedDate() const { return m_createdDate; }
  inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
  template <typename CreatedDateT = SubsidiaryAuthorizationCreatedDateFilter>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = SubsidiaryAuthorizationCreatedDateFilter>
  SubsidiaryAuthorizationFilters& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that matches subsidiary authorizations by last modified date.</p>
   */
  inline const SubsidiaryAuthorizationLastModifiedDateFilter& GetLastModifiedDate() const { return m_lastModifiedDate; }
  inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
  template <typename LastModifiedDateT = SubsidiaryAuthorizationLastModifiedDateFilter>
  void SetLastModifiedDate(LastModifiedDateT&& value) {
    m_lastModifiedDateHasBeenSet = true;
    m_lastModifiedDate = std::forward<LastModifiedDateT>(value);
  }
  template <typename LastModifiedDateT = SubsidiaryAuthorizationLastModifiedDateFilter>
  SubsidiaryAuthorizationFilters& WithLastModifiedDate(LastModifiedDateT&& value) {
    SetLastModifiedDate(std::forward<LastModifiedDateT>(value));
    return *this;
  }
  ///@}
 private:
  SubsidiaryAuthorizationEntityIdFilter m_entityId;

  SubsidiaryAuthorizationStatusFilter m_status;

  SubsidiaryAuthorizationResourceIdFilter m_resourceId;

  SubsidiaryAuthorizationResourceNameFilter m_resourceName;

  SubsidiaryAuthorizationNameFilter m_name;

  SubsidiaryAuthorizationSubsidiaryAccountIdFilter m_subsidiaryAccountId;

  SubsidiaryAuthorizationCreatedDateFilter m_createdDate;

  SubsidiaryAuthorizationLastModifiedDateFilter m_lastModifiedDate;
  bool m_entityIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceNameHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_subsidiaryAccountIdHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_lastModifiedDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
