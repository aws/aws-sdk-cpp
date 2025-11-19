/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/Coverage.h>
#include <aws/partnercentral-channel/model/Provider.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Configuration for partner-led support plans.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/PartnerLedSupport">AWS
 * API Reference</a></p>
 */
class PartnerLedSupport {
 public:
  AWS_PARTNERCENTRALCHANNEL_API PartnerLedSupport() = default;
  AWS_PARTNERCENTRALCHANNEL_API PartnerLedSupport(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API PartnerLedSupport& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The coverage level for partner-led support.</p>
   */
  inline Coverage GetCoverage() const { return m_coverage; }
  inline bool CoverageHasBeenSet() const { return m_coverageHasBeenSet; }
  inline void SetCoverage(Coverage value) {
    m_coverageHasBeenSet = true;
    m_coverage = value;
  }
  inline PartnerLedSupport& WithCoverage(Coverage value) {
    SetCoverage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider of the partner-led support.</p>
   */
  inline Provider GetProvider() const { return m_provider; }
  inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
  inline void SetProvider(Provider value) {
    m_providerHasBeenSet = true;
    m_provider = value;
  }
  inline PartnerLedSupport& WithProvider(Provider value) {
    SetProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location of the Technical Account Manager (TAM).</p>
   */
  inline const Aws::String& GetTamLocation() const { return m_tamLocation; }
  inline bool TamLocationHasBeenSet() const { return m_tamLocationHasBeenSet; }
  template <typename TamLocationT = Aws::String>
  void SetTamLocation(TamLocationT&& value) {
    m_tamLocationHasBeenSet = true;
    m_tamLocation = std::forward<TamLocationT>(value);
  }
  template <typename TamLocationT = Aws::String>
  PartnerLedSupport& WithTamLocation(TamLocationT&& value) {
    SetTamLocation(std::forward<TamLocationT>(value));
    return *this;
  }
  ///@}
 private:
  Coverage m_coverage{Coverage::NOT_SET};
  bool m_coverageHasBeenSet = false;

  Provider m_provider{Provider::NOT_SET};
  bool m_providerHasBeenSet = false;

  Aws::String m_tamLocation;
  bool m_tamLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
