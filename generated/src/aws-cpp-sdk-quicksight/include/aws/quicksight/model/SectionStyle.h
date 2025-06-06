﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Spacing.h>
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
   * <p>The options that style a section.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SectionStyle">AWS
   * API Reference</a></p>
   */
  class SectionStyle
  {
  public:
    AWS_QUICKSIGHT_API SectionStyle() = default;
    AWS_QUICKSIGHT_API SectionStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SectionStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The height of a section.</p> <p>Heights can only be defined for header and
     * footer sections. The default height margin is 0.5 inches. </p>
     */
    inline const Aws::String& GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    template<typename HeightT = Aws::String>
    void SetHeight(HeightT&& value) { m_heightHasBeenSet = true; m_height = std::forward<HeightT>(value); }
    template<typename HeightT = Aws::String>
    SectionStyle& WithHeight(HeightT&& value) { SetHeight(std::forward<HeightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The spacing between section content and its top, bottom, left, and right
     * edges.</p> <p>There is no padding by default.</p>
     */
    inline const Spacing& GetPadding() const { return m_padding; }
    inline bool PaddingHasBeenSet() const { return m_paddingHasBeenSet; }
    template<typename PaddingT = Spacing>
    void SetPadding(PaddingT&& value) { m_paddingHasBeenSet = true; m_padding = std::forward<PaddingT>(value); }
    template<typename PaddingT = Spacing>
    SectionStyle& WithPadding(PaddingT&& value) { SetPadding(std::forward<PaddingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_height;
    bool m_heightHasBeenSet = false;

    Spacing m_padding;
    bool m_paddingHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
