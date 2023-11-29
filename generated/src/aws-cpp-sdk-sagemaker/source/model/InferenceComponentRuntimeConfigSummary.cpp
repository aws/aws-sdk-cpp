/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentRuntimeConfigSummary.h>
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

InferenceComponentRuntimeConfigSummary::InferenceComponentRuntimeConfigSummary() : 
    m_desiredCopyCount(0),
    m_desiredCopyCountHasBeenSet(false),
    m_currentCopyCount(0),
    m_currentCopyCountHasBeenSet(false)
{
}

InferenceComponentRuntimeConfigSummary::InferenceComponentRuntimeConfigSummary(JsonView jsonValue) : 
    m_desiredCopyCount(0),
    m_desiredCopyCountHasBeenSet(false),
    m_currentCopyCount(0),
    m_currentCopyCountHasBeenSet(false)
{
  *this = jsonValue;
}

InferenceComponentRuntimeConfigSummary& InferenceComponentRuntimeConfigSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DesiredCopyCount"))
  {
    m_desiredCopyCount = jsonValue.GetInteger("DesiredCopyCount");

    m_desiredCopyCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentCopyCount"))
  {
    m_currentCopyCount = jsonValue.GetInteger("CurrentCopyCount");

    m_currentCopyCountHasBeenSet = true;
  }

  return *this;
}

JsonValue InferenceComponentRuntimeConfigSummary::Jsonize() const
{
  JsonValue payload;

  if(m_desiredCopyCountHasBeenSet)
  {
   payload.WithInteger("DesiredCopyCount", m_desiredCopyCount);

  }

  if(m_currentCopyCountHasBeenSet)
  {
   payload.WithInteger("CurrentCopyCount", m_currentCopyCount);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
