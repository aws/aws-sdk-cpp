/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ResourceOwnerAccount.h>
#include <aws/securityhub/model/ResourceOwnerOrg.h>

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
 * <p>Information about the owner of a resource, including the account and
 * organization that the resource belongs to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceOwner">AWS
 * API Reference</a></p>
 */
class ResourceOwner {
 public:
  AWS_SECURITYHUB_API ResourceOwner() = default;
  AWS_SECURITYHUB_API ResourceOwner(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ResourceOwner& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Information about the account that owns the resource, for example, an Azure
   * Subscription or Amazon Web Services Account.</p>
   */
  inline const ResourceOwnerAccount& GetAccount() const { return m_account; }
  inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
  template <typename AccountT = ResourceOwnerAccount>
  void SetAccount(AccountT&& value) {
    m_accountHasBeenSet = true;
    m_account = std::forward<AccountT>(value);
  }
  template <typename AccountT = ResourceOwnerAccount>
  ResourceOwner& WithAccount(AccountT&& value) {
    SetAccount(std::forward<AccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the organization that owns the resource, for example, an
   * Azure Tenant.</p>
   */
  inline const ResourceOwnerOrg& GetOrg() const { return m_org; }
  inline bool OrgHasBeenSet() const { return m_orgHasBeenSet; }
  template <typename OrgT = ResourceOwnerOrg>
  void SetOrg(OrgT&& value) {
    m_orgHasBeenSet = true;
    m_org = std::forward<OrgT>(value);
  }
  template <typename OrgT = ResourceOwnerOrg>
  ResourceOwner& WithOrg(OrgT&& value) {
    SetOrg(std::forward<OrgT>(value));
    return *this;
  }
  ///@}
 private:
  ResourceOwnerAccount m_account;

  ResourceOwnerOrg m_org;
  bool m_accountHasBeenSet = false;
  bool m_orgHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
