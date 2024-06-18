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
    AWS_SAGEMAKER_API CreateMlflowTrackingServerRequest();

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
    inline const Aws::String& GetTrackingServerName() const{ return m_trackingServerName; }
    inline bool TrackingServerNameHasBeenSet() const { return m_trackingServerNameHasBeenSet; }
    inline void SetTrackingServerName(const Aws::String& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = value; }
    inline void SetTrackingServerName(Aws::String&& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = std::move(value); }
    inline void SetTrackingServerName(const char* value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName.assign(value); }
    inline CreateMlflowTrackingServerRequest& WithTrackingServerName(const Aws::String& value) { SetTrackingServerName(value); return *this;}
    inline CreateMlflowTrackingServerRequest& WithTrackingServerName(Aws::String&& value) { SetTrackingServerName(std::move(value)); return *this;}
    inline CreateMlflowTrackingServerRequest& WithTrackingServerName(const char* value) { SetTrackingServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI for a general purpose bucket to use as the MLflow Tracking Server
     * artifact store.</p>
     */
    inline const Aws::String& GetArtifactStoreUri() const{ return m_artifactStoreUri; }
    inline bool ArtifactStoreUriHasBeenSet() const { return m_artifactStoreUriHasBeenSet; }
    inline void SetArtifactStoreUri(const Aws::String& value) { m_artifactStoreUriHasBeenSet = true; m_artifactStoreUri = value; }
    inline void SetArtifactStoreUri(Aws::String&& value) { m_artifactStoreUriHasBeenSet = true; m_artifactStoreUri = std::move(value); }
    inline void SetArtifactStoreUri(const char* value) { m_artifactStoreUriHasBeenSet = true; m_artifactStoreUri.assign(value); }
    inline CreateMlflowTrackingServerRequest& WithArtifactStoreUri(const Aws::String& value) { SetArtifactStoreUri(value); return *this;}
    inline CreateMlflowTrackingServerRequest& WithArtifactStoreUri(Aws::String&& value) { SetArtifactStoreUri(std::move(value)); return *this;}
    inline CreateMlflowTrackingServerRequest& WithArtifactStoreUri(const char* value) { SetArtifactStoreUri(value); return *this;}
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
    inline const TrackingServerSize& GetTrackingServerSize() const{ return m_trackingServerSize; }
    inline bool TrackingServerSizeHasBeenSet() const { return m_trackingServerSizeHasBeenSet; }
    inline void SetTrackingServerSize(const TrackingServerSize& value) { m_trackingServerSizeHasBeenSet = true; m_trackingServerSize = value; }
    inline void SetTrackingServerSize(TrackingServerSize&& value) { m_trackingServerSizeHasBeenSet = true; m_trackingServerSize = std::move(value); }
    inline CreateMlflowTrackingServerRequest& WithTrackingServerSize(const TrackingServerSize& value) { SetTrackingServerSize(value); return *this;}
    inline CreateMlflowTrackingServerRequest& WithTrackingServerSize(TrackingServerSize&& value) { SetTrackingServerSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of MLflow that the tracking server uses. To see which MLflow
     * versions are available to use, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/mlflow.html#mlflow-create-tracking-server-how-it-works">How
     * it works</a>.</p>
     */
    inline const Aws::String& GetMlflowVersion() const{ return m_mlflowVersion; }
    inline bool MlflowVersionHasBeenSet() const { return m_mlflowVersionHasBeenSet; }
    inline void SetMlflowVersion(const Aws::String& value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion = value; }
    inline void SetMlflowVersion(Aws::String&& value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion = std::move(value); }
    inline void SetMlflowVersion(const char* value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion.assign(value); }
    inline CreateMlflowTrackingServerRequest& WithMlflowVersion(const Aws::String& value) { SetMlflowVersion(value); return *this;}
    inline CreateMlflowTrackingServerRequest& WithMlflowVersion(Aws::String&& value) { SetMlflowVersion(std::move(value)); return *this;}
    inline CreateMlflowTrackingServerRequest& WithMlflowVersion(const char* value) { SetMlflowVersion(value); return *this;}
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
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateMlflowTrackingServerRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateMlflowTrackingServerRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateMlflowTrackingServerRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable or disable automatic registration of new MLflow models to
     * the SageMaker Model Registry. To enable automatic model registration, set this
     * value to <code>True</code>. To disable automatic model registration, set this
     * value to <code>False</code>. If not specified,
     * <code>AutomaticModelRegistration</code> defaults to <code>False</code>.</p>
     */
    inline bool GetAutomaticModelRegistration() const{ return m_automaticModelRegistration; }
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
    inline const Aws::String& GetWeeklyMaintenanceWindowStart() const{ return m_weeklyMaintenanceWindowStart; }
    inline bool WeeklyMaintenanceWindowStartHasBeenSet() const { return m_weeklyMaintenanceWindowStartHasBeenSet; }
    inline void SetWeeklyMaintenanceWindowStart(const Aws::String& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = value; }
    inline void SetWeeklyMaintenanceWindowStart(Aws::String&& value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart = std::move(value); }
    inline void SetWeeklyMaintenanceWindowStart(const char* value) { m_weeklyMaintenanceWindowStartHasBeenSet = true; m_weeklyMaintenanceWindowStart.assign(value); }
    inline CreateMlflowTrackingServerRequest& WithWeeklyMaintenanceWindowStart(const Aws::String& value) { SetWeeklyMaintenanceWindowStart(value); return *this;}
    inline CreateMlflowTrackingServerRequest& WithWeeklyMaintenanceWindowStart(Aws::String&& value) { SetWeeklyMaintenanceWindowStart(std::move(value)); return *this;}
    inline CreateMlflowTrackingServerRequest& WithWeeklyMaintenanceWindowStart(const char* value) { SetWeeklyMaintenanceWindowStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags consisting of key-value pairs used to manage metadata for the tracking
     * server.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMlflowTrackingServerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateMlflowTrackingServerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMlflowTrackingServerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateMlflowTrackingServerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_trackingServerName;
    bool m_trackingServerNameHasBeenSet = false;

    Aws::String m_artifactStoreUri;
    bool m_artifactStoreUriHasBeenSet = false;

    TrackingServerSize m_trackingServerSize;
    bool m_trackingServerSizeHasBeenSet = false;

    Aws::String m_mlflowVersion;
    bool m_mlflowVersionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    bool m_automaticModelRegistration;
    bool m_automaticModelRegistrationHasBeenSet = false;

    Aws::String m_weeklyMaintenanceWindowStart;
    bool m_weeklyMaintenanceWindowStartHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
