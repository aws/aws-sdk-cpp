/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Represents a verified domain associated with a partner account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/PartnerDomain">AWS
 * API Reference</a></p>
 */
class PartnerDomain {
 public:
  AWS_PARTNERCENTRALACCOUNT_API PartnerDomain() = default;
  AWS_PARTNERCENTRALACCOUNT_API PartnerDomain(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API PartnerDomain& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The domain name that has been verified for the partner account.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  PartnerDomain& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the domain was registered and verified for the partner
   * account.</p>
   */
  inline const Aws::Utils::DateTime& GetRegisteredAt() const { return m_registeredAt; }
  inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }
  template <typename RegisteredAtT = Aws::Utils::DateTime>
  void SetRegisteredAt(RegisteredAtT&& value) {
    m_registeredAtHasBeenSet = true;
    m_registeredAt = std::forward<RegisteredAtT>(value);
  }
  template <typename RegisteredAtT = Aws::Utils::DateTime>
  PartnerDomain& WithRegisteredAt(RegisteredAtT&& value) {
    SetRegisteredAt(std::forward<RegisteredAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Aws::Utils::DateTime m_registeredAt{};
  bool m_domainNameHasBeenSet = false;
  bool m_registeredAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
