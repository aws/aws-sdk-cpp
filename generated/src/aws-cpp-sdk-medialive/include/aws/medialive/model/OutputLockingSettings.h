/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/EpochLockingSettings.h>
#include <aws/medialive/model/PipelineLockingSettings.h>
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
   * Output Locking Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/OutputLockingSettings">AWS
   * API Reference</a></p>
   */
  class OutputLockingSettings
  {
  public:
    AWS_MEDIALIVE_API OutputLockingSettings() = default;
    AWS_MEDIALIVE_API OutputLockingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API OutputLockingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const EpochLockingSettings& GetEpochLockingSettings() const { return m_epochLockingSettings; }
    inline bool EpochLockingSettingsHasBeenSet() const { return m_epochLockingSettingsHasBeenSet; }
    template<typename EpochLockingSettingsT = EpochLockingSettings>
    void SetEpochLockingSettings(EpochLockingSettingsT&& value) { m_epochLockingSettingsHasBeenSet = true; m_epochLockingSettings = std::forward<EpochLockingSettingsT>(value); }
    template<typename EpochLockingSettingsT = EpochLockingSettings>
    OutputLockingSettings& WithEpochLockingSettings(EpochLockingSettingsT&& value) { SetEpochLockingSettings(std::forward<EpochLockingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PipelineLockingSettings& GetPipelineLockingSettings() const { return m_pipelineLockingSettings; }
    inline bool PipelineLockingSettingsHasBeenSet() const { return m_pipelineLockingSettingsHasBeenSet; }
    template<typename PipelineLockingSettingsT = PipelineLockingSettings>
    void SetPipelineLockingSettings(PipelineLockingSettingsT&& value) { m_pipelineLockingSettingsHasBeenSet = true; m_pipelineLockingSettings = std::forward<PipelineLockingSettingsT>(value); }
    template<typename PipelineLockingSettingsT = PipelineLockingSettings>
    OutputLockingSettings& WithPipelineLockingSettings(PipelineLockingSettingsT&& value) { SetPipelineLockingSettings(std::forward<PipelineLockingSettingsT>(value)); return *this;}
    ///@}
  private:

    EpochLockingSettings m_epochLockingSettings;
    bool m_epochLockingSettingsHasBeenSet = false;

    PipelineLockingSettings m_pipelineLockingSettings;
    bool m_pipelineLockingSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
