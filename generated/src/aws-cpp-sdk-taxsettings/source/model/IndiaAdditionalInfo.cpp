/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/IndiaAdditionalInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TaxSettings
{
namespace Model
{

IndiaAdditionalInfo::IndiaAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

IndiaAdditionalInfo& IndiaAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pan"))
  {
    m_pan = jsonValue.GetString("pan");
    m_panHasBeenSet = true;
  }
  return *this;
}

JsonValue IndiaAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_panHasBeenSet)
  {
   payload.WithString("pan", m_pan);

  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
