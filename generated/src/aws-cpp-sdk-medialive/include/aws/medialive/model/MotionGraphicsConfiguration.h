/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MotionGraphicsInsertion.h>
#include <aws/medialive/model/MotionGraphicsSettings.h>
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
   * Motion Graphics Configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MotionGraphicsConfiguration">AWS
   * API Reference</a></p>
   */
  class MotionGraphicsConfiguration
  {
  public:
    AWS_MEDIALIVE_API MotionGraphicsConfiguration() = default;
    AWS_MEDIALIVE_API MotionGraphicsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MotionGraphicsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline MotionGraphicsInsertion GetMotionGraphicsInsertion() const { return m_motionGraphicsInsertion; }
    inline bool MotionGraphicsInsertionHasBeenSet() const { return m_motionGraphicsInsertionHasBeenSet; }
    inline void SetMotionGraphicsInsertion(MotionGraphicsInsertion value) { m_motionGraphicsInsertionHasBeenSet = true; m_motionGraphicsInsertion = value; }
    inline MotionGraphicsConfiguration& WithMotionGraphicsInsertion(MotionGraphicsInsertion value) { SetMotionGraphicsInsertion(value); return *this;}
    ///@}

    ///@{
    /**
     * Motion Graphics Settings
     */
    inline const MotionGraphicsSettings& GetMotionGraphicsSettings() const { return m_motionGraphicsSettings; }
    inline bool MotionGraphicsSettingsHasBeenSet() const { return m_motionGraphicsSettingsHasBeenSet; }
    template<typename MotionGraphicsSettingsT = MotionGraphicsSettings>
    void SetMotionGraphicsSettings(MotionGraphicsSettingsT&& value) { m_motionGraphicsSettingsHasBeenSet = true; m_motionGraphicsSettings = std::forward<MotionGraphicsSettingsT>(value); }
    template<typename MotionGraphicsSettingsT = MotionGraphicsSettings>
    MotionGraphicsConfiguration& WithMotionGraphicsSettings(MotionGraphicsSettingsT&& value) { SetMotionGraphicsSettings(std::forward<MotionGraphicsSettingsT>(value)); return *this;}
    ///@}
  private:

    MotionGraphicsInsertion m_motionGraphicsInsertion{MotionGraphicsInsertion::NOT_SET};
    bool m_motionGraphicsInsertionHasBeenSet = false;

    MotionGraphicsSettings m_motionGraphicsSettings;
    bool m_motionGraphicsSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
