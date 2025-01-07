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
   * MediaPackage Output Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MediaPackageOutputDestinationSettings">AWS
   * API Reference</a></p>
   */
  class MediaPackageOutputDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API MediaPackageOutputDestinationSettings();
    AWS_MEDIALIVE_API MediaPackageOutputDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MediaPackageOutputDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * ID of the channel in MediaPackage that is the destination for this output group.
     * You do not need to specify the individual inputs in MediaPackage; MediaLive will
     * handle the connection of the two MediaLive pipelines to the two MediaPackage
     * inputs. The MediaPackage channel and MediaLive channel must be in the same
     * region.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }
    inline MediaPackageOutputDestinationSettings& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}
    inline MediaPackageOutputDestinationSettings& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}
    inline MediaPackageOutputDestinationSettings& WithChannelId(const char* value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * Name of the channel group in MediaPackageV2. Only use if you are sending CMAF
     * Ingest output to a CMAF ingest endpoint on a MediaPackage channel that uses
     * MediaPackage v2.
     */
    inline const Aws::String& GetChannelGroup() const{ return m_channelGroup; }
    inline bool ChannelGroupHasBeenSet() const { return m_channelGroupHasBeenSet; }
    inline void SetChannelGroup(const Aws::String& value) { m_channelGroupHasBeenSet = true; m_channelGroup = value; }
    inline void SetChannelGroup(Aws::String&& value) { m_channelGroupHasBeenSet = true; m_channelGroup = std::move(value); }
    inline void SetChannelGroup(const char* value) { m_channelGroupHasBeenSet = true; m_channelGroup.assign(value); }
    inline MediaPackageOutputDestinationSettings& WithChannelGroup(const Aws::String& value) { SetChannelGroup(value); return *this;}
    inline MediaPackageOutputDestinationSettings& WithChannelGroup(Aws::String&& value) { SetChannelGroup(std::move(value)); return *this;}
    inline MediaPackageOutputDestinationSettings& WithChannelGroup(const char* value) { SetChannelGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * Name of the channel in MediaPackageV2. Only use if you are sending CMAF Ingest
     * output to a CMAF ingest endpoint on a MediaPackage channel that uses
     * MediaPackage v2.
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline MediaPackageOutputDestinationSettings& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline MediaPackageOutputDestinationSettings& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline MediaPackageOutputDestinationSettings& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}
  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_channelGroup;
    bool m_channelGroupHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
