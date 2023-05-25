/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/Matcher.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

Matcher::Matcher() : 
    m_httpCodeHasBeenSet(false)
{
}

Matcher::Matcher(JsonView jsonValue) : 
    m_httpCodeHasBeenSet(false)
{
  *this = jsonValue;
}

Matcher& Matcher::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("httpCode"))
  {
    m_httpCode = jsonValue.GetString("httpCode");

    m_httpCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue Matcher::Jsonize() const
{
  JsonValue payload;

  if(m_httpCodeHasBeenSet)
  {
   payload.WithString("httpCode", m_httpCode);

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
