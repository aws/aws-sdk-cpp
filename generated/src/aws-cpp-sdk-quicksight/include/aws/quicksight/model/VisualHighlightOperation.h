/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/VisualHighlightTrigger.h>
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
   * <p>Defines what initiates a highlight operation on a visual, such as a click or
   * hover.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualHighlightOperation">AWS
   * API Reference</a></p>
   */
  class VisualHighlightOperation
  {
  public:
    AWS_QUICKSIGHT_API VisualHighlightOperation() = default;
    AWS_QUICKSIGHT_API VisualHighlightOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualHighlightOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether a highlight operation is initiated by a click or hover, or
     * whether it's disabled.</p>
     */
    inline VisualHighlightTrigger GetTrigger() const { return m_trigger; }
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
    inline void SetTrigger(VisualHighlightTrigger value) { m_triggerHasBeenSet = true; m_trigger = value; }
    inline VisualHighlightOperation& WithTrigger(VisualHighlightTrigger value) { SetTrigger(value); return *this;}
    ///@}
  private:

    VisualHighlightTrigger m_trigger{VisualHighlightTrigger::NOT_SET};
    bool m_triggerHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
