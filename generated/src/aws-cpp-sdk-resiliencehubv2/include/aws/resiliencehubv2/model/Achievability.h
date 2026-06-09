/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AchievabilityStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Describes the achievability status of a service's resilience targets based on
 * the most recent assessment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/Achievability">AWS
 * API Reference</a></p>
 */
class Achievability {
 public:
  AWS_RESILIENCEHUBV2_API Achievability() = default;
  AWS_RESILIENCEHUBV2_API Achievability(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Achievability& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The achievability status of the availability SLO target for the service.</p>
   */
  inline AchievabilityStatus GetAvailabilitySlo() const { return m_availabilitySlo; }
  inline bool AvailabilitySloHasBeenSet() const { return m_availabilitySloHasBeenSet; }
  inline void SetAvailabilitySlo(AchievabilityStatus value) {
    m_availabilitySloHasBeenSet = true;
    m_availabilitySlo = value;
  }
  inline Achievability& WithAvailabilitySlo(AchievabilityStatus value) {
    SetAvailabilitySlo(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The achievability status of the multi-AZ RTO and RPO targets for the
   * service.</p>
   */
  inline AchievabilityStatus GetMultiAzRtoRpo() const { return m_multiAzRtoRpo; }
  inline bool MultiAzRtoRpoHasBeenSet() const { return m_multiAzRtoRpoHasBeenSet; }
  inline void SetMultiAzRtoRpo(AchievabilityStatus value) {
    m_multiAzRtoRpoHasBeenSet = true;
    m_multiAzRtoRpo = value;
  }
  inline Achievability& WithMultiAzRtoRpo(AchievabilityStatus value) {
    SetMultiAzRtoRpo(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The achievability status of the multi-Region RTO and RPO targets for the
   * service.</p>
   */
  inline AchievabilityStatus GetMultiRegionRtoRpo() const { return m_multiRegionRtoRpo; }
  inline bool MultiRegionRtoRpoHasBeenSet() const { return m_multiRegionRtoRpoHasBeenSet; }
  inline void SetMultiRegionRtoRpo(AchievabilityStatus value) {
    m_multiRegionRtoRpoHasBeenSet = true;
    m_multiRegionRtoRpo = value;
  }
  inline Achievability& WithMultiRegionRtoRpo(AchievabilityStatus value) {
    SetMultiRegionRtoRpo(value);
    return *this;
  }
  ///@}
 private:
  AchievabilityStatus m_availabilitySlo{AchievabilityStatus::NOT_SET};

  AchievabilityStatus m_multiAzRtoRpo{AchievabilityStatus::NOT_SET};

  AchievabilityStatus m_multiRegionRtoRpo{AchievabilityStatus::NOT_SET};
  bool m_availabilitySloHasBeenSet = false;
  bool m_multiAzRtoRpoHasBeenSet = false;
  bool m_multiRegionRtoRpoHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
