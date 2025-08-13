/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/security-ir/model/MembershipAccountsConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityIR
{
namespace Model
{

MembershipAccountsConfigurations::MembershipAccountsConfigurations(JsonView jsonValue)
{
  *this = jsonValue;
}

MembershipAccountsConfigurations& MembershipAccountsConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("coverEntireOrganization"))
  {
    m_coverEntireOrganization = jsonValue.GetBool("coverEntireOrganization");
    m_coverEntireOrganizationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("organizationalUnits"))
  {
    Aws::Utils::Array<JsonView> organizationalUnitsJsonList = jsonValue.GetArray("organizationalUnits");
    for(unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength(); ++organizationalUnitsIndex)
    {
      m_organizationalUnits.push_back(organizationalUnitsJsonList[organizationalUnitsIndex].AsString());
    }
    m_organizationalUnitsHasBeenSet = true;
  }
  return *this;
}

JsonValue MembershipAccountsConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_coverEntireOrganizationHasBeenSet)
  {
   payload.WithBool("coverEntireOrganization", m_coverEntireOrganization);

  }

  if(m_organizationalUnitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationalUnitsJsonList(m_organizationalUnits.size());
   for(unsigned organizationalUnitsIndex = 0; organizationalUnitsIndex < organizationalUnitsJsonList.GetLength(); ++organizationalUnitsIndex)
   {
     organizationalUnitsJsonList[organizationalUnitsIndex].AsString(m_organizationalUnits[organizationalUnitsIndex]);
   }
   payload.WithArray("organizationalUnits", std::move(organizationalUnitsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
