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
    AWS_REDSHIFTSERVERLESS_API UpdateTarget();
    AWS_REDSHIFTSERVERLESS_API UpdateTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API UpdateTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the new track.</p>
     */
    inline const Aws::String& GetTrackName() const{ return m_trackName; }
    inline bool TrackNameHasBeenSet() const { return m_trackNameHasBeenSet; }
    inline void SetTrackName(const Aws::String& value) { m_trackNameHasBeenSet = true; m_trackName = value; }
    inline void SetTrackName(Aws::String&& value) { m_trackNameHasBeenSet = true; m_trackName = std::move(value); }
    inline void SetTrackName(const char* value) { m_trackNameHasBeenSet = true; m_trackName.assign(value); }
    inline UpdateTarget& WithTrackName(const Aws::String& value) { SetTrackName(value); return *this;}
    inline UpdateTarget& WithTrackName(Aws::String&& value) { SetTrackName(std::move(value)); return *this;}
    inline UpdateTarget& WithTrackName(const char* value) { SetTrackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workgroup version for the new track.</p>
     */
    inline const Aws::String& GetWorkgroupVersion() const{ return m_workgroupVersion; }
    inline bool WorkgroupVersionHasBeenSet() const { return m_workgroupVersionHasBeenSet; }
    inline void SetWorkgroupVersion(const Aws::String& value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion = value; }
    inline void SetWorkgroupVersion(Aws::String&& value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion = std::move(value); }
    inline void SetWorkgroupVersion(const char* value) { m_workgroupVersionHasBeenSet = true; m_workgroupVersion.assign(value); }
    inline UpdateTarget& WithWorkgroupVersion(const Aws::String& value) { SetWorkgroupVersion(value); return *this;}
    inline UpdateTarget& WithWorkgroupVersion(Aws::String&& value) { SetWorkgroupVersion(std::move(value)); return *this;}
    inline UpdateTarget& WithWorkgroupVersion(const char* value) { SetWorkgroupVersion(value); return *this;}
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
