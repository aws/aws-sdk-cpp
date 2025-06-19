/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TemplateProviderDetail.h>
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

TemplateProviderDetail::TemplateProviderDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

TemplateProviderDetail& TemplateProviderDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CfnTemplateProviderDetail"))
  {
    m_cfnTemplateProviderDetail = jsonValue.GetObject("CfnTemplateProviderDetail");
    m_cfnTemplateProviderDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateProviderDetail::Jsonize() const
{
  JsonValue payload;

  if(m_cfnTemplateProviderDetailHasBeenSet)
  {
   payload.WithObject("CfnTemplateProviderDetail", m_cfnTemplateProviderDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
