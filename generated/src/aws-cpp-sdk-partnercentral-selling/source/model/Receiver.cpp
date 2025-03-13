/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/Receiver.h>
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

Receiver::Receiver(JsonView jsonValue)
{
  *this = jsonValue;
}

Receiver& Receiver::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Account"))
  {
    m_account = jsonValue.GetObject("Account");
    m_accountHasBeenSet = true;
  }
  return *this;
}

JsonValue Receiver::Jsonize() const
{
  JsonValue payload;

  if(m_accountHasBeenSet)
  {
   payload.WithObject("Account", m_account.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
