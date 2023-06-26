/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/MediaStream.h>
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
namespace MediaConnect
{
namespace Model
{
  class UpdateFlowMediaStreamResult
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowMediaStreamResult();
    AWS_MEDIACONNECT_API UpdateFlowMediaStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API UpdateFlowMediaStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the flow that is associated with the media stream that you updated.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the flow that is associated with the media stream that you updated.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArn = value; }

    /**
     * The ARN of the flow that is associated with the media stream that you updated.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArn = std::move(value); }

    /**
     * The ARN of the flow that is associated with the media stream that you updated.
     */
    inline void SetFlowArn(const char* value) { m_flowArn.assign(value); }

    /**
     * The ARN of the flow that is associated with the media stream that you updated.
     */
    inline UpdateFlowMediaStreamResult& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the flow that is associated with the media stream that you updated.
     */
    inline UpdateFlowMediaStreamResult& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the flow that is associated with the media stream that you updated.
     */
    inline UpdateFlowMediaStreamResult& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The media stream that you updated.
     */
    inline const MediaStream& GetMediaStream() const{ return m_mediaStream; }

    /**
     * The media stream that you updated.
     */
    inline void SetMediaStream(const MediaStream& value) { m_mediaStream = value; }

    /**
     * The media stream that you updated.
     */
    inline void SetMediaStream(MediaStream&& value) { m_mediaStream = std::move(value); }

    /**
     * The media stream that you updated.
     */
    inline UpdateFlowMediaStreamResult& WithMediaStream(const MediaStream& value) { SetMediaStream(value); return *this;}

    /**
     * The media stream that you updated.
     */
    inline UpdateFlowMediaStreamResult& WithMediaStream(MediaStream&& value) { SetMediaStream(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateFlowMediaStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateFlowMediaStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateFlowMediaStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_flowArn;

    MediaStream m_mediaStream;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
