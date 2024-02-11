/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAthenaWorkGroupConfigurationDetails.h>
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

AwsAthenaWorkGroupConfigurationDetails::AwsAthenaWorkGroupConfigurationDetails() : 
    m_resultConfigurationHasBeenSet(false)
{
}

AwsAthenaWorkGroupConfigurationDetails::AwsAthenaWorkGroupConfigurationDetails(JsonView jsonValue) : 
    m_resultConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAthenaWorkGroupConfigurationDetails& AwsAthenaWorkGroupConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultConfiguration"))
  {
    m_resultConfiguration = jsonValue.GetObject("ResultConfiguration");

    m_resultConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAthenaWorkGroupConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_resultConfigurationHasBeenSet)
  {
   payload.WithObject("ResultConfiguration", m_resultConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
