/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class ResetChannelStateResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API ResetChannelStateResult();
    AWS_MEDIAPACKAGEV2_API ResetChannelStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API ResetChannelStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the channel group that contains the channel that you just
     * reset.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupName = value; }
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupName = std::move(value); }
    inline void SetChannelGroupName(const char* value) { m_channelGroupName.assign(value); }
    inline ResetChannelStateResult& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}
    inline ResetChannelStateResult& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}
    inline ResetChannelStateResult& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel that you just reset.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }
    inline ResetChannelStateResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline ResetChannelStateResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline ResetChannelStateResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the channel that you just
     * reset.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline ResetChannelStateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ResetChannelStateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ResetChannelStateResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the channel was last reset.</p>
     */
    inline const Aws::Utils::DateTime& GetResetAt() const{ return m_resetAt; }
    inline void SetResetAt(const Aws::Utils::DateTime& value) { m_resetAt = value; }
    inline void SetResetAt(Aws::Utils::DateTime&& value) { m_resetAt = std::move(value); }
    inline ResetChannelStateResult& WithResetAt(const Aws::Utils::DateTime& value) { SetResetAt(value); return *this;}
    inline ResetChannelStateResult& WithResetAt(Aws::Utils::DateTime&& value) { SetResetAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ResetChannelStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ResetChannelStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ResetChannelStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelGroupName;

    Aws::String m_channelName;

    Aws::String m_arn;

    Aws::Utils::DateTime m_resetAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
