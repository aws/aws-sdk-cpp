/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/WebvttHlsSourceSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

WebvttHlsSourceSettings::WebvttHlsSourceSettings() : 
    m_renditionGroupIdHasBeenSet(false),
    m_renditionLanguageCode(LanguageCode::NOT_SET),
    m_renditionLanguageCodeHasBeenSet(false),
    m_renditionNameHasBeenSet(false)
{
}

WebvttHlsSourceSettings::WebvttHlsSourceSettings(JsonView jsonValue) : 
    m_renditionGroupIdHasBeenSet(false),
    m_renditionLanguageCode(LanguageCode::NOT_SET),
    m_renditionLanguageCodeHasBeenSet(false),
    m_renditionNameHasBeenSet(false)
{
  *this = jsonValue;
}

WebvttHlsSourceSettings& WebvttHlsSourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("renditionGroupId"))
  {
    m_renditionGroupId = jsonValue.GetString("renditionGroupId");

    m_renditionGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renditionLanguageCode"))
  {
    m_renditionLanguageCode = LanguageCodeMapper::GetLanguageCodeForName(jsonValue.GetString("renditionLanguageCode"));

    m_renditionLanguageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("renditionName"))
  {
    m_renditionName = jsonValue.GetString("renditionName");

    m_renditionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue WebvttHlsSourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_renditionGroupIdHasBeenSet)
  {
   payload.WithString("renditionGroupId", m_renditionGroupId);

  }

  if(m_renditionLanguageCodeHasBeenSet)
  {
   payload.WithString("renditionLanguageCode", LanguageCodeMapper::GetNameForLanguageCode(m_renditionLanguageCode));
  }

  if(m_renditionNameHasBeenSet)
  {
   payload.WithString("renditionName", m_renditionName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
