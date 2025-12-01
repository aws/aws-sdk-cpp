/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {

/**
 * <p>Summary information about a managed firewall domain list.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ManagedFirewallDomainListsItem">AWS
 * API Reference</a></p>
 */
class ManagedFirewallDomainListsItem {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ManagedFirewallDomainListsItem() = default;
  AWS_ROUTE53GLOBALRESOLVER_API ManagedFirewallDomainListsItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API ManagedFirewallDomainListsItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53GLOBALRESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the managed firewall domain list.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ManagedFirewallDomainListsItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the managed firewall domain list.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ManagedFirewallDomainListsItem& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the managed firewall domain list.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ManagedFirewallDomainListsItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the managed firewall domain list.</p>
   */
  inline const Aws::String& GetManagedListType() const { return m_managedListType; }
  inline bool ManagedListTypeHasBeenSet() const { return m_managedListTypeHasBeenSet; }
  template <typename ManagedListTypeT = Aws::String>
  void SetManagedListType(ManagedListTypeT&& value) {
    m_managedListTypeHasBeenSet = true;
    m_managedListType = std::forward<ManagedListTypeT>(value);
  }
  template <typename ManagedListTypeT = Aws::String>
  ManagedFirewallDomainListsItem& WithManagedListType(ManagedListTypeT&& value) {
    SetManagedListType(std::forward<ManagedListTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_managedListType;
  bool m_managedListTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
