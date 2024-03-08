/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Policy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Policy::Policy() : 
    m_securityHubHasBeenSet(false)
{
}

Policy::Policy(JsonView jsonValue) : 
    m_securityHubHasBeenSet(false)
{
  *this = jsonValue;
}

Policy& Policy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SecurityHub"))
  {
    m_securityHub = jsonValue.GetObject("SecurityHub");

    m_securityHubHasBeenSet = true;
  }

  return *this;
}

JsonValue Policy::Jsonize() const
{
  JsonValue payload;

  if(m_securityHubHasBeenSet)
  {
   payload.WithObject("SecurityHub", m_securityHub.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
