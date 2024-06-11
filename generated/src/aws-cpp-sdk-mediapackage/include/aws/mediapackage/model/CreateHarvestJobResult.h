﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/S3Destination.h>
#include <aws/mediapackage/model/Status.h>
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
namespace MediaPackage
{
namespace Model
{
  class CreateHarvestJobResult
  {
  public:
    AWS_MEDIAPACKAGE_API CreateHarvestJobResult();
    AWS_MEDIAPACKAGE_API CreateHarvestJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGE_API CreateHarvestJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The Amazon Resource Name (ARN) assigned to the HarvestJob.

     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateHarvestJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateHarvestJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Channel that the HarvestJob will harvest from.

     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }
    inline void SetChannelId(const Aws::String& value) { m_channelId = value; }
    inline void SetChannelId(Aws::String&& value) { m_channelId = std::move(value); }
    inline void SetChannelId(const char* value) { m_channelId.assign(value); }
    inline CreateHarvestJobResult& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}
    inline CreateHarvestJobResult& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithChannelId(const char* value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * The date and time the HarvestJob was submitted.

     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAt.assign(value); }
    inline CreateHarvestJobResult& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline CreateHarvestJobResult& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * The end of the time-window which will be harvested.

     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::String& value) { m_endTime = value; }
    inline void SetEndTime(Aws::String&& value) { m_endTime = std::move(value); }
    inline void SetEndTime(const char* value) { m_endTime.assign(value); }
    inline CreateHarvestJobResult& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}
    inline CreateHarvestJobResult& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithEndTime(const char* value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted.

     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateHarvestJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateHarvestJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the OriginEndpoint that the HarvestJob will harvest from.
This cannot
     * be changed after the HarvestJob is submitted.

     */
    inline const Aws::String& GetOriginEndpointId() const{ return m_originEndpointId; }
    inline void SetOriginEndpointId(const Aws::String& value) { m_originEndpointId = value; }
    inline void SetOriginEndpointId(Aws::String&& value) { m_originEndpointId = std::move(value); }
    inline void SetOriginEndpointId(const char* value) { m_originEndpointId.assign(value); }
    inline CreateHarvestJobResult& WithOriginEndpointId(const Aws::String& value) { SetOriginEndpointId(value); return *this;}
    inline CreateHarvestJobResult& WithOriginEndpointId(Aws::String&& value) { SetOriginEndpointId(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithOriginEndpointId(const char* value) { SetOriginEndpointId(value); return *this;}
    ///@}

    ///@{
    
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }
    inline void SetS3Destination(const S3Destination& value) { m_s3Destination = value; }
    inline void SetS3Destination(S3Destination&& value) { m_s3Destination = std::move(value); }
    inline CreateHarvestJobResult& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}
    inline CreateHarvestJobResult& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The start of the time-window which will be harvested.

     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::String& value) { m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTime.assign(value); }
    inline CreateHarvestJobResult& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline CreateHarvestJobResult& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * The current status of the HarvestJob. Consider setting up a CloudWatch Event to
     * listen for
HarvestJobs as they succeed or fail. In the event of failure, the
     * CloudWatch Event will
include an explanation of why the HarvestJob failed.

     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline CreateHarvestJobResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline CreateHarvestJobResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateHarvestJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateHarvestJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_channelId;

    Aws::String m_createdAt;

    Aws::String m_endTime;

    Aws::String m_id;

    Aws::String m_originEndpointId;

    S3Destination m_s3Destination;

    Aws::String m_startTime;

    Status m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
