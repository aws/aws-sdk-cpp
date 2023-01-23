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
    AWS_SECURITYHUB_API AwsCodeBuildProjectDetails();
    AWS_SECURITYHUB_API AwsCodeBuildProjectDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The KMS key used to encrypt the build output artifacts.</p> <p>You can
     * specify either the ARN of the KMS key or, if available, the KMS key alias (using
     * the format alias/alias-name). </p>
     */
    inline const Aws::String& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The KMS key used to encrypt the build output artifacts.</p> <p>You can
     * specify either the ARN of the KMS key or, if available, the KMS key alias (using
     * the format alias/alias-name). </p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The KMS key used to encrypt the build output artifacts.</p> <p>You can
     * specify either the ARN of the KMS key or, if available, the KMS key alias (using
     * the format alias/alias-name). </p>
     */
    inline void SetEncryptionKey(const Aws::String& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The KMS key used to encrypt the build output artifacts.</p> <p>You can
     * specify either the ARN of the KMS key or, if available, the KMS key alias (using
     * the format alias/alias-name). </p>
     */
    inline void SetEncryptionKey(Aws::String&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The KMS key used to encrypt the build output artifacts.</p> <p>You can
     * specify either the ARN of the KMS key or, if available, the KMS key alias (using
     * the format alias/alias-name). </p>
     */
    inline void SetEncryptionKey(const char* value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey.assign(value); }

    /**
     * <p>The KMS key used to encrypt the build output artifacts.</p> <p>You can
     * specify either the ARN of the KMS key or, if available, the KMS key alias (using
     * the format alias/alias-name). </p>
     */
    inline AwsCodeBuildProjectDetails& WithEncryptionKey(const Aws::String& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The KMS key used to encrypt the build output artifacts.</p> <p>You can
     * specify either the ARN of the KMS key or, if available, the KMS key alias (using
     * the format alias/alias-name). </p>
     */
    inline AwsCodeBuildProjectDetails& WithEncryptionKey(Aws::String&& value) { SetEncryptionKey(std::move(value)); return *this;}

    /**
     * <p>The KMS key used to encrypt the build output artifacts.</p> <p>You can
     * specify either the ARN of the KMS key or, if available, the KMS key alias (using
     * the format alias/alias-name). </p>
     */
    inline AwsCodeBuildProjectDetails& WithEncryptionKey(const char* value) { SetEncryptionKey(value); return *this;}


    /**
     * <p>Information about the build artifacts for the CodeBuild project.</p>
     */
    inline const Aws::Vector<AwsCodeBuildProjectArtifactsDetails>& GetArtifacts() const{ return m_artifacts; }

    /**
     * <p>Information about the build artifacts for the CodeBuild project.</p>
     */
    inline bool ArtifactsHasBeenSet() const { return m_artifactsHasBeenSet; }

    /**
     * <p>Information about the build artifacts for the CodeBuild project.</p>
     */
    inline void SetArtifacts(const Aws::Vector<AwsCodeBuildProjectArtifactsDetails>& value) { m_artifactsHasBeenSet = true; m_artifacts = value; }

    /**
     * <p>Information about the build artifacts for the CodeBuild project.</p>
     */
    inline void SetArtifacts(Aws::Vector<AwsCodeBuildProjectArtifactsDetails>&& value) { m_artifactsHasBeenSet = true; m_artifacts = std::move(value); }

    /**
     * <p>Information about the build artifacts for the CodeBuild project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithArtifacts(const Aws::Vector<AwsCodeBuildProjectArtifactsDetails>& value) { SetArtifacts(value); return *this;}

    /**
     * <p>Information about the build artifacts for the CodeBuild project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithArtifacts(Aws::Vector<AwsCodeBuildProjectArtifactsDetails>&& value) { SetArtifacts(std::move(value)); return *this;}

    /**
     * <p>Information about the build artifacts for the CodeBuild project.</p>
     */
    inline AwsCodeBuildProjectDetails& AddArtifacts(const AwsCodeBuildProjectArtifactsDetails& value) { m_artifactsHasBeenSet = true; m_artifacts.push_back(value); return *this; }

    /**
     * <p>Information about the build artifacts for the CodeBuild project.</p>
     */
    inline AwsCodeBuildProjectDetails& AddArtifacts(AwsCodeBuildProjectArtifactsDetails&& value) { m_artifactsHasBeenSet = true; m_artifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline const AwsCodeBuildProjectEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline void SetEnvironment(const AwsCodeBuildProjectEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline void SetEnvironment(AwsCodeBuildProjectEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithEnvironment(const AwsCodeBuildProjectEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Information about the build environment for this build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithEnvironment(AwsCodeBuildProjectEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The name of the build project.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the build project.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the build project.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the build project.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the build project.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline const AwsCodeBuildProjectSource& GetSource() const{ return m_source; }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline void SetSource(const AwsCodeBuildProjectSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline void SetSource(AwsCodeBuildProjectSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithSource(const AwsCodeBuildProjectSource& value) { SetSource(value); return *this;}

    /**
     * <p>Information about the build input source code for this build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithSource(AwsCodeBuildProjectSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline AwsCodeBuildProjectDetails& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline AwsCodeBuildProjectDetails& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that enables CodeBuild to interact with dependent
     * Amazon Web Services services on behalf of the Amazon Web Services account.</p>
     */
    inline AwsCodeBuildProjectDetails& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>Information about logs for the build project.</p>
     */
    inline const AwsCodeBuildProjectLogsConfigDetails& GetLogsConfig() const{ return m_logsConfig; }

    /**
     * <p>Information about logs for the build project.</p>
     */
    inline bool LogsConfigHasBeenSet() const { return m_logsConfigHasBeenSet; }

    /**
     * <p>Information about logs for the build project.</p>
     */
    inline void SetLogsConfig(const AwsCodeBuildProjectLogsConfigDetails& value) { m_logsConfigHasBeenSet = true; m_logsConfig = value; }

    /**
     * <p>Information about logs for the build project.</p>
     */
    inline void SetLogsConfig(AwsCodeBuildProjectLogsConfigDetails&& value) { m_logsConfigHasBeenSet = true; m_logsConfig = std::move(value); }

    /**
     * <p>Information about logs for the build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithLogsConfig(const AwsCodeBuildProjectLogsConfigDetails& value) { SetLogsConfig(value); return *this;}

    /**
     * <p>Information about logs for the build project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithLogsConfig(AwsCodeBuildProjectLogsConfigDetails&& value) { SetLogsConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the VPC configuration that CodeBuild accesses.</p>
     */
    inline const AwsCodeBuildProjectVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>Information about the VPC configuration that CodeBuild accesses.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>Information about the VPC configuration that CodeBuild accesses.</p>
     */
    inline void SetVpcConfig(const AwsCodeBuildProjectVpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>Information about the VPC configuration that CodeBuild accesses.</p>
     */
    inline void SetVpcConfig(AwsCodeBuildProjectVpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>Information about the VPC configuration that CodeBuild accesses.</p>
     */
    inline AwsCodeBuildProjectDetails& WithVpcConfig(const AwsCodeBuildProjectVpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>Information about the VPC configuration that CodeBuild accesses.</p>
     */
    inline AwsCodeBuildProjectDetails& WithVpcConfig(AwsCodeBuildProjectVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Information about the secondary artifacts for the CodeBuild project.</p>
     */
    inline const Aws::Vector<AwsCodeBuildProjectArtifactsDetails>& GetSecondaryArtifacts() const{ return m_secondaryArtifacts; }

    /**
     * <p>Information about the secondary artifacts for the CodeBuild project.</p>
     */
    inline bool SecondaryArtifactsHasBeenSet() const { return m_secondaryArtifactsHasBeenSet; }

    /**
     * <p>Information about the secondary artifacts for the CodeBuild project.</p>
     */
    inline void SetSecondaryArtifacts(const Aws::Vector<AwsCodeBuildProjectArtifactsDetails>& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = value; }

    /**
     * <p>Information about the secondary artifacts for the CodeBuild project.</p>
     */
    inline void SetSecondaryArtifacts(Aws::Vector<AwsCodeBuildProjectArtifactsDetails>&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts = std::move(value); }

    /**
     * <p>Information about the secondary artifacts for the CodeBuild project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithSecondaryArtifacts(const Aws::Vector<AwsCodeBuildProjectArtifactsDetails>& value) { SetSecondaryArtifacts(value); return *this;}

    /**
     * <p>Information about the secondary artifacts for the CodeBuild project.</p>
     */
    inline AwsCodeBuildProjectDetails& WithSecondaryArtifacts(Aws::Vector<AwsCodeBuildProjectArtifactsDetails>&& value) { SetSecondaryArtifacts(std::move(value)); return *this;}

    /**
     * <p>Information about the secondary artifacts for the CodeBuild project.</p>
     */
    inline AwsCodeBuildProjectDetails& AddSecondaryArtifacts(const AwsCodeBuildProjectArtifactsDetails& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(value); return *this; }

    /**
     * <p>Information about the secondary artifacts for the CodeBuild project.</p>
     */
    inline AwsCodeBuildProjectDetails& AddSecondaryArtifacts(AwsCodeBuildProjectArtifactsDetails&& value) { m_secondaryArtifactsHasBeenSet = true; m_secondaryArtifacts.push_back(std::move(value)); return *this; }

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
