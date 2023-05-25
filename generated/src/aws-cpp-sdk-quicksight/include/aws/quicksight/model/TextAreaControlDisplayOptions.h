/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LabelOptions.h>
#include <aws/quicksight/model/TextControlPlaceholderOptions.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TextAreaControlDisplayOptions">AWS
   * API Reference</a></p>
   */
  class TextAreaControlDisplayOptions
  {
  public:
    AWS_QUICKSIGHT_API TextAreaControlDisplayOptions();
    AWS_QUICKSIGHT_API TextAreaControlDisplayOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TextAreaControlDisplayOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline const LabelOptions& GetTitleOptions() const{ return m_titleOptions; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline bool TitleOptionsHasBeenSet() const { return m_titleOptionsHasBeenSet; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline void SetTitleOptions(const LabelOptions& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = value; }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline void SetTitleOptions(LabelOptions&& value) { m_titleOptionsHasBeenSet = true; m_titleOptions = std::move(value); }

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline TextAreaControlDisplayOptions& WithTitleOptions(const LabelOptions& value) { SetTitleOptions(value); return *this;}

    /**
     * <p>The options to configure the title visibility, name, and font size.</p>
     */
    inline TextAreaControlDisplayOptions& WithTitleOptions(LabelOptions&& value) { SetTitleOptions(std::move(value)); return *this;}


    /**
     * <p>The configuration of the placeholder options in a text area control.</p>
     */
    inline const TextControlPlaceholderOptions& GetPlaceholderOptions() const{ return m_placeholderOptions; }

    /**
     * <p>The configuration of the placeholder options in a text area control.</p>
     */
    inline bool PlaceholderOptionsHasBeenSet() const { return m_placeholderOptionsHasBeenSet; }

    /**
     * <p>The configuration of the placeholder options in a text area control.</p>
     */
    inline void SetPlaceholderOptions(const TextControlPlaceholderOptions& value) { m_placeholderOptionsHasBeenSet = true; m_placeholderOptions = value; }

    /**
     * <p>The configuration of the placeholder options in a text area control.</p>
     */
    inline void SetPlaceholderOptions(TextControlPlaceholderOptions&& value) { m_placeholderOptionsHasBeenSet = true; m_placeholderOptions = std::move(value); }

    /**
     * <p>The configuration of the placeholder options in a text area control.</p>
     */
    inline TextAreaControlDisplayOptions& WithPlaceholderOptions(const TextControlPlaceholderOptions& value) { SetPlaceholderOptions(value); return *this;}

    /**
     * <p>The configuration of the placeholder options in a text area control.</p>
     */
    inline TextAreaControlDisplayOptions& WithPlaceholderOptions(TextControlPlaceholderOptions&& value) { SetPlaceholderOptions(std::move(value)); return *this;}

  private:

    LabelOptions m_titleOptions;
    bool m_titleOptionsHasBeenSet = false;

    TextControlPlaceholderOptions m_placeholderOptions;
    bool m_placeholderOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
