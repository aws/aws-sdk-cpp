/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterInstanceStatusDetails.h>
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

ClusterInstanceStatusDetails::ClusterInstanceStatusDetails() : 
    m_status(ClusterInstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ClusterInstanceStatusDetails::ClusterInstanceStatusDetails(JsonView jsonValue) : 
    m_status(ClusterInstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterInstanceStatusDetails& ClusterInstanceStatusDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ClusterInstanceStatusMapper::GetClusterInstanceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterInstanceStatusDetails::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ClusterInstanceStatusMapper::GetNameForClusterInstanceStatus(m_status));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
