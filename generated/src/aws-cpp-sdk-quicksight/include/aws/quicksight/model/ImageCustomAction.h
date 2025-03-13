/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/WidgetStatus.h>
#include <aws/quicksight/model/ImageCustomActionTrigger.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ImageCustomActionOperation.h>
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
   * <p>A custom action defined on an image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ImageCustomAction">AWS
   * API Reference</a></p>
   */
  class ImageCustomAction
  {
  public:
    AWS_QUICKSIGHT_API ImageCustomAction() = default;
    AWS_QUICKSIGHT_API ImageCustomAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImageCustomAction& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ImageCustomAction& WithCustomActionId(CustomActionIdT&& value) { SetCustomActionId(std::forward<CustomActionIdT>(value)); return *this;}
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
    ImageCustomAction& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the custom action.</p>
     */
    inline WidgetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(WidgetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImageCustomAction& WithStatus(WidgetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trigger of the <code>VisualCustomAction</code>.</p> <p>Valid values are
     * defined as follows:</p> <ul> <li> <p> <code>CLICK</code>: Initiates a custom
     * action by a left pointer click on a data point.</p> </li> <li> <p>
     * <code>MENU</code>: Initiates a custom action by right pointer click from the
     * menu.</p> </li> </ul>
     */
    inline ImageCustomActionTrigger GetTrigger() const { return m_trigger; }
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
    inline void SetTrigger(ImageCustomActionTrigger value) { m_triggerHasBeenSet = true; m_trigger = value; }
    inline ImageCustomAction& WithTrigger(ImageCustomActionTrigger value) { SetTrigger(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ImageCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline const Aws::Vector<ImageCustomActionOperation>& GetActionOperations() const { return m_actionOperations; }
    inline bool ActionOperationsHasBeenSet() const { return m_actionOperationsHasBeenSet; }
    template<typename ActionOperationsT = Aws::Vector<ImageCustomActionOperation>>
    void SetActionOperations(ActionOperationsT&& value) { m_actionOperationsHasBeenSet = true; m_actionOperations = std::forward<ActionOperationsT>(value); }
    template<typename ActionOperationsT = Aws::Vector<ImageCustomActionOperation>>
    ImageCustomAction& WithActionOperations(ActionOperationsT&& value) { SetActionOperations(std::forward<ActionOperationsT>(value)); return *this;}
    template<typename ActionOperationsT = ImageCustomActionOperation>
    ImageCustomAction& AddActionOperations(ActionOperationsT&& value) { m_actionOperationsHasBeenSet = true; m_actionOperations.emplace_back(std::forward<ActionOperationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_customActionId;
    bool m_customActionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    WidgetStatus m_status{WidgetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ImageCustomActionTrigger m_trigger{ImageCustomActionTrigger::NOT_SET};
    bool m_triggerHasBeenSet = false;

    Aws::Vector<ImageCustomActionOperation> m_actionOperations;
    bool m_actionOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
