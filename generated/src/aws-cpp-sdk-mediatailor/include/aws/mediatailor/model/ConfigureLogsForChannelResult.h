/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediatailor/model/LogType.h>
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
namespace MediaTailor
{
namespace Model
{
  class ConfigureLogsForChannelResult
  {
  public:
    AWS_MEDIATAILOR_API ConfigureLogsForChannelResult() = default;
    AWS_MEDIATAILOR_API ConfigureLogsForChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API ConfigureLogsForChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    ConfigureLogsForChannelResult& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of logs collected.</p>
     */
    inline const Aws::Vector<LogType>& GetLogTypes() const { return m_logTypes; }
    template<typename LogTypesT = Aws::Vector<LogType>>
    void SetLogTypes(LogTypesT&& value) { m_logTypesHasBeenSet = true; m_logTypes = std::forward<LogTypesT>(value); }
    template<typename LogTypesT = Aws::Vector<LogType>>
    ConfigureLogsForChannelResult& WithLogTypes(LogTypesT&& value) { SetLogTypes(std::forward<LogTypesT>(value)); return *this;}
    inline ConfigureLogsForChannelResult& AddLogTypes(LogType value) { m_logTypesHasBeenSet = true; m_logTypes.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ConfigureLogsForChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::Vector<LogType> m_logTypes;
    bool m_logTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
