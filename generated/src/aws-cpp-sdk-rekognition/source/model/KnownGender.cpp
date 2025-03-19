/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/KnownGender.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

KnownGender::KnownGender(JsonView jsonValue)
{
  *this = jsonValue;
}

KnownGender& KnownGender::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = KnownGenderTypeMapper::GetKnownGenderTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue KnownGender::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", KnownGenderTypeMapper::GetNameForKnownGenderType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
