﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/AssociateResourceShareResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateResourceShareResult::AssociateResourceShareResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateResourceShareResult& AssociateResourceShareResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceShareAssociations"))
  {
    Aws::Utils::Array<JsonView> resourceShareAssociationsJsonList = jsonValue.GetArray("resourceShareAssociations");
    for(unsigned resourceShareAssociationsIndex = 0; resourceShareAssociationsIndex < resourceShareAssociationsJsonList.GetLength(); ++resourceShareAssociationsIndex)
    {
      m_resourceShareAssociations.push_back(resourceShareAssociationsJsonList[resourceShareAssociationsIndex].AsObject());
    }
    m_resourceShareAssociationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
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
