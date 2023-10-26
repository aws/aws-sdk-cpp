/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRoute53HostedZoneObjectDetails.h>
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

AwsRoute53HostedZoneObjectDetails::AwsRoute53HostedZoneObjectDetails() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_configHasBeenSet(false)
{
}

AwsRoute53HostedZoneObjectDetails::AwsRoute53HostedZoneObjectDetails(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_configHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRoute53HostedZoneObjectDetails& AwsRoute53HostedZoneObjectDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Config"))
  {
    m_config = jsonValue.GetObject("Config");

    m_configHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRoute53HostedZoneObjectDetails::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_configHasBeenSet)
  {
   payload.WithObject("Config", m_config.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
