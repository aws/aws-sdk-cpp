/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/AccountReceiver.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

AccountReceiver::AccountReceiver(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountReceiver& AccountReceiver::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Alias"))
  {
    m_alias = jsonValue.GetString("Alias");
    m_aliasHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AwsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("AwsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountReceiver::Jsonize() const
{
  JsonValue payload;

  if(m_aliasHasBeenSet)
  {
   payload.WithString("Alias", m_alias);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("AwsAccountId", m_awsAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
