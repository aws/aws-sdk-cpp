/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateMultipartReadSetUploadResult.h>
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

CreateMultipartReadSetUploadResult::CreateMultipartReadSetUploadResult() : 
    m_sourceFileType(FileType::NOT_SET)
{
}

CreateMultipartReadSetUploadResult::CreateMultipartReadSetUploadResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_sourceFileType(FileType::NOT_SET)
{
  *this = result;
}

CreateMultipartReadSetUploadResult& CreateMultipartReadSetUploadResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sequenceStoreId"))
  {
    m_sequenceStoreId = jsonValue.GetString("sequenceStoreId");

  }

  if(jsonValue.ValueExists("uploadId"))
  {
    m_uploadId = jsonValue.GetString("uploadId");

  }

  if(jsonValue.ValueExists("sourceFileType"))
  {
    m_sourceFileType = FileTypeMapper::GetFileTypeForName(jsonValue.GetString("sourceFileType"));

  }

  if(jsonValue.ValueExists("subjectId"))
  {
    m_subjectId = jsonValue.GetString("subjectId");

  }

  if(jsonValue.ValueExists("sampleId"))
  {
    m_sampleId = jsonValue.GetString("sampleId");

  }

  if(jsonValue.ValueExists("generatedFrom"))
  {
    m_generatedFrom = jsonValue.GetString("generatedFrom");

  }

  if(jsonValue.ValueExists("referenceArn"))
  {
    m_referenceArn = jsonValue.GetString("referenceArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
