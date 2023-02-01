/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/WorkflowListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

WorkflowListItem::WorkflowListItem() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_digestHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(WorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(WorkflowType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

WorkflowListItem::WorkflowListItem(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_digestHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(WorkflowStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(WorkflowType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowListItem& WorkflowListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("digest"))
  {
    m_digest = jsonValue.GetString("digest");

    m_digestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowStatusMapper::GetWorkflowStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowListItem::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_digestHasBeenSet)
  {
   payload.WithString("digest", m_digest);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", WorkflowStatusMapper::GetNameForWorkflowStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", WorkflowTypeMapper::GetNameForWorkflowType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
