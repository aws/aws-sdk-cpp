/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>The preference hierarchy for the geocode preference.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GeocoderHierarchy">AWS
 * API Reference</a></p>
 */
class GeocoderHierarchy {
 public:
  AWS_QUICKSIGHT_API GeocoderHierarchy() = default;
  AWS_QUICKSIGHT_API GeocoderHierarchy(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API GeocoderHierarchy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The country value for the preference hierarchy.</p>
   */
  inline const Aws::String& GetCountry() const { return m_country; }
  inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
  template <typename CountryT = Aws::String>
  void SetCountry(CountryT&& value) {
    m_countryHasBeenSet = true;
    m_country = std::forward<CountryT>(value);
  }
  template <typename CountryT = Aws::String>
  GeocoderHierarchy& WithCountry(CountryT&& value) {
    SetCountry(std::forward<CountryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state/region value for the preference hierarchy.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  GeocoderHierarchy& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The county/district value for the preference hierarchy.</p>
   */
  inline const Aws::String& GetCounty() const { return m_county; }
  inline bool CountyHasBeenSet() const { return m_countyHasBeenSet; }
  template <typename CountyT = Aws::String>
  void SetCounty(CountyT&& value) {
    m_countyHasBeenSet = true;
    m_county = std::forward<CountyT>(value);
  }
  template <typename CountyT = Aws::String>
  GeocoderHierarchy& WithCounty(CountyT&& value) {
    SetCounty(std::forward<CountyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The city value for the preference hierarchy.</p>
   */
  inline const Aws::String& GetCity() const { return m_city; }
  inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
  template <typename CityT = Aws::String>
  void SetCity(CityT&& value) {
    m_cityHasBeenSet = true;
    m_city = std::forward<CityT>(value);
  }
  template <typename CityT = Aws::String>
  GeocoderHierarchy& WithCity(CityT&& value) {
    SetCity(std::forward<CityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The postcode value for the preference hierarchy.</p>
   */
  inline const Aws::String& GetPostCode() const { return m_postCode; }
  inline bool PostCodeHasBeenSet() const { return m_postCodeHasBeenSet; }
  template <typename PostCodeT = Aws::String>
  void SetPostCode(PostCodeT&& value) {
    m_postCodeHasBeenSet = true;
    m_postCode = std::forward<PostCodeT>(value);
  }
  template <typename PostCodeT = Aws::String>
  GeocoderHierarchy& WithPostCode(PostCodeT&& value) {
    SetPostCode(std::forward<PostCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_country;

  Aws::String m_state;

  Aws::String m_county;

  Aws::String m_city;

  Aws::String m_postCode;
  bool m_countryHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_countyHasBeenSet = false;
  bool m_cityHasBeenSet = false;
  bool m_postCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
