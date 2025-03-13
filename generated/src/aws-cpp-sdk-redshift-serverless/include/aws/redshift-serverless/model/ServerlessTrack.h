/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/UpdateTarget.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>Defines a track that determines which Amazon Redshift version to apply after
   * a new version is released. If the value for <code>ServerlessTrack</code> is
   * <code>current</code>, the workgroup is updated to the most recently certified
   * release. If the value is <code>trailing</code>, the workgroup is updated to the
   * previously certified release.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/ServerlessTrack">AWS
   * API Reference</a></p>
   */
  class ServerlessTrack
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ServerlessTrack() = default;
    AWS_REDSHIFTSERVERLESS_API ServerlessTrack(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API ServerlessTrack& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the track. Valid values are <code>current</code> and
     * <code>trailing</code>.</p>
     */
    inline const Aws::String& GetTrackName() const { return m_trackName; }
    inline bool TrackNameHasBeenSet() const { return m_trackNameHasBeenSet; }
    template<typename TrackNameT = Aws::String>
    void SetTrackName(TrackNameT&& value) { m_trackNameHasBeenSet = true; m_trackName = std::forward<TrackNameT>(value); }
    template<typename TrackNameT = Aws::String>
    ServerlessTrack& WithTrackName(TrackNameT&& value) { SetTrackName(std::forward<TrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>UpdateTarget</code> objects to update with the track.</p>
     */
    inline const Aws::Vector<UpdateTarget>& GetUpdateTargets() const { return m_updateTargets; }
    inline bool UpdateTargetsHasBeenSet() const { return m_updateTargetsHasBeenSet; }
    template<typename UpdateTargetsT = Aws::Vector<UpdateTarget>>
    void SetUpdateTargets(UpdateTargetsT&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets = std::forward<UpdateTargetsT>(value); }
    template<typename UpdateTargetsT = Aws::Vector<UpdateTarget>>
    ServerlessTrack& WithUpdateTargets(UpdateTargetsT&& value) { SetUpdateTargets(std::forward<UpdateTargetsT>(value)); return *this;}
    template<typename UpdateTargetsT = UpdateTarget>
    ServerlessTrack& AddUpdateTargets(UpdateTargetsT&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets.emplace_back(std::forward<UpdateTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The workgroup version number for the workgroup release.</p>
     */
    inline const Aws::String& GetWorkgroupVersion() const { return m_workgroupVersion; }
    inline bool WorkgroupVersionHasBeenSet() const { return m_workgroupVersionHasBeenSet; }
    template<typename WorkgroupVersionT = Aws::String>
    void SetWorkgroupVersion(WorkgroupVersionT&& value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion = std::forward<WorkgroupVersionT>(value); }
    template<typename WorkgroupVersionT = Aws::String>
    ServerlessTrack& WithWorkgroupVersion(WorkgroupVersionT&& value) { SetWorkgroupVersion(std::forward<WorkgroupVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackName;
    bool m_trackNameHasBeenSet = false;

    Aws::Vector<UpdateTarget> m_updateTargets;
    bool m_updateTargetsHasBeenSet = false;

    Aws::String m_workgroupVersion;
    bool m_workgroupVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
