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
    AWS_MEDIALIVE_API PipelineDetail();
    AWS_MEDIALIVE_API PipelineDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API PipelineDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The name of the active input attachment currently being ingested by this
     * pipeline.
     */
    inline const Aws::String& GetActiveInputAttachmentName() const{ return m_activeInputAttachmentName; }
    inline bool ActiveInputAttachmentNameHasBeenSet() const { return m_activeInputAttachmentNameHasBeenSet; }
    inline void SetActiveInputAttachmentName(const Aws::String& value) { m_activeInputAttachmentNameHasBeenSet = true; m_activeInputAttachmentName = value; }
    inline void SetActiveInputAttachmentName(Aws::String&& value) { m_activeInputAttachmentNameHasBeenSet = true; m_activeInputAttachmentName = std::move(value); }
    inline void SetActiveInputAttachmentName(const char* value) { m_activeInputAttachmentNameHasBeenSet = true; m_activeInputAttachmentName.assign(value); }
    inline PipelineDetail& WithActiveInputAttachmentName(const Aws::String& value) { SetActiveInputAttachmentName(value); return *this;}
    inline PipelineDetail& WithActiveInputAttachmentName(Aws::String&& value) { SetActiveInputAttachmentName(std::move(value)); return *this;}
    inline PipelineDetail& WithActiveInputAttachmentName(const char* value) { SetActiveInputAttachmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the input switch schedule action that occurred most recently and
     * that resulted in the switch to the current input attachment for this pipeline.
     */
    inline const Aws::String& GetActiveInputSwitchActionName() const{ return m_activeInputSwitchActionName; }
    inline bool ActiveInputSwitchActionNameHasBeenSet() const { return m_activeInputSwitchActionNameHasBeenSet; }
    inline void SetActiveInputSwitchActionName(const Aws::String& value) { m_activeInputSwitchActionNameHasBeenSet = true; m_activeInputSwitchActionName = value; }
    inline void SetActiveInputSwitchActionName(Aws::String&& value) { m_activeInputSwitchActionNameHasBeenSet = true; m_activeInputSwitchActionName = std::move(value); }
    inline void SetActiveInputSwitchActionName(const char* value) { m_activeInputSwitchActionNameHasBeenSet = true; m_activeInputSwitchActionName.assign(value); }
    inline PipelineDetail& WithActiveInputSwitchActionName(const Aws::String& value) { SetActiveInputSwitchActionName(value); return *this;}
    inline PipelineDetail& WithActiveInputSwitchActionName(Aws::String&& value) { SetActiveInputSwitchActionName(std::move(value)); return *this;}
    inline PipelineDetail& WithActiveInputSwitchActionName(const char* value) { SetActiveInputSwitchActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the motion graphics activate action that occurred most recently and
     * that resulted in the current graphics URI for this pipeline.
     */
    inline const Aws::String& GetActiveMotionGraphicsActionName() const{ return m_activeMotionGraphicsActionName; }
    inline bool ActiveMotionGraphicsActionNameHasBeenSet() const { return m_activeMotionGraphicsActionNameHasBeenSet; }
    inline void SetActiveMotionGraphicsActionName(const Aws::String& value) { m_activeMotionGraphicsActionNameHasBeenSet = true; m_activeMotionGraphicsActionName = value; }
    inline void SetActiveMotionGraphicsActionName(Aws::String&& value) { m_activeMotionGraphicsActionNameHasBeenSet = true; m_activeMotionGraphicsActionName = std::move(value); }
    inline void SetActiveMotionGraphicsActionName(const char* value) { m_activeMotionGraphicsActionNameHasBeenSet = true; m_activeMotionGraphicsActionName.assign(value); }
    inline PipelineDetail& WithActiveMotionGraphicsActionName(const Aws::String& value) { SetActiveMotionGraphicsActionName(value); return *this;}
    inline PipelineDetail& WithActiveMotionGraphicsActionName(Aws::String&& value) { SetActiveMotionGraphicsActionName(std::move(value)); return *this;}
    inline PipelineDetail& WithActiveMotionGraphicsActionName(const char* value) { SetActiveMotionGraphicsActionName(value); return *this;}
    ///@}

    ///@{
    /**
     * The current URI being used for HTML5 motion graphics for this pipeline.
     */
    inline const Aws::String& GetActiveMotionGraphicsUri() const{ return m_activeMotionGraphicsUri; }
    inline bool ActiveMotionGraphicsUriHasBeenSet() const { return m_activeMotionGraphicsUriHasBeenSet; }
    inline void SetActiveMotionGraphicsUri(const Aws::String& value) { m_activeMotionGraphicsUriHasBeenSet = true; m_activeMotionGraphicsUri = value; }
    inline void SetActiveMotionGraphicsUri(Aws::String&& value) { m_activeMotionGraphicsUriHasBeenSet = true; m_activeMotionGraphicsUri = std::move(value); }
    inline void SetActiveMotionGraphicsUri(const char* value) { m_activeMotionGraphicsUriHasBeenSet = true; m_activeMotionGraphicsUri.assign(value); }
    inline PipelineDetail& WithActiveMotionGraphicsUri(const Aws::String& value) { SetActiveMotionGraphicsUri(value); return *this;}
    inline PipelineDetail& WithActiveMotionGraphicsUri(Aws::String&& value) { SetActiveMotionGraphicsUri(std::move(value)); return *this;}
    inline PipelineDetail& WithActiveMotionGraphicsUri(const char* value) { SetActiveMotionGraphicsUri(value); return *this;}
    ///@}

    ///@{
    /**
     * Pipeline ID
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }
    inline PipelineDetail& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}
    inline PipelineDetail& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}
    inline PipelineDetail& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}
    ///@}

    ///@{
    /**
     * Current engine version of the encoder for this pipeline.
     */
    inline const ChannelEngineVersionResponse& GetChannelEngineVersion() const{ return m_channelEngineVersion; }
    inline bool ChannelEngineVersionHasBeenSet() const { return m_channelEngineVersionHasBeenSet; }
    inline void SetChannelEngineVersion(const ChannelEngineVersionResponse& value) { m_channelEngineVersionHasBeenSet = true; m_channelEngineVersion = value; }
    inline void SetChannelEngineVersion(ChannelEngineVersionResponse&& value) { m_channelEngineVersionHasBeenSet = true; m_channelEngineVersion = std::move(value); }
    inline PipelineDetail& WithChannelEngineVersion(const ChannelEngineVersionResponse& value) { SetChannelEngineVersion(value); return *this;}
    inline PipelineDetail& WithChannelEngineVersion(ChannelEngineVersionResponse&& value) { SetChannelEngineVersion(std::move(value)); return *this;}
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
