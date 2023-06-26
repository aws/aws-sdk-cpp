/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/WarmPoolStatus.h>
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

WarmPoolStatus::WarmPoolStatus() : 
    m_status(WarmPoolResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_resourceRetainedBillableTimeInSeconds(0),
    m_resourceRetainedBillableTimeInSecondsHasBeenSet(false),
    m_reusedByJobHasBeenSet(false)
{
}

WarmPoolStatus::WarmPoolStatus(JsonView jsonValue) : 
    m_status(WarmPoolResourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_resourceRetainedBillableTimeInSeconds(0),
    m_resourceRetainedBillableTimeInSecondsHasBeenSet(false),
    m_reusedByJobHasBeenSet(false)
{
  *this = jsonValue;
}

WarmPoolStatus& WarmPoolStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = WarmPoolResourceStatusMapper::GetWarmPoolResourceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceRetainedBillableTimeInSeconds"))
  {
    m_resourceRetainedBillableTimeInSeconds = jsonValue.GetInteger("ResourceRetainedBillableTimeInSeconds");

    m_resourceRetainedBillableTimeInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReusedByJob"))
  {
    m_reusedByJob = jsonValue.GetString("ReusedByJob");

    m_reusedByJobHasBeenSet = true;
  }

  return *this;
}

JsonValue WarmPoolStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", WarmPoolResourceStatusMapper::GetNameForWarmPoolResourceStatus(m_status));
  }

  if(m_resourceRetainedBillableTimeInSecondsHasBeenSet)
  {
   payload.WithInteger("ResourceRetainedBillableTimeInSeconds", m_resourceRetainedBillableTimeInSeconds);

  }

  if(m_reusedByJobHasBeenSet)
  {
   payload.WithString("ReusedByJob", m_reusedByJob);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
