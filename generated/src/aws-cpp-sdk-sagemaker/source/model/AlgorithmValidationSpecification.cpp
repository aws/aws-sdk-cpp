﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AlgorithmValidationSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AlgorithmValidationSpecification::AlgorithmValidationSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

AlgorithmValidationSpecification& AlgorithmValidationSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ValidationRole"))
  {
    m_validationRole = jsonValue.GetString("ValidationRole");
    m_validationRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ValidationProfiles"))
  {
    Aws::Utils::Array<JsonView> validationProfilesJsonList = jsonValue.GetArray("ValidationProfiles");
    for(unsigned validationProfilesIndex = 0; validationProfilesIndex < validationProfilesJsonList.GetLength(); ++validationProfilesIndex)
    {
      m_validationProfiles.push_back(validationProfilesJsonList[validationProfilesIndex].AsObject());
    }
    m_validationProfilesHasBeenSet = true;
  }
  return *this;
}

JsonValue AlgorithmValidationSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_validationRoleHasBeenSet)
  {
   payload.WithString("ValidationRole", m_validationRole);

  }

  if(m_validationProfilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validationProfilesJsonList(m_validationProfiles.size());
   for(unsigned validationProfilesIndex = 0; validationProfilesIndex < validationProfilesJsonList.GetLength(); ++validationProfilesIndex)
   {
     validationProfilesJsonList[validationProfilesIndex].AsObject(m_validationProfiles[validationProfilesIndex].Jsonize());
   }
   payload.WithArray("ValidationProfiles", std::move(validationProfilesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
