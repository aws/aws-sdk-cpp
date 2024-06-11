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
    AWS_MEDIALIVE_API MultiplexProgramPipelineDetail();
    AWS_MEDIALIVE_API MultiplexProgramPipelineDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgramPipelineDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Identifies the channel pipeline that is currently active for the pipeline
     * (identified by PipelineId) in the multiplex.
     */
    inline const Aws::String& GetActiveChannelPipeline() const{ return m_activeChannelPipeline; }
    inline bool ActiveChannelPipelineHasBeenSet() const { return m_activeChannelPipelineHasBeenSet; }
    inline void SetActiveChannelPipeline(const Aws::String& value) { m_activeChannelPipelineHasBeenSet = true; m_activeChannelPipeline = value; }
    inline void SetActiveChannelPipeline(Aws::String&& value) { m_activeChannelPipelineHasBeenSet = true; m_activeChannelPipeline = std::move(value); }
    inline void SetActiveChannelPipeline(const char* value) { m_activeChannelPipelineHasBeenSet = true; m_activeChannelPipeline.assign(value); }
    inline MultiplexProgramPipelineDetail& WithActiveChannelPipeline(const Aws::String& value) { SetActiveChannelPipeline(value); return *this;}
    inline MultiplexProgramPipelineDetail& WithActiveChannelPipeline(Aws::String&& value) { SetActiveChannelPipeline(std::move(value)); return *this;}
    inline MultiplexProgramPipelineDetail& WithActiveChannelPipeline(const char* value) { SetActiveChannelPipeline(value); return *this;}
    ///@}

    ///@{
    /**
     * Identifies a specific pipeline in the multiplex.
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }
    inline MultiplexProgramPipelineDetail& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}
    inline MultiplexProgramPipelineDetail& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}
    inline MultiplexProgramPipelineDetail& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}
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
