/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/ModelSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

ModelSettings::ModelSettings() : 
    m_languageModelNameHasBeenSet(false)
{
}

ModelSettings::ModelSettings(JsonView jsonValue) : 
    m_languageModelNameHasBeenSet(false)
{
  *this = jsonValue;
}

ModelSettings& ModelSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LanguageModelName"))
  {
    m_languageModelName = jsonValue.GetString("LanguageModelName");

    m_languageModelNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelSettings::Jsonize() const
{
  JsonValue payload;

  if(m_languageModelNameHasBeenSet)
  {
   payload.WithString("LanguageModelName", m_languageModelName);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
