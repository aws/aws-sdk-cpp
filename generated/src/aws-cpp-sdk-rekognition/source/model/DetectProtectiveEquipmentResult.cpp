﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DetectProtectiveEquipmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectProtectiveEquipmentResult::DetectProtectiveEquipmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetectProtectiveEquipmentResult& DetectProtectiveEquipmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProtectiveEquipmentModelVersion"))
  {
    m_protectiveEquipmentModelVersion = jsonValue.GetString("ProtectiveEquipmentModelVersion");
    m_protectiveEquipmentModelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Persons"))
  {
    Aws::Utils::Array<JsonView> personsJsonList = jsonValue.GetArray("Persons");
    for(unsigned personsIndex = 0; personsIndex < personsJsonList.GetLength(); ++personsIndex)
    {
      m_persons.push_back(personsJsonList[personsIndex].AsObject());
    }
    m_personsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Summary"))
  {
    m_summary = jsonValue.GetObject("Summary");
    m_summaryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
