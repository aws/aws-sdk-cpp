/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/IdentityProvider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

IdentityProvider::IdentityProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

IdentityProvider& IdentityProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identityProviderArn"))
  {
    m_identityProviderArn = jsonValue.GetString("identityProviderArn");
    m_identityProviderArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityProviderName"))
  {
    m_identityProviderName = jsonValue.GetString("identityProviderName");
    m_identityProviderNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityProviderType"))
  {
    m_identityProviderType = IdentityProviderTypeMapper::GetIdentityProviderTypeForName(jsonValue.GetString("identityProviderType"));
    m_identityProviderTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("identityProviderDetails"))
  {
    Aws::Map<Aws::String, JsonView> identityProviderDetailsJsonMap = jsonValue.GetObject("identityProviderDetails").GetAllObjects();
    for(auto& identityProviderDetailsItem : identityProviderDetailsJsonMap)
    {
      m_identityProviderDetails[identityProviderDetailsItem.first] = identityProviderDetailsItem.second.AsString();
    }
    m_identityProviderDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityProvider::Jsonize() const
{
  JsonValue payload;

  if(m_identityProviderArnHasBeenSet)
  {
   payload.WithString("identityProviderArn", m_identityProviderArn);

  }

  if(m_identityProviderNameHasBeenSet)
  {
   payload.WithString("identityProviderName", m_identityProviderName);

  }

  if(m_identityProviderTypeHasBeenSet)
  {
   payload.WithString("identityProviderType", IdentityProviderTypeMapper::GetNameForIdentityProviderType(m_identityProviderType));
  }

  if(m_identityProviderDetailsHasBeenSet)
  {
   JsonValue identityProviderDetailsJsonMap;
   for(auto& identityProviderDetailsItem : m_identityProviderDetails)
   {
     identityProviderDetailsJsonMap.WithString(identityProviderDetailsItem.first, identityProviderDetailsItem.second);
   }
   payload.WithObject("identityProviderDetails", std::move(identityProviderDetailsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
