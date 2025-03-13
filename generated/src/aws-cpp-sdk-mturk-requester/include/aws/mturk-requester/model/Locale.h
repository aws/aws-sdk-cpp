/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p>The Locale data structure represents a geographical region or
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/Locale">AWS
   * API Reference</a></p>
   */
  class Locale
  {
  public:
    AWS_MTURK_API Locale() = default;
    AWS_MTURK_API Locale(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Locale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The country of the locale. Must be a valid ISO 3166 country code. For
     * example, the code US refers to the United States of America. </p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    Locale& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state or subdivision of the locale. A valid ISO 3166-2 subdivision code.
     * For example, the code WA refers to the state of Washington.</p>
     */
    inline const Aws::String& GetSubdivision() const { return m_subdivision; }
    inline bool SubdivisionHasBeenSet() const { return m_subdivisionHasBeenSet; }
    template<typename SubdivisionT = Aws::String>
    void SetSubdivision(SubdivisionT&& value) { m_subdivisionHasBeenSet = true; m_subdivision = std::forward<SubdivisionT>(value); }
    template<typename SubdivisionT = Aws::String>
    Locale& WithSubdivision(SubdivisionT&& value) { SetSubdivision(std::forward<SubdivisionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_subdivision;
    bool m_subdivisionHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
