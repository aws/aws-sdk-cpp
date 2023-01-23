/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details for a volume mount point that's used in a container definition.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsMountPoint">AWS
   * API Reference</a></p>
   */
  class AwsMountPoint
  {
  public:
    AWS_SECURITYHUB_API AwsMountPoint();
    AWS_SECURITYHUB_API AwsMountPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMountPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the volume to mount. Must be a volume name referenced in the
     * <code>name</code> parameter of task definition <code>volume</code>. </p>
     */
    inline const Aws::String& GetSourceVolume() const{ return m_sourceVolume; }

    /**
     * <p>The name of the volume to mount. Must be a volume name referenced in the
     * <code>name</code> parameter of task definition <code>volume</code>. </p>
     */
    inline bool SourceVolumeHasBeenSet() const { return m_sourceVolumeHasBeenSet; }

    /**
     * <p>The name of the volume to mount. Must be a volume name referenced in the
     * <code>name</code> parameter of task definition <code>volume</code>. </p>
     */
    inline void SetSourceVolume(const Aws::String& value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume = value; }

    /**
     * <p>The name of the volume to mount. Must be a volume name referenced in the
     * <code>name</code> parameter of task definition <code>volume</code>. </p>
     */
    inline void SetSourceVolume(Aws::String&& value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume = std::move(value); }

    /**
     * <p>The name of the volume to mount. Must be a volume name referenced in the
     * <code>name</code> parameter of task definition <code>volume</code>. </p>
     */
    inline void SetSourceVolume(const char* value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume.assign(value); }

    /**
     * <p>The name of the volume to mount. Must be a volume name referenced in the
     * <code>name</code> parameter of task definition <code>volume</code>. </p>
     */
    inline AwsMountPoint& WithSourceVolume(const Aws::String& value) { SetSourceVolume(value); return *this;}

    /**
     * <p>The name of the volume to mount. Must be a volume name referenced in the
     * <code>name</code> parameter of task definition <code>volume</code>. </p>
     */
    inline AwsMountPoint& WithSourceVolume(Aws::String&& value) { SetSourceVolume(std::move(value)); return *this;}

    /**
     * <p>The name of the volume to mount. Must be a volume name referenced in the
     * <code>name</code> parameter of task definition <code>volume</code>. </p>
     */
    inline AwsMountPoint& WithSourceVolume(const char* value) { SetSourceVolume(value); return *this;}


    /**
     * <p>The path on the container to mount the host volume at. </p>
     */
    inline const Aws::String& GetContainerPath() const{ return m_containerPath; }

    /**
     * <p>The path on the container to mount the host volume at. </p>
     */
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }

    /**
     * <p>The path on the container to mount the host volume at. </p>
     */
    inline void SetContainerPath(const Aws::String& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }

    /**
     * <p>The path on the container to mount the host volume at. </p>
     */
    inline void SetContainerPath(Aws::String&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::move(value); }

    /**
     * <p>The path on the container to mount the host volume at. </p>
     */
    inline void SetContainerPath(const char* value) { m_containerPathHasBeenSet = true; m_containerPath.assign(value); }

    /**
     * <p>The path on the container to mount the host volume at. </p>
     */
    inline AwsMountPoint& WithContainerPath(const Aws::String& value) { SetContainerPath(value); return *this;}

    /**
     * <p>The path on the container to mount the host volume at. </p>
     */
    inline AwsMountPoint& WithContainerPath(Aws::String&& value) { SetContainerPath(std::move(value)); return *this;}

    /**
     * <p>The path on the container to mount the host volume at. </p>
     */
    inline AwsMountPoint& WithContainerPath(const char* value) { SetContainerPath(value); return *this;}

  private:

    Aws::String m_sourceVolume;
    bool m_sourceVolumeHasBeenSet = false;

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
