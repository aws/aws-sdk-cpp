/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateTemplateProvider.h>
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

UpdateTemplateProvider::UpdateTemplateProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateTemplateProvider& UpdateTemplateProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CfnTemplateProvider"))
  {
    m_cfnTemplateProvider = jsonValue.GetObject("CfnTemplateProvider");
    m_cfnTemplateProviderHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateTemplateProvider::Jsonize() const
{
  JsonValue payload;

  if(m_cfnTemplateProviderHasBeenSet)
  {
   payload.WithObject("CfnTemplateProvider", m_cfnTemplateProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
