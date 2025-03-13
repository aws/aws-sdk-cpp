/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/taxsettings/model/GetTaxRegistrationDocumentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::TaxSettings::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTaxRegistrationDocumentResult::GetTaxRegistrationDocumentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTaxRegistrationDocumentResult& GetTaxRegistrationDocumentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("destinationFilePath"))
  {
    m_destinationFilePath = jsonValue.GetString("destinationFilePath");
    m_destinationFilePathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("presignedS3Url"))
  {
    m_presignedS3Url = jsonValue.GetString("presignedS3Url");
    m_presignedS3UrlHasBeenSet = true;
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
