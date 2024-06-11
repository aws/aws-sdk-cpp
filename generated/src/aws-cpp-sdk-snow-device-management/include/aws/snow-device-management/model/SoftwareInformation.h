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
    AWS_SNOWDEVICEMANAGEMENT_API SoftwareInformation();
    AWS_SNOWDEVICEMANAGEMENT_API SoftwareInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API SoftwareInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the software that is installed or that is being installed on the
     * device.</p>
     */
    inline const Aws::String& GetInstallState() const{ return m_installState; }
    inline bool InstallStateHasBeenSet() const { return m_installStateHasBeenSet; }
    inline void SetInstallState(const Aws::String& value) { m_installStateHasBeenSet = true; m_installState = value; }
    inline void SetInstallState(Aws::String&& value) { m_installStateHasBeenSet = true; m_installState = std::move(value); }
    inline void SetInstallState(const char* value) { m_installStateHasBeenSet = true; m_installState.assign(value); }
    inline SoftwareInformation& WithInstallState(const Aws::String& value) { SetInstallState(value); return *this;}
    inline SoftwareInformation& WithInstallState(Aws::String&& value) { SetInstallState(std::move(value)); return *this;}
    inline SoftwareInformation& WithInstallState(const char* value) { SetInstallState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software currently installed on the device.</p>
     */
    inline const Aws::String& GetInstalledVersion() const{ return m_installedVersion; }
    inline bool InstalledVersionHasBeenSet() const { return m_installedVersionHasBeenSet; }
    inline void SetInstalledVersion(const Aws::String& value) { m_installedVersionHasBeenSet = true; m_installedVersion = value; }
    inline void SetInstalledVersion(Aws::String&& value) { m_installedVersionHasBeenSet = true; m_installedVersion = std::move(value); }
    inline void SetInstalledVersion(const char* value) { m_installedVersionHasBeenSet = true; m_installedVersion.assign(value); }
    inline SoftwareInformation& WithInstalledVersion(const Aws::String& value) { SetInstalledVersion(value); return *this;}
    inline SoftwareInformation& WithInstalledVersion(Aws::String&& value) { SetInstalledVersion(std::move(value)); return *this;}
    inline SoftwareInformation& WithInstalledVersion(const char* value) { SetInstalledVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the software being installed on the device.</p>
     */
    inline const Aws::String& GetInstallingVersion() const{ return m_installingVersion; }
    inline bool InstallingVersionHasBeenSet() const { return m_installingVersionHasBeenSet; }
    inline void SetInstallingVersion(const Aws::String& value) { m_installingVersionHasBeenSet = true; m_installingVersion = value; }
    inline void SetInstallingVersion(Aws::String&& value) { m_installingVersionHasBeenSet = true; m_installingVersion = std::move(value); }
    inline void SetInstallingVersion(const char* value) { m_installingVersionHasBeenSet = true; m_installingVersion.assign(value); }
    inline SoftwareInformation& WithInstallingVersion(const Aws::String& value) { SetInstallingVersion(value); return *this;}
    inline SoftwareInformation& WithInstallingVersion(Aws::String&& value) { SetInstallingVersion(std::move(value)); return *this;}
    inline SoftwareInformation& WithInstallingVersion(const char* value) { SetInstallingVersion(value); return *this;}
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
