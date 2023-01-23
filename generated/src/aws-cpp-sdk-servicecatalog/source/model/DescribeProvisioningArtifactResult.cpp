/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeProvisioningArtifactResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProvisioningArtifactResult::DescribeProvisioningArtifactResult() : 
    m_status(Status::NOT_SET)
{
}

DescribeProvisioningArtifactResult::DescribeProvisioningArtifactResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(Status::NOT_SET)
{
  *this = result;
}

DescribeProvisioningArtifactResult& DescribeProvisioningArtifactResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisioningArtifactDetail"))
  {
    m_provisioningArtifactDetail = jsonValue.GetObject("ProvisioningArtifactDetail");

  }

  if(jsonValue.ValueExists("Info"))
  {
    Aws::Map<Aws::String, JsonView> infoJsonMap = jsonValue.GetObject("Info").GetAllObjects();
    for(auto& infoItem : infoJsonMap)
    {
      m_info[infoItem.first] = infoItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

  }



  return *this;
}
