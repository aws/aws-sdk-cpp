/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetDocumentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDocumentResult::GetDocumentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDocumentResult& GetDocumentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VersionName"))
  {
    m_versionName = jsonValue.GetString("VersionName");
    m_versionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");
    m_documentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = DocumentStatusMapper::GetDocumentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusInformation"))
  {
    m_statusInformation = jsonValue.GetString("StatusInformation");
    m_statusInformationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DocumentType"))
  {
    m_documentType = DocumentTypeMapper::GetDocumentTypeForName(jsonValue.GetString("DocumentType"));
    m_documentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DocumentFormat"))
  {
    m_documentFormat = DocumentFormatMapper::GetDocumentFormatForName(jsonValue.GetString("DocumentFormat"));
    m_documentFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Requires"))
  {
    Aws::Utils::Array<JsonView> requiresJsonList = jsonValue.GetArray("Requires");
    for(unsigned requiresIndex = 0; requiresIndex < requiresJsonList.GetLength(); ++requiresIndex)
    {
      m_requires.push_back(requiresJsonList[requiresIndex].AsObject());
    }
    m_requiresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttachmentsContent"))
  {
    Aws::Utils::Array<JsonView> attachmentsContentJsonList = jsonValue.GetArray("AttachmentsContent");
    for(unsigned attachmentsContentIndex = 0; attachmentsContentIndex < attachmentsContentJsonList.GetLength(); ++attachmentsContentIndex)
    {
      m_attachmentsContent.push_back(attachmentsContentJsonList[attachmentsContentIndex].AsObject());
    }
    m_attachmentsContentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReviewStatus"))
  {
    m_reviewStatus = ReviewStatusMapper::GetReviewStatusForName(jsonValue.GetString("ReviewStatus"));
    m_reviewStatusHasBeenSet = true;
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
