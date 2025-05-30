﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DisplayFormat.h>
#include <aws/quicksight/model/DisplayFormatOptions.h>
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
   * <p>A structure that represents a default formatting definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultFormatting">AWS
   * API Reference</a></p>
   */
  class DefaultFormatting
  {
  public:
    AWS_QUICKSIGHT_API DefaultFormatting() = default;
    AWS_QUICKSIGHT_API DefaultFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display format. Valid values for this structure are <code>AUTO</code>,
     * <code>PERCENT</code>, <code>CURRENCY</code>, <code>NUMBER</code>,
     * <code>DATE</code>, and <code>STRING</code>.</p>
     */
    inline DisplayFormat GetDisplayFormat() const { return m_displayFormat; }
    inline bool DisplayFormatHasBeenSet() const { return m_displayFormatHasBeenSet; }
    inline void SetDisplayFormat(DisplayFormat value) { m_displayFormatHasBeenSet = true; m_displayFormat = value; }
    inline DefaultFormatting& WithDisplayFormat(DisplayFormat value) { SetDisplayFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional options for display formatting.</p>
     */
    inline const DisplayFormatOptions& GetDisplayFormatOptions() const { return m_displayFormatOptions; }
    inline bool DisplayFormatOptionsHasBeenSet() const { return m_displayFormatOptionsHasBeenSet; }
    template<typename DisplayFormatOptionsT = DisplayFormatOptions>
    void SetDisplayFormatOptions(DisplayFormatOptionsT&& value) { m_displayFormatOptionsHasBeenSet = true; m_displayFormatOptions = std::forward<DisplayFormatOptionsT>(value); }
    template<typename DisplayFormatOptionsT = DisplayFormatOptions>
    DefaultFormatting& WithDisplayFormatOptions(DisplayFormatOptionsT&& value) { SetDisplayFormatOptions(std::forward<DisplayFormatOptionsT>(value)); return *this;}
    ///@}
  private:

    DisplayFormat m_displayFormat{DisplayFormat::NOT_SET};
    bool m_displayFormatHasBeenSet = false;

    DisplayFormatOptions m_displayFormatOptions;
    bool m_displayFormatOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
