/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about a country.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Country">AWS
   * API Reference</a></p>
   */
  class Country
  {
  public:
    AWS_SECURITYHUB_API Country() = default;
    AWS_SECURITYHUB_API Country(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Country& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 2-letter ISO 3166 country code for the country.</p>
     */
    inline const Aws::String& GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    template<typename CountryCodeT = Aws::String>
    void SetCountryCode(CountryCodeT&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::forward<CountryCodeT>(value); }
    template<typename CountryCodeT = Aws::String>
    Country& WithCountryCode(CountryCodeT&& value) { SetCountryCode(std::forward<CountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the country.</p>
     */
    inline const Aws::String& GetCountryName() const { return m_countryName; }
    inline bool CountryNameHasBeenSet() const { return m_countryNameHasBeenSet; }
    template<typename CountryNameT = Aws::String>
    void SetCountryName(CountryNameT&& value) { m_countryNameHasBeenSet = true; m_countryName = std::forward<CountryNameT>(value); }
    template<typename CountryNameT = Aws::String>
    Country& WithCountryName(CountryNameT&& value) { SetCountryName(std::forward<CountryNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_countryName;
    bool m_countryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
