/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/Font.h>
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
   * <p>Determines the typography options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Typography">AWS
   * API Reference</a></p>
   */
  class Typography
  {
  public:
    AWS_QUICKSIGHT_API Typography();
    AWS_QUICKSIGHT_API Typography(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Typography& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the list of font families.</p>
     */
    inline const Aws::Vector<Font>& GetFontFamilies() const{ return m_fontFamilies; }

    /**
     * <p>Determines the list of font families.</p>
     */
    inline bool FontFamiliesHasBeenSet() const { return m_fontFamiliesHasBeenSet; }

    /**
     * <p>Determines the list of font families.</p>
     */
    inline void SetFontFamilies(const Aws::Vector<Font>& value) { m_fontFamiliesHasBeenSet = true; m_fontFamilies = value; }

    /**
     * <p>Determines the list of font families.</p>
     */
    inline void SetFontFamilies(Aws::Vector<Font>&& value) { m_fontFamiliesHasBeenSet = true; m_fontFamilies = std::move(value); }

    /**
     * <p>Determines the list of font families.</p>
     */
    inline Typography& WithFontFamilies(const Aws::Vector<Font>& value) { SetFontFamilies(value); return *this;}

    /**
     * <p>Determines the list of font families.</p>
     */
    inline Typography& WithFontFamilies(Aws::Vector<Font>&& value) { SetFontFamilies(std::move(value)); return *this;}

    /**
     * <p>Determines the list of font families.</p>
     */
    inline Typography& AddFontFamilies(const Font& value) { m_fontFamiliesHasBeenSet = true; m_fontFamilies.push_back(value); return *this; }

    /**
     * <p>Determines the list of font families.</p>
     */
    inline Typography& AddFontFamilies(Font&& value) { m_fontFamiliesHasBeenSet = true; m_fontFamilies.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Font> m_fontFamilies;
    bool m_fontFamiliesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
