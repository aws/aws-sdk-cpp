/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {

/**
 * <p>The geographic location of the client for a network flow.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/ClientLocation">AWS
 * API Reference</a></p>
 */
class ClientLocation {
 public:
  AWS_NETWORKFLOWMONITOR_API ClientLocation() = default;
  AWS_NETWORKFLOWMONITOR_API ClientLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API ClientLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The city where the client is located.</p>
   */
  inline const Aws::String& GetCity() const { return m_city; }
  inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
  template <typename CityT = Aws::String>
  void SetCity(CityT&& value) {
    m_cityHasBeenSet = true;
    m_city = std::forward<CityT>(value);
  }
  template <typename CityT = Aws::String>
  ClientLocation& WithCity(CityT&& value) {
    SetCity(std::forward<CityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subdivision, such as a state or province, where the client is
   * located.</p>
   */
  inline const Aws::String& GetSubdivision() const { return m_subdivision; }
  inline bool SubdivisionHasBeenSet() const { return m_subdivisionHasBeenSet; }
  template <typename SubdivisionT = Aws::String>
  void SetSubdivision(SubdivisionT&& value) {
    m_subdivisionHasBeenSet = true;
    m_subdivision = std::forward<SubdivisionT>(value);
  }
  template <typename SubdivisionT = Aws::String>
  ClientLocation& WithSubdivision(SubdivisionT&& value) {
    SetSubdivision(std::forward<SubdivisionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country where the client is located.</p>
   */
  inline const Aws::String& GetCountry() const { return m_country; }
  inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
  template <typename CountryT = Aws::String>
  void SetCountry(CountryT&& value) {
    m_countryHasBeenSet = true;
    m_country = std::forward<CountryT>(value);
  }
  template <typename CountryT = Aws::String>
  ClientLocation& WithCountry(CountryT&& value) {
    SetCountry(std::forward<CountryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_city;

  Aws::String m_subdivision;

  Aws::String m_country;
  bool m_cityHasBeenSet = false;
  bool m_subdivisionHasBeenSet = false;
  bool m_countryHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
