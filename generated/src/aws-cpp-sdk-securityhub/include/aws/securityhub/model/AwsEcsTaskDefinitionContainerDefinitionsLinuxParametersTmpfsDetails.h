/**
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


    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline const Aws::String& GetContainerPath() const{ return m_containerPath; }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline void SetContainerPath(const Aws::String& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline void SetContainerPath(Aws::String&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::move(value); }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline void SetContainerPath(const char* value) { m_containerPathHasBeenSet = true; m_containerPath.assign(value); }

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithContainerPath(const Aws::String& value) { SetContainerPath(value); return *this;}

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithContainerPath(Aws::String&& value) { SetContainerPath(std::move(value)); return *this;}

    /**
     * <p>The absolute file path where the tmpfs volume is to be mounted.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithContainerPath(const char* value) { SetContainerPath(value); return *this;}


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
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

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
    inline void SetMountOptions(const Aws::Vector<Aws::String>& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

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
    inline void SetMountOptions(Aws::Vector<Aws::String>&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithMountOptions(const Aws::Vector<Aws::String>& value) { SetMountOptions(value); return *this;}

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithMountOptions(Aws::Vector<Aws::String>&& value) { SetMountOptions(std::move(value)); return *this;}

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& AddMountOptions(const Aws::String& value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(value); return *this; }

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& AddMountOptions(Aws::String&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(std::move(value)); return *this; }

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
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& AddMountOptions(const char* value) { m_mountOptionsHasBeenSet = true; m_mountOptions.push_back(value); return *this; }


    /**
     * <p>The maximum size (in MiB) of the tmpfs volume.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p>The maximum size (in MiB) of the tmpfs volume.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The maximum size (in MiB) of the tmpfs volume.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The maximum size (in MiB) of the tmpfs volume.</p>
     */
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersTmpfsDetails& WithSize(int value) { SetSize(value); return *this;}

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
