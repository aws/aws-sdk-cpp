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
    AWS_MEDIAPACKAGE_API HarvestJob() = default;
    AWS_MEDIAPACKAGE_API HarvestJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API HarvestJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Amazon Resource Name (ARN) assigned to the HarvestJob.

     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    HarvestJob& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Channel that the HarvestJob will harvest from.

     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    HarvestJob& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The date and time the HarvestJob was submitted.

     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    HarvestJob& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The end of the time-window which will be harvested.

     */
    inline const Aws::String& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::String>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::String>
    HarvestJob& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted.

     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    HarvestJob& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the OriginEndpoint that the HarvestJob will harvest from.
This cannot
     * be changed after the HarvestJob is submitted.

     */
    inline const Aws::String& GetOriginEndpointId() const { return m_originEndpointId; }
    inline bool OriginEndpointIdHasBeenSet() const { return m_originEndpointIdHasBeenSet; }
    template<typename OriginEndpointIdT = Aws::String>
    void SetOriginEndpointId(OriginEndpointIdT&& value) { m_originEndpointIdHasBeenSet = true; m_originEndpointId = std::forward<OriginEndpointIdT>(value); }
    template<typename OriginEndpointIdT = Aws::String>
    HarvestJob& WithOriginEndpointId(OriginEndpointIdT&& value) { SetOriginEndpointId(std::forward<OriginEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Destination& GetS3Destination() const { return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    template<typename S3DestinationT = S3Destination>
    void SetS3Destination(S3DestinationT&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::forward<S3DestinationT>(value); }
    template<typename S3DestinationT = S3Destination>
    HarvestJob& WithS3Destination(S3DestinationT&& value) { SetS3Destination(std::forward<S3DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The start of the time-window which will be harvested.

     */
    inline const Aws::String& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::String>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::String>
    HarvestJob& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current status of the HarvestJob. Consider setting up a CloudWatch Event to
     * listen for
HarvestJobs as they succeed or fail. In the event of failure, the
     * CloudWatch Event will
include an explanation of why the HarvestJob failed.

     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline HarvestJob& WithStatus(Status value) { SetStatus(value); return *this;}
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

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
