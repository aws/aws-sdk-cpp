/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/AssociateFacesResult.h>
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

AssociateFacesResult::AssociateFacesResult() : 
    m_userStatus(UserStatus::NOT_SET)
{
}

AssociateFacesResult::AssociateFacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_userStatus(UserStatus::NOT_SET)
{
  *this = result;
}

AssociateFacesResult& AssociateFacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AssociatedFaces"))
  {
    Aws::Utils::Array<JsonView> associatedFacesJsonList = jsonValue.GetArray("AssociatedFaces");
    for(unsigned associatedFacesIndex = 0; associatedFacesIndex < associatedFacesJsonList.GetLength(); ++associatedFacesIndex)
    {
      m_associatedFaces.push_back(associatedFacesJsonList[associatedFacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnsuccessfulFaceAssociations"))
  {
    Aws::Utils::Array<JsonView> unsuccessfulFaceAssociationsJsonList = jsonValue.GetArray("UnsuccessfulFaceAssociations");
    for(unsigned unsuccessfulFaceAssociationsIndex = 0; unsuccessfulFaceAssociationsIndex < unsuccessfulFaceAssociationsJsonList.GetLength(); ++unsuccessfulFaceAssociationsIndex)
    {
      m_unsuccessfulFaceAssociations.push_back(unsuccessfulFaceAssociationsJsonList[unsuccessfulFaceAssociationsIndex].AsObject());
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
