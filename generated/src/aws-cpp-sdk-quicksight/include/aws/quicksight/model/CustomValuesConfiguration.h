/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CustomParameterValues.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration of custom values for the destination parameter in
   * <code>DestinationParameterValueConfiguration</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomValuesConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomValuesConfiguration
  {
  public:
    AWS_QUICKSIGHT_API CustomValuesConfiguration() = default;
    AWS_QUICKSIGHT_API CustomValuesConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomValuesConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Includes the null value in custom action parameter values.</p>
     */
    inline bool GetIncludeNullValue() const { return m_includeNullValue; }
    inline bool IncludeNullValueHasBeenSet() const { return m_includeNullValueHasBeenSet; }
    inline void SetIncludeNullValue(bool value) { m_includeNullValueHasBeenSet = true; m_includeNullValue = value; }
    inline CustomValuesConfiguration& WithIncludeNullValue(bool value) { SetIncludeNullValue(value); return *this;}
    ///@}

    ///@{
    
    inline const CustomParameterValues& GetCustomValues() const { return m_customValues; }
    inline bool CustomValuesHasBeenSet() const { return m_customValuesHasBeenSet; }
    template<typename CustomValuesT = CustomParameterValues>
    void SetCustomValues(CustomValuesT&& value) { m_customValuesHasBeenSet = true; m_customValues = std::forward<CustomValuesT>(value); }
    template<typename CustomValuesT = CustomParameterValues>
    CustomValuesConfiguration& WithCustomValues(CustomValuesT&& value) { SetCustomValues(std::forward<CustomValuesT>(value)); return *this;}
    ///@}
  private:

    bool m_includeNullValue{false};
    bool m_includeNullValueHasBeenSet = false;

    CustomParameterValues m_customValues;
    bool m_customValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
