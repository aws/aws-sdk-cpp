﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/MultiplexProgramSettings.h>
#include <aws/medialive/model/MultiplexProgramPacketIdentifiersMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/MultiplexProgramPipelineDetail.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeMultiplexProgramResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeMultiplexProgramResponse">AWS
   * API Reference</a></p>
   */
  class DescribeMultiplexProgramResult
  {
  public:
    AWS_MEDIALIVE_API DescribeMultiplexProgramResult();
    AWS_MEDIALIVE_API DescribeMultiplexProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeMultiplexProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The MediaLive channel associated with the program.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }
    inline void SetChannelId(const Aws::String& value) { m_channelId = value; }
    inline void SetChannelId(Aws::String&& value) { m_channelId = std::move(value); }
    inline void SetChannelId(const char* value) { m_channelId.assign(value); }
    inline DescribeMultiplexProgramResult& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}
    inline DescribeMultiplexProgramResult& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}
    inline DescribeMultiplexProgramResult& WithChannelId(const char* value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * The settings for this multiplex program.
     */
    inline const MultiplexProgramSettings& GetMultiplexProgramSettings() const{ return m_multiplexProgramSettings; }
    inline void SetMultiplexProgramSettings(const MultiplexProgramSettings& value) { m_multiplexProgramSettings = value; }
    inline void SetMultiplexProgramSettings(MultiplexProgramSettings&& value) { m_multiplexProgramSettings = std::move(value); }
    inline DescribeMultiplexProgramResult& WithMultiplexProgramSettings(const MultiplexProgramSettings& value) { SetMultiplexProgramSettings(value); return *this;}
    inline DescribeMultiplexProgramResult& WithMultiplexProgramSettings(MultiplexProgramSettings&& value) { SetMultiplexProgramSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The packet identifier map for this multiplex program.
     */
    inline const MultiplexProgramPacketIdentifiersMap& GetPacketIdentifiersMap() const{ return m_packetIdentifiersMap; }
    inline void SetPacketIdentifiersMap(const MultiplexProgramPacketIdentifiersMap& value) { m_packetIdentifiersMap = value; }
    inline void SetPacketIdentifiersMap(MultiplexProgramPacketIdentifiersMap&& value) { m_packetIdentifiersMap = std::move(value); }
    inline DescribeMultiplexProgramResult& WithPacketIdentifiersMap(const MultiplexProgramPacketIdentifiersMap& value) { SetPacketIdentifiersMap(value); return *this;}
    inline DescribeMultiplexProgramResult& WithPacketIdentifiersMap(MultiplexProgramPacketIdentifiersMap&& value) { SetPacketIdentifiersMap(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains information about the current sources for the specified program in the
     * specified multiplex. Keep in mind that each multiplex pipeline connects to both
     * pipelines in a given source channel (the channel identified by the program). But
     * only one of those channel pipelines is ever active at one time.
     */
    inline const Aws::Vector<MultiplexProgramPipelineDetail>& GetPipelineDetails() const{ return m_pipelineDetails; }
    inline void SetPipelineDetails(const Aws::Vector<MultiplexProgramPipelineDetail>& value) { m_pipelineDetails = value; }
    inline void SetPipelineDetails(Aws::Vector<MultiplexProgramPipelineDetail>&& value) { m_pipelineDetails = std::move(value); }
    inline DescribeMultiplexProgramResult& WithPipelineDetails(const Aws::Vector<MultiplexProgramPipelineDetail>& value) { SetPipelineDetails(value); return *this;}
    inline DescribeMultiplexProgramResult& WithPipelineDetails(Aws::Vector<MultiplexProgramPipelineDetail>&& value) { SetPipelineDetails(std::move(value)); return *this;}
    inline DescribeMultiplexProgramResult& AddPipelineDetails(const MultiplexProgramPipelineDetail& value) { m_pipelineDetails.push_back(value); return *this; }
    inline DescribeMultiplexProgramResult& AddPipelineDetails(MultiplexProgramPipelineDetail&& value) { m_pipelineDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name of the multiplex program.
     */
    inline const Aws::String& GetProgramName() const{ return m_programName; }
    inline void SetProgramName(const Aws::String& value) { m_programName = value; }
    inline void SetProgramName(Aws::String&& value) { m_programName = std::move(value); }
    inline void SetProgramName(const char* value) { m_programName.assign(value); }
    inline DescribeMultiplexProgramResult& WithProgramName(const Aws::String& value) { SetProgramName(value); return *this;}
    inline DescribeMultiplexProgramResult& WithProgramName(Aws::String&& value) { SetProgramName(std::move(value)); return *this;}
    inline DescribeMultiplexProgramResult& WithProgramName(const char* value) { SetProgramName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMultiplexProgramResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMultiplexProgramResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMultiplexProgramResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelId;

    MultiplexProgramSettings m_multiplexProgramSettings;

    MultiplexProgramPacketIdentifiersMap m_packetIdentifiersMap;

    Aws::Vector<MultiplexProgramPipelineDetail> m_pipelineDetails;

    Aws::String m_programName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
