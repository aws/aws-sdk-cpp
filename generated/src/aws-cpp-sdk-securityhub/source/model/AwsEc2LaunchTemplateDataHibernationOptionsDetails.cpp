/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataHibernationOptionsDetails.h>
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

AwsEc2LaunchTemplateDataHibernationOptionsDetails::AwsEc2LaunchTemplateDataHibernationOptionsDetails() : 
    m_configured(false),
    m_configuredHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataHibernationOptionsDetails::AwsEc2LaunchTemplateDataHibernationOptionsDetails(JsonView jsonValue) : 
    m_configured(false),
    m_configuredHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataHibernationOptionsDetails& AwsEc2LaunchTemplateDataHibernationOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Configured"))
  {
    m_configured = jsonValue.GetBool("Configured");

    m_configuredHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataHibernationOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_configuredHasBeenSet)
  {
   payload.WithBool("Configured", m_configured);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
