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
   * <p>A host device to expose to the container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path inside the container at which to expose the host device.</p>
     */
    inline const Aws::String& GetContainerPath() const{ return m_containerPath; }
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }
    inline void SetContainerPath(const Aws::String& value) { m_containerPathHasBeenSet = true; m_containerPath = value; }
    inline void SetContainerPath(Aws::String&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::move(value); }
    inline void SetContainerPath(const char* value) { m_containerPathHasBeenSet = true; m_containerPath.assign(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& WithContainerPath(const Aws::String& value) { SetContainerPath(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& WithContainerPath(Aws::String&& value) { SetContainerPath(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& WithContainerPath(const char* value) { SetContainerPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path for the device on the host container instance.</p>
     */
    inline const Aws::String& GetHostPath() const{ return m_hostPath; }
    inline bool HostPathHasBeenSet() const { return m_hostPathHasBeenSet; }
    inline void SetHostPath(const Aws::String& value) { m_hostPathHasBeenSet = true; m_hostPath = value; }
    inline void SetHostPath(Aws::String&& value) { m_hostPathHasBeenSet = true; m_hostPath = std::move(value); }
    inline void SetHostPath(const char* value) { m_hostPathHasBeenSet = true; m_hostPath.assign(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& WithHostPath(const Aws::String& value) { SetHostPath(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& WithHostPath(Aws::String&& value) { SetHostPath(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& WithHostPath(const char* value) { SetHostPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explicit permissions to provide to the container for the device. By
     * default, the container has permissions for read, write, and <code>mknod</code>
     * for the device.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const{ return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    inline void SetPermissions(const Aws::Vector<Aws::String>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }
    inline void SetPermissions(Aws::Vector<Aws::String>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& WithPermissions(const Aws::Vector<Aws::String>& value) { SetPermissions(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& WithPermissions(Aws::Vector<Aws::String>&& value) { SetPermissions(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& AddPermissions(const Aws::String& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& AddPermissions(Aws::String&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDevicesDetails& AddPermissions(const char* value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet = false;

    Aws::String m_hostPath;
    bool m_hostPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_permissions;
    bool m_permissionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
