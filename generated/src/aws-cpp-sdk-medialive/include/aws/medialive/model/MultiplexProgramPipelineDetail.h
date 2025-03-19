/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * The current source for one of the pipelines in the multiplex.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexProgramPipelineDetail">AWS
   * API Reference</a></p>
   */
  class MultiplexProgramPipelineDetail
  {
  public:
    AWS_MEDIALIVE_API MultiplexProgramPipelineDetail() = default;
    AWS_MEDIALIVE_API MultiplexProgramPipelineDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgramPipelineDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Identifies the channel pipeline that is currently active for the pipeline
     * (identified by PipelineId) in the multiplex.
     */
    inline const Aws::String& GetActiveChannelPipeline() const { return m_activeChannelPipeline; }
    inline bool ActiveChannelPipelineHasBeenSet() const { return m_activeChannelPipelineHasBeenSet; }
    template<typename ActiveChannelPipelineT = Aws::String>
    void SetActiveChannelPipeline(ActiveChannelPipelineT&& value) { m_activeChannelPipelineHasBeenSet = true; m_activeChannelPipeline = std::forward<ActiveChannelPipelineT>(value); }
    template<typename ActiveChannelPipelineT = Aws::String>
    MultiplexProgramPipelineDetail& WithActiveChannelPipeline(ActiveChannelPipelineT&& value) { SetActiveChannelPipeline(std::forward<ActiveChannelPipelineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Identifies a specific pipeline in the multiplex.
     */
    inline const Aws::String& GetPipelineId() const { return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    template<typename PipelineIdT = Aws::String>
    void SetPipelineId(PipelineIdT&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::forward<PipelineIdT>(value); }
    template<typename PipelineIdT = Aws::String>
    MultiplexProgramPipelineDetail& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_activeChannelPipeline;
    bool m_activeChannelPipelineHasBeenSet = false;

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
