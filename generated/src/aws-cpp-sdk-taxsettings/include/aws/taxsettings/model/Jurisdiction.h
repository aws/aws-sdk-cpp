/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p>The jurisdiction details of the TRN information of the customers. This
   * doesn't contain full legal address, and contains only country code and
   * state/region/province. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/Jurisdiction">AWS
   * API Reference</a></p>
   */
  class Jurisdiction
  {
  public:
    AWS_TAXSETTINGS_API Jurisdiction();
    AWS_TAXSETTINGS_API Jurisdiction(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Jurisdiction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The country code of the jurisdiction. </p>
     */
    inline const Aws::String& GetCountryCode() const{ return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(const Aws::String& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline void SetCountryCode(Aws::String&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }
    inline void SetCountryCode(const char* value) { m_countryCodeHasBeenSet = true; m_countryCode.assign(value); }
    inline Jurisdiction& WithCountryCode(const Aws::String& value) { SetCountryCode(value); return *this;}
    inline Jurisdiction& WithCountryCode(Aws::String&& value) { SetCountryCode(std::move(value)); return *this;}
    inline Jurisdiction& WithCountryCode(const char* value) { SetCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The state, region, or province associated with the country of the
     * jurisdiction, if applicable. </p>
     */
    inline const Aws::String& GetStateOrRegion() const{ return m_stateOrRegion; }
    inline bool StateOrRegionHasBeenSet() const { return m_stateOrRegionHasBeenSet; }
    inline void SetStateOrRegion(const Aws::String& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = value; }
    inline void SetStateOrRegion(Aws::String&& value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion = std::move(value); }
    inline void SetStateOrRegion(const char* value) { m_stateOrRegionHasBeenSet = true; m_stateOrRegion.assign(value); }
    inline Jurisdiction& WithStateOrRegion(const Aws::String& value) { SetStateOrRegion(value); return *this;}
    inline Jurisdiction& WithStateOrRegion(Aws::String&& value) { SetStateOrRegion(std::move(value)); return *this;}
    inline Jurisdiction& WithStateOrRegion(const char* value) { SetStateOrRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_countryCode;
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_stateOrRegion;
    bool m_stateOrRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
