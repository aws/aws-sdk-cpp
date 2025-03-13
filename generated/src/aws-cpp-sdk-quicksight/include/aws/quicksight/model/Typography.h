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
    AWS_QUICKSIGHT_API Typography() = default;
    AWS_QUICKSIGHT_API Typography(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Typography& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the list of font families.</p>
     */
    inline const Aws::Vector<Font>& GetFontFamilies() const { return m_fontFamilies; }
    inline bool FontFamiliesHasBeenSet() const { return m_fontFamiliesHasBeenSet; }
    template<typename FontFamiliesT = Aws::Vector<Font>>
    void SetFontFamilies(FontFamiliesT&& value) { m_fontFamiliesHasBeenSet = true; m_fontFamilies = std::forward<FontFamiliesT>(value); }
    template<typename FontFamiliesT = Aws::Vector<Font>>
    Typography& WithFontFamilies(FontFamiliesT&& value) { SetFontFamilies(std::forward<FontFamiliesT>(value)); return *this;}
    template<typename FontFamiliesT = Font>
    Typography& AddFontFamilies(FontFamiliesT&& value) { m_fontFamiliesHasBeenSet = true; m_fontFamilies.emplace_back(std::forward<FontFamiliesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Font> m_fontFamilies;
    bool m_fontFamiliesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
