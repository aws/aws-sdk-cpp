﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LabelOptions.h>
#include <aws/quicksight/model/TextControlPlaceholderOptions.h>
#include <aws/quicksight/model/SheetControlInfoIconLabelOptions.h>
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
   * <p>The display options of a control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TextFieldControlDisplayOptions">AWS
   * API Reference</a></p>
   */
  class TextFieldControlDisplayOptions
  {
  public:
    AWS_QUICKSIGHT_API TextFieldControlDisplayOptions();
    AWS_QUICKSIGHT_API TextFieldControlDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TextFieldControlDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline const LabelOptions& GetTitleOptions() const{ return m_titleOptions; }
    inline bool TitleOptionsHasBeenSet() const { return m_titleOptionsHasBeenSet; }
    inline void SetTitleOptions(const LabelOptions& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = value; }
    inline void SetTitleOptions(LabelOptions&& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = std::move(value); }
    inline TextFieldControlDisplayOptions& WithTitleOptions(const LabelOptions& value) { SetTitleOptions(value); return *this;}
    inline TextFieldControlDisplayOptions& WithTitleOptions(LabelOptions&& value) { SetTitleOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the placeholder options in a text field control.</p>
     */
    inline const TextControlPlaceholderOptions& GetPlaceholderOptions() const{ return m_placeholderOptions; }
    inline bool PlaceholderOptionsHasBeenSet() const { return m_placeholderOptionsHasBeenSet; }
    inline void SetPlaceholderOptions(const TextControlPlaceholderOptions& value) { m_placeholderOptionsHasBeenSet = true; m_placeholderOptions = value; }
    inline void SetPlaceholderOptions(TextControlPlaceholderOptions&& value) { m_placeholderOptionsHasBeenSet = true; m_placeholderOptions = std::move(value); }
    inline TextFieldControlDisplayOptions& WithPlaceholderOptions(const TextControlPlaceholderOptions& value) { SetPlaceholderOptions(value); return *this;}
    inline TextFieldControlDisplayOptions& WithPlaceholderOptions(TextControlPlaceholderOptions&& value) { SetPlaceholderOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of info icon label options.</p>
     */
    inline const SheetControlInfoIconLabelOptions& GetInfoIconLabelOptions() const{ return m_infoIconLabelOptions; }
    inline bool InfoIconLabelOptionsHasBeenSet() const { return m_infoIconLabelOptionsHasBeenSet; }
    inline void SetInfoIconLabelOptions(const SheetControlInfoIconLabelOptions& value) { m_infoIconLabelOptionsHasBeenSet = true; m_infoIconLabelOptions = value; }
    inline void SetInfoIconLabelOptions(SheetControlInfoIconLabelOptions&& value) { m_infoIconLabelOptionsHasBeenSet = true; m_infoIconLabelOptions = std::move(value); }
    inline TextFieldControlDisplayOptions& WithInfoIconLabelOptions(const SheetControlInfoIconLabelOptions& value) { SetInfoIconLabelOptions(value); return *this;}
    inline TextFieldControlDisplayOptions& WithInfoIconLabelOptions(SheetControlInfoIconLabelOptions&& value) { SetInfoIconLabelOptions(std::move(value)); return *this;}
    ///@}
  private:

    LabelOptions m_titleOptions;
    bool m_titleOptionsHasBeenSet = false;

    TextControlPlaceholderOptions m_placeholderOptions;
    bool m_placeholderOptionsHasBeenSet = false;

    SheetControlInfoIconLabelOptions m_infoIconLabelOptions;
    bool m_infoIconLabelOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
