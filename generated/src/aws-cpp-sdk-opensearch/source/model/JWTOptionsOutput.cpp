/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/JWTOptionsOutput.h>
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

JWTOptionsOutput::JWTOptionsOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

JWTOptionsOutput& JWTOptionsOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubjectKey"))
  {
    m_subjectKey = jsonValue.GetString("SubjectKey");
    m_subjectKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RolesKey"))
  {
    m_rolesKey = jsonValue.GetString("RolesKey");
    m_rolesKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PublicKey"))
  {
    m_publicKey = jsonValue.GetString("PublicKey");
    m_publicKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue JWTOptionsOutput::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_subjectKeyHasBeenSet)
  {
   payload.WithString("SubjectKey", m_subjectKey);

  }

  if(m_rolesKeyHasBeenSet)
  {
   payload.WithString("RolesKey", m_rolesKey);

  }

  if(m_publicKeyHasBeenSet)
  {
   payload.WithString("PublicKey", m_publicKey);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
