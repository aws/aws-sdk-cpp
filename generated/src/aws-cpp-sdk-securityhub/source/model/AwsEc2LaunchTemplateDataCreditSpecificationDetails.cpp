/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataCreditSpecificationDetails.h>
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

AwsEc2LaunchTemplateDataCreditSpecificationDetails::AwsEc2LaunchTemplateDataCreditSpecificationDetails() : 
    m_cpuCreditsHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataCreditSpecificationDetails::AwsEc2LaunchTemplateDataCreditSpecificationDetails(JsonView jsonValue) : 
    m_cpuCreditsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataCreditSpecificationDetails& AwsEc2LaunchTemplateDataCreditSpecificationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CpuCredits"))
  {
    m_cpuCredits = jsonValue.GetString("CpuCredits");

    m_cpuCreditsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataCreditSpecificationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cpuCreditsHasBeenSet)
  {
   payload.WithString("CpuCredits", m_cpuCredits);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
