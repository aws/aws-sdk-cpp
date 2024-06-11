/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/model/LaunchProfileInitializationActiveDirectory.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/LaunchProfilePlatform.h>
#include <aws/nimble/model/LaunchProfileInitializationScript.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>A launch profile initialization contains information required for a
   * workstation or server to connect to a launch profile.</p> <p>This includes
   * scripts, endpoints, security groups, subnets, and other
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/LaunchProfileInitialization">AWS
   * API Reference</a></p>
   */
  class LaunchProfileInitialization
  {
  public:
    AWS_NIMBLESTUDIO_API LaunchProfileInitialization();
    AWS_NIMBLESTUDIO_API LaunchProfileInitialization(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API LaunchProfileInitialization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>LaunchProfileInitializationActiveDirectory</code> resource.</p>
     */
    inline const LaunchProfileInitializationActiveDirectory& GetActiveDirectory() const{ return m_activeDirectory; }
    inline bool ActiveDirectoryHasBeenSet() const { return m_activeDirectoryHasBeenSet; }
    inline void SetActiveDirectory(const LaunchProfileInitializationActiveDirectory& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = value; }
    inline void SetActiveDirectory(LaunchProfileInitializationActiveDirectory&& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = std::move(value); }
    inline LaunchProfileInitialization& WithActiveDirectory(const LaunchProfileInitializationActiveDirectory& value) { SetActiveDirectory(value); return *this;}
    inline LaunchProfileInitialization& WithActiveDirectory(LaunchProfileInitializationActiveDirectory&& value) { SetActiveDirectory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 security groups that control access to the studio component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2SecurityGroupIds() const{ return m_ec2SecurityGroupIds; }
    inline bool Ec2SecurityGroupIdsHasBeenSet() const { return m_ec2SecurityGroupIdsHasBeenSet; }
    inline void SetEc2SecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds = value; }
    inline void SetEc2SecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds = std::move(value); }
    inline LaunchProfileInitialization& WithEc2SecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetEc2SecurityGroupIds(value); return *this;}
    inline LaunchProfileInitialization& WithEc2SecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetEc2SecurityGroupIds(std::move(value)); return *this;}
    inline LaunchProfileInitialization& AddEc2SecurityGroupIds(const Aws::String& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(value); return *this; }
    inline LaunchProfileInitialization& AddEc2SecurityGroupIds(Aws::String&& value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(std::move(value)); return *this; }
    inline LaunchProfileInitialization& AddEc2SecurityGroupIds(const char* value) { m_ec2SecurityGroupIdsHasBeenSet = true; m_ec2SecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline const Aws::String& GetLaunchProfileId() const{ return m_launchProfileId; }
    inline bool LaunchProfileIdHasBeenSet() const { return m_launchProfileIdHasBeenSet; }
    inline void SetLaunchProfileId(const Aws::String& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = value; }
    inline void SetLaunchProfileId(Aws::String&& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = std::move(value); }
    inline void SetLaunchProfileId(const char* value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId.assign(value); }
    inline LaunchProfileInitialization& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}
    inline LaunchProfileInitialization& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}
    inline LaunchProfileInitialization& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline const Aws::String& GetLaunchProfileProtocolVersion() const{ return m_launchProfileProtocolVersion; }
    inline bool LaunchProfileProtocolVersionHasBeenSet() const { return m_launchProfileProtocolVersionHasBeenSet; }
    inline void SetLaunchProfileProtocolVersion(const Aws::String& value) { m_launchProfileProtocolVersionHasBeenSet = true; m_launchProfileProtocolVersion = value; }
    inline void SetLaunchProfileProtocolVersion(Aws::String&& value) { m_launchProfileProtocolVersionHasBeenSet = true; m_launchProfileProtocolVersion = std::move(value); }
    inline void SetLaunchProfileProtocolVersion(const char* value) { m_launchProfileProtocolVersionHasBeenSet = true; m_launchProfileProtocolVersion.assign(value); }
    inline LaunchProfileInitialization& WithLaunchProfileProtocolVersion(const Aws::String& value) { SetLaunchProfileProtocolVersion(value); return *this;}
    inline LaunchProfileInitialization& WithLaunchProfileProtocolVersion(Aws::String&& value) { SetLaunchProfileProtocolVersion(std::move(value)); return *this;}
    inline LaunchProfileInitialization& WithLaunchProfileProtocolVersion(const char* value) { SetLaunchProfileProtocolVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch purpose.</p>
     */
    inline const Aws::String& GetLaunchPurpose() const{ return m_launchPurpose; }
    inline bool LaunchPurposeHasBeenSet() const { return m_launchPurposeHasBeenSet; }
    inline void SetLaunchPurpose(const Aws::String& value) { m_launchPurposeHasBeenSet = true; m_launchPurpose = value; }
    inline void SetLaunchPurpose(Aws::String&& value) { m_launchPurposeHasBeenSet = true; m_launchPurpose = std::move(value); }
    inline void SetLaunchPurpose(const char* value) { m_launchPurposeHasBeenSet = true; m_launchPurpose.assign(value); }
    inline LaunchProfileInitialization& WithLaunchPurpose(const Aws::String& value) { SetLaunchPurpose(value); return *this;}
    inline LaunchProfileInitialization& WithLaunchPurpose(Aws::String&& value) { SetLaunchPurpose(std::move(value)); return *this;}
    inline LaunchProfileInitialization& WithLaunchPurpose(const char* value) { SetLaunchPurpose(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the launch profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LaunchProfileInitialization& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LaunchProfileInitialization& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LaunchProfileInitialization& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform of the launch platform, either Windows or Linux.</p>
     */
    inline const LaunchProfilePlatform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const LaunchProfilePlatform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(LaunchProfilePlatform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline LaunchProfileInitialization& WithPlatform(const LaunchProfilePlatform& value) { SetPlatform(value); return *this;}
    inline LaunchProfileInitialization& WithPlatform(LaunchProfilePlatform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system initializtion scripts.</p>
     */
    inline const Aws::Vector<LaunchProfileInitializationScript>& GetSystemInitializationScripts() const{ return m_systemInitializationScripts; }
    inline bool SystemInitializationScriptsHasBeenSet() const { return m_systemInitializationScriptsHasBeenSet; }
    inline void SetSystemInitializationScripts(const Aws::Vector<LaunchProfileInitializationScript>& value) { m_systemInitializationScriptsHasBeenSet = true; m_systemInitializationScripts = value; }
    inline void SetSystemInitializationScripts(Aws::Vector<LaunchProfileInitializationScript>&& value) { m_systemInitializationScriptsHasBeenSet = true; m_systemInitializationScripts = std::move(value); }
    inline LaunchProfileInitialization& WithSystemInitializationScripts(const Aws::Vector<LaunchProfileInitializationScript>& value) { SetSystemInitializationScripts(value); return *this;}
    inline LaunchProfileInitialization& WithSystemInitializationScripts(Aws::Vector<LaunchProfileInitializationScript>&& value) { SetSystemInitializationScripts(std::move(value)); return *this;}
    inline LaunchProfileInitialization& AddSystemInitializationScripts(const LaunchProfileInitializationScript& value) { m_systemInitializationScriptsHasBeenSet = true; m_systemInitializationScripts.push_back(value); return *this; }
    inline LaunchProfileInitialization& AddSystemInitializationScripts(LaunchProfileInitializationScript&& value) { m_systemInitializationScriptsHasBeenSet = true; m_systemInitializationScripts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user initializtion scripts.</p>
     */
    inline const Aws::Vector<LaunchProfileInitializationScript>& GetUserInitializationScripts() const{ return m_userInitializationScripts; }
    inline bool UserInitializationScriptsHasBeenSet() const { return m_userInitializationScriptsHasBeenSet; }
    inline void SetUserInitializationScripts(const Aws::Vector<LaunchProfileInitializationScript>& value) { m_userInitializationScriptsHasBeenSet = true; m_userInitializationScripts = value; }
    inline void SetUserInitializationScripts(Aws::Vector<LaunchProfileInitializationScript>&& value) { m_userInitializationScriptsHasBeenSet = true; m_userInitializationScripts = std::move(value); }
    inline LaunchProfileInitialization& WithUserInitializationScripts(const Aws::Vector<LaunchProfileInitializationScript>& value) { SetUserInitializationScripts(value); return *this;}
    inline LaunchProfileInitialization& WithUserInitializationScripts(Aws::Vector<LaunchProfileInitializationScript>&& value) { SetUserInitializationScripts(std::move(value)); return *this;}
    inline LaunchProfileInitialization& AddUserInitializationScripts(const LaunchProfileInitializationScript& value) { m_userInitializationScriptsHasBeenSet = true; m_userInitializationScripts.push_back(value); return *this; }
    inline LaunchProfileInitialization& AddUserInitializationScripts(LaunchProfileInitializationScript&& value) { m_userInitializationScriptsHasBeenSet = true; m_userInitializationScripts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    LaunchProfileInitializationActiveDirectory m_activeDirectory;
    bool m_activeDirectoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_ec2SecurityGroupIds;
    bool m_ec2SecurityGroupIdsHasBeenSet = false;

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet = false;

    Aws::String m_launchProfileProtocolVersion;
    bool m_launchProfileProtocolVersionHasBeenSet = false;

    Aws::String m_launchPurpose;
    bool m_launchPurposeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    LaunchProfilePlatform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Vector<LaunchProfileInitializationScript> m_systemInitializationScripts;
    bool m_systemInitializationScriptsHasBeenSet = false;

    Aws::Vector<LaunchProfileInitializationScript> m_userInitializationScripts;
    bool m_userInitializationScriptsHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
