/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ChannelEngineVersionResponse.h>
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
   * Runtime details of a pipeline when a channel is running.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/PipelineDetail">AWS
   * API Reference</a></p>
   */
  class PipelineDetail
  {
  public:
    AWS_MEDIALIVE_API PipelineDetail() = default;
    AWS_MEDIALIVE_API PipelineDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API PipelineDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The name of the active input attachment currently being ingested by this
     * pipeline.
     */
    inline const Aws::String& GetActiveInputAttachmentName() const { return m_activeInputAttachmentName; }
    inline bool ActiveInputAttachmentNameHasBeenSet() const { return m_activeInputAttachmentNameHasBeenSet; }
    template<typename ActiveInputAttachmentNameT = Aws::String>
    void SetActiveInputAttachmentName(ActiveInputAttachmentNameT&& value) { m_activeInputAttachmentNameHasBeenSet = true; m_activeInputAttachmentName = std::forward<ActiveInputAttachmentNameT>(value); }
    template<typename ActiveInputAttachmentNameT = Aws::String>
    PipelineDetail& WithActiveInputAttachmentName(ActiveInputAttachmentNameT&& value) { SetActiveInputAttachmentName(std::forward<ActiveInputAttachmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the input switch schedule action that occurred most recently and
     * that resulted in the switch to the current input attachment for this pipeline.
     */
    inline const Aws::String& GetActiveInputSwitchActionName() const { return m_activeInputSwitchActionName; }
    inline bool ActiveInputSwitchActionNameHasBeenSet() const { return m_activeInputSwitchActionNameHasBeenSet; }
    template<typename ActiveInputSwitchActionNameT = Aws::String>
    void SetActiveInputSwitchActionName(ActiveInputSwitchActionNameT&& value) { m_activeInputSwitchActionNameHasBeenSet = true; m_activeInputSwitchActionName = std::forward<ActiveInputSwitchActionNameT>(value); }
    template<typename ActiveInputSwitchActionNameT = Aws::String>
    PipelineDetail& WithActiveInputSwitchActionName(ActiveInputSwitchActionNameT&& value) { SetActiveInputSwitchActionName(std::forward<ActiveInputSwitchActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the motion graphics activate action that occurred most recently and
     * that resulted in the current graphics URI for this pipeline.
     */
    inline const Aws::String& GetActiveMotionGraphicsActionName() const { return m_activeMotionGraphicsActionName; }
    inline bool ActiveMotionGraphicsActionNameHasBeenSet() const { return m_activeMotionGraphicsActionNameHasBeenSet; }
    template<typename ActiveMotionGraphicsActionNameT = Aws::String>
    void SetActiveMotionGraphicsActionName(ActiveMotionGraphicsActionNameT&& value) { m_activeMotionGraphicsActionNameHasBeenSet = true; m_activeMotionGraphicsActionName = std::forward<ActiveMotionGraphicsActionNameT>(value); }
    template<typename ActiveMotionGraphicsActionNameT = Aws::String>
    PipelineDetail& WithActiveMotionGraphicsActionName(ActiveMotionGraphicsActionNameT&& value) { SetActiveMotionGraphicsActionName(std::forward<ActiveMotionGraphicsActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current URI being used for HTML5 motion graphics for this pipeline.
     */
    inline const Aws::String& GetActiveMotionGraphicsUri() const { return m_activeMotionGraphicsUri; }
    inline bool ActiveMotionGraphicsUriHasBeenSet() const { return m_activeMotionGraphicsUriHasBeenSet; }
    template<typename ActiveMotionGraphicsUriT = Aws::String>
    void SetActiveMotionGraphicsUri(ActiveMotionGraphicsUriT&& value) { m_activeMotionGraphicsUriHasBeenSet = true; m_activeMotionGraphicsUri = std::forward<ActiveMotionGraphicsUriT>(value); }
    template<typename ActiveMotionGraphicsUriT = Aws::String>
    PipelineDetail& WithActiveMotionGraphicsUri(ActiveMotionGraphicsUriT&& value) { SetActiveMotionGraphicsUri(std::forward<ActiveMotionGraphicsUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Pipeline ID
     */
    inline const Aws::String& GetPipelineId() const { return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    template<typename PipelineIdT = Aws::String>
    void SetPipelineId(PipelineIdT&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::forward<PipelineIdT>(value); }
    template<typename PipelineIdT = Aws::String>
    PipelineDetail& WithPipelineId(PipelineIdT&& value) { SetPipelineId(std::forward<PipelineIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Current engine version of the encoder for this pipeline.
     */
    inline const ChannelEngineVersionResponse& GetChannelEngineVersion() const { return m_channelEngineVersion; }
    inline bool ChannelEngineVersionHasBeenSet() const { return m_channelEngineVersionHasBeenSet; }
    template<typename ChannelEngineVersionT = ChannelEngineVersionResponse>
    void SetChannelEngineVersion(ChannelEngineVersionT&& value) { m_channelEngineVersionHasBeenSet = true; m_channelEngineVersion = std::forward<ChannelEngineVersionT>(value); }
    template<typename ChannelEngineVersionT = ChannelEngineVersionResponse>
    PipelineDetail& WithChannelEngineVersion(ChannelEngineVersionT&& value) { SetChannelEngineVersion(std::forward<ChannelEngineVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_activeInputAttachmentName;
    bool m_activeInputAttachmentNameHasBeenSet = false;

    Aws::String m_activeInputSwitchActionName;
    bool m_activeInputSwitchActionNameHasBeenSet = false;

    Aws::String m_activeMotionGraphicsActionName;
    bool m_activeMotionGraphicsActionNameHasBeenSet = false;

    Aws::String m_activeMotionGraphicsUri;
    bool m_activeMotionGraphicsUriHasBeenSet = false;

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet = false;

    ChannelEngineVersionResponse m_channelEngineVersion;
    bool m_channelEngineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
