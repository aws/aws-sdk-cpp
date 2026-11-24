/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/TrustCenterControlDomain.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A control that a trust center publishes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/TrustCenterControl">AWS
 * API Reference</a></p>
 */
class TrustCenterControl {
 public:
  AWS_MARKETPLACEDISCOVERY_API TrustCenterControl() = default;
  AWS_MARKETPLACEDISCOVERY_API TrustCenterControl(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API TrustCenterControl& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the control.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TrustCenterControl& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the control.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TrustCenterControl& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trust center domains to which the control applies.</p>
   */
  inline const Aws::Vector<TrustCenterControlDomain>& GetDomains() const { return m_domains; }
  inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
  template <typename DomainsT = Aws::Vector<TrustCenterControlDomain>>
  void SetDomains(DomainsT&& value) {
    m_domainsHasBeenSet = true;
    m_domains = std::forward<DomainsT>(value);
  }
  template <typename DomainsT = Aws::Vector<TrustCenterControlDomain>>
  TrustCenterControl& WithDomains(DomainsT&& value) {
    SetDomains(std::forward<DomainsT>(value));
    return *this;
  }
  inline TrustCenterControl& AddDomains(TrustCenterControlDomain value) {
    m_domainsHasBeenSet = true;
    m_domains.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  Aws::Vector<TrustCenterControlDomain> m_domains;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_domainsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
