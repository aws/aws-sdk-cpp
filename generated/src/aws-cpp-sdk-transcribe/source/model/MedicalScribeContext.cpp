/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/MedicalScribeContext.h>
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

MedicalScribeContext::MedicalScribeContext(JsonView jsonValue)
{
  *this = jsonValue;
}

MedicalScribeContext& MedicalScribeContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PatientContext"))
  {
    m_patientContext = jsonValue.GetObject("PatientContext");
    m_patientContextHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeContext::Jsonize() const
{
  JsonValue payload;

  if(m_patientContextHasBeenSet)
  {
   payload.WithObject("PatientContext", m_patientContext.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
