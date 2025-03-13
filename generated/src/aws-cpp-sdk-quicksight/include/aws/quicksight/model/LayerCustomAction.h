/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/WidgetStatus.h>
#include <aws/quicksight/model/LayerCustomActionTrigger.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/LayerCustomActionOperation.h>
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
   * <p>A layer custom action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LayerCustomAction">AWS
   * API Reference</a></p>
   */
  class LayerCustomAction
  {
  public:
    AWS_QUICKSIGHT_API LayerCustomAction() = default;
    AWS_QUICKSIGHT_API LayerCustomAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LayerCustomAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the custom action.</p>
     */
    inline const Aws::String& GetCustomActionId() const { return m_customActionId; }
    inline bool CustomActionIdHasBeenSet() const { return m_customActionIdHasBeenSet; }
    template<typename CustomActionIdT = Aws::String>
    void SetCustomActionId(CustomActionIdT&& value) { m_customActionIdHasBeenSet = true; m_customActionId = std::forward<CustomActionIdT>(value); }
    template<typename CustomActionIdT = Aws::String>
    LayerCustomAction& WithCustomActionId(CustomActionIdT&& value) { SetCustomActionId(std::forward<CustomActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom action.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LayerCustomAction& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>LayerCustomAction</code>.</p>
     */
    inline WidgetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WidgetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LayerCustomAction& WithStatus(WidgetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trigger of the <code>LayerCustomAction</code>.</p> <p>Valid values are
     * defined as follows:</p> <ul> <li> <p> <code>DATA_POINT_CLICK</code>: Initiates a
     * custom action by a left pointer click on a data point.</p> </li> <li> <p>
     * <code>DATA_POINT_MENU</code>: Initiates a custom action by right pointer click
     * from the menu.</p> </li> </ul>
     */
    inline LayerCustomActionTrigger GetTrigger() const { return m_trigger; }
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
    inline void SetTrigger(LayerCustomActionTrigger value) { m_triggerHasBeenSet = true; m_trigger = value; }
    inline LayerCustomAction& WithTrigger(LayerCustomActionTrigger value) { SetTrigger(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>LayerCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline const Aws::Vector<LayerCustomActionOperation>& GetActionOperations() const { return m_actionOperations; }
    inline bool ActionOperationsHasBeenSet() const { return m_actionOperationsHasBeenSet; }
    template<typename ActionOperationsT = Aws::Vector<LayerCustomActionOperation>>
    void SetActionOperations(ActionOperationsT&& value) { m_actionOperationsHasBeenSet = true; m_actionOperations = std::forward<ActionOperationsT>(value); }
    template<typename ActionOperationsT = Aws::Vector<LayerCustomActionOperation>>
    LayerCustomAction& WithActionOperations(ActionOperationsT&& value) { SetActionOperations(std::forward<ActionOperationsT>(value)); return *this;}
    template<typename ActionOperationsT = LayerCustomActionOperation>
    LayerCustomAction& AddActionOperations(ActionOperationsT&& value) { m_actionOperationsHasBeenSet = true; m_actionOperations.emplace_back(std::forward<ActionOperationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_customActionId;
    bool m_customActionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    WidgetStatus m_status{WidgetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    LayerCustomActionTrigger m_trigger{LayerCustomActionTrigger::NOT_SET};
    bool m_triggerHasBeenSet = false;

    Aws::Vector<LayerCustomActionOperation> m_actionOperations;
    bool m_actionOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
