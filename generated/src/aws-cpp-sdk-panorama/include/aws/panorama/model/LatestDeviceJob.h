/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/JobType.h>
#include <aws/panorama/model/UpdateProgress.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>Returns information about the latest device job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/LatestDeviceJob">AWS
   * API Reference</a></p>
   */
  class LatestDeviceJob
  {
  public:
    AWS_PANORAMA_API LatestDeviceJob();
    AWS_PANORAMA_API LatestDeviceJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API LatestDeviceJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target version of the device software.</p>
     */
    inline const Aws::String& GetImageVersion() const{ return m_imageVersion; }
    inline bool ImageVersionHasBeenSet() const { return m_imageVersionHasBeenSet; }
    inline void SetImageVersion(const Aws::String& value) { m_imageVersionHasBeenSet = true; m_imageVersion = value; }
    inline void SetImageVersion(Aws::String&& value) { m_imageVersionHasBeenSet = true; m_imageVersion = std::move(value); }
    inline void SetImageVersion(const char* value) { m_imageVersionHasBeenSet = true; m_imageVersion.assign(value); }
    inline LatestDeviceJob& WithImageVersion(const Aws::String& value) { SetImageVersion(value); return *this;}
    inline LatestDeviceJob& WithImageVersion(Aws::String&& value) { SetImageVersion(std::move(value)); return *this;}
    inline LatestDeviceJob& WithImageVersion(const char* value) { SetImageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's type.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }
    inline LatestDeviceJob& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline LatestDeviceJob& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the latest device job.</p>
     */
    inline const UpdateProgress& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const UpdateProgress& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(UpdateProgress&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LatestDeviceJob& WithStatus(const UpdateProgress& value) { SetStatus(value); return *this;}
    inline LatestDeviceJob& WithStatus(UpdateProgress&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageVersion;
    bool m_imageVersionHasBeenSet = false;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    UpdateProgress m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
