/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>Information about the software on the device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/SoftwareInformation">AWS
   * API Reference</a></p>
   */
  class SoftwareInformation
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API SoftwareInformation() = default;
    AWS_SNOWDEVICEMANAGEMENT_API SoftwareInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API SoftwareInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the software that is installed or that is being installed on the
     * device.</p>
     */
    inline const Aws::String& GetInstallState() const { return m_installState; }
    inline bool InstallStateHasBeenSet() const { return m_installStateHasBeenSet; }
    template<typename InstallStateT = Aws::String>
    void SetInstallState(InstallStateT&& value) { m_installStateHasBeenSet = true; m_installState = std::forward<InstallStateT>(value); }
    template<typename InstallStateT = Aws::String>
    SoftwareInformation& WithInstallState(InstallStateT&& value) { SetInstallState(std::forward<InstallStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software currently installed on the device.</p>
     */
    inline const Aws::String& GetInstalledVersion() const { return m_installedVersion; }
    inline bool InstalledVersionHasBeenSet() const { return m_installedVersionHasBeenSet; }
    template<typename InstalledVersionT = Aws::String>
    void SetInstalledVersion(InstalledVersionT&& value) { m_installedVersionHasBeenSet = true; m_installedVersion = std::forward<InstalledVersionT>(value); }
    template<typename InstalledVersionT = Aws::String>
    SoftwareInformation& WithInstalledVersion(InstalledVersionT&& value) { SetInstalledVersion(std::forward<InstalledVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software being installed on the device.</p>
     */
    inline const Aws::String& GetInstallingVersion() const { return m_installingVersion; }
    inline bool InstallingVersionHasBeenSet() const { return m_installingVersionHasBeenSet; }
    template<typename InstallingVersionT = Aws::String>
    void SetInstallingVersion(InstallingVersionT&& value) { m_installingVersionHasBeenSet = true; m_installingVersion = std::forward<InstallingVersionT>(value); }
    template<typename InstallingVersionT = Aws::String>
    SoftwareInformation& WithInstallingVersion(InstallingVersionT&& value) { SetInstallingVersion(std::forward<InstallingVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_installState;
    bool m_installStateHasBeenSet = false;

    Aws::String m_installedVersion;
    bool m_installedVersionHasBeenSet = false;

    Aws::String m_installingVersion;
    bool m_installingVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
