/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AlgorithmStatusItem.h>
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

AlgorithmStatusItem::AlgorithmStatusItem() : 
    m_nameHasBeenSet(false),
    m_status(DetailedAlgorithmStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

AlgorithmStatusItem::AlgorithmStatusItem(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_status(DetailedAlgorithmStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

AlgorithmStatusItem& AlgorithmStatusItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DetailedAlgorithmStatusMapper::GetDetailedAlgorithmStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue AlgorithmStatusItem::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DetailedAlgorithmStatusMapper::GetNameForDetailedAlgorithmStatus(m_status));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
