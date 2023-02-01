/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails.h>
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

AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails::AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails() : 
    m_max(0.0),
    m_maxHasBeenSet(false),
    m_min(0.0),
    m_minHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails::AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails(JsonView jsonValue) : 
    m_max(0.0),
    m_maxHasBeenSet(false),
    m_min(0.0),
    m_minHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails& AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetDouble("Max");

    m_maxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetDouble("Min");

    m_minHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataInstanceRequirementsTotalLocalStorageGBDetails::Jsonize() const
{
  JsonValue payload;

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("Max", m_max);

  }

  if(m_minHasBeenSet)
  {
   payload.WithDouble("Min", m_min);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
