/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeSnapshotScheduleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSnapshotScheduleResult::DescribeSnapshotScheduleResult() : 
    m_startAt(0),
    m_recurrenceInHours(0)
{
}

DescribeSnapshotScheduleResult::DescribeSnapshotScheduleResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_startAt(0),
    m_recurrenceInHours(0)
{
  *this = result;
}

DescribeSnapshotScheduleResult& DescribeSnapshotScheduleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VolumeARN"))
  {
    m_volumeARN = jsonValue.GetString("VolumeARN");

  }

  if(jsonValue.ValueExists("StartAt"))
  {
    m_startAt = jsonValue.GetInteger("StartAt");

  }

  if(jsonValue.ValueExists("RecurrenceInHours"))
  {
    m_recurrenceInHours = jsonValue.GetInteger("RecurrenceInHours");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Timezone"))
  {
    m_timezone = jsonValue.GetString("Timezone");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }



  return *this;
}
