/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails.h>
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

AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails::AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails() : 
    m_marketTypeHasBeenSet(false),
    m_spotOptionsHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails::AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails(JsonView jsonValue) : 
    m_marketTypeHasBeenSet(false),
    m_spotOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails& AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MarketType"))
  {
    m_marketType = jsonValue.GetString("MarketType");

    m_marketTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpotOptions"))
  {
    m_spotOptions = jsonValue.GetObject("SpotOptions");

    m_spotOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataInstanceMarketOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_marketTypeHasBeenSet)
  {
   payload.WithString("MarketType", m_marketType);

  }

  if(m_spotOptionsHasBeenSet)
  {
   payload.WithObject("SpotOptions", m_spotOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
