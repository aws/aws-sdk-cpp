/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeProjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProjectResult::DescribeProjectResult() : 
    m_projectStatus(ProjectStatus::NOT_SET)
{
}

DescribeProjectResult::DescribeProjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_projectStatus(ProjectStatus::NOT_SET)
{
  *this = result;
}

DescribeProjectResult& DescribeProjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProjectArn"))
  {
    m_projectArn = jsonValue.GetString("ProjectArn");

  }

  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");

  }

  if(jsonValue.ValueExists("ProjectId"))
  {
    m_projectId = jsonValue.GetString("ProjectId");

  }

  if(jsonValue.ValueExists("ProjectDescription"))
  {
    m_projectDescription = jsonValue.GetString("ProjectDescription");

  }

  if(jsonValue.ValueExists("ServiceCatalogProvisioningDetails"))
  {
    m_serviceCatalogProvisioningDetails = jsonValue.GetObject("ServiceCatalogProvisioningDetails");

  }

  if(jsonValue.ValueExists("ServiceCatalogProvisionedProductDetails"))
  {
    m_serviceCatalogProvisionedProductDetails = jsonValue.GetObject("ServiceCatalogProvisionedProductDetails");

  }

  if(jsonValue.ValueExists("ProjectStatus"))
  {
    m_projectStatus = ProjectStatusMapper::GetProjectStatusForName(jsonValue.GetString("ProjectStatus"));

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
