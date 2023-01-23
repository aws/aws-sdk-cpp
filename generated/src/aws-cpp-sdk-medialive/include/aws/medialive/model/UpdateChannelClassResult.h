/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Channel.h>
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
   * Placeholder documentation for UpdateChannelClassResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateChannelClassResponse">AWS
   * API Reference</a></p>
   */
  class UpdateChannelClassResult
  {
  public:
    AWS_MEDIALIVE_API UpdateChannelClassResult();
    AWS_MEDIALIVE_API UpdateChannelClassResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API UpdateChannelClassResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Channel& GetChannel() const{ return m_channel; }

    
    inline void SetChannel(const Channel& value) { m_channel = value; }

    
    inline void SetChannel(Channel&& value) { m_channel = std::move(value); }

    
    inline UpdateChannelClassResult& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    
    inline UpdateChannelClassResult& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}

  private:

    Channel m_channel;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
