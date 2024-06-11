/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/S3Destination.h>
#include <utility>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

  /**
   * Configuration parameters used to create a new HarvestJob.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CreateHarvestJobRequest">AWS
   * API Reference</a></p>
   */
  class CreateHarvestJobRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API CreateHarvestJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHarvestJob"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The end of the time-window which will be harvested

     */
    inline const Aws::String& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::String& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::String&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline void SetEndTime(const char* value) { m_endTimeHasBeenSet = true; m_endTime.assign(value); }
    inline CreateHarvestJobRequest& WithEndTime(const Aws::String& value) { SetEndTime(value); return *this;}
    inline CreateHarvestJobRequest& WithEndTime(Aws::String&& value) { SetEndTime(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& WithEndTime(const char* value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the HarvestJob. The ID must be unique within the region
and it cannot
     * be changed after the HarvestJob is submitted

     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CreateHarvestJobRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateHarvestJobRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& WithId(const char* value) { SetId(value); return *this;}
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
    inline CreateHarvestJobRequest& WithOriginEndpointId(const Aws::String& value) { SetOriginEndpointId(value); return *this;}
    inline CreateHarvestJobRequest& WithOriginEndpointId(Aws::String&& value) { SetOriginEndpointId(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& WithOriginEndpointId(const char* value) { SetOriginEndpointId(value); return *this;}
    ///@}

    ///@{
    
    inline const S3Destination& GetS3Destination() const{ return m_s3Destination; }
    inline bool S3DestinationHasBeenSet() const { return m_s3DestinationHasBeenSet; }
    inline void SetS3Destination(const S3Destination& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = value; }
    inline void SetS3Destination(S3Destination&& value) { m_s3DestinationHasBeenSet = true; m_s3Destination = std::move(value); }
    inline CreateHarvestJobRequest& WithS3Destination(const S3Destination& value) { SetS3Destination(value); return *this;}
    inline CreateHarvestJobRequest& WithS3Destination(S3Destination&& value) { SetS3Destination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The start of the time-window which will be harvested

     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }
    inline CreateHarvestJobRequest& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}
    inline CreateHarvestJobRequest& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& WithStartTime(const char* value) { SetStartTime(value); return *this;}
    ///@}
  private:

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
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
