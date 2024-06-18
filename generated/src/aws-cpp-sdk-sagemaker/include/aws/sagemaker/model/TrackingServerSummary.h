/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrackingServerStatus.h>
#include <aws/sagemaker/model/IsTrackingServerActive.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The summary of the tracking server to list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrackingServerSummary">AWS
   * API Reference</a></p>
   */
  class TrackingServerSummary
  {
  public:
    AWS_SAGEMAKER_API TrackingServerSummary();
    AWS_SAGEMAKER_API TrackingServerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrackingServerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a listed tracking server.</p>
     */
    inline const Aws::String& GetTrackingServerArn() const{ return m_trackingServerArn; }
    inline bool TrackingServerArnHasBeenSet() const { return m_trackingServerArnHasBeenSet; }
    inline void SetTrackingServerArn(const Aws::String& value) { m_trackingServerArnHasBeenSet = true; m_trackingServerArn = value; }
    inline void SetTrackingServerArn(Aws::String&& value) { m_trackingServerArnHasBeenSet = true; m_trackingServerArn = std::move(value); }
    inline void SetTrackingServerArn(const char* value) { m_trackingServerArnHasBeenSet = true; m_trackingServerArn.assign(value); }
    inline TrackingServerSummary& WithTrackingServerArn(const Aws::String& value) { SetTrackingServerArn(value); return *this;}
    inline TrackingServerSummary& WithTrackingServerArn(Aws::String&& value) { SetTrackingServerArn(std::move(value)); return *this;}
    inline TrackingServerSummary& WithTrackingServerArn(const char* value) { SetTrackingServerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a listed tracking server.</p>
     */
    inline const Aws::String& GetTrackingServerName() const{ return m_trackingServerName; }
    inline bool TrackingServerNameHasBeenSet() const { return m_trackingServerNameHasBeenSet; }
    inline void SetTrackingServerName(const Aws::String& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = value; }
    inline void SetTrackingServerName(Aws::String&& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = std::move(value); }
    inline void SetTrackingServerName(const char* value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName.assign(value); }
    inline TrackingServerSummary& WithTrackingServerName(const Aws::String& value) { SetTrackingServerName(value); return *this;}
    inline TrackingServerSummary& WithTrackingServerName(Aws::String&& value) { SetTrackingServerName(std::move(value)); return *this;}
    inline TrackingServerSummary& WithTrackingServerName(const char* value) { SetTrackingServerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of a listed tracking server.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TrackingServerSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TrackingServerSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time of a listed tracking server.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline TrackingServerSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline TrackingServerSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation status of a listed tracking server.</p>
     */
    inline const TrackingServerStatus& GetTrackingServerStatus() const{ return m_trackingServerStatus; }
    inline bool TrackingServerStatusHasBeenSet() const { return m_trackingServerStatusHasBeenSet; }
    inline void SetTrackingServerStatus(const TrackingServerStatus& value) { m_trackingServerStatusHasBeenSet = true; m_trackingServerStatus = value; }
    inline void SetTrackingServerStatus(TrackingServerStatus&& value) { m_trackingServerStatusHasBeenSet = true; m_trackingServerStatus = std::move(value); }
    inline TrackingServerSummary& WithTrackingServerStatus(const TrackingServerStatus& value) { SetTrackingServerStatus(value); return *this;}
    inline TrackingServerSummary& WithTrackingServerStatus(TrackingServerStatus&& value) { SetTrackingServerStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activity status of a listed tracking server.</p>
     */
    inline const IsTrackingServerActive& GetIsActive() const{ return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(const IsTrackingServerActive& value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline void SetIsActive(IsTrackingServerActive&& value) { m_isActiveHasBeenSet = true; m_isActive = std::move(value); }
    inline TrackingServerSummary& WithIsActive(const IsTrackingServerActive& value) { SetIsActive(value); return *this;}
    inline TrackingServerSummary& WithIsActive(IsTrackingServerActive&& value) { SetIsActive(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MLflow version used for a listed tracking server.</p>
     */
    inline const Aws::String& GetMlflowVersion() const{ return m_mlflowVersion; }
    inline bool MlflowVersionHasBeenSet() const { return m_mlflowVersionHasBeenSet; }
    inline void SetMlflowVersion(const Aws::String& value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion = value; }
    inline void SetMlflowVersion(Aws::String&& value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion = std::move(value); }
    inline void SetMlflowVersion(const char* value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion.assign(value); }
    inline TrackingServerSummary& WithMlflowVersion(const Aws::String& value) { SetMlflowVersion(value); return *this;}
    inline TrackingServerSummary& WithMlflowVersion(Aws::String&& value) { SetMlflowVersion(std::move(value)); return *this;}
    inline TrackingServerSummary& WithMlflowVersion(const char* value) { SetMlflowVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerArn;
    bool m_trackingServerArnHasBeenSet = false;

    Aws::String m_trackingServerName;
    bool m_trackingServerNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    TrackingServerStatus m_trackingServerStatus;
    bool m_trackingServerStatusHasBeenSet = false;

    IsTrackingServerActive m_isActive;
    bool m_isActiveHasBeenSet = false;

    Aws::String m_mlflowVersion;
    bool m_mlflowVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
