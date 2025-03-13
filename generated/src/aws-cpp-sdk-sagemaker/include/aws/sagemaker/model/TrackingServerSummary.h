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
    AWS_SAGEMAKER_API TrackingServerSummary() = default;
    AWS_SAGEMAKER_API TrackingServerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrackingServerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a listed tracking server.</p>
     */
    inline const Aws::String& GetTrackingServerArn() const { return m_trackingServerArn; }
    inline bool TrackingServerArnHasBeenSet() const { return m_trackingServerArnHasBeenSet; }
    template<typename TrackingServerArnT = Aws::String>
    void SetTrackingServerArn(TrackingServerArnT&& value) { m_trackingServerArnHasBeenSet = true; m_trackingServerArn = std::forward<TrackingServerArnT>(value); }
    template<typename TrackingServerArnT = Aws::String>
    TrackingServerSummary& WithTrackingServerArn(TrackingServerArnT&& value) { SetTrackingServerArn(std::forward<TrackingServerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a listed tracking server.</p>
     */
    inline const Aws::String& GetTrackingServerName() const { return m_trackingServerName; }
    inline bool TrackingServerNameHasBeenSet() const { return m_trackingServerNameHasBeenSet; }
    template<typename TrackingServerNameT = Aws::String>
    void SetTrackingServerName(TrackingServerNameT&& value) { m_trackingServerNameHasBeenSet = true; m_trackingServerName = std::forward<TrackingServerNameT>(value); }
    template<typename TrackingServerNameT = Aws::String>
    TrackingServerSummary& WithTrackingServerName(TrackingServerNameT&& value) { SetTrackingServerName(std::forward<TrackingServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of a listed tracking server.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TrackingServerSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time of a listed tracking server.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    TrackingServerSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation status of a listed tracking server.</p>
     */
    inline TrackingServerStatus GetTrackingServerStatus() const { return m_trackingServerStatus; }
    inline bool TrackingServerStatusHasBeenSet() const { return m_trackingServerStatusHasBeenSet; }
    inline void SetTrackingServerStatus(TrackingServerStatus value) { m_trackingServerStatusHasBeenSet = true; m_trackingServerStatus = value; }
    inline TrackingServerSummary& WithTrackingServerStatus(TrackingServerStatus value) { SetTrackingServerStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The activity status of a listed tracking server.</p>
     */
    inline IsTrackingServerActive GetIsActive() const { return m_isActive; }
    inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
    inline void SetIsActive(IsTrackingServerActive value) { m_isActiveHasBeenSet = true; m_isActive = value; }
    inline TrackingServerSummary& WithIsActive(IsTrackingServerActive value) { SetIsActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MLflow version used for a listed tracking server.</p>
     */
    inline const Aws::String& GetMlflowVersion() const { return m_mlflowVersion; }
    inline bool MlflowVersionHasBeenSet() const { return m_mlflowVersionHasBeenSet; }
    template<typename MlflowVersionT = Aws::String>
    void SetMlflowVersion(MlflowVersionT&& value) { m_mlflowVersionHasBeenSet = true; m_mlflowVersion = std::forward<MlflowVersionT>(value); }
    template<typename MlflowVersionT = Aws::String>
    TrackingServerSummary& WithMlflowVersion(MlflowVersionT&& value) { SetMlflowVersion(std::forward<MlflowVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerArn;
    bool m_trackingServerArnHasBeenSet = false;

    Aws::String m_trackingServerName;
    bool m_trackingServerNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    TrackingServerStatus m_trackingServerStatus{TrackingServerStatus::NOT_SET};
    bool m_trackingServerStatusHasBeenSet = false;

    IsTrackingServerActive m_isActive{IsTrackingServerActive::NOT_SET};
    bool m_isActiveHasBeenSet = false;

    Aws::String m_mlflowVersion;
    bool m_mlflowVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
