/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ContentBlockerRule.h>
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

ContentBlockerRule::ContentBlockerRule() : 
    m_systemMessageOverrideHasBeenSet(false)
{
}

ContentBlockerRule::ContentBlockerRule(JsonView jsonValue) : 
    m_systemMessageOverrideHasBeenSet(false)
{
  *this = jsonValue;
}

ContentBlockerRule& ContentBlockerRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("systemMessageOverride"))
  {
    m_systemMessageOverride = jsonValue.GetString("systemMessageOverride");

    m_systemMessageOverrideHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentBlockerRule::Jsonize() const
{
  JsonValue payload;

  if(m_systemMessageOverrideHasBeenSet)
  {
   payload.WithString("systemMessageOverride", m_systemMessageOverride);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
