/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/SecurityConfigDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

SecurityConfigDetail::SecurityConfigDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

SecurityConfigDetail& SecurityConfigDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = SecurityConfigTypeMapper::GetSecurityConfigTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configVersion"))
  {
    m_configVersion = jsonValue.GetString("configVersion");
    m_configVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("samlOptions"))
  {
    m_samlOptions = jsonValue.GetObject("samlOptions");
    m_samlOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamIdentityCenterOptions"))
  {
    m_iamIdentityCenterOptions = jsonValue.GetObject("iamIdentityCenterOptions");
    m_iamIdentityCenterOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamFederationOptions"))
  {
    m_iamFederationOptions = jsonValue.GetObject("iamFederationOptions");
    m_iamFederationOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetInt64("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetInt64("lastModifiedDate");
    m_lastModifiedDateHasBeenSet = true;
  }
  return *this;
}

JsonValue SecurityConfigDetail::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SecurityConfigTypeMapper::GetNameForSecurityConfigType(m_type));
  }

  if(m_configVersionHasBeenSet)
  {
   payload.WithString("configVersion", m_configVersion);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_samlOptionsHasBeenSet)
  {
   payload.WithObject("samlOptions", m_samlOptions.Jsonize());

  }

  if(m_iamIdentityCenterOptionsHasBeenSet)
  {
   payload.WithObject("iamIdentityCenterOptions", m_iamIdentityCenterOptions.Jsonize());

  }

  if(m_iamFederationOptionsHasBeenSet)
  {
   payload.WithObject("iamFederationOptions", m_iamFederationOptions.Jsonize());

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithInt64("createdDate", m_createdDate);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithInt64("lastModifiedDate", m_lastModifiedDate);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
