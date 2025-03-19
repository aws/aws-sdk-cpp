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
   * <p>Information about a city.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/City">AWS
   * API Reference</a></p>
   */
  class City
  {
  public:
    AWS_SECURITYHUB_API City() = default;
    AWS_SECURITYHUB_API City(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API City& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the city.</p>
     */
    inline const Aws::String& GetCityName() const { return m_cityName; }
    inline bool CityNameHasBeenSet() const { return m_cityNameHasBeenSet; }
    template<typename CityNameT = Aws::String>
    void SetCityName(CityNameT&& value) { m_cityNameHasBeenSet = true; m_cityName = std::forward<CityNameT>(value); }
    template<typename CityNameT = Aws::String>
    City& WithCityName(CityNameT&& value) { SetCityName(std::forward<CityNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cityName;
    bool m_cityNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
