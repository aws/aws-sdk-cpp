﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The background style configuration of a free-form layout
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FreeFormLayoutElementBorderStyle">AWS
   * API Reference</a></p>
   */
  class FreeFormLayoutElementBorderStyle
  {
  public:
    AWS_QUICKSIGHT_API FreeFormLayoutElementBorderStyle();
    AWS_QUICKSIGHT_API FreeFormLayoutElementBorderStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FreeFormLayoutElementBorderStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The border visibility of a free-form layout element.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline FreeFormLayoutElementBorderStyle& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline FreeFormLayoutElementBorderStyle& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The border color of a free-form layout element.</p>
     */
    inline const Aws::String& GetColor() const{ return m_color; }
    inline bool ColorHasBeenSet() const { return m_colorHasBeenSet; }
    inline void SetColor(const Aws::String& value) { m_colorHasBeenSet = true; m_color = value; }
    inline void SetColor(Aws::String&& value) { m_colorHasBeenSet = true; m_color = std::move(value); }
    inline void SetColor(const char* value) { m_colorHasBeenSet = true; m_color.assign(value); }
    inline FreeFormLayoutElementBorderStyle& WithColor(const Aws::String& value) { SetColor(value); return *this;}
    inline FreeFormLayoutElementBorderStyle& WithColor(Aws::String&& value) { SetColor(std::move(value)); return *this;}
    inline FreeFormLayoutElementBorderStyle& WithColor(const char* value) { SetColor(value); return *this;}
    ///@}
  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    Aws::String m_color;
    bool m_colorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
