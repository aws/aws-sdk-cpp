/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataLicenseSetDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2LaunchTemplateDataLicenseSetDetails::AwsEc2LaunchTemplateDataLicenseSetDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataLicenseSetDetails& AwsEc2LaunchTemplateDataLicenseSetDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LicenseConfigurationArn"))
  {
    m_licenseConfigurationArn = jsonValue.GetString("LicenseConfigurationArn");
    m_licenseConfigurationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsEc2LaunchTemplateDataLicenseSetDetails::Jsonize() const
{
  JsonValue payload;

  if(m_licenseConfigurationArnHasBeenSet)
  {
   payload.WithString("LicenseConfigurationArn", m_licenseConfigurationArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
