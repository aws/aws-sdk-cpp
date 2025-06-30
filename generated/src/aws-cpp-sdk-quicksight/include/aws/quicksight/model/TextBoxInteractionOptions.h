/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TextBoxMenuOption.h>
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
   * <p>The general textbox interactions setup for textbox publish
   * options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TextBoxInteractionOptions">AWS
   * API Reference</a></p>
   */
  class TextBoxInteractionOptions
  {
  public:
    AWS_QUICKSIGHT_API TextBoxInteractionOptions() = default;
    AWS_QUICKSIGHT_API TextBoxInteractionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TextBoxInteractionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The menu options for the textbox.</p>
     */
    inline const TextBoxMenuOption& GetTextBoxMenuOption() const { return m_textBoxMenuOption; }
    inline bool TextBoxMenuOptionHasBeenSet() const { return m_textBoxMenuOptionHasBeenSet; }
    template<typename TextBoxMenuOptionT = TextBoxMenuOption>
    void SetTextBoxMenuOption(TextBoxMenuOptionT&& value) { m_textBoxMenuOptionHasBeenSet = true; m_textBoxMenuOption = std::forward<TextBoxMenuOptionT>(value); }
    template<typename TextBoxMenuOptionT = TextBoxMenuOption>
    TextBoxInteractionOptions& WithTextBoxMenuOption(TextBoxMenuOptionT&& value) { SetTextBoxMenuOption(std::forward<TextBoxMenuOptionT>(value)); return *this;}
    ///@}
  private:

    TextBoxMenuOption m_textBoxMenuOption;
    bool m_textBoxMenuOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
