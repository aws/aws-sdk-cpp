/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/GetDocumentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDocumentResult::GetDocumentResult() : 
    m_status(DocumentStatus::NOT_SET),
    m_documentType(DocumentType::NOT_SET),
    m_documentFormat(DocumentFormat::NOT_SET),
    m_reviewStatus(ReviewStatus::NOT_SET)
{
}

GetDocumentResult::GetDocumentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DocumentStatus::NOT_SET),
    m_documentType(DocumentType::NOT_SET),
    m_documentFormat(DocumentFormat::NOT_SET),
    m_reviewStatus(ReviewStatus::NOT_SET)
{
  *this = result;
}

GetDocumentResult& GetDocumentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

  }

  if(jsonValue.ValueExists("VersionName"))
  {
    m_versionName = jsonValue.GetString("VersionName");

  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DocumentStatusMapper::GetDocumentStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusInformation"))
  {
    m_statusInformation = jsonValue.GetString("StatusInformation");

  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

  }

  if(jsonValue.ValueExists("DocumentType"))
  {
    m_documentType = DocumentTypeMapper::GetDocumentTypeForName(jsonValue.GetString("DocumentType"));

  }

  if(jsonValue.ValueExists("DocumentFormat"))
  {
    m_documentFormat = DocumentFormatMapper::GetDocumentFormatForName(jsonValue.GetString("DocumentFormat"));

  }

  if(jsonValue.ValueExists("Requires"))
  {
    Aws::Utils::Array<JsonView> requiresJsonList = jsonValue.GetArray("Requires");
    for(unsigned requiresIndex = 0; requiresIndex < requiresJsonList.GetLength(); ++requiresIndex)
    {
      m_requires.push_back(requiresJsonList[requiresIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AttachmentsContent"))
  {
    Aws::Utils::Array<JsonView> attachmentsContentJsonList = jsonValue.GetArray("AttachmentsContent");
    for(unsigned attachmentsContentIndex = 0; attachmentsContentIndex < attachmentsContentJsonList.GetLength(); ++attachmentsContentIndex)
    {
      m_attachmentsContent.push_back(attachmentsContentJsonList[attachmentsContentIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ReviewStatus"))
  {
    m_reviewStatus = ReviewStatusMapper::GetReviewStatusForName(jsonValue.GetString("ReviewStatus"));

  }



  return *this;
}
