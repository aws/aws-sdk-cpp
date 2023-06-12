/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/DisassociateFacesResult.h>
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

DisassociateFacesResult::DisassociateFacesResult() : 
    m_userStatus(UserStatus::NOT_SET)
{
}

DisassociateFacesResult::DisassociateFacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_userStatus(UserStatus::NOT_SET)
{
  *this = result;
}

DisassociateFacesResult& DisassociateFacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DisassociatedFaces"))
  {
    Aws::Utils::Array<JsonView> disassociatedFacesJsonList = jsonValue.GetArray("DisassociatedFaces");
    for(unsigned disassociatedFacesIndex = 0; disassociatedFacesIndex < disassociatedFacesJsonList.GetLength(); ++disassociatedFacesIndex)
    {
      m_disassociatedFaces.push_back(disassociatedFacesJsonList[disassociatedFacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnsuccessfulFaceDisassociations"))
  {
    Aws::Utils::Array<JsonView> unsuccessfulFaceDisassociationsJsonList = jsonValue.GetArray("UnsuccessfulFaceDisassociations");
    for(unsigned unsuccessfulFaceDisassociationsIndex = 0; unsuccessfulFaceDisassociationsIndex < unsuccessfulFaceDisassociationsJsonList.GetLength(); ++unsuccessfulFaceDisassociationsIndex)
    {
      m_unsuccessfulFaceDisassociations.push_back(unsuccessfulFaceDisassociationsJsonList[unsuccessfulFaceDisassociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UserStatus"))
  {
    m_userStatus = UserStatusMapper::GetUserStatusForName(jsonValue.GetString("UserStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
