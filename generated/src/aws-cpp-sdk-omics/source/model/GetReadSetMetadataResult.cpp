/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReadSetMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReadSetMetadataResult::GetReadSetMetadataResult() : 
    m_fileType(FileType::NOT_SET),
    m_status(ReadSetStatus::NOT_SET)
{
}

GetReadSetMetadataResult::GetReadSetMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_fileType(FileType::NOT_SET),
    m_status(ReadSetStatus::NOT_SET)
{
  *this = result;
}

GetReadSetMetadataResult& GetReadSetMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("fileType"))
  {
    m_fileType = FileTypeMapper::GetFileTypeForName(jsonValue.GetString("fileType"));

  }

  if(jsonValue.ValueExists("files"))
  {
    m_files = jsonValue.GetObject("files");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("referenceArn"))
  {
    m_referenceArn = jsonValue.GetString("referenceArn");

  }

  if(jsonValue.ValueExists("sampleId"))
  {
    m_sampleId = jsonValue.GetString("sampleId");

  }

  if(jsonValue.ValueExists("sequenceInformation"))
  {
    m_sequenceInformation = jsonValue.GetObject("sequenceInformation");

  }

  if(jsonValue.ValueExists("sequenceStoreId"))
  {
    m_sequenceStoreId = jsonValue.GetString("sequenceStoreId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetStatusMapper::GetReadSetStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("subjectId"))
  {
    m_subjectId = jsonValue.GetString("subjectId");

  }



  return *this;
}
