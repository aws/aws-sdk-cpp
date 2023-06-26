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
    AWS_QUICKSIGHT_API ConditionalFormattingIcon();
    AWS_QUICKSIGHT_API ConditionalFormattingIcon(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConditionalFormattingIcon& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Formatting configuration for icon set.</p>
     */
    inline const ConditionalFormattingIconSet& GetIconSet() const{ return m_iconSet; }

    /**
     * <p>Formatting configuration for icon set.</p>
     */
    inline bool IconSetHasBeenSet() const { return m_iconSetHasBeenSet; }

    /**
     * <p>Formatting configuration for icon set.</p>
     */
    inline void SetIconSet(const ConditionalFormattingIconSet& value) { m_iconSetHasBeenSet = true; m_iconSet = value; }

    /**
     * <p>Formatting configuration for icon set.</p>
     */
    inline void SetIconSet(ConditionalFormattingIconSet&& value) { m_iconSetHasBeenSet = true; m_iconSet = std::move(value); }

    /**
     * <p>Formatting configuration for icon set.</p>
     */
    inline ConditionalFormattingIcon& WithIconSet(const ConditionalFormattingIconSet& value) { SetIconSet(value); return *this;}

    /**
     * <p>Formatting configuration for icon set.</p>
     */
    inline ConditionalFormattingIcon& WithIconSet(ConditionalFormattingIconSet&& value) { SetIconSet(std::move(value)); return *this;}


    /**
     * <p>Determines the custom condition for an icon set.</p>
     */
    inline const ConditionalFormattingCustomIconCondition& GetCustomCondition() const{ return m_customCondition; }

    /**
     * <p>Determines the custom condition for an icon set.</p>
     */
    inline bool CustomConditionHasBeenSet() const { return m_customConditionHasBeenSet; }

    /**
     * <p>Determines the custom condition for an icon set.</p>
     */
    inline void SetCustomCondition(const ConditionalFormattingCustomIconCondition& value) { m_customConditionHasBeenSet = true; m_customCondition = value; }

    /**
     * <p>Determines the custom condition for an icon set.</p>
     */
    inline void SetCustomCondition(ConditionalFormattingCustomIconCondition&& value) { m_customConditionHasBeenSet = true; m_customCondition = std::move(value); }

    /**
     * <p>Determines the custom condition for an icon set.</p>
     */
    inline ConditionalFormattingIcon& WithCustomCondition(const ConditionalFormattingCustomIconCondition& value) { SetCustomCondition(value); return *this;}

    /**
     * <p>Determines the custom condition for an icon set.</p>
     */
    inline ConditionalFormattingIcon& WithCustomCondition(ConditionalFormattingCustomIconCondition&& value) { SetCustomCondition(std::move(value)); return *this;}

  private:

    ConditionalFormattingIconSet m_iconSet;
    bool m_iconSetHasBeenSet = false;

    ConditionalFormattingCustomIconCondition m_customCondition;
    bool m_customConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
