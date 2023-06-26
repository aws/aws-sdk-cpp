/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ContactChannelAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

ContactChannelAddress::ContactChannelAddress() : 
    m_simpleAddressHasBeenSet(false)
{
}

ContactChannelAddress::ContactChannelAddress(JsonView jsonValue) : 
    m_simpleAddressHasBeenSet(false)
{
  *this = jsonValue;
}

ContactChannelAddress& ContactChannelAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SimpleAddress"))
  {
    m_simpleAddress = jsonValue.GetString("SimpleAddress");

    m_simpleAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactChannelAddress::Jsonize() const
{
  JsonValue payload;

  if(m_simpleAddressHasBeenSet)
  {
   payload.WithString("SimpleAddress", m_simpleAddress);

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
