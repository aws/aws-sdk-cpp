/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Provided remediation guidance examples in different formats that can be run
 * for remediating the target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RemediationGuidanceExamples">AWS
 * API Reference</a></p>
 */
class RemediationGuidanceExamples {
 public:
  AWS_SECURITYHUB_API RemediationGuidanceExamples() = default;
  AWS_SECURITYHUB_API RemediationGuidanceExamples(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API RemediationGuidanceExamples& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An CLI snippet version of the example.</p>
   */
  inline const Aws::String& GetAwsCli() const { return m_awsCli; }
  inline bool AwsCliHasBeenSet() const { return m_awsCliHasBeenSet; }
  template <typename AwsCliT = Aws::String>
  void SetAwsCli(AwsCliT&& value) {
    m_awsCliHasBeenSet = true;
    m_awsCli = std::forward<AwsCliT>(value);
  }
  template <typename AwsCliT = Aws::String>
  RemediationGuidanceExamples& WithAwsCli(AwsCliT&& value) {
    SetAwsCli(std::forward<AwsCliT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A CLI snippet version of the example.</p>
   */
  inline const Aws::String& GetCli() const { return m_cli; }
  inline bool CliHasBeenSet() const { return m_cliHasBeenSet; }
  template <typename CliT = Aws::String>
  void SetCli(CliT&& value) {
    m_cliHasBeenSet = true;
    m_cli = std::forward<CliT>(value);
  }
  template <typename CliT = Aws::String>
  RemediationGuidanceExamples& WithCli(CliT&& value) {
    SetCli(std::forward<CliT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Python snippet version of the example.</p>
   */
  inline const Aws::String& GetPython() const { return m_python; }
  inline bool PythonHasBeenSet() const { return m_pythonHasBeenSet; }
  template <typename PythonT = Aws::String>
  void SetPython(PythonT&& value) {
    m_pythonHasBeenSet = true;
    m_python = std::forward<PythonT>(value);
  }
  template <typename PythonT = Aws::String>
  RemediationGuidanceExamples& WithPython(PythonT&& value) {
    SetPython(std::forward<PythonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Terraform snippet version of the example.</p>
   */
  inline const Aws::String& GetTerraform() const { return m_terraform; }
  inline bool TerraformHasBeenSet() const { return m_terraformHasBeenSet; }
  template <typename TerraformT = Aws::String>
  void SetTerraform(TerraformT&& value) {
    m_terraformHasBeenSet = true;
    m_terraform = std::forward<TerraformT>(value);
  }
  template <typename TerraformT = Aws::String>
  RemediationGuidanceExamples& WithTerraform(TerraformT&& value) {
    SetTerraform(std::forward<TerraformT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A CDK snippet version of the example.</p>
   */
  inline const Aws::String& GetCdk() const { return m_cdk; }
  inline bool CdkHasBeenSet() const { return m_cdkHasBeenSet; }
  template <typename CdkT = Aws::String>
  void SetCdk(CdkT&& value) {
    m_cdkHasBeenSet = true;
    m_cdk = std::forward<CdkT>(value);
  }
  template <typename CdkT = Aws::String>
  RemediationGuidanceExamples& WithCdk(CdkT&& value) {
    SetCdk(std::forward<CdkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A CloudFormation snippet version of the example.</p>
   */
  inline const Aws::String& GetCloudFormation() const { return m_cloudFormation; }
  inline bool CloudFormationHasBeenSet() const { return m_cloudFormationHasBeenSet; }
  template <typename CloudFormationT = Aws::String>
  void SetCloudFormation(CloudFormationT&& value) {
    m_cloudFormationHasBeenSet = true;
    m_cloudFormation = std::forward<CloudFormationT>(value);
  }
  template <typename CloudFormationT = Aws::String>
  RemediationGuidanceExamples& WithCloudFormation(CloudFormationT&& value) {
    SetCloudFormation(std::forward<CloudFormationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An IaC snippet version of the example.</p>
   */
  inline const Aws::String& GetIaC() const { return m_iaC; }
  inline bool IaCHasBeenSet() const { return m_iaCHasBeenSet; }
  template <typename IaCT = Aws::String>
  void SetIaC(IaCT&& value) {
    m_iaCHasBeenSet = true;
    m_iaC = std::forward<IaCT>(value);
  }
  template <typename IaCT = Aws::String>
  RemediationGuidanceExamples& WithIaC(IaCT&& value) {
    SetIaC(std::forward<IaCT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Template snippet version of the example.</p>
   */
  inline const Aws::String& GetTemplate() const { return m_template; }
  inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
  template <typename TemplateT = Aws::String>
  void SetTemplate(TemplateT&& value) {
    m_templateHasBeenSet = true;
    m_template = std::forward<TemplateT>(value);
  }
  template <typename TemplateT = Aws::String>
  RemediationGuidanceExamples& WithTemplate(TemplateT&& value) {
    SetTemplate(std::forward<TemplateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsCli;

  Aws::String m_cli;

  Aws::String m_python;

  Aws::String m_terraform;

  Aws::String m_cdk;

  Aws::String m_cloudFormation;

  Aws::String m_iaC;

  Aws::String m_template;
  bool m_awsCliHasBeenSet = false;
  bool m_cliHasBeenSet = false;
  bool m_pythonHasBeenSet = false;
  bool m_terraformHasBeenSet = false;
  bool m_cdkHasBeenSet = false;
  bool m_cloudFormationHasBeenSet = false;
  bool m_iaCHasBeenSet = false;
  bool m_templateHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
