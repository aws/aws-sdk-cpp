/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConditionalFormattingIconSet.h>
#include <aws/quicksight/model/ConditionalFormattingCustomIconCondition.h>
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
   * <p>The formatting configuration for the icon.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ConditionalFormattingIcon">AWS
   * API Reference</a></p>
   */
  class ConditionalFormattingIcon
  {
  public:
    AWS_QUICKSIGHT_API ConditionalFormattingIcon() = default;
    AWS_QUICKSIGHT_API ConditionalFormattingIcon(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConditionalFormattingIcon& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Formatting configuration for icon set.</p>
     */
    inline const ConditionalFormattingIconSet& GetIconSet() const { return m_iconSet; }
    inline bool IconSetHasBeenSet() const { return m_iconSetHasBeenSet; }
    template<typename IconSetT = ConditionalFormattingIconSet>
    void SetIconSet(IconSetT&& value) { m_iconSetHasBeenSet = true; m_iconSet = std::forward<IconSetT>(value); }
    template<typename IconSetT = ConditionalFormattingIconSet>
    ConditionalFormattingIcon& WithIconSet(IconSetT&& value) { SetIconSet(std::forward<IconSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the custom condition for an icon set.</p>
     */
    inline const ConditionalFormattingCustomIconCondition& GetCustomCondition() const { return m_customCondition; }
    inline bool CustomConditionHasBeenSet() const { return m_customConditionHasBeenSet; }
    template<typename CustomConditionT = ConditionalFormattingCustomIconCondition>
    void SetCustomCondition(CustomConditionT&& value) { m_customConditionHasBeenSet = true; m_customCondition = std::forward<CustomConditionT>(value); }
    template<typename CustomConditionT = ConditionalFormattingCustomIconCondition>
    ConditionalFormattingIcon& WithCustomCondition(CustomConditionT&& value) { SetCustomCondition(std::forward<CustomConditionT>(value)); return *this;}
    ///@}
  private:

    ConditionalFormattingIconSet m_iconSet;
    bool m_iconSetHasBeenSet = false;

    ConditionalFormattingCustomIconCondition m_customCondition;
    bool m_customConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
