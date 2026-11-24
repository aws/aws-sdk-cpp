/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

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
 * <p>Summary information for a certification associated with a
 * listing.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/TrustCenterCertificationSummary">AWS
 * API Reference</a></p>
 */
class TrustCenterCertificationSummary {
 public:
  AWS_MARKETPLACEDISCOVERY_API TrustCenterCertificationSummary() = default;
  AWS_MARKETPLACEDISCOVERY_API TrustCenterCertificationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API TrustCenterCertificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The certification type. The set of values is open and can include
   * provider-defined certifications.</p>
   */
  inline const Aws::String& GetCertificationType() const { return m_certificationType; }
  inline bool CertificationTypeHasBeenSet() const { return m_certificationTypeHasBeenSet; }
  template <typename CertificationTypeT = Aws::String>
  void SetCertificationType(CertificationTypeT&& value) {
    m_certificationTypeHasBeenSet = true;
    m_certificationType = std::forward<CertificationTypeT>(value);
  }
  template <typename CertificationTypeT = Aws::String>
  TrustCenterCertificationSummary& WithCertificationType(CertificationTypeT&& value) {
    SetCertificationType(std::forward<CertificationTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The certification name displayed to you.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  TrustCenterCertificationSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the certification logo.</p>
   */
  inline const Aws::String& GetLogoUrl() const { return m_logoUrl; }
  inline bool LogoUrlHasBeenSet() const { return m_logoUrlHasBeenSet; }
  template <typename LogoUrlT = Aws::String>
  void SetLogoUrl(LogoUrlT&& value) {
    m_logoUrlHasBeenSet = true;
    m_logoUrl = std::forward<LogoUrlT>(value);
  }
  template <typename LogoUrlT = Aws::String>
  TrustCenterCertificationSummary& WithLogoUrl(LogoUrlT&& value) {
    SetLogoUrl(std::forward<LogoUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_certificationType;

  Aws::String m_displayName;

  Aws::String m_logoUrl;
  bool m_certificationTypeHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_logoUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
