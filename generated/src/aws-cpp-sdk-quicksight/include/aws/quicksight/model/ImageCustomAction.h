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
    AWS_QUICKSIGHT_API ImageCustomAction();
    AWS_QUICKSIGHT_API ImageCustomAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ImageCustomAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the custom action.</p>
     */
    inline const Aws::String& GetCustomActionId() const{ return m_customActionId; }
    inline bool CustomActionIdHasBeenSet() const { return m_customActionIdHasBeenSet; }
    inline void SetCustomActionId(const Aws::String& value) { m_customActionIdHasBeenSet = true; m_customActionId = value; }
    inline void SetCustomActionId(Aws::String&& value) { m_customActionIdHasBeenSet = true; m_customActionId = std::move(value); }
    inline void SetCustomActionId(const char* value) { m_customActionIdHasBeenSet = true; m_customActionId.assign(value); }
    inline ImageCustomAction& WithCustomActionId(const Aws::String& value) { SetCustomActionId(value); return *this;}
    inline ImageCustomAction& WithCustomActionId(Aws::String&& value) { SetCustomActionId(std::move(value)); return *this;}
    inline ImageCustomAction& WithCustomActionId(const char* value) { SetCustomActionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ImageCustomAction& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ImageCustomAction& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ImageCustomAction& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the custom action.</p>
     */
    inline const WidgetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const WidgetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(WidgetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ImageCustomAction& WithStatus(const WidgetStatus& value) { SetStatus(value); return *this;}
    inline ImageCustomAction& WithStatus(WidgetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trigger of the <code>VisualCustomAction</code>.</p> <p>Valid values are
     * defined as follows:</p> <ul> <li> <p> <code>CLICK</code>: Initiates a custom
     * action by a left pointer click on a data point.</p> </li> <li> <p>
     * <code>MENU</code>: Initiates a custom action by right pointer click from the
     * menu.</p> </li> </ul>
     */
    inline const ImageCustomActionTrigger& GetTrigger() const{ return m_trigger; }
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
    inline void SetTrigger(const ImageCustomActionTrigger& value) { m_triggerHasBeenSet = true; m_trigger = value; }
    inline void SetTrigger(ImageCustomActionTrigger&& value) { m_triggerHasBeenSet = true; m_trigger = std::move(value); }
    inline ImageCustomAction& WithTrigger(const ImageCustomActionTrigger& value) { SetTrigger(value); return *this;}
    inline ImageCustomAction& WithTrigger(ImageCustomActionTrigger&& value) { SetTrigger(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ImageCustomActionOperations</code>.</p> <p>This is a union
     * type structure. For this structure to be valid, only one of the attributes can
     * be defined.</p>
     */
    inline const Aws::Vector<ImageCustomActionOperation>& GetActionOperations() const{ return m_actionOperations; }
    inline bool ActionOperationsHasBeenSet() const { return m_actionOperationsHasBeenSet; }
    inline void SetActionOperations(const Aws::Vector<ImageCustomActionOperation>& value) { m_actionOperationsHasBeenSet = true; m_actionOperations = value; }
    inline void SetActionOperations(Aws::Vector<ImageCustomActionOperation>&& value) { m_actionOperationsHasBeenSet = true; m_actionOperations = std::move(value); }
    inline ImageCustomAction& WithActionOperations(const Aws::Vector<ImageCustomActionOperation>& value) { SetActionOperations(value); return *this;}
    inline ImageCustomAction& WithActionOperations(Aws::Vector<ImageCustomActionOperation>&& value) { SetActionOperations(std::move(value)); return *this;}
    inline ImageCustomAction& AddActionOperations(const ImageCustomActionOperation& value) { m_actionOperationsHasBeenSet = true; m_actionOperations.push_back(value); return *this; }
    inline ImageCustomAction& AddActionOperations(ImageCustomActionOperation&& value) { m_actionOperationsHasBeenSet = true; m_actionOperations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_customActionId;
    bool m_customActionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    WidgetStatus m_status;
    bool m_statusHasBeenSet = false;

    ImageCustomActionTrigger m_trigger;
    bool m_triggerHasBeenSet = false;

    Aws::Vector<ImageCustomActionOperation> m_actionOperations;
    bool m_actionOperationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
