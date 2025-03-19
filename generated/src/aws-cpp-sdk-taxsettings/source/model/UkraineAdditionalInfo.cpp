/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/UkraineAdditionalInfo.h>
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

UkraineAdditionalInfo::UkraineAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

UkraineAdditionalInfo& UkraineAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ukraineTrnType"))
  {
    m_ukraineTrnType = UkraineTrnTypeMapper::GetUkraineTrnTypeForName(jsonValue.GetString("ukraineTrnType"));
    m_ukraineTrnTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue UkraineAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_ukraineTrnTypeHasBeenSet)
  {
   payload.WithString("ukraineTrnType", UkraineTrnTypeMapper::GetNameForUkraineTrnType(m_ukraineTrnType));
  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
