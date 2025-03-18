/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SharingSettings.h>
#include <aws/sagemaker/model/JupyterServerAppSettings.h>
#include <aws/sagemaker/model/KernelGatewayAppSettings.h>
#include <aws/sagemaker/model/TensorBoardAppSettings.h>
#include <aws/sagemaker/model/RStudioServerProAppSettings.h>
#include <aws/sagemaker/model/RSessionAppSettings.h>
#include <aws/sagemaker/model/CanvasAppSettings.h>
#include <aws/sagemaker/model/CodeEditorAppSettings.h>
#include <aws/sagemaker/model/JupyterLabAppSettings.h>
#include <aws/sagemaker/model/DefaultSpaceStorageSettings.h>
#include <aws/sagemaker/model/StudioWebPortal.h>
#include <aws/sagemaker/model/CustomPosixUserConfig.h>
#include <aws/sagemaker/model/StudioWebPortalSettings.h>
#include <aws/sagemaker/model/AutoMountHomeEFS.h>
#include <aws/sagemaker/model/CustomFileSystemConfig.h>
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
   * <p>A collection of settings that apply to users in a domain. These settings are
   * specified when the <code>CreateUserProfile</code> API is called, and as
   * <code>DefaultUserSettings</code> when the <code>CreateDomain</code> API is
   * called.</p> <p> <code>SecurityGroups</code> is aggregated when specified in both
   * calls. For all other settings in <code>UserSettings</code>, the values specified
   * in <code>CreateUserProfile</code> take precedence over those specified in
   * <code>CreateDomain</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UserSettings">AWS
   * API Reference</a></p>
   */
  class UserSettings
  {
  public:
    AWS_SAGEMAKER_API UserSettings() = default;
    AWS_SAGEMAKER_API UserSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UserSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution role for the user.</p> <p>SageMaker applies this setting only
     * to private spaces that the user creates in the domain. SageMaker doesn't apply
     * this setting to shared spaces.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    UserSettings& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that the
     * domain uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>, unless specified as part of the
     * <code>DefaultUserSettings</code> for the domain.</p> <p>Amazon SageMaker AI adds
     * a security group to allow NFS traffic from Amazon SageMaker AI Studio.
     * Therefore, the number of security groups that you can specify is one less than
     * the maximum number shown.</p> <p>SageMaker applies these settings only to
     * private spaces that the user creates in the domain. SageMaker doesn't apply
     * these settings to shared spaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    UserSettings& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    UserSettings& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies options for sharing Amazon SageMaker AI Studio notebooks.</p>
     */
    inline const SharingSettings& GetSharingSettings() const { return m_sharingSettings; }
    inline bool SharingSettingsHasBeenSet() const { return m_sharingSettingsHasBeenSet; }
    template<typename SharingSettingsT = SharingSettings>
    void SetSharingSettings(SharingSettingsT&& value) { m_sharingSettingsHasBeenSet = true; m_sharingSettings = std::forward<SharingSettingsT>(value); }
    template<typename SharingSettingsT = SharingSettings>
    UserSettings& WithSharingSettings(SharingSettingsT&& value) { SetSharingSettings(std::forward<SharingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Jupyter server's app settings.</p>
     */
    inline const JupyterServerAppSettings& GetJupyterServerAppSettings() const { return m_jupyterServerAppSettings; }
    inline bool JupyterServerAppSettingsHasBeenSet() const { return m_jupyterServerAppSettingsHasBeenSet; }
    template<typename JupyterServerAppSettingsT = JupyterServerAppSettings>
    void SetJupyterServerAppSettings(JupyterServerAppSettingsT&& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = std::forward<JupyterServerAppSettingsT>(value); }
    template<typename JupyterServerAppSettingsT = JupyterServerAppSettings>
    UserSettings& WithJupyterServerAppSettings(JupyterServerAppSettingsT&& value) { SetJupyterServerAppSettings(std::forward<JupyterServerAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel gateway app settings.</p>
     */
    inline const KernelGatewayAppSettings& GetKernelGatewayAppSettings() const { return m_kernelGatewayAppSettings; }
    inline bool KernelGatewayAppSettingsHasBeenSet() const { return m_kernelGatewayAppSettingsHasBeenSet; }
    template<typename KernelGatewayAppSettingsT = KernelGatewayAppSettings>
    void SetKernelGatewayAppSettings(KernelGatewayAppSettingsT&& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = std::forward<KernelGatewayAppSettingsT>(value); }
    template<typename KernelGatewayAppSettingsT = KernelGatewayAppSettings>
    UserSettings& WithKernelGatewayAppSettings(KernelGatewayAppSettingsT&& value) { SetKernelGatewayAppSettings(std::forward<KernelGatewayAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TensorBoard app settings.</p>
     */
    inline const TensorBoardAppSettings& GetTensorBoardAppSettings() const { return m_tensorBoardAppSettings; }
    inline bool TensorBoardAppSettingsHasBeenSet() const { return m_tensorBoardAppSettingsHasBeenSet; }
    template<typename TensorBoardAppSettingsT = TensorBoardAppSettings>
    void SetTensorBoardAppSettings(TensorBoardAppSettingsT&& value) { m_tensorBoardAppSettingsHasBeenSet = true; m_tensorBoardAppSettings = std::forward<TensorBoardAppSettingsT>(value); }
    template<typename TensorBoardAppSettingsT = TensorBoardAppSettings>
    UserSettings& WithTensorBoardAppSettings(TensorBoardAppSettingsT&& value) { SetTensorBoardAppSettings(std::forward<TensorBoardAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure user interaction with the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline const RStudioServerProAppSettings& GetRStudioServerProAppSettings() const { return m_rStudioServerProAppSettings; }
    inline bool RStudioServerProAppSettingsHasBeenSet() const { return m_rStudioServerProAppSettingsHasBeenSet; }
    template<typename RStudioServerProAppSettingsT = RStudioServerProAppSettings>
    void SetRStudioServerProAppSettings(RStudioServerProAppSettingsT&& value) { m_rStudioServerProAppSettingsHasBeenSet = true; m_rStudioServerProAppSettings = std::forward<RStudioServerProAppSettingsT>(value); }
    template<typename RStudioServerProAppSettingsT = RStudioServerProAppSettings>
    UserSettings& WithRStudioServerProAppSettings(RStudioServerProAppSettingsT&& value) { SetRStudioServerProAppSettings(std::forward<RStudioServerProAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the <code>RSessionGateway</code>
     * app.</p>
     */
    inline const RSessionAppSettings& GetRSessionAppSettings() const { return m_rSessionAppSettings; }
    inline bool RSessionAppSettingsHasBeenSet() const { return m_rSessionAppSettingsHasBeenSet; }
    template<typename RSessionAppSettingsT = RSessionAppSettings>
    void SetRSessionAppSettings(RSessionAppSettingsT&& value) { m_rSessionAppSettingsHasBeenSet = true; m_rSessionAppSettings = std::forward<RSessionAppSettingsT>(value); }
    template<typename RSessionAppSettingsT = RSessionAppSettings>
    UserSettings& WithRSessionAppSettings(RSessionAppSettingsT&& value) { SetRSessionAppSettings(std::forward<RSessionAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Canvas app settings.</p> <p>SageMaker applies these settings only to
     * private spaces that SageMaker creates for the Canvas app.</p>
     */
    inline const CanvasAppSettings& GetCanvasAppSettings() const { return m_canvasAppSettings; }
    inline bool CanvasAppSettingsHasBeenSet() const { return m_canvasAppSettingsHasBeenSet; }
    template<typename CanvasAppSettingsT = CanvasAppSettings>
    void SetCanvasAppSettings(CanvasAppSettingsT&& value) { m_canvasAppSettingsHasBeenSet = true; m_canvasAppSettings = std::forward<CanvasAppSettingsT>(value); }
    template<typename CanvasAppSettingsT = CanvasAppSettings>
    UserSettings& WithCanvasAppSettings(CanvasAppSettingsT&& value) { SetCanvasAppSettings(std::forward<CanvasAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Code Editor application settings.</p> <p>SageMaker applies these settings
     * only to private spaces that the user creates in the domain. SageMaker doesn't
     * apply these settings to shared spaces.</p>
     */
    inline const CodeEditorAppSettings& GetCodeEditorAppSettings() const { return m_codeEditorAppSettings; }
    inline bool CodeEditorAppSettingsHasBeenSet() const { return m_codeEditorAppSettingsHasBeenSet; }
    template<typename CodeEditorAppSettingsT = CodeEditorAppSettings>
    void SetCodeEditorAppSettings(CodeEditorAppSettingsT&& value) { m_codeEditorAppSettingsHasBeenSet = true; m_codeEditorAppSettings = std::forward<CodeEditorAppSettingsT>(value); }
    template<typename CodeEditorAppSettingsT = CodeEditorAppSettings>
    UserSettings& WithCodeEditorAppSettings(CodeEditorAppSettingsT&& value) { SetCodeEditorAppSettings(std::forward<CodeEditorAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the JupyterLab application.</p> <p>SageMaker applies these
     * settings only to private spaces that the user creates in the domain. SageMaker
     * doesn't apply these settings to shared spaces.</p>
     */
    inline const JupyterLabAppSettings& GetJupyterLabAppSettings() const { return m_jupyterLabAppSettings; }
    inline bool JupyterLabAppSettingsHasBeenSet() const { return m_jupyterLabAppSettingsHasBeenSet; }
    template<typename JupyterLabAppSettingsT = JupyterLabAppSettings>
    void SetJupyterLabAppSettings(JupyterLabAppSettingsT&& value) { m_jupyterLabAppSettingsHasBeenSet = true; m_jupyterLabAppSettings = std::forward<JupyterLabAppSettingsT>(value); }
    template<typename JupyterLabAppSettingsT = JupyterLabAppSettings>
    UserSettings& WithJupyterLabAppSettings(JupyterLabAppSettingsT&& value) { SetJupyterLabAppSettings(std::forward<JupyterLabAppSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage settings for a space.</p> <p>SageMaker applies these settings
     * only to private spaces that the user creates in the domain. SageMaker doesn't
     * apply these settings to shared spaces.</p>
     */
    inline const DefaultSpaceStorageSettings& GetSpaceStorageSettings() const { return m_spaceStorageSettings; }
    inline bool SpaceStorageSettingsHasBeenSet() const { return m_spaceStorageSettingsHasBeenSet; }
    template<typename SpaceStorageSettingsT = DefaultSpaceStorageSettings>
    void SetSpaceStorageSettings(SpaceStorageSettingsT&& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = std::forward<SpaceStorageSettingsT>(value); }
    template<typename SpaceStorageSettingsT = DefaultSpaceStorageSettings>
    UserSettings& WithSpaceStorageSettings(SpaceStorageSettingsT&& value) { SetSpaceStorageSettings(std::forward<SpaceStorageSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default experience that the user is directed to when accessing the
     * domain. The supported values are:</p> <ul> <li> <p> <code>studio::</code>:
     * Indicates that Studio is the default experience. This value can only be passed
     * if <code>StudioWebPortal</code> is set to <code>ENABLED</code>.</p> </li> <li>
     * <p> <code>app:JupyterServer:</code>: Indicates that Studio Classic is the
     * default experience.</p> </li> </ul>
     */
    inline const Aws::String& GetDefaultLandingUri() const { return m_defaultLandingUri; }
    inline bool DefaultLandingUriHasBeenSet() const { return m_defaultLandingUriHasBeenSet; }
    template<typename DefaultLandingUriT = Aws::String>
    void SetDefaultLandingUri(DefaultLandingUriT&& value) { m_defaultLandingUriHasBeenSet = true; m_defaultLandingUri = std::forward<DefaultLandingUriT>(value); }
    template<typename DefaultLandingUriT = Aws::String>
    UserSettings& WithDefaultLandingUri(DefaultLandingUriT&& value) { SetDefaultLandingUri(std::forward<DefaultLandingUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the user can access Studio. If this value is set to
     * <code>DISABLED</code>, the user cannot access Studio, even if that is the
     * default experience for the domain.</p>
     */
    inline StudioWebPortal GetStudioWebPortal() const { return m_studioWebPortal; }
    inline bool StudioWebPortalHasBeenSet() const { return m_studioWebPortalHasBeenSet; }
    inline void SetStudioWebPortal(StudioWebPortal value) { m_studioWebPortalHasBeenSet = true; m_studioWebPortal = value; }
    inline UserSettings& WithStudioWebPortal(StudioWebPortal value) { SetStudioWebPortal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the POSIX identity that is used for file system operations.</p>
     * <p>SageMaker applies these settings only to private spaces that the user creates
     * in the domain. SageMaker doesn't apply these settings to shared spaces.</p>
     */
    inline const CustomPosixUserConfig& GetCustomPosixUserConfig() const { return m_customPosixUserConfig; }
    inline bool CustomPosixUserConfigHasBeenSet() const { return m_customPosixUserConfigHasBeenSet; }
    template<typename CustomPosixUserConfigT = CustomPosixUserConfig>
    void SetCustomPosixUserConfig(CustomPosixUserConfigT&& value) { m_customPosixUserConfigHasBeenSet = true; m_customPosixUserConfig = std::forward<CustomPosixUserConfigT>(value); }
    template<typename CustomPosixUserConfigT = CustomPosixUserConfig>
    UserSettings& WithCustomPosixUserConfig(CustomPosixUserConfigT&& value) { SetCustomPosixUserConfig(std::forward<CustomPosixUserConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for assigning a custom file system to a user profile. Permitted
     * users can access this file system in Amazon SageMaker AI Studio.</p>
     * <p>SageMaker applies these settings only to private spaces that the user creates
     * in the domain. SageMaker doesn't apply these settings to shared spaces.</p>
     */
    inline const Aws::Vector<CustomFileSystemConfig>& GetCustomFileSystemConfigs() const { return m_customFileSystemConfigs; }
    inline bool CustomFileSystemConfigsHasBeenSet() const { return m_customFileSystemConfigsHasBeenSet; }
    template<typename CustomFileSystemConfigsT = Aws::Vector<CustomFileSystemConfig>>
    void SetCustomFileSystemConfigs(CustomFileSystemConfigsT&& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs = std::forward<CustomFileSystemConfigsT>(value); }
    template<typename CustomFileSystemConfigsT = Aws::Vector<CustomFileSystemConfig>>
    UserSettings& WithCustomFileSystemConfigs(CustomFileSystemConfigsT&& value) { SetCustomFileSystemConfigs(std::forward<CustomFileSystemConfigsT>(value)); return *this;}
    template<typename CustomFileSystemConfigsT = CustomFileSystemConfig>
    UserSettings& AddCustomFileSystemConfigs(CustomFileSystemConfigsT&& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs.emplace_back(std::forward<CustomFileSystemConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Studio settings. If these settings are applied on a user level, they take
     * priority over the settings applied on a domain level.</p>
     */
    inline const StudioWebPortalSettings& GetStudioWebPortalSettings() const { return m_studioWebPortalSettings; }
    inline bool StudioWebPortalSettingsHasBeenSet() const { return m_studioWebPortalSettingsHasBeenSet; }
    template<typename StudioWebPortalSettingsT = StudioWebPortalSettings>
    void SetStudioWebPortalSettings(StudioWebPortalSettingsT&& value) { m_studioWebPortalSettingsHasBeenSet = true; m_studioWebPortalSettings = std::forward<StudioWebPortalSettingsT>(value); }
    template<typename StudioWebPortalSettingsT = StudioWebPortalSettings>
    UserSettings& WithStudioWebPortalSettings(StudioWebPortalSettingsT&& value) { SetStudioWebPortalSettings(std::forward<StudioWebPortalSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether auto-mounting of an EFS volume is supported for the user
     * profile. The <code>DefaultAsDomain</code> value is only supported for user
     * profiles. Do not use the <code>DefaultAsDomain</code> value when setting this
     * parameter for a domain.</p> <p>SageMaker applies this setting only to private
     * spaces that the user creates in the domain. SageMaker doesn't apply this setting
     * to shared spaces.</p>
     */
    inline AutoMountHomeEFS GetAutoMountHomeEFS() const { return m_autoMountHomeEFS; }
    inline bool AutoMountHomeEFSHasBeenSet() const { return m_autoMountHomeEFSHasBeenSet; }
    inline void SetAutoMountHomeEFS(AutoMountHomeEFS value) { m_autoMountHomeEFSHasBeenSet = true; m_autoMountHomeEFS = value; }
    inline UserSettings& WithAutoMountHomeEFS(AutoMountHomeEFS value) { SetAutoMountHomeEFS(value); return *this;}
    ///@}
  private:

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    SharingSettings m_sharingSettings;
    bool m_sharingSettingsHasBeenSet = false;

    JupyterServerAppSettings m_jupyterServerAppSettings;
    bool m_jupyterServerAppSettingsHasBeenSet = false;

    KernelGatewayAppSettings m_kernelGatewayAppSettings;
    bool m_kernelGatewayAppSettingsHasBeenSet = false;

    TensorBoardAppSettings m_tensorBoardAppSettings;
    bool m_tensorBoardAppSettingsHasBeenSet = false;

    RStudioServerProAppSettings m_rStudioServerProAppSettings;
    bool m_rStudioServerProAppSettingsHasBeenSet = false;

    RSessionAppSettings m_rSessionAppSettings;
    bool m_rSessionAppSettingsHasBeenSet = false;

    CanvasAppSettings m_canvasAppSettings;
    bool m_canvasAppSettingsHasBeenSet = false;

    CodeEditorAppSettings m_codeEditorAppSettings;
    bool m_codeEditorAppSettingsHasBeenSet = false;

    JupyterLabAppSettings m_jupyterLabAppSettings;
    bool m_jupyterLabAppSettingsHasBeenSet = false;

    DefaultSpaceStorageSettings m_spaceStorageSettings;
    bool m_spaceStorageSettingsHasBeenSet = false;

    Aws::String m_defaultLandingUri;
    bool m_defaultLandingUriHasBeenSet = false;

    StudioWebPortal m_studioWebPortal{StudioWebPortal::NOT_SET};
    bool m_studioWebPortalHasBeenSet = false;

    CustomPosixUserConfig m_customPosixUserConfig;
    bool m_customPosixUserConfigHasBeenSet = false;

    Aws::Vector<CustomFileSystemConfig> m_customFileSystemConfigs;
    bool m_customFileSystemConfigsHasBeenSet = false;

    StudioWebPortalSettings m_studioWebPortalSettings;
    bool m_studioWebPortalSettingsHasBeenSet = false;

    AutoMountHomeEFS m_autoMountHomeEFS{AutoMountHomeEFS::NOT_SET};
    bool m_autoMountHomeEFSHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
