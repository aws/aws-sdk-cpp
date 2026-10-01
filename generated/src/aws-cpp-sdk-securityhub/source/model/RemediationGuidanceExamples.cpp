/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/RemediationGuidanceExamples.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

RemediationGuidanceExamples::RemediationGuidanceExamples(JsonView jsonValue) { *this = jsonValue; }

RemediationGuidanceExamples& RemediationGuidanceExamples::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AwsCli")) {
    m_awsCli = jsonValue.GetString("AwsCli");
    m_awsCliHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Cli")) {
    m_cli = jsonValue.GetString("Cli");
    m_cliHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Python")) {
    m_python = jsonValue.GetString("Python");
    m_pythonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Terraform")) {
    m_terraform = jsonValue.GetString("Terraform");
    m_terraformHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Cdk")) {
    m_cdk = jsonValue.GetString("Cdk");
    m_cdkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CloudFormation")) {
    m_cloudFormation = jsonValue.GetString("CloudFormation");
    m_cloudFormationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IaC")) {
    m_iaC = jsonValue.GetString("IaC");
    m_iaCHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Template")) {
    m_template = jsonValue.GetString("Template");
    m_templateHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationGuidanceExamples::Jsonize() const {
  JsonValue payload;

  if (m_awsCliHasBeenSet) {
    payload.WithString("AwsCli", m_awsCli);
  }

  if (m_cliHasBeenSet) {
    payload.WithString("Cli", m_cli);
  }

  if (m_pythonHasBeenSet) {
    payload.WithString("Python", m_python);
  }

  if (m_terraformHasBeenSet) {
    payload.WithString("Terraform", m_terraform);
  }

  if (m_cdkHasBeenSet) {
    payload.WithString("Cdk", m_cdk);
  }

  if (m_cloudFormationHasBeenSet) {
    payload.WithString("CloudFormation", m_cloudFormation);
  }

  if (m_iaCHasBeenSet) {
    payload.WithString("IaC", m_iaC);
  }

  if (m_templateHasBeenSet) {
    payload.WithString("Template", m_template);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
