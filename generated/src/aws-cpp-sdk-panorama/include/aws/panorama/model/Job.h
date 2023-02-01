/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A job for a device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/Job">AWS API
   * Reference</a></p>
   */
  class Job
  {
  public:
    AWS_PANORAMA_API Job();
    AWS_PANORAMA_API Job(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target device's ID.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The target device's ID.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The target device's ID.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The target device's ID.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The target device's ID.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The target device's ID.</p>
     */
    inline Job& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The target device's ID.</p>
     */
    inline Job& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The target device's ID.</p>
     */
    inline Job& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job's ID.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline Job& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline Job& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline Job& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
