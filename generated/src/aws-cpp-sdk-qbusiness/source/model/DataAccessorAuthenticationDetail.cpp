/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DataAccessorAuthenticationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

DataAccessorAuthenticationDetail::DataAccessorAuthenticationDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

DataAccessorAuthenticationDetail& DataAccessorAuthenticationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authenticationType"))
  {
    m_authenticationType = DataAccessorAuthenticationTypeMapper::GetDataAccessorAuthenticationTypeForName(jsonValue.GetString("authenticationType"));
    m_authenticationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("authenticationConfiguration");
    m_authenticationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalIds"))
  {
    Aws::Utils::Array<JsonView> externalIdsJsonList = jsonValue.GetArray("externalIds");
    for(unsigned externalIdsIndex = 0; externalIdsIndex < externalIdsJsonList.GetLength(); ++externalIdsIndex)
    {
      m_externalIds.push_back(externalIdsJsonList[externalIdsIndex].AsString());
    }
    m_externalIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAccessorAuthenticationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("authenticationType", DataAccessorAuthenticationTypeMapper::GetNameForDataAccessorAuthenticationType(m_authenticationType));
  }

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("authenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  if(m_externalIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> externalIdsJsonList(m_externalIds.size());
   for(unsigned externalIdsIndex = 0; externalIdsIndex < externalIdsJsonList.GetLength(); ++externalIdsIndex)
   {
     externalIdsJsonList[externalIdsIndex].AsString(m_externalIds[externalIdsIndex]);
   }
   payload.WithArray("externalIds", std::move(externalIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
