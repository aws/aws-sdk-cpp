/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FeatureActivationsInputPrepareScheduleActions.h>
#include <aws/medialive/model/FeatureActivationsOutputStaticImageOverlayScheduleActions.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Feature Activations<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FeatureActivations">AWS
   * API Reference</a></p>
   */
  class FeatureActivations
  {
  public:
    AWS_MEDIALIVE_API FeatureActivations() = default;
    AWS_MEDIALIVE_API FeatureActivations(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FeatureActivations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Enables the Input Prepare feature. You can create Input Prepare actions in the
     * schedule only if this feature is enabled.
If you disable the feature on an
     * existing schedule, make sure that you first delete all input prepare actions
     * from the schedule.
     */
    inline FeatureActivationsInputPrepareScheduleActions GetInputPrepareScheduleActions() const { return m_inputPrepareScheduleActions; }
    inline bool InputPrepareScheduleActionsHasBeenSet() const { return m_inputPrepareScheduleActionsHasBeenSet; }
    inline void SetInputPrepareScheduleActions(FeatureActivationsInputPrepareScheduleActions value) { m_inputPrepareScheduleActionsHasBeenSet = true; m_inputPrepareScheduleActions = value; }
    inline FeatureActivations& WithInputPrepareScheduleActions(FeatureActivationsInputPrepareScheduleActions value) { SetInputPrepareScheduleActions(value); return *this;}
    ///@}

    ///@{
    /**
     * Enables the output static image overlay feature. Enabling this feature allows
     * you to send channel schedule updates
to display/clear/modify image overlays on
     * an output-by-output bases.
     */
    inline FeatureActivationsOutputStaticImageOverlayScheduleActions GetOutputStaticImageOverlayScheduleActions() const { return m_outputStaticImageOverlayScheduleActions; }
    inline bool OutputStaticImageOverlayScheduleActionsHasBeenSet() const { return m_outputStaticImageOverlayScheduleActionsHasBeenSet; }
    inline void SetOutputStaticImageOverlayScheduleActions(FeatureActivationsOutputStaticImageOverlayScheduleActions value) { m_outputStaticImageOverlayScheduleActionsHasBeenSet = true; m_outputStaticImageOverlayScheduleActions = value; }
    inline FeatureActivations& WithOutputStaticImageOverlayScheduleActions(FeatureActivationsOutputStaticImageOverlayScheduleActions value) { SetOutputStaticImageOverlayScheduleActions(value); return *this;}
    ///@}
  private:

    FeatureActivationsInputPrepareScheduleActions m_inputPrepareScheduleActions{FeatureActivationsInputPrepareScheduleActions::NOT_SET};
    bool m_inputPrepareScheduleActionsHasBeenSet = false;

    FeatureActivationsOutputStaticImageOverlayScheduleActions m_outputStaticImageOverlayScheduleActions{FeatureActivationsOutputStaticImageOverlayScheduleActions::NOT_SET};
    bool m_outputStaticImageOverlayScheduleActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
