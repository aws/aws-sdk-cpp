/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReadSetMetadataResult.h>
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

GetReadSetMetadataResult::GetReadSetMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetReadSetMetadataResult& GetReadSetMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("sequenceStoreId"))
  {
    m_sequenceStoreId = jsonValue.GetString("sequenceStoreId");
    m_sequenceStoreIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subjectId"))
  {
    m_subjectId = jsonValue.GetString("subjectId");
    m_subjectIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sampleId"))
  {
    m_sampleId = jsonValue.GetString("sampleId");
    m_sampleIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetStatusMapper::GetReadSetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
  if(jsonValue.ValueExists("fileType"))
  {
    m_fileType = FileTypeMapper::GetFileTypeForName(jsonValue.GetString("fileType"));
    m_fileTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sequenceInformation"))
  {
    m_sequenceInformation = jsonValue.GetObject("sequenceInformation");
    m_sequenceInformationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("referenceArn"))
  {
    m_referenceArn = jsonValue.GetString("referenceArn");
    m_referenceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("files"))
  {
    m_files = jsonValue.GetObject("files");
    m_filesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationType"))
  {
    m_creationType = CreationTypeMapper::GetCreationTypeForName(jsonValue.GetString("creationType"));
    m_creationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("etag"))
  {
    m_etag = jsonValue.GetObject("etag");
    m_etagHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationJobId"))
  {
    m_creationJobId = jsonValue.GetString("creationJobId");
    m_creationJobIdHasBeenSet = true;
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
