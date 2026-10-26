/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

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
 * <p>An object that contains summary information about a subsidiary authorization,
 * including its name, status, authorized resource, subsidiary account, and
 * creation date. A subsidiary authorization lets a seller authorize one of its
 * subsidiary accounts to create offers for one of its products.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/SubsidiaryAuthorizationSummary">AWS
 * API Reference</a></p>
 */
class SubsidiaryAuthorizationSummary {
 public:
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationSummary() = default;
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API SubsidiaryAuthorizationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the subsidiary authorization.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SubsidiaryAuthorizationSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the subsidiary authorization. Valid values are:</p> <ul> <li>
   * <p> <code>Draft</code> - The subsidiary authorization was created but not yet
   * released. The subsidiary account can't see it.</p> </li> <li> <p>
   * <code>Active</code> - The subsidiary account can use the subsidiary
   * authorization to create offers for the authorized product.</p> </li> <li> <p>
   * <code>Restricted</code> - The subsidiary authorization was discarded while in
   * <code>Draft</code> or revoked while <code>Active</code>. It can't be used to
   * create new offers. This status is final.</p> </li> </ul>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  SubsidiaryAuthorizationSummary& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource that the subsidiary authorization applies to.
   * Currently, this is always a product ID, such as
   * <code>prod-example123</code>.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  SubsidiaryAuthorizationSummary& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the resource that the subsidiary authorization applies to.
   * Currently, this is always a product name.</p>
   */
  inline const Aws::String& GetResourceName() const { return m_resourceName; }
  inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
  template <typename ResourceNameT = Aws::String>
  void SetResourceName(ResourceNameT&& value) {
    m_resourceNameHasBeenSet = true;
    m_resourceName = std::forward<ResourceNameT>(value);
  }
  template <typename ResourceNameT = Aws::String>
  SubsidiaryAuthorizationSummary& WithResourceName(ResourceNameT&& value) {
    SetResourceName(std::forward<ResourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 12-digit AWS account ID of the subsidiary account.</p>
   */
  inline const Aws::String& GetSubsidiaryAccountId() const { return m_subsidiaryAccountId; }
  inline bool SubsidiaryAccountIdHasBeenSet() const { return m_subsidiaryAccountIdHasBeenSet; }
  template <typename SubsidiaryAccountIdT = Aws::String>
  void SetSubsidiaryAccountId(SubsidiaryAccountIdT&& value) {
    m_subsidiaryAccountIdHasBeenSet = true;
    m_subsidiaryAccountId = std::forward<SubsidiaryAccountIdT>(value);
  }
  template <typename SubsidiaryAccountIdT = Aws::String>
  SubsidiaryAuthorizationSummary& WithSubsidiaryAccountId(SubsidiaryAccountIdT&& value) {
    SetSubsidiaryAccountId(std::forward<SubsidiaryAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the subsidiary authorization was created.</p>
   */
  inline const Aws::String& GetCreatedDate() const { return m_createdDate; }
  inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
  template <typename CreatedDateT = Aws::String>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::String>
  SubsidiaryAuthorizationSummary& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_status;

  Aws::String m_resourceId;

  Aws::String m_resourceName;

  Aws::String m_subsidiaryAccountId;

  Aws::String m_createdDate;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceNameHasBeenSet = false;
  bool m_subsidiaryAccountIdHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
