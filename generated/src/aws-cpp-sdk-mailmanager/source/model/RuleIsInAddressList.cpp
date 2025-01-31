/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/RuleIsInAddressList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

RuleIsInAddressList::RuleIsInAddressList() : 
    m_addressListsHasBeenSet(false),
    m_attribute(RuleAddressListEmailAttribute::NOT_SET),
    m_attributeHasBeenSet(false)
{
}

RuleIsInAddressList::RuleIsInAddressList(JsonView jsonValue)
  : RuleIsInAddressList()
{
  *this = jsonValue;
}

RuleIsInAddressList& RuleIsInAddressList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddressLists"))
  {
    Aws::Utils::Array<JsonView> addressListsJsonList = jsonValue.GetArray("AddressLists");
    for(unsigned addressListsIndex = 0; addressListsIndex < addressListsJsonList.GetLength(); ++addressListsIndex)
    {
      m_addressLists.push_back(addressListsJsonList[addressListsIndex].AsString());
    }
    m_addressListsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = RuleAddressListEmailAttributeMapper::GetRuleAddressListEmailAttributeForName(jsonValue.GetString("Attribute"));

    m_attributeHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleIsInAddressList::Jsonize() const
{
  JsonValue payload;

  if(m_addressListsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressListsJsonList(m_addressLists.size());
   for(unsigned addressListsIndex = 0; addressListsIndex < addressListsJsonList.GetLength(); ++addressListsIndex)
   {
     addressListsJsonList[addressListsIndex].AsString(m_addressLists[addressListsIndex]);
   }
   payload.WithArray("AddressLists", std::move(addressListsJsonList));

  }

  if(m_attributeHasBeenSet)
  {
   payload.WithString("Attribute", RuleAddressListEmailAttributeMapper::GetNameForRuleAddressListEmailAttribute(m_attribute));
  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
