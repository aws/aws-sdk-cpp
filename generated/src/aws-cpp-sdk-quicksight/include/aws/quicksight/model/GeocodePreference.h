/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GeocodePreferenceValue.h>
#include <aws/quicksight/model/GeocoderHierarchy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The geocode preference.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeocodePreference">AWS
 * API Reference</a></p>
 */
class GeocodePreference {
 public:
  AWS_QUICKSIGHT_API GeocodePreference() = default;
  AWS_QUICKSIGHT_API GeocodePreference(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API GeocodePreference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique request key for the geocode preference.</p>
   */
  inline const GeocoderHierarchy& GetRequestKey() const { return m_requestKey; }
  inline bool RequestKeyHasBeenSet() const { return m_requestKeyHasBeenSet; }
  template <typename RequestKeyT = GeocoderHierarchy>
  void SetRequestKey(RequestKeyT&& value) {
    m_requestKeyHasBeenSet = true;
    m_requestKey = std::forward<RequestKeyT>(value);
  }
  template <typename RequestKeyT = GeocoderHierarchy>
  GeocodePreference& WithRequestKey(RequestKeyT&& value) {
    SetRequestKey(std::forward<RequestKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The preference definition for the geocode preference.</p>
   */
  inline const GeocodePreferenceValue& GetPreference() const { return m_preference; }
  inline bool PreferenceHasBeenSet() const { return m_preferenceHasBeenSet; }
  template <typename PreferenceT = GeocodePreferenceValue>
  void SetPreference(PreferenceT&& value) {
    m_preferenceHasBeenSet = true;
    m_preference = std::forward<PreferenceT>(value);
  }
  template <typename PreferenceT = GeocodePreferenceValue>
  GeocodePreference& WithPreference(PreferenceT&& value) {
    SetPreference(std::forward<PreferenceT>(value));
    return *this;
  }
  ///@}
 private:
  GeocoderHierarchy m_requestKey;

  GeocodePreferenceValue m_preference;
  bool m_requestKeyHasBeenSet = false;
  bool m_preferenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
