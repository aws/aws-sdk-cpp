/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/GuidanceFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace GuidanceFormatMapper {

static const int All_HASH = HashingUtils::HashString("All");
static const int AwsCli_HASH = HashingUtils::HashString("AwsCli");
static const int Cli_HASH = HashingUtils::HashString("Cli");
static const int Python_HASH = HashingUtils::HashString("Python");
static const int Terraform_HASH = HashingUtils::HashString("Terraform");
static const int Cdk_HASH = HashingUtils::HashString("Cdk");
static const int CloudFormation_HASH = HashingUtils::HashString("CloudFormation");
static const int IaC_HASH = HashingUtils::HashString("IaC");
static const int Template_HASH = HashingUtils::HashString("Template");

GuidanceFormat GetGuidanceFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == All_HASH) {
    return GuidanceFormat::All;
  } else if (hashCode == AwsCli_HASH) {
    return GuidanceFormat::AwsCli;
  } else if (hashCode == Cli_HASH) {
    return GuidanceFormat::Cli;
  } else if (hashCode == Python_HASH) {
    return GuidanceFormat::Python;
  } else if (hashCode == Terraform_HASH) {
    return GuidanceFormat::Terraform;
  } else if (hashCode == Cdk_HASH) {
    return GuidanceFormat::Cdk;
  } else if (hashCode == CloudFormation_HASH) {
    return GuidanceFormat::CloudFormation;
  } else if (hashCode == IaC_HASH) {
    return GuidanceFormat::IaC;
  } else if (hashCode == Template_HASH) {
    return GuidanceFormat::Template;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GuidanceFormat>(hashCode);
  }

  return GuidanceFormat::NOT_SET;
}

Aws::String GetNameForGuidanceFormat(GuidanceFormat enumValue) {
  switch (enumValue) {
    case GuidanceFormat::NOT_SET:
      return {};
    case GuidanceFormat::All:
      return "All";
    case GuidanceFormat::AwsCli:
      return "AwsCli";
    case GuidanceFormat::Cli:
      return "Cli";
    case GuidanceFormat::Python:
      return "Python";
    case GuidanceFormat::Terraform:
      return "Terraform";
    case GuidanceFormat::Cdk:
      return "Cdk";
    case GuidanceFormat::CloudFormation:
      return "CloudFormation";
    case GuidanceFormat::IaC:
      return "IaC";
    case GuidanceFormat::Template:
      return "Template";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GuidanceFormatMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
