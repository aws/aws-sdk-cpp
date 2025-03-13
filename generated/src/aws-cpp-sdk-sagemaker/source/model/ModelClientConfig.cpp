/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelClientConfig.h>
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

ModelClientConfig::ModelClientConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelClientConfig& ModelClientConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvocationsTimeoutInSeconds"))
  {
    m_invocationsTimeoutInSeconds = jsonValue.GetInteger("InvocationsTimeoutInSeconds");
    m_invocationsTimeoutInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvocationsMaxRetries"))
  {
    m_invocationsMaxRetries = jsonValue.GetInteger("InvocationsMaxRetries");
    m_invocationsMaxRetriesHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelClientConfig::Jsonize() const
{
  JsonValue payload;

  if(m_invocationsTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("InvocationsTimeoutInSeconds", m_invocationsTimeoutInSeconds);

  }

  if(m_invocationsMaxRetriesHasBeenSet)
  {
   payload.WithInteger("InvocationsMaxRetries", m_invocationsMaxRetries);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
