/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/PrivateDnsPreference.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace VPCLattice {
namespace Model {

/**
 * <p> The DNS configuration options. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DnsOptions">AWS
 * API Reference</a></p>
 */
class DnsOptions {
 public:
  AWS_VPCLATTICE_API DnsOptions() = default;
  AWS_VPCLATTICE_API DnsOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_VPCLATTICE_API DnsOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The preference for which private domains have a private hosted zone created
   * for and associated with the specified VPC. Only supported when private DNS is
   * enabled and when the VPC endpoint type is ServiceNetwork or Resource. </p> <ul>
   * <li> <p> <code>ALL_DOMAINS</code> - VPC Lattice provisions private hosted zones
   * for all custom domain names.</p> </li> <li> <p>
   * <code>VERIFIED_DOMAINS_ONLY</code> - VPC Lattice provisions a private hosted
   * zone only if custom domain name has been verified by the provider.</p> </li>
   * <li> <p> <code>VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS</code> - VPC Lattice
   * provisions private hosted zones for all verified custom domain names and other
   * domain names that the resource consumer specifies. The resource consumer
   * specifies the domain names in the privateDnsSpecifiedDomains parameter.</p>
   * </li> <li> <p> <code>SPECIFIED_DOMAINS_ONLY</code> - VPC Lattice provisions a
   * private hosted zone for domain names specified by the resource consumer. The
   * resource consumer specifies the domain names in the privateDnsSpecifiedDomains
   * parameter.</p> </li> </ul>
   */
  inline PrivateDnsPreference GetPrivateDnsPreference() const { return m_privateDnsPreference; }
  inline bool PrivateDnsPreferenceHasBeenSet() const { return m_privateDnsPreferenceHasBeenSet; }
  inline void SetPrivateDnsPreference(PrivateDnsPreference value) {
    m_privateDnsPreferenceHasBeenSet = true;
    m_privateDnsPreference = value;
  }
  inline DnsOptions& WithPrivateDnsPreference(PrivateDnsPreference value) {
    SetPrivateDnsPreference(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Indicates which of the private domains to create private hosted zones for
   * and associate with the specified VPC. Only supported when private DNS is enabled
   * and the private DNS preference is
   * <code>VERIFIED_DOMAINS_AND_SPECIFIED_DOMAINS</code> or
   * <code>SPECIFIED_DOMAINS_ONLY</code>. </p>
   */
  inline const Aws::Vector<Aws::String>& GetPrivateDnsSpecifiedDomains() const { return m_privateDnsSpecifiedDomains; }
  inline bool PrivateDnsSpecifiedDomainsHasBeenSet() const { return m_privateDnsSpecifiedDomainsHasBeenSet; }
  template <typename PrivateDnsSpecifiedDomainsT = Aws::Vector<Aws::String>>
  void SetPrivateDnsSpecifiedDomains(PrivateDnsSpecifiedDomainsT&& value) {
    m_privateDnsSpecifiedDomainsHasBeenSet = true;
    m_privateDnsSpecifiedDomains = std::forward<PrivateDnsSpecifiedDomainsT>(value);
  }
  template <typename PrivateDnsSpecifiedDomainsT = Aws::Vector<Aws::String>>
  DnsOptions& WithPrivateDnsSpecifiedDomains(PrivateDnsSpecifiedDomainsT&& value) {
    SetPrivateDnsSpecifiedDomains(std::forward<PrivateDnsSpecifiedDomainsT>(value));
    return *this;
  }
  template <typename PrivateDnsSpecifiedDomainsT = Aws::String>
  DnsOptions& AddPrivateDnsSpecifiedDomains(PrivateDnsSpecifiedDomainsT&& value) {
    m_privateDnsSpecifiedDomainsHasBeenSet = true;
    m_privateDnsSpecifiedDomains.emplace_back(std::forward<PrivateDnsSpecifiedDomainsT>(value));
    return *this;
  }
  ///@}
 private:
  PrivateDnsPreference m_privateDnsPreference{PrivateDnsPreference::NOT_SET};
  bool m_privateDnsPreferenceHasBeenSet = false;

  Aws::Vector<Aws::String> m_privateDnsSpecifiedDomains;
  bool m_privateDnsSpecifiedDomainsHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
