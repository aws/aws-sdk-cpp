/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/LabelCounters.h>
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

LabelCounters::LabelCounters() : 
    m_totalLabeled(0),
    m_totalLabeledHasBeenSet(false),
    m_humanLabeled(0),
    m_humanLabeledHasBeenSet(false),
    m_machineLabeled(0),
    m_machineLabeledHasBeenSet(false),
    m_failedNonRetryableError(0),
    m_failedNonRetryableErrorHasBeenSet(false),
    m_unlabeled(0),
    m_unlabeledHasBeenSet(false)
{
}

LabelCounters::LabelCounters(JsonView jsonValue) : 
    m_totalLabeled(0),
    m_totalLabeledHasBeenSet(false),
    m_humanLabeled(0),
    m_humanLabeledHasBeenSet(false),
    m_machineLabeled(0),
    m_machineLabeledHasBeenSet(false),
    m_failedNonRetryableError(0),
    m_failedNonRetryableErrorHasBeenSet(false),
    m_unlabeled(0),
    m_unlabeledHasBeenSet(false)
{
  *this = jsonValue;
}

LabelCounters& LabelCounters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalLabeled"))
  {
    m_totalLabeled = jsonValue.GetInteger("TotalLabeled");

    m_totalLabeledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HumanLabeled"))
  {
    m_humanLabeled = jsonValue.GetInteger("HumanLabeled");

    m_humanLabeledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MachineLabeled"))
  {
    m_machineLabeled = jsonValue.GetInteger("MachineLabeled");

    m_machineLabeledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailedNonRetryableError"))
  {
    m_failedNonRetryableError = jsonValue.GetInteger("FailedNonRetryableError");

    m_failedNonRetryableErrorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unlabeled"))
  {
    m_unlabeled = jsonValue.GetInteger("Unlabeled");

    m_unlabeledHasBeenSet = true;
  }

  return *this;
}

JsonValue LabelCounters::Jsonize() const
{
  JsonValue payload;

  if(m_totalLabeledHasBeenSet)
  {
   payload.WithInteger("TotalLabeled", m_totalLabeled);

  }

  if(m_humanLabeledHasBeenSet)
  {
   payload.WithInteger("HumanLabeled", m_humanLabeled);

  }

  if(m_machineLabeledHasBeenSet)
  {
   payload.WithInteger("MachineLabeled", m_machineLabeled);

  }

  if(m_failedNonRetryableErrorHasBeenSet)
  {
   payload.WithInteger("FailedNonRetryableError", m_failedNonRetryableError);

  }

  if(m_unlabeledHasBeenSet)
  {
   payload.WithInteger("Unlabeled", m_unlabeled);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
