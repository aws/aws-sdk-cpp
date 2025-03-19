/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeEncryptionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

MedicalScribeEncryptionSettings::MedicalScribeEncryptionSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

MedicalScribeEncryptionSettings& MedicalScribeEncryptionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KmsEncryptionContext"))
  {
    Aws::Map<Aws::String, JsonView> kmsEncryptionContextJsonMap = jsonValue.GetObject("KmsEncryptionContext").GetAllObjects();
    for(auto& kmsEncryptionContextItem : kmsEncryptionContextJsonMap)
    {
      m_kmsEncryptionContext[kmsEncryptionContextItem.first] = kmsEncryptionContextItem.second.AsString();
    }
    m_kmsEncryptionContextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeEncryptionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_kmsEncryptionContextHasBeenSet)
  {
   JsonValue kmsEncryptionContextJsonMap;
   for(auto& kmsEncryptionContextItem : m_kmsEncryptionContext)
   {
     kmsEncryptionContextJsonMap.WithString(kmsEncryptionContextItem.first, kmsEncryptionContextItem.second);
   }
   payload.WithObject("KmsEncryptionContext", std::move(kmsEncryptionContextJsonMap));

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
