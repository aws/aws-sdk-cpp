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
    AWS_MEDIATAILOR_API ConfigureLogsForChannelResult();
    AWS_MEDIATAILOR_API ConfigureLogsForChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API ConfigureLogsForChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the channel.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }

    /**
     * <p>The name of the channel.</p>
     */
    inline ConfigureLogsForChannelResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline ConfigureLogsForChannelResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel.</p>
     */
    inline ConfigureLogsForChannelResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The types of logs collected.</p>
     */
    inline const Aws::Vector<LogType>& GetLogTypes() const{ return m_logTypes; }

    /**
     * <p>The types of logs collected.</p>
     */
    inline void SetLogTypes(const Aws::Vector<LogType>& value) { m_logTypes = value; }

    /**
     * <p>The types of logs collected.</p>
     */
    inline void SetLogTypes(Aws::Vector<LogType>&& value) { m_logTypes = std::move(value); }

    /**
     * <p>The types of logs collected.</p>
     */
    inline ConfigureLogsForChannelResult& WithLogTypes(const Aws::Vector<LogType>& value) { SetLogTypes(value); return *this;}

    /**
     * <p>The types of logs collected.</p>
     */
    inline ConfigureLogsForChannelResult& WithLogTypes(Aws::Vector<LogType>&& value) { SetLogTypes(std::move(value)); return *this;}

    /**
     * <p>The types of logs collected.</p>
     */
    inline ConfigureLogsForChannelResult& AddLogTypes(const LogType& value) { m_logTypes.push_back(value); return *this; }

    /**
     * <p>The types of logs collected.</p>
     */
    inline ConfigureLogsForChannelResult& AddLogTypes(LogType&& value) { m_logTypes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ConfigureLogsForChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ConfigureLogsForChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ConfigureLogsForChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_channelName;

    Aws::Vector<LogType> m_logTypes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
