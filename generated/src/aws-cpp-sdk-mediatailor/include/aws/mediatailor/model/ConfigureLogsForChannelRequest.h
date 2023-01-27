/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/LogType.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class ConfigureLogsForChannelRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API ConfigureLogsForChannelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureLogsForChannel"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel.</p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline ConfigureLogsForChannelRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline ConfigureLogsForChannelRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline ConfigureLogsForChannelRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The types of logs to collect.</p>
     */
    inline const Aws::Vector<LogType>& GetLogTypes() const{ return m_logTypes; }

    /**
     * <p>The types of logs to collect.</p>
     */
    inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }

    /**
     * <p>The types of logs to collect.</p>
     */
    inline void SetLogTypes(const Aws::Vector<LogType>& value) { m_logTypesHasBeenSet = true; m_logTypes = value; }

    /**
     * <p>The types of logs to collect.</p>
     */
    inline void SetLogTypes(Aws::Vector<LogType>&& value) { m_logTypesHasBeenSet = true; m_logTypes = std::move(value); }

    /**
     * <p>The types of logs to collect.</p>
     */
    inline ConfigureLogsForChannelRequest& WithLogTypes(const Aws::Vector<LogType>& value) { SetLogTypes(value); return *this;}

    /**
     * <p>The types of logs to collect.</p>
     */
    inline ConfigureLogsForChannelRequest& WithLogTypes(Aws::Vector<LogType>&& value) { SetLogTypes(std::move(value)); return *this;}

    /**
     * <p>The types of logs to collect.</p>
     */
    inline ConfigureLogsForChannelRequest& AddLogTypes(const LogType& value) { m_logTypesHasBeenSet = true; m_logTypes.push_back(value); return *this; }

    /**
     * <p>The types of logs to collect.</p>
     */
    inline ConfigureLogsForChannelRequest& AddLogTypes(LogType&& value) { m_logTypesHasBeenSet = true; m_logTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::Vector<LogType> m_logTypes;
    bool m_logTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
