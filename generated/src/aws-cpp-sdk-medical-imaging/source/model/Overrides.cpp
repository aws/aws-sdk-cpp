/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/Overrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

Overrides::Overrides(JsonView jsonValue)
{
  *this = jsonValue;
}

Overrides& Overrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("forced"))
  {
    m_forced = jsonValue.GetBool("forced");
    m_forcedHasBeenSet = true;
  }
  return *this;
}

JsonValue Overrides::Jsonize() const
{
  JsonValue payload;

  if(m_forcedHasBeenSet)
  {
   payload.WithBool("forced", m_forced);

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
