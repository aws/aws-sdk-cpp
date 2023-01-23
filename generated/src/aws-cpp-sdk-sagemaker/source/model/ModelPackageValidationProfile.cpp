/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelPackageValidationProfile.h>
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

ModelPackageValidationProfile::ModelPackageValidationProfile() : 
    m_profileNameHasBeenSet(false),
    m_transformJobDefinitionHasBeenSet(false)
{
}

ModelPackageValidationProfile::ModelPackageValidationProfile(JsonView jsonValue) : 
    m_profileNameHasBeenSet(false),
    m_transformJobDefinitionHasBeenSet(false)
{
  *this = jsonValue;
}

ModelPackageValidationProfile& ModelPackageValidationProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProfileName"))
  {
    m_profileName = jsonValue.GetString("ProfileName");

    m_profileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransformJobDefinition"))
  {
    m_transformJobDefinition = jsonValue.GetObject("TransformJobDefinition");

    m_transformJobDefinitionHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelPackageValidationProfile::Jsonize() const
{
  JsonValue payload;

  if(m_profileNameHasBeenSet)
  {
   payload.WithString("ProfileName", m_profileName);

  }

  if(m_transformJobDefinitionHasBeenSet)
  {
   payload.WithObject("TransformJobDefinition", m_transformJobDefinition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
