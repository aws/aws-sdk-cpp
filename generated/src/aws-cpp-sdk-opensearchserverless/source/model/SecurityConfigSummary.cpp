/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/SecurityConfigSummary.h>
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

SecurityConfigSummary::SecurityConfigSummary() : 
    m_configVersionHasBeenSet(false),
    m_createdDate(0),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedDate(0),
    m_lastModifiedDateHasBeenSet(false),
    m_type(SecurityConfigType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

SecurityConfigSummary::SecurityConfigSummary(JsonView jsonValue) : 
    m_configVersionHasBeenSet(false),
    m_createdDate(0),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedDate(0),
    m_lastModifiedDateHasBeenSet(false),
    m_type(SecurityConfigType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityConfigSummary& SecurityConfigSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configVersion"))
  {
    m_configVersion = jsonValue.GetString("configVersion");

    m_configVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetInt64("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetInt64("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = SecurityConfigTypeMapper::GetSecurityConfigTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_configVersionHasBeenSet)
  {
   payload.WithString("configVersion", m_configVersion);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithInt64("createdDate", m_createdDate);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithInt64("lastModifiedDate", m_lastModifiedDate);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SecurityConfigTypeMapper::GetNameForSecurityConfigType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
