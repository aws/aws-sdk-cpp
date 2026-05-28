/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

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
 * <p>Metadata for a service achievability updated event.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceAchievabilityUpdatedMetadata">AWS
 * API Reference</a></p>
 */
class ServiceAchievabilityUpdatedMetadata {
 public:
  AWS_RESILIENCEHUBV2_API ServiceAchievabilityUpdatedMetadata() = default;
  AWS_RESILIENCEHUBV2_API ServiceAchievabilityUpdatedMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceAchievabilityUpdatedMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The assessment identifier that triggered the update.</p>
   */
  inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
  inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
  template <typename AssessmentIdT = Aws::String>
  void SetAssessmentId(AssessmentIdT&& value) {
    m_assessmentIdHasBeenSet = true;
    m_assessmentId = std::forward<AssessmentIdT>(value);
  }
  template <typename AssessmentIdT = Aws::String>
  ServiceAchievabilityUpdatedMetadata& WithAssessmentId(AssessmentIdT&& value) {
    SetAssessmentId(std::forward<AssessmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated achievability status of the availability SLO.</p>
   */
  inline const Aws::String& GetAvailabilitySlo() const { return m_availabilitySlo; }
  inline bool AvailabilitySloHasBeenSet() const { return m_availabilitySloHasBeenSet; }
  template <typename AvailabilitySloT = Aws::String>
  void SetAvailabilitySlo(AvailabilitySloT&& value) {
    m_availabilitySloHasBeenSet = true;
    m_availabilitySlo = std::forward<AvailabilitySloT>(value);
  }
  template <typename AvailabilitySloT = Aws::String>
  ServiceAchievabilityUpdatedMetadata& WithAvailabilitySlo(AvailabilitySloT&& value) {
    SetAvailabilitySlo(std::forward<AvailabilitySloT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated achievability status of the multi-AZ RTO and RPO targets.</p>
   */
  inline const Aws::String& GetMultiAzRtoRpo() const { return m_multiAzRtoRpo; }
  inline bool MultiAzRtoRpoHasBeenSet() const { return m_multiAzRtoRpoHasBeenSet; }
  template <typename MultiAzRtoRpoT = Aws::String>
  void SetMultiAzRtoRpo(MultiAzRtoRpoT&& value) {
    m_multiAzRtoRpoHasBeenSet = true;
    m_multiAzRtoRpo = std::forward<MultiAzRtoRpoT>(value);
  }
  template <typename MultiAzRtoRpoT = Aws::String>
  ServiceAchievabilityUpdatedMetadata& WithMultiAzRtoRpo(MultiAzRtoRpoT&& value) {
    SetMultiAzRtoRpo(std::forward<MultiAzRtoRpoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated achievability status of the multi-Region RTO and RPO targets.</p>
   */
  inline const Aws::String& GetMultiRegionRtoRpo() const { return m_multiRegionRtoRpo; }
  inline bool MultiRegionRtoRpoHasBeenSet() const { return m_multiRegionRtoRpoHasBeenSet; }
  template <typename MultiRegionRtoRpoT = Aws::String>
  void SetMultiRegionRtoRpo(MultiRegionRtoRpoT&& value) {
    m_multiRegionRtoRpoHasBeenSet = true;
    m_multiRegionRtoRpo = std::forward<MultiRegionRtoRpoT>(value);
  }
  template <typename MultiRegionRtoRpoT = Aws::String>
  ServiceAchievabilityUpdatedMetadata& WithMultiRegionRtoRpo(MultiRegionRtoRpoT&& value) {
    SetMultiRegionRtoRpo(std::forward<MultiRegionRtoRpoT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assessmentId;

  Aws::String m_availabilitySlo;

  Aws::String m_multiAzRtoRpo;

  Aws::String m_multiRegionRtoRpo;
  bool m_assessmentIdHasBeenSet = false;
  bool m_availabilitySloHasBeenSet = false;
  bool m_multiAzRtoRpoHasBeenSet = false;
  bool m_multiRegionRtoRpoHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
