/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/AbWatermarkerIdLength.h>
#include <aws/medialive/model/AbWatermarkingCustomProfile.h>
#include <aws/medialive/model/AbWatermarkingProfile.h>
#include <aws/medialive/model/OutputLocationRef.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaLive {
namespace Model {

/**
 * A/B Watermarker settings for MediaPackage V2 output groups.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageV2AbWatermarkerIrdetoSettings">AWS
 * API Reference</a></p>
 */
class MediaPackageV2AbWatermarkerIrdetoSettings {
 public:
  AWS_MEDIALIVE_API MediaPackageV2AbWatermarkerIrdetoSettings() = default;
  AWS_MEDIALIVE_API MediaPackageV2AbWatermarkerIrdetoSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API MediaPackageV2AbWatermarkerIrdetoSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * The "B" pipeline renditions for the additional destinations.
   */
  inline const Aws::Vector<OutputLocationRef>& GetAdditionalDestinationsAlternateDestinations() const {
    return m_additionalDestinationsAlternateDestinations;
  }
  inline bool AdditionalDestinationsAlternateDestinationsHasBeenSet() const {
    return m_additionalDestinationsAlternateDestinationsHasBeenSet;
  }
  template <typename AdditionalDestinationsAlternateDestinationsT = Aws::Vector<OutputLocationRef>>
  void SetAdditionalDestinationsAlternateDestinations(AdditionalDestinationsAlternateDestinationsT&& value) {
    m_additionalDestinationsAlternateDestinationsHasBeenSet = true;
    m_additionalDestinationsAlternateDestinations = std::forward<AdditionalDestinationsAlternateDestinationsT>(value);
  }
  template <typename AdditionalDestinationsAlternateDestinationsT = Aws::Vector<OutputLocationRef>>
  MediaPackageV2AbWatermarkerIrdetoSettings& WithAdditionalDestinationsAlternateDestinations(
      AdditionalDestinationsAlternateDestinationsT&& value) {
    SetAdditionalDestinationsAlternateDestinations(std::forward<AdditionalDestinationsAlternateDestinationsT>(value));
    return *this;
  }
  template <typename AdditionalDestinationsAlternateDestinationsT = OutputLocationRef>
  MediaPackageV2AbWatermarkerIrdetoSettings& AddAdditionalDestinationsAlternateDestinations(
      AdditionalDestinationsAlternateDestinationsT&& value) {
    m_additionalDestinationsAlternateDestinationsHasBeenSet = true;
    m_additionalDestinationsAlternateDestinations.emplace_back(std::forward<AdditionalDestinationsAlternateDestinationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The "B" pipeline renditions for the main destination.
   */
  inline const OutputLocationRef& GetAlternateDestination() const { return m_alternateDestination; }
  inline bool AlternateDestinationHasBeenSet() const { return m_alternateDestinationHasBeenSet; }
  template <typename AlternateDestinationT = OutputLocationRef>
  void SetAlternateDestination(AlternateDestinationT&& value) {
    m_alternateDestinationHasBeenSet = true;
    m_alternateDestination = std::forward<AlternateDestinationT>(value);
  }
  template <typename AlternateDestinationT = OutputLocationRef>
  MediaPackageV2AbWatermarkerIrdetoSettings& WithAlternateDestination(AlternateDestinationT&& value) {
    SetAlternateDestination(std::forward<AlternateDestinationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The vendor-provided custom profile values.
   */
  inline const AbWatermarkingCustomProfile& GetCustomProfile() const { return m_customProfile; }
  inline bool CustomProfileHasBeenSet() const { return m_customProfileHasBeenSet; }
  template <typename CustomProfileT = AbWatermarkingCustomProfile>
  void SetCustomProfile(CustomProfileT&& value) {
    m_customProfileHasBeenSet = true;
    m_customProfile = std::forward<CustomProfileT>(value);
  }
  template <typename CustomProfileT = AbWatermarkingCustomProfile>
  MediaPackageV2AbWatermarkerIrdetoSettings& WithCustomProfile(CustomProfileT&& value) {
    SetCustomProfile(std::forward<CustomProfileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The name of the Secrets Manager secret containing the license file.
   */
  inline const Aws::String& GetLicense() const { return m_license; }
  inline bool LicenseHasBeenSet() const { return m_licenseHasBeenSet; }
  template <typename LicenseT = Aws::String>
  void SetLicense(LicenseT&& value) {
    m_licenseHasBeenSet = true;
    m_license = std::forward<LicenseT>(value);
  }
  template <typename LicenseT = Aws::String>
  MediaPackageV2AbWatermarkerIrdetoSettings& WithLicense(LicenseT&& value) {
    SetLicense(std::forward<LicenseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * The vendor-provided Operator ID.
   */
  inline int GetOperatorId() const { return m_operatorId; }
  inline bool OperatorIdHasBeenSet() const { return m_operatorIdHasBeenSet; }
  inline void SetOperatorId(int value) {
    m_operatorIdHasBeenSet = true;
    m_operatorId = value;
  }
  inline MediaPackageV2AbWatermarkerIrdetoSettings& WithOperatorId(int value) {
    SetOperatorId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The number of segments per watermarking bit. The total duration of the
   * watermarking bit
should be the LCM (least common multiple) of all segments sizes
   * emitted by the downstream packager.
   */
  inline int GetPolyPeriod() const { return m_polyPeriod; }
  inline bool PolyPeriodHasBeenSet() const { return m_polyPeriodHasBeenSet; }
  inline void SetPolyPeriod(int value) {
    m_polyPeriodHasBeenSet = true;
    m_polyPeriod = value;
  }
  inline MediaPackageV2AbWatermarkerIrdetoSettings& WithPolyPeriod(int value) {
    SetPolyPeriod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The vendor-provided profile choice.
   */
  inline AbWatermarkingProfile GetProfile() const { return m_profile; }
  inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
  inline void SetProfile(AbWatermarkingProfile value) {
    m_profileHasBeenSet = true;
    m_profile = value;
  }
  inline MediaPackageV2AbWatermarkerIrdetoSettings& WithProfile(AbWatermarkingProfile value) {
    SetProfile(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * The number of bits that compose the watermarking identifier to be embedded.
   */
  inline AbWatermarkerIdLength GetWatermarkIdLength() const { return m_watermarkIdLength; }
  inline bool WatermarkIdLengthHasBeenSet() const { return m_watermarkIdLengthHasBeenSet; }
  inline void SetWatermarkIdLength(AbWatermarkerIdLength value) {
    m_watermarkIdLengthHasBeenSet = true;
    m_watermarkIdLength = value;
  }
  inline MediaPackageV2AbWatermarkerIrdetoSettings& WithWatermarkIdLength(AbWatermarkerIdLength value) {
    SetWatermarkIdLength(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<OutputLocationRef> m_additionalDestinationsAlternateDestinations;

  OutputLocationRef m_alternateDestination;

  AbWatermarkingCustomProfile m_customProfile;

  Aws::String m_license;

  int m_operatorId{0};

  int m_polyPeriod{0};

  AbWatermarkingProfile m_profile{AbWatermarkingProfile::NOT_SET};

  AbWatermarkerIdLength m_watermarkIdLength{AbWatermarkerIdLength::NOT_SET};
  bool m_additionalDestinationsAlternateDestinationsHasBeenSet = false;
  bool m_alternateDestinationHasBeenSet = false;
  bool m_customProfileHasBeenSet = false;
  bool m_licenseHasBeenSet = false;
  bool m_operatorIdHasBeenSet = false;
  bool m_polyPeriodHasBeenSet = false;
  bool m_profileHasBeenSet = false;
  bool m_watermarkIdLengthHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
