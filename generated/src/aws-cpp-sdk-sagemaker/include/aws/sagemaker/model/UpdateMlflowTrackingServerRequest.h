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
    AWS_SAGEMAKER_API UpdateMlflowTrackingServerRequest() = default;

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
    inline const Aws::String& GetTrackingServerName() const { return m_trackingServerName; }
    inline bool TrackingServerNameHasBeenSet() const { return m_trackingServerNameHasBeenSet; }
    template<typename TrackingServerNameT = Aws::String>
    void SetTrackingServerName(TrackingServerNameT&& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = std::forward<TrackingServerNameT>(value); }
    template<typename TrackingServerNameT = Aws::String>
    UpdateMlflowTrackingServerRequest& WithTrackingServerName(TrackingServerNameT&& value) { SetTrackingServerName(std::forward<TrackingServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new S3 URI for the general purpose bucket to use as the artifact store
     * for the MLflow Tracking Server.</p>
     */
    inline const Aws::String& GetArtifactStoreUri() const { return m_artifactStoreUri; }
    inline bool ArtifactStoreUriHasBeenSet() const { return m_artifactStoreUriHasBeenSet; }
    template<typename ArtifactStoreUriT = Aws::String>
    void SetArtifactStoreUri(ArtifactStoreUriT&& value) { m_artifactStoreUriHasBeenSet = true; m_artifactStoreUri = std::forward<ArtifactStoreUriT>(value); }
    template<typename ArtifactStoreUriT = Aws::String>
    UpdateMlflowTrackingServerRequest& WithArtifactStoreUri(ArtifactStoreUriT&& value) { SetArtifactStoreUri(std::forward<ArtifactStoreUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new size for the MLflow Tracking Server.</p>
     */
    inline TrackingServerSize GetTrackingServerSize() const { return m_trackingServerSize; }
    inline bool TrackingServerSizeHasBeenSet() const { return m_trackingServerSizeHasBeenSet; }
    inline void SetTrackingServerSize(TrackingServerSize value) { m_trackingServerSizeHasBeenSet = true; m_trackingServerSize = value; }
    inline UpdateMlflowTrackingServerRequest& WithTrackingServerSize(TrackingServerSize value) { SetTrackingServerSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable or disable automatic registration of new MLflow models to
     * the SageMaker Model Registry. To enable automatic model registration, set this
     * value to <code>True</code>. To disable automatic model registration, set this
     * value to <code>False</code>. If not specified,
     * <code>AutomaticModelRegistration</code> defaults to <code>False</code> </p>
     */
    inline bool GetAutomaticModelRegistration() const { return m_automaticModelRegistration; }
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
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const { return m_weeklyMaintenanceWindowStart; }
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }
    template<typename WeeklyMaintenanceWindowStartT = Aws::String>
    void SetWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::forward<WeeklyMaintenanceWindowStartT>(value); }
    template<typename WeeklyMaintenanceWindowStartT = Aws::String>
    UpdateMlflowTrackingServerRequest& WithWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) { SetWeeklyMaintenanceWindowStart(std::forward<WeeklyMaintenanceWindowStartT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerName;
    bool m_trackingServerNameHasBeenSet = false;

    Aws::String m_artifactStoreUri;
    bool m_artifactStoreUriHasBeenSet = false;

    TrackingServerSize m_trackingServerSize{TrackingServerSize::NOT_SET};
    bool m_trackingServerSizeHasBeenSet = false;

    bool m_automaticModelRegistration{false};
    bool m_automaticModelRegistrationHasBeenSet = false;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
