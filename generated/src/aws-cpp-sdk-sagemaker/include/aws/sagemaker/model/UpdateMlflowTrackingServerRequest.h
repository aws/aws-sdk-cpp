/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrackingServerSize.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateMlflowTrackingServerRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateMlflowTrackingServerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMlflowTrackingServer"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the MLflow Tracking Server to update.</p>
     */
    inline const Aws::String& GetTrackingServerName() const{ return m_trackingServerName; }
    inline bool TrackingServerNameHasBeenSet() const { return m_trackingServerNameHasBeenSet; }
    inline void SetTrackingServerName(const Aws::String& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = value; }
    inline void SetTrackingServerName(Aws::String&& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = std::move(value); }
    inline void SetTrackingServerName(const char* value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName.assign(value); }
    inline UpdateMlflowTrackingServerRequest& WithTrackingServerName(const Aws::String& value) { SetTrackingServerName(value); return *this;}
    inline UpdateMlflowTrackingServerRequest& WithTrackingServerName(Aws::String&& value) { SetTrackingServerName(std::move(value)); return *this;}
    inline UpdateMlflowTrackingServerRequest& WithTrackingServerName(const char* value) { SetTrackingServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new S3 URI for the general purpose bucket to use as the artifact store
     * for the MLflow Tracking Server.</p>
     */
    inline const Aws::String& GetArtifactStoreUri() const{ return m_artifactStoreUri; }
    inline bool ArtifactStoreUriHasBeenSet() const { return m_artifactStoreUriHasBeenSet; }
    inline void SetArtifactStoreUri(const Aws::String& value) { m_artifactStoreUriHasBeenSet = true; m_artifactStoreUri = value; }
    inline void SetArtifactStoreUri(Aws::String&& value) { m_artifactStoreUriHasBeenSet = true; m_artifactStoreUri = std::move(value); }
    inline void SetArtifactStoreUri(const char* value) { m_artifactStoreUriHasBeenSet = true; m_artifactStoreUri.assign(value); }
    inline UpdateMlflowTrackingServerRequest& WithArtifactStoreUri(const Aws::String& value) { SetArtifactStoreUri(value); return *this;}
    inline UpdateMlflowTrackingServerRequest& WithArtifactStoreUri(Aws::String&& value) { SetArtifactStoreUri(std::move(value)); return *this;}
    inline UpdateMlflowTrackingServerRequest& WithArtifactStoreUri(const char* value) { SetArtifactStoreUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new size for the MLflow Tracking Server.</p>
     */
    inline const TrackingServerSize& GetTrackingServerSize() const{ return m_trackingServerSize; }
    inline bool TrackingServerSizeHasBeenSet() const { return m_trackingServerSizeHasBeenSet; }
    inline void SetTrackingServerSize(const TrackingServerSize& value) { m_trackingServerSizeHasBeenSet = true; m_trackingServerSize = value; }
    inline void SetTrackingServerSize(TrackingServerSize&& value) { m_trackingServerSizeHasBeenSet = true; m_trackingServerSize = std::move(value); }
    inline UpdateMlflowTrackingServerRequest& WithTrackingServerSize(const TrackingServerSize& value) { SetTrackingServerSize(value); return *this;}
    inline UpdateMlflowTrackingServerRequest& WithTrackingServerSize(TrackingServerSize&& value) { SetTrackingServerSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable or disable automatic registration of new MLflow models to
     * the SageMaker Model Registry. To enable automatic model registration, set this
     * value to <code>True</code>. To disable automatic model registration, set this
     * value to <code>False</code>. If not specified,
     * <code>AutomaticModelRegistration</code> defaults to <code>False</code> </p>
     */
    inline bool GetAutomaticModelRegistration() const{ return m_automaticModelRegistration; }
    inline bool AutomaticModelRegistrationHasBeenSet() const { return m_automaticModelRegistrationHasBeenSet; }
    inline void SetAutomaticModelRegistration(bool value) { m_automaticModelRegistrationHasBeenSet = true; m_automaticModelRegistration = value; }
    inline UpdateMlflowTrackingServerRequest& WithAutomaticModelRegistration(bool value) { SetAutomaticModelRegistration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new weekly maintenance window start day and time to update. The
     * maintenance window day and time should be in Coordinated Universal Time (UTC)
     * 24-hour standard time. For example: TUE:03:30.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const{ return m_weeklyMaintenanceWindowStart; }
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }
    inline void SetWeeklyMaintenanceWindowStart(const Aws::String& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = value; }
    inline void SetWeeklyMaintenanceWindowStart(Aws::String&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::move(value); }
    inline void SetWeeklyMaintenanceWindowStart(const char* value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart.assign(value); }
    inline UpdateMlflowTrackingServerRequest& WithWeeklyMaintenanceWindowStart(const Aws::String& value) { SetWeeklyMaintenanceWindowStart(value); return *this;}
    inline UpdateMlflowTrackingServerRequest& WithWeeklyMaintenanceWindowStart(Aws::String&& value) { SetWeeklyMaintenanceWindowStart(std::move(value)); return *this;}
    inline UpdateMlflowTrackingServerRequest& WithWeeklyMaintenanceWindowStart(const char* value) { SetWeeklyMaintenanceWindowStart(value); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerName;
    bool m_trackingServerNameHasBeenSet = false;

    Aws::String m_artifactStoreUri;
    bool m_artifactStoreUriHasBeenSet = false;

    TrackingServerSize m_trackingServerSize;
    bool m_trackingServerSizeHasBeenSet = false;

    bool m_automaticModelRegistration;
    bool m_automaticModelRegistrationHasBeenSet = false;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
