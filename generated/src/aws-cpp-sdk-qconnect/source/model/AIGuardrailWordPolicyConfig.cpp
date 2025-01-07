﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/AIGuardrailWordPolicyConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

AIGuardrailWordPolicyConfig::AIGuardrailWordPolicyConfig() : 
    m_managedWordListsConfigHasBeenSet(false),
    m_wordsConfigHasBeenSet(false)
{
}

AIGuardrailWordPolicyConfig::AIGuardrailWordPolicyConfig(JsonView jsonValue)
  : AIGuardrailWordPolicyConfig()
{
  *this = jsonValue;
}

AIGuardrailWordPolicyConfig& AIGuardrailWordPolicyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("managedWordListsConfig"))
  {
    Aws::Utils::Array<JsonView> managedWordListsConfigJsonList = jsonValue.GetArray("managedWordListsConfig");
    for(unsigned managedWordListsConfigIndex = 0; managedWordListsConfigIndex < managedWordListsConfigJsonList.GetLength(); ++managedWordListsConfigIndex)
    {
      m_managedWordListsConfig.push_back(managedWordListsConfigJsonList[managedWordListsConfigIndex].AsObject());
    }
    m_managedWordListsConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("wordsConfig"))
  {
    Aws::Utils::Array<JsonView> wordsConfigJsonList = jsonValue.GetArray("wordsConfig");
    for(unsigned wordsConfigIndex = 0; wordsConfigIndex < wordsConfigJsonList.GetLength(); ++wordsConfigIndex)
    {
      m_wordsConfig.push_back(wordsConfigJsonList[wordsConfigIndex].AsObject());
    }
    m_wordsConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue AIGuardrailWordPolicyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_managedWordListsConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedWordListsConfigJsonList(m_managedWordListsConfig.size());
   for(unsigned managedWordListsConfigIndex = 0; managedWordListsConfigIndex < managedWordListsConfigJsonList.GetLength(); ++managedWordListsConfigIndex)
   {
     managedWordListsConfigJsonList[managedWordListsConfigIndex].AsObject(m_managedWordListsConfig[managedWordListsConfigIndex].Jsonize());
   }
   payload.WithArray("managedWordListsConfig", std::move(managedWordListsConfigJsonList));

  }

  if(m_wordsConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wordsConfigJsonList(m_wordsConfig.size());
   for(unsigned wordsConfigIndex = 0; wordsConfigIndex < wordsConfigJsonList.GetLength(); ++wordsConfigIndex)
   {
     wordsConfigJsonList[wordsConfigIndex].AsObject(m_wordsConfig[wordsConfigIndex].Jsonize());
   }
   payload.WithArray("wordsConfig", std::move(wordsConfigJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
