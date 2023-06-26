/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/IncidentRecordSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

IncidentRecordSource::IncidentRecordSource() : 
    m_createdByHasBeenSet(false),
    m_invokedByHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

IncidentRecordSource::IncidentRecordSource(JsonView jsonValue) : 
    m_createdByHasBeenSet(false),
    m_invokedByHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

IncidentRecordSource& IncidentRecordSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invokedBy"))
  {
    m_invokedBy = jsonValue.GetString("invokedBy");

    m_invokedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue IncidentRecordSource::Jsonize() const
{
  JsonValue payload;

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_invokedByHasBeenSet)
  {
   payload.WithString("invokedBy", m_invokedBy);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
