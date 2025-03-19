/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResourceConfigForUpdate.h>
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

ResourceConfigForUpdate::ResourceConfigForUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceConfigForUpdate& ResourceConfigForUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeepAlivePeriodInSeconds"))
  {
    m_keepAlivePeriodInSeconds = jsonValue.GetInteger("KeepAlivePeriodInSeconds");
    m_keepAlivePeriodInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceConfigForUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_keepAlivePeriodInSecondsHasBeenSet)
  {
   payload.WithInteger("KeepAlivePeriodInSeconds", m_keepAlivePeriodInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
