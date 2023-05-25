/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataIamInstanceProfileDetails.h>
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

AwsEc2LaunchTemplateDataIamInstanceProfileDetails::AwsEc2LaunchTemplateDataIamInstanceProfileDetails() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataIamInstanceProfileDetails::AwsEc2LaunchTemplateDataIamInstanceProfileDetails(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataIamInstanceProfileDetails& AwsEc2LaunchTemplateDataIamInstanceProfileDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataIamInstanceProfileDetails::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
