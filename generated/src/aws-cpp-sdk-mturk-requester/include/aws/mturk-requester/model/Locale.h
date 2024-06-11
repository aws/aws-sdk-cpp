﻿/**
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
    AWS_MTURK_API Locale();
    AWS_MTURK_API Locale(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Locale& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The country of the locale. Must be a valid ISO 3166 country code. For
     * example, the code US refers to the United States of America. </p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline Locale& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline Locale& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline Locale& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state or subdivision of the locale. A valid ISO 3166-2 subdivision code.
     * For example, the code WA refers to the state of Washington.</p>
     */
    inline const Aws::String& GetSubdivision() const{ return m_subdivision; }
    inline bool SubdivisionHasBeenSet() const { return m_subdivisionHasBeenSet; }
    inline void SetSubdivision(const Aws::String& value) { m_subdivisionHasBeenSet = true; m_subdivision = value; }
    inline void SetSubdivision(Aws::String&& value) { m_subdivisionHasBeenSet = true; m_subdivision = std::move(value); }
    inline void SetSubdivision(const char* value) { m_subdivisionHasBeenSet = true; m_subdivision.assign(value); }
    inline Locale& WithSubdivision(const Aws::String& value) { SetSubdivision(value); return *this;}
    inline Locale& WithSubdivision(Aws::String&& value) { SetSubdivision(std::move(value)); return *this;}
    inline Locale& WithSubdivision(const char* value) { SetSubdivision(value); return *this;}
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
