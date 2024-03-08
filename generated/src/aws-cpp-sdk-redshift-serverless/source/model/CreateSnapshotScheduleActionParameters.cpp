/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/CreateSnapshotScheduleActionParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

CreateSnapshotScheduleActionParameters::CreateSnapshotScheduleActionParameters() : 
    m_namespaceNameHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_snapshotNamePrefixHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CreateSnapshotScheduleActionParameters::CreateSnapshotScheduleActionParameters(JsonView jsonValue) : 
    m_namespaceNameHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_snapshotNamePrefixHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

CreateSnapshotScheduleActionParameters& CreateSnapshotScheduleActionParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

    m_namespaceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retentionPeriod"))
  {
    m_retentionPeriod = jsonValue.GetInteger("retentionPeriod");

    m_retentionPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotNamePrefix"))
  {
    m_snapshotNamePrefix = jsonValue.GetString("snapshotNamePrefix");

    m_snapshotNamePrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateSnapshotScheduleActionParameters::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceNameHasBeenSet)
  {
   payload.WithString("namespaceName", m_namespaceName);

  }

  if(m_retentionPeriodHasBeenSet)
  {
   payload.WithInteger("retentionPeriod", m_retentionPeriod);

  }

  if(m_snapshotNamePrefixHasBeenSet)
  {
   payload.WithString("snapshotNamePrefix", m_snapshotNamePrefix);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
