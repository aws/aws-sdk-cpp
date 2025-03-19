/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Bounce.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Bounce::Bounce(JsonView jsonValue)
{
  *this = jsonValue;
}

Bounce& Bounce::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BounceType"))
  {
    m_bounceType = BounceTypeMapper::GetBounceTypeForName(jsonValue.GetString("BounceType"));
    m_bounceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BounceSubType"))
  {
    m_bounceSubType = jsonValue.GetString("BounceSubType");
    m_bounceSubTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DiagnosticCode"))
  {
    m_diagnosticCode = jsonValue.GetString("DiagnosticCode");
    m_diagnosticCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue Bounce::Jsonize() const
{
  JsonValue payload;

  if(m_bounceTypeHasBeenSet)
  {
   payload.WithString("BounceType", BounceTypeMapper::GetNameForBounceType(m_bounceType));
  }

  if(m_bounceSubTypeHasBeenSet)
  {
   payload.WithString("BounceSubType", m_bounceSubType);

  }

  if(m_diagnosticCodeHasBeenSet)
  {
   payload.WithString("DiagnosticCode", m_diagnosticCode);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
