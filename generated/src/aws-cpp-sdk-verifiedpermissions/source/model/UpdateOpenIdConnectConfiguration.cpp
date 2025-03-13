/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/UpdateOpenIdConnectConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

UpdateOpenIdConnectConfiguration::UpdateOpenIdConnectConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateOpenIdConnectConfiguration& UpdateOpenIdConnectConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("issuer"))
  {
    m_issuer = jsonValue.GetString("issuer");
    m_issuerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entityIdPrefix"))
  {
    m_entityIdPrefix = jsonValue.GetString("entityIdPrefix");
    m_entityIdPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupConfiguration"))
  {
    m_groupConfiguration = jsonValue.GetObject("groupConfiguration");
    m_groupConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenSelection"))
  {
    m_tokenSelection = jsonValue.GetObject("tokenSelection");
    m_tokenSelectionHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateOpenIdConnectConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_issuerHasBeenSet)
  {
   payload.WithString("issuer", m_issuer);

  }

  if(m_entityIdPrefixHasBeenSet)
  {
   payload.WithString("entityIdPrefix", m_entityIdPrefix);

  }

  if(m_groupConfigurationHasBeenSet)
  {
   payload.WithObject("groupConfiguration", m_groupConfiguration.Jsonize());

  }

  if(m_tokenSelectionHasBeenSet)
  {
   payload.WithObject("tokenSelection", m_tokenSelection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
