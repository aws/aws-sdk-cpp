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
    AWS_QUICKSIGHT_API FontSize() = default;
    AWS_QUICKSIGHT_API FontSize(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FontSize& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lexical name for the text size, proportional to its surrounding
     * context.</p>
     */
    inline RelativeFontSize GetRelative() const { return m_relative; }
    inline bool RelativeHasBeenSet() const { return m_relativeHasBeenSet; }
    inline void SetRelative(RelativeFontSize value) { m_relativeHasBeenSet = true; m_relative = value; }
    inline FontSize& WithRelative(RelativeFontSize value) { SetRelative(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The font size that you want to use in px.</p>
     */
    inline const Aws::String& GetAbsolute() const { return m_absolute; }
    inline bool AbsoluteHasBeenSet() const { return m_absoluteHasBeenSet; }
    template<typename AbsoluteT = Aws::String>
    void SetAbsolute(AbsoluteT&& value) { m_absoluteHasBeenSet = true; m_absolute = std::forward<AbsoluteT>(value); }
    template<typename AbsoluteT = Aws::String>
    FontSize& WithAbsolute(AbsoluteT&& value) { SetAbsolute(std::forward<AbsoluteT>(value)); return *this;}
    ///@}
  private:

    RelativeFontSize m_relative{RelativeFontSize::NOT_SET};
    bool m_relativeHasBeenSet = false;

    Aws::String m_absolute;
    bool m_absoluteHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
