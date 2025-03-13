/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/AccountMetaData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

AccountMetaData::AccountMetaData(JsonView jsonValue)
{
  *this = jsonValue;
}

AccountMetaData& AccountMetaData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountName"))
  {
    m_accountName = jsonValue.GetString("accountName");
    m_accountNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("address"))
  {
    m_address = jsonValue.GetObject("address");
    m_addressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addressRoleMap"))
  {
    Aws::Map<Aws::String, JsonView> addressRoleMapJsonMap = jsonValue.GetObject("addressRoleMap").GetAllObjects();
    for(auto& addressRoleMapItem : addressRoleMapJsonMap)
    {
      m_addressRoleMap[AddressRoleTypeMapper::GetAddressRoleTypeForName(addressRoleMapItem.first)] = addressRoleMapItem.second.AsObject();
    }
    m_addressRoleMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("addressType"))
  {
    m_addressType = AddressRoleTypeMapper::GetAddressRoleTypeForName(jsonValue.GetString("addressType"));
    m_addressTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("seller"))
  {
    m_seller = jsonValue.GetString("seller");
    m_sellerHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountMetaData::Jsonize() const
{
  JsonValue payload;

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("accountName", m_accountName);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithObject("address", m_address.Jsonize());

  }

  if(m_addressRoleMapHasBeenSet)
  {
   JsonValue addressRoleMapJsonMap;
   for(auto& addressRoleMapItem : m_addressRoleMap)
   {
     addressRoleMapJsonMap.WithObject(AddressRoleTypeMapper::GetNameForAddressRoleType(addressRoleMapItem.first), addressRoleMapItem.second.Jsonize());
   }
   payload.WithObject("addressRoleMap", std::move(addressRoleMapJsonMap));

  }

  if(m_addressTypeHasBeenSet)
  {
   payload.WithString("addressType", AddressRoleTypeMapper::GetNameForAddressRoleType(m_addressType));
  }

  if(m_sellerHasBeenSet)
  {
   payload.WithString("seller", m_seller);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
