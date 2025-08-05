/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/IpRule.h>
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

IpRule::IpRule(JsonView jsonValue)
{
  *this = jsonValue;
}

IpRule& IpRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipRange"))
  {
    m_ipRange = jsonValue.GetString("ipRange");
    m_ipRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue IpRule::Jsonize() const
{
  JsonValue payload;

  if(m_ipRangeHasBeenSet)
  {
   payload.WithString("ipRange", m_ipRange);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
