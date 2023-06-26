/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/JobPostLaunchActionsLaunchStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

JobPostLaunchActionsLaunchStatus::JobPostLaunchActionsLaunchStatus() : 
    m_executionIDHasBeenSet(false),
    m_executionStatus(PostLaunchActionExecutionStatus::NOT_SET),
    m_executionStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_ssmDocumentHasBeenSet(false),
    m_ssmDocumentType(SsmDocumentType::NOT_SET),
    m_ssmDocumentTypeHasBeenSet(false)
{
}

JobPostLaunchActionsLaunchStatus::JobPostLaunchActionsLaunchStatus(JsonView jsonValue) : 
    m_executionIDHasBeenSet(false),
    m_executionStatus(PostLaunchActionExecutionStatus::NOT_SET),
    m_executionStatusHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_ssmDocumentHasBeenSet(false),
    m_ssmDocumentType(SsmDocumentType::NOT_SET),
    m_ssmDocumentTypeHasBeenSet(false)
{
  *this = jsonValue;
}

JobPostLaunchActionsLaunchStatus& JobPostLaunchActionsLaunchStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionID"))
  {
    m_executionID = jsonValue.GetString("executionID");

    m_executionIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionStatus"))
  {
    m_executionStatus = PostLaunchActionExecutionStatusMapper::GetPostLaunchActionExecutionStatusForName(jsonValue.GetString("executionStatus"));

    m_executionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssmDocument"))
  {
    m_ssmDocument = jsonValue.GetObject("ssmDocument");

    m_ssmDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssmDocumentType"))
  {
    m_ssmDocumentType = SsmDocumentTypeMapper::GetSsmDocumentTypeForName(jsonValue.GetString("ssmDocumentType"));

    m_ssmDocumentTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue JobPostLaunchActionsLaunchStatus::Jsonize() const
{
  JsonValue payload;

  if(m_executionIDHasBeenSet)
  {
   payload.WithString("executionID", m_executionID);

  }

  if(m_executionStatusHasBeenSet)
  {
   payload.WithString("executionStatus", PostLaunchActionExecutionStatusMapper::GetNameForPostLaunchActionExecutionStatus(m_executionStatus));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_ssmDocumentHasBeenSet)
  {
   payload.WithObject("ssmDocument", m_ssmDocument.Jsonize());

  }

  if(m_ssmDocumentTypeHasBeenSet)
  {
   payload.WithString("ssmDocumentType", SsmDocumentTypeMapper::GetNameForSsmDocumentType(m_ssmDocumentType));
  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
