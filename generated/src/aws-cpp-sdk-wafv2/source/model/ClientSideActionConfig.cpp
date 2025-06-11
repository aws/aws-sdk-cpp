/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ClientSideActionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ClientSideActionConfig::ClientSideActionConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ClientSideActionConfig& ClientSideActionConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Challenge"))
  {
    m_challenge = jsonValue.GetObject("Challenge");
    m_challengeHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientSideActionConfig::Jsonize() const
{
  JsonValue payload;

  if(m_challengeHasBeenSet)
  {
   payload.WithObject("Challenge", m_challenge.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
