/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A track that you can switch the current track to.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/UpdateTarget">AWS
   * API Reference</a></p>
   */
  class UpdateTarget
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateTarget() = default;
    AWS_REDSHIFTSERVERLESS_API UpdateTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API UpdateTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the new track.</p>
     */
    inline const Aws::String& GetTrackName() const { return m_trackName; }
    inline bool TrackNameHasBeenSet() const { return m_trackNameHasBeenSet; }
    template<typename TrackNameT = Aws::String>
    void SetTrackName(TrackNameT&& value) { m_trackNameHasBeenSet = true; m_trackName = std::forward<TrackNameT>(value); }
    template<typename TrackNameT = Aws::String>
    UpdateTarget& WithTrackName(TrackNameT&& value) { SetTrackName(std::forward<TrackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup version for the new track.</p>
     */
    inline const Aws::String& GetWorkgroupVersion() const { return m_workgroupVersion; }
    inline bool WorkgroupVersionHasBeenSet() const { return m_workgroupVersionHasBeenSet; }
    template<typename WorkgroupVersionT = Aws::String>
    void SetWorkgroupVersion(WorkgroupVersionT&& value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion = std::forward<WorkgroupVersionT>(value); }
    template<typename WorkgroupVersionT = Aws::String>
    UpdateTarget& WithWorkgroupVersion(WorkgroupVersionT&& value) { SetWorkgroupVersion(std::forward<WorkgroupVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackName;
    bool m_trackNameHasBeenSet = false;

    Aws::String m_workgroupVersion;
    bool m_workgroupVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
