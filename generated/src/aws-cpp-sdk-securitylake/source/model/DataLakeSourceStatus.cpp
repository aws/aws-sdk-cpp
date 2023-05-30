/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/DataLakeSourceStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

DataLakeSourceStatus::DataLakeSourceStatus() : 
    m_resourceHasBeenSet(false),
    m_status(SourceCollectionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DataLakeSourceStatus::DataLakeSourceStatus(JsonView jsonValue) : 
    m_resourceHasBeenSet(false),
    m_status(SourceCollectionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DataLakeSourceStatus& DataLakeSourceStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SourceCollectionStatusMapper::GetSourceCollectionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DataLakeSourceStatus::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", SourceCollectionStatusMapper::GetNameForSourceCollectionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
