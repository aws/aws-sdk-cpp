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
    AWS_MEDIATAILOR_API ConfigureLogsForChannelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureLogsForChannel"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    ConfigureLogsForChannelRequest& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of logs to collect.</p>
     */
    inline const Aws::Vector<LogType>& GetLogTypes() const { return m_logTypes; }
    inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }
    template<typename LogTypesT = Aws::Vector<LogType>>
    void SetLogTypes(LogTypesT&& value) { m_logTypesHasBeenSet = true; m_logTypes = std::forward<LogTypesT>(value); }
    template<typename LogTypesT = Aws::Vector<LogType>>
    ConfigureLogsForChannelRequest& WithLogTypes(LogTypesT&& value) { SetLogTypes(std::forward<LogTypesT>(value)); return *this;}
    inline ConfigureLogsForChannelRequest& AddLogTypes(LogType value) { m_logTypesHasBeenSet = true; m_logTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::Vector<LogType> m_logTypes;
    bool m_logTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
