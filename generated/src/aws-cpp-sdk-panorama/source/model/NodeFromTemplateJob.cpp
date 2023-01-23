/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/NodeFromTemplateJob.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

NodeFromTemplateJob::NodeFromTemplateJob() : 
    m_createdTimeHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_status(NodeFromTemplateJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_templateType(TemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false)
{
}

NodeFromTemplateJob::NodeFromTemplateJob(JsonView jsonValue) : 
    m_createdTimeHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_status(NodeFromTemplateJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_templateType(TemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false)
{
  *this = jsonValue;
}

NodeFromTemplateJob& NodeFromTemplateJob::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeName"))
  {
    m_nodeName = jsonValue.GetString("NodeName");

    m_nodeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = NodeFromTemplateJobStatusMapper::GetNodeFromTemplateJobStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateType"))
  {
    m_templateType = TemplateTypeMapper::GetTemplateTypeForName(jsonValue.GetString("TemplateType"));

    m_templateTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue NodeFromTemplateJob::Jsonize() const
{
  JsonValue payload;

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("NodeName", m_nodeName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", NodeFromTemplateJobStatusMapper::GetNameForNodeFromTemplateJobStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("TemplateType", TemplateTypeMapper::GetNameForTemplateType(m_templateType));
  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
