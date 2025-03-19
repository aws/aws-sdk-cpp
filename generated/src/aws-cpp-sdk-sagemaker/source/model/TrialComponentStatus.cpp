/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/TrialComponentStatus.h>
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

TrialComponentStatus::TrialComponentStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

TrialComponentStatus& TrialComponentStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PrimaryStatus"))
  {
    m_primaryStatus = TrialComponentPrimaryStatusMapper::GetTrialComponentPrimaryStatusForName(jsonValue.GetString("PrimaryStatus"));
    m_primaryStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue TrialComponentStatus::Jsonize() const
{
  JsonValue payload;

  if(m_primaryStatusHasBeenSet)
  {
   payload.WithString("PrimaryStatus", TrialComponentPrimaryStatusMapper::GetNameForTrialComponentPrimaryStatus(m_primaryStatus));
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
