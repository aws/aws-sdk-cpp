/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/CloudMaskingConfigInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

CloudMaskingConfigInput::CloudMaskingConfigInput()
{
}

CloudMaskingConfigInput::CloudMaskingConfigInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudMaskingConfigInput& CloudMaskingConfigInput::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue CloudMaskingConfigInput::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
