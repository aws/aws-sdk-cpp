/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceHubAccessConfig.h>
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

InferenceHubAccessConfig::InferenceHubAccessConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceHubAccessConfig& InferenceHubAccessConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HubContentArn"))
  {
    m_hubContentArn = jsonValue.GetString("HubContentArn");
    m_hubContentArnHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceHubAccessConfig::Jsonize() const
{
  JsonValue payload;

  if(m_hubContentArnHasBeenSet)
  {
   payload.WithString("HubContentArn", m_hubContentArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
