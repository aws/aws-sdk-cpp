/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Determines the font settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Font">AWS API
   * Reference</a></p>
   */
  class Font
  {
  public:
    AWS_QUICKSIGHT_API Font();
    AWS_QUICKSIGHT_API Font(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Font& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the font family settings.</p>
     */
    inline const Aws::String& GetFontFamily() const{ return m_fontFamily; }

    /**
     * <p>Determines the font family settings.</p>
     */
    inline bool FontFamilyHasBeenSet() const { return m_fontFamilyHasBeenSet; }

    /**
     * <p>Determines the font family settings.</p>
     */
    inline void SetFontFamily(const Aws::String& value) { m_fontFamilyHasBeenSet = true; m_fontFamily = value; }

    /**
     * <p>Determines the font family settings.</p>
     */
    inline void SetFontFamily(Aws::String&& value) { m_fontFamilyHasBeenSet = true; m_fontFamily = std::move(value); }

    /**
     * <p>Determines the font family settings.</p>
     */
    inline void SetFontFamily(const char* value) { m_fontFamilyHasBeenSet = true; m_fontFamily.assign(value); }

    /**
     * <p>Determines the font family settings.</p>
     */
    inline Font& WithFontFamily(const Aws::String& value) { SetFontFamily(value); return *this;}

    /**
     * <p>Determines the font family settings.</p>
     */
    inline Font& WithFontFamily(Aws::String&& value) { SetFontFamily(std::move(value)); return *this;}

    /**
     * <p>Determines the font family settings.</p>
     */
    inline Font& WithFontFamily(const char* value) { SetFontFamily(value); return *this;}

  private:

    Aws::String m_fontFamily;
    bool m_fontFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
