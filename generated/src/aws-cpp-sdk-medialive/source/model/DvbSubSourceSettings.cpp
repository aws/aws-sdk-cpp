﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbSubSourceSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

DvbSubSourceSettings::DvbSubSourceSettings() : 
    m_ocrLanguage(DvbSubOcrLanguage::NOT_SET),
    m_ocrLanguageHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false)
{
}

DvbSubSourceSettings::DvbSubSourceSettings(JsonView jsonValue) : 
    m_ocrLanguage(DvbSubOcrLanguage::NOT_SET),
    m_ocrLanguageHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false)
{
  *this = jsonValue;
}

DvbSubSourceSettings& DvbSubSourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ocrLanguage"))
  {
    m_ocrLanguage = DvbSubOcrLanguageMapper::GetDvbSubOcrLanguageForName(jsonValue.GetString("ocrLanguage"));

    m_ocrLanguageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pid"))
  {
    m_pid = jsonValue.GetInteger("pid");

    m_pidHasBeenSet = true;
  }

  return *this;
}

JsonValue DvbSubSourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_ocrLanguageHasBeenSet)
  {
   payload.WithString("ocrLanguage", DvbSubOcrLanguageMapper::GetNameForDvbSubOcrLanguage(m_ocrLanguage));
  }

  if(m_pidHasBeenSet)
  {
   payload.WithInteger("pid", m_pid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
