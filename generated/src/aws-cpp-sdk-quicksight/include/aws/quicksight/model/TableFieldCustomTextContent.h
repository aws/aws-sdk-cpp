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
    AWS_QUICKSIGHT_API TableFieldCustomTextContent();
    AWS_QUICKSIGHT_API TableFieldCustomTextContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableFieldCustomTextContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string value of the custom text content for the table URL link
     * content.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The string value of the custom text content for the table URL link
     * content.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The string value of the custom text content for the table URL link
     * content.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The string value of the custom text content for the table URL link
     * content.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The string value of the custom text content for the table URL link
     * content.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The string value of the custom text content for the table URL link
     * content.</p>
     */
    inline TableFieldCustomTextContent& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The string value of the custom text content for the table URL link
     * content.</p>
     */
    inline TableFieldCustomTextContent& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The string value of the custom text content for the table URL link
     * content.</p>
     */
    inline TableFieldCustomTextContent& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The font configuration of the custom text content for the table URL link
     * content.</p>
     */
    inline const FontConfiguration& GetFontConfiguration() const{ return m_fontConfiguration; }

    /**
     * <p>The font configuration of the custom text content for the table URL link
     * content.</p>
     */
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }

    /**
     * <p>The font configuration of the custom text content for the table URL link
     * content.</p>
     */
    inline void SetFontConfiguration(const FontConfiguration& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = value; }

    /**
     * <p>The font configuration of the custom text content for the table URL link
     * content.</p>
     */
    inline void SetFontConfiguration(FontConfiguration&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::move(value); }

    /**
     * <p>The font configuration of the custom text content for the table URL link
     * content.</p>
     */
    inline TableFieldCustomTextContent& WithFontConfiguration(const FontConfiguration& value) { SetFontConfiguration(value); return *this;}

    /**
     * <p>The font configuration of the custom text content for the table URL link
     * content.</p>
     */
    inline TableFieldCustomTextContent& WithFontConfiguration(FontConfiguration&& value) { SetFontConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
