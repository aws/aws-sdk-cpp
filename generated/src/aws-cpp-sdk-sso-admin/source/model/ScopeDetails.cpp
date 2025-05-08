/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ScopeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

ScopeDetails::ScopeDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ScopeDetails& ScopeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = jsonValue.GetString("Scope");
    m_scopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthorizedTargets"))
  {
    Aws::Utils::Array<JsonView> authorizedTargetsJsonList = jsonValue.GetArray("AuthorizedTargets");
    for(unsigned authorizedTargetsIndex = 0; authorizedTargetsIndex < authorizedTargetsJsonList.GetLength(); ++authorizedTargetsIndex)
    {
      m_authorizedTargets.push_back(authorizedTargetsJsonList[authorizedTargetsIndex].AsString());
    }
    m_authorizedTargetsHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", m_scope);

  }

  if(m_authorizedTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedTargetsJsonList(m_authorizedTargets.size());
   for(unsigned authorizedTargetsIndex = 0; authorizedTargetsIndex < authorizedTargetsJsonList.GetLength(); ++authorizedTargetsIndex)
   {
     authorizedTargetsJsonList[authorizedTargetsIndex].AsString(m_authorizedTargets[authorizedTargetsIndex]);
   }
   payload.WithArray("AuthorizedTargets", std::move(authorizedTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
