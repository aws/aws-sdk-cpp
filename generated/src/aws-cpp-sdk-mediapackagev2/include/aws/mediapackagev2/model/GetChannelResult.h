/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/model/InputType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediapackagev2/model/InputSwitchConfiguration.h>
#include <aws/mediapackagev2/model/OutputHeaderConfiguration.h>
#include <aws/mediapackagev2/model/IngestEndpoint.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace mediapackagev2
{
namespace Model
{
  class GetChannelResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetChannelResult() = default;
    AWS_MEDIAPACKAGEV2_API GetChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API GetChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetChannelResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    GetChannelResult& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const { return m_channelGroupName; }
    template<typename ChannelGroupNameT = Aws::String>
    void SetChannelGroupName(ChannelGroupNameT&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::forward<ChannelGroupNameT>(value); }
    template<typename ChannelGroupNameT = Aws::String>
    GetChannelResult& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetChannelResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the channel was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    GetChannelResult& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the channel was last reset.</p>
     */
    inline const Aws::Utils::DateTime& GetResetAt() const { return m_resetAt; }
    template<typename ResetAtT = Aws::Utils::DateTime>
    void SetResetAt(ResetAtT&& value) { m_resetAtHasBeenSet = true; m_resetAt = std::forward<ResetAtT>(value); }
    template<typename ResetAtT = Aws::Utils::DateTime>
    GetChannelResult& WithResetAt(ResetAtT&& value) { SetResetAt(std::forward<ResetAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for your channel.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetChannelResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<IngestEndpoint>& GetIngestEndpoints() const { return m_ingestEndpoints; }
    template<typename IngestEndpointsT = Aws::Vector<IngestEndpoint>>
    void SetIngestEndpoints(IngestEndpointsT&& value) { m_ingestEndpointsHasBeenSet = true; m_ingestEndpoints = std::forward<IngestEndpointsT>(value); }
    template<typename IngestEndpointsT = Aws::Vector<IngestEndpoint>>
    GetChannelResult& WithIngestEndpoints(IngestEndpointsT&& value) { SetIngestEndpoints(std::forward<IngestEndpointsT>(value)); return *this;}
    template<typename IngestEndpointsT = IngestEndpoint>
    GetChannelResult& AddIngestEndpoints(IngestEndpointsT&& value) { m_ingestEndpointsHasBeenSet = true; m_ingestEndpoints.emplace_back(std::forward<IngestEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input type will be an immutable field which will be used to define
     * whether the channel will allow CMAF ingest or HLS ingest. If unprovided, it will
     * default to HLS to preserve current behavior.</p> <p>The allowed values are:</p>
     * <ul> <li> <p> <code>HLS</code> - The HLS streaming specification (which defines
     * M3U8 manifests and TS segments).</p> </li> <li> <p> <code>CMAF</code> - The
     * DASH-IF CMAF Ingest specification (which defines CMAF segments with optional
     * DASH manifests).</p> </li> </ul>
     */
    inline InputType GetInputType() const { return m_inputType; }
    inline void SetInputType(InputType value) { m_inputTypeHasBeenSet = true; m_inputType = value; }
    inline GetChannelResult& WithInputType(InputType value) { SetInputType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetChannelResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetChannelResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetChannelResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for input switching based on the media quality confidence
     * score (MQCS) as provided from AWS Elemental MediaLive. This setting is valid
     * only when <code>InputType</code> is <code>CMAF</code>.</p>
     */
    inline const InputSwitchConfiguration& GetInputSwitchConfiguration() const { return m_inputSwitchConfiguration; }
    template<typename InputSwitchConfigurationT = InputSwitchConfiguration>
    void SetInputSwitchConfiguration(InputSwitchConfigurationT&& value) { m_inputSwitchConfigurationHasBeenSet = true; m_inputSwitchConfiguration = std::forward<InputSwitchConfigurationT>(value); }
    template<typename InputSwitchConfigurationT = InputSwitchConfiguration>
    GetChannelResult& WithInputSwitchConfiguration(InputSwitchConfigurationT&& value) { SetInputSwitchConfiguration(std::forward<InputSwitchConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for what common media server data (CMSD) headers AWS Elemental
     * MediaPackage includes in responses to the CDN. This setting is valid only when
     * <code>InputType</code> is <code>CMAF</code>.</p>
     */
    inline const OutputHeaderConfiguration& GetOutputHeaderConfiguration() const { return m_outputHeaderConfiguration; }
    template<typename OutputHeaderConfigurationT = OutputHeaderConfiguration>
    void SetOutputHeaderConfiguration(OutputHeaderConfigurationT&& value) { m_outputHeaderConfigurationHasBeenSet = true; m_outputHeaderConfiguration = std::forward<OutputHeaderConfigurationT>(value); }
    template<typename OutputHeaderConfigurationT = OutputHeaderConfiguration>
    GetChannelResult& WithOutputHeaderConfiguration(OutputHeaderConfigurationT&& value) { SetOutputHeaderConfiguration(std::forward<OutputHeaderConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::Utils::DateTime m_resetAt{};
    bool m_resetAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<IngestEndpoint> m_ingestEndpoints;
    bool m_ingestEndpointsHasBeenSet = false;

    InputType m_inputType{InputType::NOT_SET};
    bool m_inputTypeHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    InputSwitchConfiguration m_inputSwitchConfiguration;
    bool m_inputSwitchConfigurationHasBeenSet = false;

    OutputHeaderConfiguration m_outputHeaderConfiguration;
    bool m_outputHeaderConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
