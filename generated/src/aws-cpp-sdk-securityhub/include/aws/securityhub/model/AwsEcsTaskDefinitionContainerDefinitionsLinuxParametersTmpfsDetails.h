﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The container path, mount options, and size (in MiB) of a tmpfs
   * mount.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline const Aws::String& GetContainerPath() const{ return m_containerPath; }
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }
    inline void SetContainerPath(const Aws::String& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }
    inline void SetContainerPath(Aws::String&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::move(value); }
    inline void SetContainerPath(const char* value) { m_containerPathHasBeenSet = true; m_containerPath.assign(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithContainerPath(const Aws::String& value) { SetContainerPath(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithContainerPath(Aws::String&& value) { SetContainerPath(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithContainerPath(const char* value) { SetContainerPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tmpfs volume mount options.</p> <p>Valid values:
     * <code>"defaults"</code> | <code>"ro"</code> | <code>"rw"</code> |
     * <code>"suid"</code> | <code>"nosuid"</code> | <code>"dev"</code> |
     * <code>"nodev"</code> |<code> "exec"</code> | <code>"noexec"</code> |
     * <code>"sync"</code> | <code>"async"</code> | <code>"dirsync"</code> |
     * <code>"remount"</code> | <code>"mand"</code> | <code>"nomand"</code> |
     * <code>"atime"</code> | <code>"noatime"</code> | <code>"diratime"</code> |
     * <code>"nodiratime"</code> | <code>"bind"</code> | <code>"rbind"</code> |
     * <code>"unbindable"</code> | <code>"runbindable"</code> | <code>"private"</code>
     * | <code>"rprivate"</code> | <code>"shared"</code> | <code>"rshared"</code> |
     * <code>"slave"</code> | <code>"rslave"</code> | <code>"relatime"</code> |
     * <code>"norelatime"</code> | <code>"strictatime"</code> |
     * <code>"nostrictatime"</code> |<code> "mode"</code> | <code>"uid"</code> |
     * <code>"gid"</code> | <code>"nr_inodes"</code> |<code> "nr_blocks"</code> |
     * <code>"mpol"</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetMountOptions() const{ return m_mountOptions; }
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }
    inline void SetMountOptions(const Aws::Vector<Aws::String>& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }
    inline void SetMountOptions(Aws::Vector<Aws::String>&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithMountOptions(const Aws::Vector<Aws::String>& value) { SetMountOptions(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithMountOptions(Aws::Vector<Aws::String>&& value) { SetMountOptions(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& AddMountOptions(const Aws::String& value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& AddMountOptions(Aws::String&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& AddMountOptions(const char* value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum size (in MiB) of the tmpfs volume.</p>
     */
    inline int GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithSize(int value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_mountOptions;
    bool m_mountOptionsHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
