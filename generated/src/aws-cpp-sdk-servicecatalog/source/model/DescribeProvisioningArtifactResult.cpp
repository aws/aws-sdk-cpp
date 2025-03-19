/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeProvisioningArtifactResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProvisioningArtifactResult::DescribeProvisioningArtifactResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProvisioningArtifactResult& DescribeProvisioningArtifactResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisioningArtifactDetail"))
  {
    m_provisioningArtifactDetail = jsonValue.GetObject("ProvisioningArtifactDetail");
    m_provisioningArtifactDetailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Info"))
  {
    Aws::Map<Aws::String, JsonView> infoJsonMap = jsonValue.GetObject("Info").GetAllObjects();
    for(auto& infoItem : infoJsonMap)
    {
      m_info[infoItem.first] = infoItem.second.AsString();
    }
    m_infoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisioningArtifactParameters"))
  {
    Aws::Utils::Array<JsonView> provisioningArtifactParametersJsonList = jsonValue.GetArray("ProvisioningArtifactParameters");
    for(unsigned provisioningArtifactParametersIndex = 0; provisioningArtifactParametersIndex < provisioningArtifactParametersJsonList.GetLength(); ++provisioningArtifactParametersIndex)
    {
      m_provisioningArtifactParameters.push_back(provisioningArtifactParametersJsonList[provisioningArtifactParametersIndex].AsObject());
    }
    m_provisioningArtifactParametersHasBeenSet = true;
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
