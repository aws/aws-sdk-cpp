/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetOriginEndpointPolicyResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointPolicyResult();
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API GetOriginEndpointPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupName = value; }
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupName = std::move(value); }
    inline void SetChannelGroupName(const char* value) { m_channelGroupName.assign(value); }
    inline GetOriginEndpointPolicyResult& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}
    inline GetOriginEndpointPolicyResult& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}
    inline GetOriginEndpointPolicyResult& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }
    inline GetOriginEndpointPolicyResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline GetOriginEndpointPolicyResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline GetOriginEndpointPolicyResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the origin endpoint. The name is the primary
     * identifier for the origin endpoint, and and must be unique for your account in
     * the AWS Region and channel.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const{ return m_originEndpointName; }
    inline void SetOriginEndpointName(const Aws::String& value) { m_originEndpointName = value; }
    inline void SetOriginEndpointName(Aws::String&& value) { m_originEndpointName = std::move(value); }
    inline void SetOriginEndpointName(const char* value) { m_originEndpointName.assign(value); }
    inline GetOriginEndpointPolicyResult& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}
    inline GetOriginEndpointPolicyResult& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}
    inline GetOriginEndpointPolicyResult& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy assigned to the origin endpoint.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policy.assign(value); }
    inline GetOriginEndpointPolicyResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline GetOriginEndpointPolicyResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline GetOriginEndpointPolicyResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetOriginEndpointPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetOriginEndpointPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetOriginEndpointPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelGroupName;

    Aws::String m_channelName;

    Aws::String m_originEndpointName;

    Aws::String m_policy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
