/**
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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaPackage
{
namespace Model
{

  /**
   * A HarvestJob resource configuration<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/HarvestJob">AWS
   * API Reference</a></p>
   */
  class HarvestJob
  {
  public:
    AWS_MEDIAPACKAGE_API HarvestJob();
    AWS_MEDIAPACKAGE_API HarvestJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API HarvestJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Amazon Resource Name (ARN) assigned to the HarvestJob.

     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline HarvestJob& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline HarvestJob& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline HarvestJob& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Channel that the HarvestJob will harvest from.

     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }
    inline HarvestJob& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}
    inline HarvestJob& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}
    inline HarvestJob& WithChannelId(const char* value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * The date and time the HarvestJob was submitted.

     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline HarvestJob& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline HarvestJob& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline HarvestJob& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * The end of the time-window which will be harvested.

     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }
    inline HarvestJob& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}
    inline HarvestJob& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}
    inline HarvestJob& WithEndTime(const char* value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted.

     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline HarvestJob& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline HarvestJob& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline HarvestJob& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the OriginEndpoint that the HarvestJob will harvest from.
This cannot
     * be changed after the HarvestJob is submitted.

     */
    inline const Aws::String& GetOriginEndpointId() const{ return m_originEndpointId; }
    inline bool OriginEndpointIdHasBeenSet() const { return m_originEndpointIdHasBeenSet; }
    inline void SetOriginEndpointId(const Aws::String& value) { m_originEndpointIdHasBeenSet = true; m_originEndpointId = value; }
    inline void SetOriginEndpointId(Aws::String&& value) { m_originEndpointIdHasBeenSet = true; m_originEndpointId = std::move(value); }
    inline void SetOriginEndpointId(const char* value) { m_originEndpointIdHasBeenSet = true; m_originEndpointId.assign(value); }
    inline HarvestJob& WithOriginEndpointId(const Aws::String& value) { SetOriginEndpointId(value); return *this;}
    inline HarvestJob& WithOriginEndpointId(Aws::String&& value) { SetOriginEndpointId(std::move(value)); return *this;}
    inline HarvestJob& WithOriginEndpointId(const char* value) { SetOriginEndpointId(value); return *this;}
    ///@}

    ///@{
    
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    inline void SetS3Destination(const S3Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }
    inline void SetS3Destination(S3Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }
    inline HarvestJob& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}
    inline HarvestJob& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The start of the time-window which will be harvested.

     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline HarvestJob& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline HarvestJob& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline HarvestJob& WithStartTime(const char* value) { SetStartTime(value); return *this;}
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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline HarvestJob& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline HarvestJob& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_originEndpointId;
    bool m_originEndpointIdHasBeenSet = false;

    S3Destination m_s3Destination;
    bool m_s3DestinationHasBeenSet = false;

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
