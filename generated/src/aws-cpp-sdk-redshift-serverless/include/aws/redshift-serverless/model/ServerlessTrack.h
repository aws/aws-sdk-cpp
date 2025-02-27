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
    AWS_REDSHIFTSERVERLESS_API ServerlessTrack();
    AWS_REDSHIFTSERVERLESS_API ServerlessTrack(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API ServerlessTrack& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the track. Valid values are <code>current</code> and
     * <code>trailing</code>.</p>
     */
    inline const Aws::String& GetTrackName() const{ return m_trackName; }
    inline bool TrackNameHasBeenSet() const { return m_trackNameHasBeenSet; }
    inline void SetTrackName(const Aws::String& value) { m_trackNameHasBeenSet = true; m_trackName = value; }
    inline void SetTrackName(Aws::String&& value) { m_trackNameHasBeenSet = true; m_trackName = std::move(value); }
    inline void SetTrackName(const char* value) { m_trackNameHasBeenSet = true; m_trackName.assign(value); }
    inline ServerlessTrack& WithTrackName(const Aws::String& value) { SetTrackName(value); return *this;}
    inline ServerlessTrack& WithTrackName(Aws::String&& value) { SetTrackName(std::move(value)); return *this;}
    inline ServerlessTrack& WithTrackName(const char* value) { SetTrackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>UpdateTarget</code> objects to update with the track.</p>
     */
    inline const Aws::Vector<UpdateTarget>& GetUpdateTargets() const{ return m_updateTargets; }
    inline bool UpdateTargetsHasBeenSet() const { return m_updateTargetsHasBeenSet; }
    inline void SetUpdateTargets(const Aws::Vector<UpdateTarget>& value) { m_updateTargetsHasBeenSet = true; m_updateTargets = value; }
    inline void SetUpdateTargets(Aws::Vector<UpdateTarget>&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets = std::move(value); }
    inline ServerlessTrack& WithUpdateTargets(const Aws::Vector<UpdateTarget>& value) { SetUpdateTargets(value); return *this;}
    inline ServerlessTrack& WithUpdateTargets(Aws::Vector<UpdateTarget>&& value) { SetUpdateTargets(std::move(value)); return *this;}
    inline ServerlessTrack& AddUpdateTargets(const UpdateTarget& value) { m_updateTargetsHasBeenSet = true; m_updateTargets.push_back(value); return *this; }
    inline ServerlessTrack& AddUpdateTargets(UpdateTarget&& value) { m_updateTargetsHasBeenSet = true; m_updateTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The workgroup version number for the workgroup release.</p>
     */
    inline const Aws::String& GetWorkgroupVersion() const{ return m_workgroupVersion; }
    inline bool WorkgroupVersionHasBeenSet() const { return m_workgroupVersionHasBeenSet; }
    inline void SetWorkgroupVersion(const Aws::String& value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion = value; }
    inline void SetWorkgroupVersion(Aws::String&& value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion = std::move(value); }
    inline void SetWorkgroupVersion(const char* value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion.assign(value); }
    inline ServerlessTrack& WithWorkgroupVersion(const Aws::String& value) { SetWorkgroupVersion(value); return *this;}
    inline ServerlessTrack& WithWorkgroupVersion(Aws::String&& value) { SetWorkgroupVersion(std::move(value)); return *this;}
    inline ServerlessTrack& WithWorkgroupVersion(const char* value) { SetWorkgroupVersion(value); return *this;}
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
