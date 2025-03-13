/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/KenyaAdditionalInfo.h>
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

KenyaAdditionalInfo::KenyaAdditionalInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

KenyaAdditionalInfo& KenyaAdditionalInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("personType"))
  {
    m_personType = PersonTypeMapper::GetPersonTypeForName(jsonValue.GetString("personType"));
    m_personTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue KenyaAdditionalInfo::Jsonize() const
{
  JsonValue payload;

  if(m_personTypeHasBeenSet)
  {
   payload.WithString("personType", PersonTypeMapper::GetNameForPersonType(m_personType));
  }

  return payload;
}

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
