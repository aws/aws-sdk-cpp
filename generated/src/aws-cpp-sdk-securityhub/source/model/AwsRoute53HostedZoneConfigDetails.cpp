/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRoute53HostedZoneConfigDetails.h>
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

AwsRoute53HostedZoneConfigDetails::AwsRoute53HostedZoneConfigDetails() : 
    m_commentHasBeenSet(false)
{
}

AwsRoute53HostedZoneConfigDetails::AwsRoute53HostedZoneConfigDetails(JsonView jsonValue) : 
    m_commentHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRoute53HostedZoneConfigDetails& AwsRoute53HostedZoneConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Comment"))
  {
    m_comment = jsonValue.GetString("Comment");

    m_commentHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRoute53HostedZoneConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
