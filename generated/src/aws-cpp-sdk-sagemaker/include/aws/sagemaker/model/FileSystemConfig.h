/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The Amazon Elastic File System storage configuration for a SageMaker AI
   * image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FileSystemConfig">AWS
   * API Reference</a></p>
   */
  class FileSystemConfig
  {
  public:
    AWS_SAGEMAKER_API FileSystemConfig() = default;
    AWS_SAGEMAKER_API FileSystemConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FileSystemConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path within the image to mount the user's EFS home directory. The
     * directory should be empty. If not specified, defaults to
     * <i>/home/sagemaker-user</i>.</p>
     */
    inline const Aws::String& GetMountPath() const { return m_mountPath; }
    inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }
    template<typename MountPathT = Aws::String>
    void SetMountPath(MountPathT&& value) { m_mountPathHasBeenSet = true; m_mountPath = std::forward<MountPathT>(value); }
    template<typename MountPathT = Aws::String>
    FileSystemConfig& WithMountPath(MountPathT&& value) { SetMountPath(std::forward<MountPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default POSIX user ID (UID). If not specified, defaults to
     * <code>1000</code>.</p>
     */
    inline int GetDefaultUid() const { return m_defaultUid; }
    inline bool DefaultUidHasBeenSet() const { return m_defaultUidHasBeenSet; }
    inline void SetDefaultUid(int value) { m_defaultUidHasBeenSet = true; m_defaultUid = value; }
    inline FileSystemConfig& WithDefaultUid(int value) { SetDefaultUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default POSIX group ID (GID). If not specified, defaults to
     * <code>100</code>.</p>
     */
    inline int GetDefaultGid() const { return m_defaultGid; }
    inline bool DefaultGidHasBeenSet() const { return m_defaultGidHasBeenSet; }
    inline void SetDefaultGid(int value) { m_defaultGidHasBeenSet = true; m_defaultGid = value; }
    inline FileSystemConfig& WithDefaultGid(int value) { SetDefaultGid(value); return *this;}
    ///@}
  private:

    Aws::String m_mountPath;
    bool m_mountPathHasBeenSet = false;

    int m_defaultUid{0};
    bool m_defaultUidHasBeenSet = false;

    int m_defaultGid{0};
    bool m_defaultGidHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
