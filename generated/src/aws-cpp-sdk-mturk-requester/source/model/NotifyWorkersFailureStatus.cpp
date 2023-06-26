/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/NotifyWorkersFailureStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

NotifyWorkersFailureStatus::NotifyWorkersFailureStatus() : 
    m_notifyWorkersFailureCode(NotifyWorkersFailureCode::NOT_SET),
    m_notifyWorkersFailureCodeHasBeenSet(false),
    m_notifyWorkersFailureMessageHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
}

NotifyWorkersFailureStatus::NotifyWorkersFailureStatus(JsonView jsonValue) : 
    m_notifyWorkersFailureCode(NotifyWorkersFailureCode::NOT_SET),
    m_notifyWorkersFailureCodeHasBeenSet(false),
    m_notifyWorkersFailureMessageHasBeenSet(false),
    m_workerIdHasBeenSet(false)
{
  *this = jsonValue;
}

NotifyWorkersFailureStatus& NotifyWorkersFailureStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NotifyWorkersFailureCode"))
  {
    m_notifyWorkersFailureCode = NotifyWorkersFailureCodeMapper::GetNotifyWorkersFailureCodeForName(jsonValue.GetString("NotifyWorkersFailureCode"));

    m_notifyWorkersFailureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotifyWorkersFailureMessage"))
  {
    m_notifyWorkersFailureMessage = jsonValue.GetString("NotifyWorkersFailureMessage");

    m_notifyWorkersFailureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkerId"))
  {
    m_workerId = jsonValue.GetString("WorkerId");

    m_workerIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NotifyWorkersFailureStatus::Jsonize() const
{
  JsonValue payload;

  if(m_notifyWorkersFailureCodeHasBeenSet)
  {
   payload.WithString("NotifyWorkersFailureCode", NotifyWorkersFailureCodeMapper::GetNameForNotifyWorkersFailureCode(m_notifyWorkersFailureCode));
  }

  if(m_notifyWorkersFailureMessageHasBeenSet)
  {
   payload.WithString("NotifyWorkersFailureMessage", m_notifyWorkersFailureMessage);

  }

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
