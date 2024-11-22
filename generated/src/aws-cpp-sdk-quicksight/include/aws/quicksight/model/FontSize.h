/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RelativeFontSize.h>
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
   * <p>The option that determines the text display size.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FontSize">AWS
   * API Reference</a></p>
   */
  class FontSize
  {
  public:
    AWS_QUICKSIGHT_API FontSize();
    AWS_QUICKSIGHT_API FontSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FontSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lexical name for the text size, proportional to its surrounding
     * context.</p>
     */
    inline const RelativeFontSize& GetRelative() const{ return m_relative; }
    inline bool RelativeHasBeenSet() const { return m_relativeHasBeenSet; }
    inline void SetRelative(const RelativeFontSize& value) { m_relativeHasBeenSet = true; m_relative = value; }
    inline void SetRelative(RelativeFontSize&& value) { m_relativeHasBeenSet = true; m_relative = std::move(value); }
    inline FontSize& WithRelative(const RelativeFontSize& value) { SetRelative(value); return *this;}
    inline FontSize& WithRelative(RelativeFontSize&& value) { SetRelative(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The font size that you want to use in px.</p>
     */
    inline const Aws::String& GetAbsolute() const{ return m_absolute; }
    inline bool AbsoluteHasBeenSet() const { return m_absoluteHasBeenSet; }
    inline void SetAbsolute(const Aws::String& value) { m_absoluteHasBeenSet = true; m_absolute = value; }
    inline void SetAbsolute(Aws::String&& value) { m_absoluteHasBeenSet = true; m_absolute = std::move(value); }
    inline void SetAbsolute(const char* value) { m_absoluteHasBeenSet = true; m_absolute.assign(value); }
    inline FontSize& WithAbsolute(const Aws::String& value) { SetAbsolute(value); return *this;}
    inline FontSize& WithAbsolute(Aws::String&& value) { SetAbsolute(std::move(value)); return *this;}
    inline FontSize& WithAbsolute(const char* value) { SetAbsolute(value); return *this;}
    ///@}
  private:

    RelativeFontSize m_relative;
    bool m_relativeHasBeenSet = false;

    Aws::String m_absolute;
    bool m_absoluteHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
