/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/PipelinePauseStateSettings.h>
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
   * Settings for the action to set pause state of a channel.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PauseStateScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class PauseStateScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API PauseStateScheduleActionSettings() = default;
    AWS_MEDIALIVE_API PauseStateScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API PauseStateScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<PipelinePauseStateSettings>& GetPipelines() const { return m_pipelines; }
    inline bool PipelinesHasBeenSet() const { return m_pipelinesHasBeenSet; }
    template<typename PipelinesT = Aws::Vector<PipelinePauseStateSettings>>
    void SetPipelines(PipelinesT&& value) { m_pipelinesHasBeenSet = true; m_pipelines = std::forward<PipelinesT>(value); }
    template<typename PipelinesT = Aws::Vector<PipelinePauseStateSettings>>
    PauseStateScheduleActionSettings& WithPipelines(PipelinesT&& value) { SetPipelines(std::forward<PipelinesT>(value)); return *this;}
    template<typename PipelinesT = PipelinePauseStateSettings>
    PauseStateScheduleActionSettings& AddPipelines(PipelinesT&& value) { m_pipelinesHasBeenSet = true; m_pipelines.emplace_back(std::forward<PipelinesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PipelinePauseStateSettings> m_pipelines;
    bool m_pipelinesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
