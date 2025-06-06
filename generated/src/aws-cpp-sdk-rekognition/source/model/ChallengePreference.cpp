/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/ChallengePreference.h>
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

ChallengePreference::ChallengePreference(JsonView jsonValue)
{
  *this = jsonValue;
}

ChallengePreference& ChallengePreference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChallengeTypeMapper::GetChallengeTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Versions"))
  {
    m_versions = jsonValue.GetObject("Versions");
    m_versionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ChallengePreference::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChallengeTypeMapper::GetNameForChallengeType(m_type));
  }

  if(m_versionsHasBeenSet)
  {
   payload.WithObject("Versions", m_versions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
