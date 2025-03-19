/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrackingServerSize.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateMlflowTrackingServerRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateMlflowTrackingServerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMlflowTrackingServer"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique string identifying the tracking server name. This string is part of
     * the tracking server ARN.</p>
     */
    inline const Aws::String& GetTrackingServerName() const { return m_trackingServerName; }
    inline bool TrackingServerNameHasBeenSet() const { return m_trackingServerNameHasBeenSet; }
    template<typename TrackingServerNameT = Aws::String>
    void SetTrackingServerName(TrackingServerNameT&& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = std::forward<TrackingServerNameT>(value); }
    template<typename TrackingServerNameT = Aws::String>
    CreateMlflowTrackingServerRequest& WithTrackingServerName(TrackingServerNameT&& value) { SetTrackingServerName(std::forward<TrackingServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI for a general purpose bucket to use as the MLflow Tracking Server
     * artifact store.</p>
     */
    inline const Aws::String& GetArtifactStoreUri() const { return m_artifactStoreUri; }
    inline bool ArtifactStoreUriHasBeenSet() const { return m_artifactStoreUriHasBeenSet; }
    template<typename ArtifactStoreUriT = Aws::String>
    void SetArtifactStoreUri(ArtifactStoreUriT&& value) { m_artifactStoreUriHasBeenSet = true; m_artifactStoreUri = std::forward<ArtifactStoreUriT>(value); }
    template<typename ArtifactStoreUriT = Aws::String>
    CreateMlflowTrackingServerRequest& WithArtifactStoreUri(ArtifactStoreUriT&& value) { SetArtifactStoreUri(std::forward<ArtifactStoreUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the tracking server you want to create. You can choose between
     * <code>"Small"</code>, <code>"Medium"</code>, and <code>"Large"</code>. The
     * default MLflow Tracking Server configuration size is <code>"Small"</code>. You
     * can choose a size depending on the projected use of the tracking server such as
     * the volume of data logged, number of users, and frequency of use. </p> <p>We
     * recommend using a small tracking server for teams of up to 25 users, a medium
     * tracking server for teams of up to 50 users, and a large tracking server for
     * teams of up to 100 users. </p>
     */
    inline TrackingServerSize GetTrackingServerSize() const { return m_trackingServerSize; }
    inline bool TrackingServerSizeHasBeenSet() const { return m_trackingServerSizeHasBeenSet; }
    inline void SetTrackingServerSize(TrackingServerSize value) { m_trackingServerSizeHasBeenSet = true; m_trackingServerSize = value; }
    inline CreateMlflowTrackingServerRequest& WithTrackingServerSize(TrackingServerSize value) { SetTrackingServerSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of MLflow that the tracking server uses. To see which MLflow
     * versions are available to use, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/mlflow.html#mlflow-create-tracking-server-how-it-works">How
     * it works</a>.</p>
     */
    inline const Aws::String& GetMlflowVersion() const { return m_mlflowVersion; }
    inline bool MlflowVersionHasBeenSet() const { return m_mlflowVersionHasBeenSet; }
    template<typename MlflowVersionT = Aws::String>
    void SetMlflowVersion(MlflowVersionT&& value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion = std::forward<MlflowVersionT>(value); }
    template<typename MlflowVersionT = Aws::String>
    CreateMlflowTrackingServerRequest& WithMlflowVersion(MlflowVersionT&& value) { SetMlflowVersion(std::forward<MlflowVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for an IAM role in your account that the
     * MLflow Tracking Server uses to access the artifact store in Amazon S3. The role
     * should have <code>AmazonS3FullAccess</code> permissions. For more information on
     * IAM permissions for tracking server creation, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/mlflow-create-tracking-server-iam.html">Set
     * up IAM permissions for MLflow</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateMlflowTrackingServerRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable or disable automatic registration of new MLflow models to
     * the SageMaker Model Registry. To enable automatic model registration, set this
     * value to <code>True</code>. To disable automatic model registration, set this
     * value to <code>False</code>. If not specified,
     * <code>AutomaticModelRegistration</code> defaults to <code>False</code>.</p>
     */
    inline bool GetAutomaticModelRegistration() const { return m_automaticModelRegistration; }
    inline bool AutomaticModelRegistrationHasBeenSet() const { return m_automaticModelRegistrationHasBeenSet; }
    inline void SetAutomaticModelRegistration(bool value) { m_automaticModelRegistrationHasBeenSet = true; m_automaticModelRegistration = value; }
    inline CreateMlflowTrackingServerRequest& WithAutomaticModelRegistration(bool value) { SetAutomaticModelRegistration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. For example:
     * TUE:03:30.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const { return m_weeklyMaintenanceWindowStart; }
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }
    template<typename WeeklyMaintenanceWindowStartT = Aws::String>
    void SetWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::forward<WeeklyMaintenanceWindowStartT>(value); }
    template<typename WeeklyMaintenanceWindowStartT = Aws::String>
    CreateMlflowTrackingServerRequest& WithWeeklyMaintenanceWindowStart(WeeklyMaintenanceWindowStartT&& value) { SetWeeklyMaintenanceWindowStart(std::forward<WeeklyMaintenanceWindowStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags consisting of key-value pairs used to manage metadata for the tracking
     * server.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateMlflowTrackingServerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateMlflowTrackingServerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trackingServerName;
    bool m_trackingServerNameHasBeenSet = false;

    Aws::String m_artifactStoreUri;
    bool m_artifactStoreUriHasBeenSet = false;

    TrackingServerSize m_trackingServerSize{TrackingServerSize::NOT_SET};
    bool m_trackingServerSizeHasBeenSet = false;

    Aws::String m_mlflowVersion;
    bool m_mlflowVersionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    bool m_automaticModelRegistration{false};
    bool m_automaticModelRegistrationHasBeenSet = false;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
