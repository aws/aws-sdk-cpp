/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/UpdateSequenceStoreResult.h>
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

UpdateSequenceStoreResult::UpdateSequenceStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateSequenceStoreResult& UpdateSequenceStoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sseConfig"))
  {
    m_sseConfig = jsonValue.GetObject("sseConfig");
    m_sseConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("propagatedSetLevelTags"))
  {
    Aws::Utils::Array<JsonView> propagatedSetLevelTagsJsonList = jsonValue.GetArray("propagatedSetLevelTags");
    for(unsigned propagatedSetLevelTagsIndex = 0; propagatedSetLevelTagsIndex < propagatedSetLevelTagsJsonList.GetLength(); ++propagatedSetLevelTagsIndex)
    {
      m_propagatedSetLevelTags.push_back(propagatedSetLevelTagsJsonList[propagatedSetLevelTagsIndex].AsString());
    }
    m_propagatedSetLevelTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = SequenceStoreStatusMapper::GetSequenceStoreStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fallbackLocation"))
  {
    m_fallbackLocation = jsonValue.GetString("fallbackLocation");
    m_fallbackLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Access"))
  {
    m_s3Access = jsonValue.GetObject("s3Access");
    m_s3AccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eTagAlgorithmFamily"))
  {
    m_eTagAlgorithmFamily = ETagAlgorithmFamilyMapper::GetETagAlgorithmFamilyForName(jsonValue.GetString("eTagAlgorithmFamily"));
    m_eTagAlgorithmFamilyHasBeenSet = true;
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
