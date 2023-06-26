/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/verifiedpermissions/model/StaticPolicyDefinitionDetail.h>
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

StaticPolicyDefinitionDetail::StaticPolicyDefinitionDetail() : 
    m_descriptionHasBeenSet(false),
    m_statementHasBeenSet(false)
{
}

StaticPolicyDefinitionDetail::StaticPolicyDefinitionDetail(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_statementHasBeenSet(false)
{
  *this = jsonValue;
}

StaticPolicyDefinitionDetail& StaticPolicyDefinitionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statement"))
  {
    m_statement = jsonValue.GetString("statement");

    m_statementHasBeenSet = true;
  }

  return *this;
}

JsonValue StaticPolicyDefinitionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statementHasBeenSet)
  {
   payload.WithString("statement", m_statement);

  }

  return payload;
}

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
