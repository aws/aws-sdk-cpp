/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/Coverage.h>

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
 * <p>Configuration for resold business support plans.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ResoldBusiness">AWS
 * API Reference</a></p>
 */
class ResoldBusiness {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ResoldBusiness() = default;
  AWS_PARTNERCENTRALCHANNEL_API ResoldBusiness(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ResoldBusiness& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The coverage level for resold business support.</p>
   */
  inline Coverage GetCoverage() const { return m_coverage; }
  inline bool CoverageHasBeenSet() const { return m_coverageHasBeenSet; }
  inline void SetCoverage(Coverage value) {
    m_coverageHasBeenSet = true;
    m_coverage = value;
  }
  inline ResoldBusiness& WithCoverage(Coverage value) {
    SetCoverage(value);
    return *this;
  }
  ///@}
 private:
  Coverage m_coverage{Coverage::NOT_SET};
  bool m_coverageHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
