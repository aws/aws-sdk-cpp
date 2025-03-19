/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/IdentityCenterOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

IdentityCenterOptions::IdentityCenterOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

IdentityCenterOptions& IdentityCenterOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnabledAPIAccess"))
  {
    m_enabledAPIAccess = jsonValue.GetBool("EnabledAPIAccess");
    m_enabledAPIAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityCenterInstanceARN"))
  {
    m_identityCenterInstanceARN = jsonValue.GetString("IdentityCenterInstanceARN");
    m_identityCenterInstanceARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubjectKey"))
  {
    m_subjectKey = SubjectKeyIdCOptionMapper::GetSubjectKeyIdCOptionForName(jsonValue.GetString("SubjectKey"));
    m_subjectKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RolesKey"))
  {
    m_rolesKey = RolesKeyIdCOptionMapper::GetRolesKeyIdCOptionForName(jsonValue.GetString("RolesKey"));
    m_rolesKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityCenterApplicationARN"))
  {
    m_identityCenterApplicationARN = jsonValue.GetString("IdentityCenterApplicationARN");
    m_identityCenterApplicationARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityStoreId"))
  {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");
    m_identityStoreIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IdentityCenterOptions::Jsonize() const
{
  JsonValue payload;

  if(m_enabledAPIAccessHasBeenSet)
  {
   payload.WithBool("EnabledAPIAccess", m_enabledAPIAccess);

  }

  if(m_identityCenterInstanceARNHasBeenSet)
  {
   payload.WithString("IdentityCenterInstanceARN", m_identityCenterInstanceARN);

  }

  if(m_subjectKeyHasBeenSet)
  {
   payload.WithString("SubjectKey", SubjectKeyIdCOptionMapper::GetNameForSubjectKeyIdCOption(m_subjectKey));
  }

  if(m_rolesKeyHasBeenSet)
  {
   payload.WithString("RolesKey", RolesKeyIdCOptionMapper::GetNameForRolesKeyIdCOption(m_rolesKey));
  }

  if(m_identityCenterApplicationARNHasBeenSet)
  {
   payload.WithString("IdentityCenterApplicationARN", m_identityCenterApplicationARN);

  }

  if(m_identityStoreIdHasBeenSet)
  {
   payload.WithString("IdentityStoreId", m_identityStoreId);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
