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
   * <p>Describes the mounting of a volume in a container. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/VolumeMount">AWS
   * API Reference</a></p>
   */
  class VolumeMount
  {
  public:
    AWS_SECURITYHUB_API VolumeMount();
    AWS_SECURITYHUB_API VolumeMount(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API VolumeMount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the volume. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the volume. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the volume. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the volume. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the volume. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the volume. </p>
     */
    inline VolumeMount& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the volume. </p>
     */
    inline VolumeMount& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the volume. </p>
     */
    inline VolumeMount& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The path in the container at which the volume should be mounted. </p>
     */
    inline const Aws::String& GetMountPath() const{ return m_mountPath; }

    /**
     * <p>The path in the container at which the volume should be mounted. </p>
     */
    inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }

    /**
     * <p>The path in the container at which the volume should be mounted. </p>
     */
    inline void SetMountPath(const Aws::String& value) { m_mountPathHasBeenSet = true; m_mountPath = value; }

    /**
     * <p>The path in the container at which the volume should be mounted. </p>
     */
    inline void SetMountPath(Aws::String&& value) { m_mountPathHasBeenSet = true; m_mountPath = std::move(value); }

    /**
     * <p>The path in the container at which the volume should be mounted. </p>
     */
    inline void SetMountPath(const char* value) { m_mountPathHasBeenSet = true; m_mountPath.assign(value); }

    /**
     * <p>The path in the container at which the volume should be mounted. </p>
     */
    inline VolumeMount& WithMountPath(const Aws::String& value) { SetMountPath(value); return *this;}

    /**
     * <p>The path in the container at which the volume should be mounted. </p>
     */
    inline VolumeMount& WithMountPath(Aws::String&& value) { SetMountPath(std::move(value)); return *this;}

    /**
     * <p>The path in the container at which the volume should be mounted. </p>
     */
    inline VolumeMount& WithMountPath(const char* value) { SetMountPath(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_mountPath;
    bool m_mountPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
