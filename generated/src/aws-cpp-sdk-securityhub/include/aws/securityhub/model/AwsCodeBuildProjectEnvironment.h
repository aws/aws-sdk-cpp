/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsCodeBuildProjectEnvironmentRegistryCredential.h>
#include <aws/securityhub/model/AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails.h>
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
   * <p>Information about the build environment for this build project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectEnvironment">AWS
   * API Reference</a></p>
   */
  class AwsCodeBuildProjectEnvironment
  {
  public:
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironment() = default;
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline const Aws::String& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = Aws::String>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = Aws::String>
    AwsCodeBuildProjectEnvironment& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of environment variables to make available to builds for the build
     * project.</p>
     */
    inline const Aws::Vector<AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Vector<AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Vector<AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails>>
    AwsCodeBuildProjectEnvironment& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesT = AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails>
    AwsCodeBuildProjectEnvironment& AddEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace_back(std::forward<EnvironmentVariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to allow the Docker daemon to run inside a Docker container. Set to
     * <code>true</code> if the build project is used to build Docker images.</p>
     */
    inline bool GetPrivilegedMode() const { return m_privilegedMode; }
    inline bool PrivilegedModeHasBeenSet() const { return m_privilegedModeHasBeenSet; }
    inline void SetPrivilegedMode(bool value) { m_privilegedModeHasBeenSet = true; m_privilegedMode = value; }
    inline AwsCodeBuildProjectEnvironment& WithPrivilegedMode(bool value) { SetPrivilegedMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of credentials CodeBuild uses to pull images in your build.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust the CodeBuild service principal.</p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role.</p> </li> </ul> <p>When you use a cross-account or private
     * registry image, you must use <code>SERVICE_ROLE</code> credentials. When you use
     * an CodeBuild curated image, you must use <code>CODEBUILD</code> credentials.</p>
     */
    inline const Aws::String& GetImagePullCredentialsType() const { return m_imagePullCredentialsType; }
    inline bool ImagePullCredentialsTypeHasBeenSet() const { return m_imagePullCredentialsTypeHasBeenSet; }
    template<typename ImagePullCredentialsTypeT = Aws::String>
    void SetImagePullCredentialsType(ImagePullCredentialsTypeT&& value) { m_imagePullCredentialsTypeHasBeenSet = true; m_imagePullCredentialsType = std::forward<ImagePullCredentialsTypeT>(value); }
    template<typename ImagePullCredentialsTypeT = Aws::String>
    AwsCodeBuildProjectEnvironment& WithImagePullCredentialsType(ImagePullCredentialsTypeT&& value) { SetImagePullCredentialsType(std::forward<ImagePullCredentialsTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credentials for access to a private registry.</p>
     */
    inline const AwsCodeBuildProjectEnvironmentRegistryCredential& GetRegistryCredential() const { return m_registryCredential; }
    inline bool RegistryCredentialHasBeenSet() const { return m_registryCredentialHasBeenSet; }
    template<typename RegistryCredentialT = AwsCodeBuildProjectEnvironmentRegistryCredential>
    void SetRegistryCredential(RegistryCredentialT&& value) { m_registryCredentialHasBeenSet = true; m_registryCredential = std::forward<RegistryCredentialT>(value); }
    template<typename RegistryCredentialT = AwsCodeBuildProjectEnvironmentRegistryCredential>
    AwsCodeBuildProjectEnvironment& WithRegistryCredential(RegistryCredentialT&& value) { SetRegistryCredential(std::forward<RegistryCredentialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of build environment to use for related builds.</p> <p>The
     * environment type <code>ARM_CONTAINER</code> is available only in Regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), Europe (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Sydney), and Europe
     * (Frankfurt).</p> <p>The environment type <code>LINUX_CONTAINER</code> with
     * compute type build.general1.2xlarge is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>Valid values:
     * <code>WINDOWS_CONTAINER</code> | <code>LINUX_CONTAINER</code> |
     * <code>LINUX_GPU_CONTAINER</code> | <code>ARM_CONTAINER</code> </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsCodeBuildProjectEnvironment& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::Vector<AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    bool m_privilegedMode{false};
    bool m_privilegedModeHasBeenSet = false;

    Aws::String m_imagePullCredentialsType;
    bool m_imagePullCredentialsTypeHasBeenSet = false;

    AwsCodeBuildProjectEnvironmentRegistryCredential m_registryCredential;
    bool m_registryCredentialHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
