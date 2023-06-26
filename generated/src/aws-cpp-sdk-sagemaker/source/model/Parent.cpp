/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Parent.h>
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

Parent::Parent() : 
    m_trialNameHasBeenSet(false),
    m_experimentNameHasBeenSet(false)
{
}

Parent::Parent(JsonView jsonValue) : 
    m_trialNameHasBeenSet(false),
    m_experimentNameHasBeenSet(false)
{
  *this = jsonValue;
}

Parent& Parent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TrialName"))
  {
    m_trialName = jsonValue.GetString("TrialName");

    m_trialNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExperimentName"))
  {
    m_experimentName = jsonValue.GetString("ExperimentName");

    m_experimentNameHasBeenSet = true;
  }

  return *this;
}

JsonValue Parent::Jsonize() const
{
  JsonValue payload;

  if(m_trialNameHasBeenSet)
  {
   payload.WithString("TrialName", m_trialName);

  }

  if(m_experimentNameHasBeenSet)
  {
   payload.WithString("ExperimentName", m_experimentName);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
