﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateSequenceStoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateSequenceStoreResult::CreateSequenceStoreResult() : 
    m_eTagAlgorithmFamily(ETagAlgorithmFamily::NOT_SET),
    m_status(SequenceStoreStatus::NOT_SET)
{
}

CreateSequenceStoreResult::CreateSequenceStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateSequenceStoreResult()
{
  *this = result;
}

CreateSequenceStoreResult& CreateSequenceStoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("sseConfig"))
  {
    m_sseConfig = jsonValue.GetObject("sseConfig");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("fallbackLocation"))
  {
    m_fallbackLocation = jsonValue.GetString("fallbackLocation");

  }

  if(jsonValue.ValueExists("eTagAlgorithmFamily"))
  {
    m_eTagAlgorithmFamily = ETagAlgorithmFamilyMapper::GetETagAlgorithmFamilyForName(jsonValue.GetString("eTagAlgorithmFamily"));

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SequenceStoreStatusMapper::GetSequenceStoreStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }

  if(jsonValue.ValueExists("propagatedSetLevelTags"))
  {
    Aws::Utils::Array<JsonView> propagatedSetLevelTagsJsonList = jsonValue.GetArray("propagatedSetLevelTags");
    for(unsigned propagatedSetLevelTagsIndex = 0; propagatedSetLevelTagsIndex < propagatedSetLevelTagsJsonList.GetLength(); ++propagatedSetLevelTagsIndex)
    {
      m_propagatedSetLevelTags.push_back(propagatedSetLevelTagsJsonList[propagatedSetLevelTagsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("s3Access"))
  {
    m_s3Access = jsonValue.GetObject("s3Access");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
