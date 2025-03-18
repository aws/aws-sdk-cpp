/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FontConfiguration.h>
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
   * <p>The custom text content (value, font configuration) for the table link
   * content configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableFieldCustomTextContent">AWS
   * API Reference</a></p>
   */
  class TableFieldCustomTextContent
  {
  public:
    AWS_QUICKSIGHT_API TableFieldCustomTextContent() = default;
    AWS_QUICKSIGHT_API TableFieldCustomTextContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldCustomTextContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string value of the custom text content for the table URL link
     * content.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    TableFieldCustomTextContent& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The font configuration of the custom text content for the table URL link
     * content.</p>
     */
    inline const FontConfiguration& GetFontConfiguration() const { return m_fontConfiguration; }
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }
    template<typename FontConfigurationT = FontConfiguration>
    void SetFontConfiguration(FontConfigurationT&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::forward<FontConfigurationT>(value); }
    template<typename FontConfigurationT = FontConfiguration>
    TableFieldCustomTextContent& WithFontConfiguration(FontConfigurationT&& value) { SetFontConfiguration(std::forward<FontConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
