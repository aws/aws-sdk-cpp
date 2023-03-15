﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ArchiveWaveResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ArchiveWaveResult::ArchiveWaveResult() : 
    m_isArchived(false)
{
}

ArchiveWaveResult::ArchiveWaveResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isArchived(false)
{
  *this = result;
}

ArchiveWaveResult& ArchiveWaveResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetString("creationDateTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("isArchived"))
  {
    m_isArchived = jsonValue.GetBool("isArchived");

  }

  if(jsonValue.ValueExists("lastModifiedDateTime"))
  {
    m_lastModifiedDateTime = jsonValue.GetString("lastModifiedDateTime");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("waveAggregatedStatus"))
  {
    m_waveAggregatedStatus = jsonValue.GetObject("waveAggregatedStatus");

  }

  if(jsonValue.ValueExists("waveID"))
  {
    m_waveID = jsonValue.GetString("waveID");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
