/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails.h>
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

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails::AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails() : 
    m_launchTemplateSpecificationHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
}

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails::AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails(JsonView jsonValue) : 
    m_launchTemplateSpecificationHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LaunchTemplateSpecification"))
  {
    m_launchTemplateSpecification = jsonValue.GetObject("LaunchTemplateSpecification");

    m_launchTemplateSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Overrides"))
  {
    Aws::Utils::Array<JsonView> overridesJsonList = jsonValue.GetArray("Overrides");
    for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
    {
      m_overrides.push_back(overridesJsonList[overridesIndex].AsObject());
    }
    m_overridesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails::Jsonize() const
{
  JsonValue payload;

  if(m_launchTemplateSpecificationHasBeenSet)
  {
   payload.WithObject("LaunchTemplateSpecification", m_launchTemplateSpecification.Jsonize());

  }

  if(m_overridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> overridesJsonList(m_overrides.size());
   for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
   {
     overridesJsonList[overridesIndex].AsObject(m_overrides[overridesIndex].Jsonize());
   }
   payload.WithArray("Overrides", std::move(overridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
