/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListAnnotationImportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnnotationImportJobsResult::ListAnnotationImportJobsResult()
{
}

ListAnnotationImportJobsResult::ListAnnotationImportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnnotationImportJobsResult& ListAnnotationImportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("annotationImportJobs"))
  {
    Aws::Utils::Array<JsonView> annotationImportJobsJsonList = jsonValue.GetArray("annotationImportJobs");
    for(unsigned annotationImportJobsIndex = 0; annotationImportJobsIndex < annotationImportJobsJsonList.GetLength(); ++annotationImportJobsIndex)
    {
      m_annotationImportJobs.push_back(annotationImportJobsJsonList[annotationImportJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
