/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsCodeBuildProjectEnvironment.h>
#include <aws/securityhub/model/AwsCodeBuildProjectSource.h>
#include <aws/securityhub/model/AwsCodeBuildProjectLogsConfigDetails.h>
#include <aws/securityhub/model/AwsCodeBuildProjectVpcConfig.h>
#include <aws/securityhub/model/AwsCodeBuildProjectArtifactsDetails.h>
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
   * <p>Information about an CodeBuild project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectDetails">AWS
   * API Reference</a></p>
   */
  class AwsCodeBuildProjectDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCodeBuildProjectDetails() = default;
    AWS_SECURITYHUB_API AwsCodeBuildProjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The KMS key used to encrypt the build output artifacts.</p> <p>You can
     * specify either the ARN of the KMS key or, if available, the KMS key alias (using
     * the format alias/alias-name). </p>
     */
    inline const Aws::String& GetEncryptionKey() const { return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    template<typename EncryptionKeyT = Aws::String>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = Aws::String>
    AwsCodeBuildProjectDetails& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build artifacts for the CodeBuild project.</p>
     */
    inline const Aws::Vector<AwsCodeBuildProjectArtifactsDetails>& GetArtifacts() const { return m_artifacts; }
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }
    template<typename ArtifactsT = Aws::Vector<AwsCodeBuildProjectArtifactsDetails>>
    void SetArtifacts(ArtifactsT&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::forward<ArtifactsT>(value); }
    template<typename ArtifactsT = Aws::Vector<AwsCodeBuildProjectArtifactsDetails>>
    AwsCodeBuildProjectDetails& WithArtifacts(ArtifactsT&& value) { SetArtifacts(std::forward<ArtifactsT>(value)); return *this;}
    template<typename ArtifactsT = AwsCodeBuildProjectArtifactsDetails>
    AwsCodeBuildProjectDetails& AddArtifacts(ArtifactsT&& value) { m_artifactsHasBeenSet = true; m_artifacts.emplace_back(std::forward<ArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline const AwsCodeBuildProjectEnvironment& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = AwsCodeBuildProjectEnvironment>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = AwsCodeBuildProjectEnvironment>
    AwsCodeBuildProjectDetails& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the build project.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsCodeBuildProjectDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline const AwsCodeBuildProjectSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = AwsCodeBuildProjectSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = AwsCodeBuildProjectSource>
    AwsCodeBuildProjectDetails& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    AwsCodeBuildProjectDetails& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about logs for the build project.</p>
     */
    inline const AwsCodeBuildProjectLogsConfigDetails& GetLogsConfig() const { return m_logsConfig; }
    inline bool LogsConfigHasBeenSet() const { return m_logsConfigHasBeenSet; }
    template<typename LogsConfigT = AwsCodeBuildProjectLogsConfigDetails>
    void SetLogsConfig(LogsConfigT&& value) { m_logsConfigHasBeenSet = true; m_logsConfig = std::forward<LogsConfigT>(value); }
    template<typename LogsConfigT = AwsCodeBuildProjectLogsConfigDetails>
    AwsCodeBuildProjectDetails& WithLogsConfig(LogsConfigT&& value) { SetLogsConfig(std::forward<LogsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the VPC configuration that CodeBuild accesses.</p>
     */
    inline const AwsCodeBuildProjectVpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = AwsCodeBuildProjectVpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = AwsCodeBuildProjectVpcConfig>
    AwsCodeBuildProjectDetails& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the secondary artifacts for the CodeBuild project.</p>
     */
    inline const Aws::Vector<AwsCodeBuildProjectArtifactsDetails>& GetSecondaryArtifacts() const { return m_secondaryArtifacts; }
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }
    template<typename SecondaryArtifactsT = Aws::Vector<AwsCodeBuildProjectArtifactsDetails>>
    void SetSecondaryArtifacts(SecondaryArtifactsT&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::forward<SecondaryArtifactsT>(value); }
    template<typename SecondaryArtifactsT = Aws::Vector<AwsCodeBuildProjectArtifactsDetails>>
    AwsCodeBuildProjectDetails& WithSecondaryArtifacts(SecondaryArtifactsT&& value) { SetSecondaryArtifacts(std::forward<SecondaryArtifactsT>(value)); return *this;}
    template<typename SecondaryArtifactsT = AwsCodeBuildProjectArtifactsDetails>
    AwsCodeBuildProjectDetails& AddSecondaryArtifacts(SecondaryArtifactsT&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.emplace_back(std::forward<SecondaryArtifactsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::Vector<AwsCodeBuildProjectArtifactsDetails> m_artifacts;
    bool m_artifactsHasBeenSet = false;

    AwsCodeBuildProjectEnvironment m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AwsCodeBuildProjectSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    AwsCodeBuildProjectLogsConfigDetails m_logsConfig;
    bool m_logsConfigHasBeenSet = false;

    AwsCodeBuildProjectVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Vector<AwsCodeBuildProjectArtifactsDetails> m_secondaryArtifacts;
    bool m_secondaryArtifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
