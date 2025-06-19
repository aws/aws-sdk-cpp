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

DescribeProjectResult::DescribeProjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProjectResult& DescribeProjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProjectArn"))
  {
    m_projectArn = jsonValue.GetString("ProjectArn");
    m_projectArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProjectName"))
  {
    m_projectName = jsonValue.GetString("ProjectName");
    m_projectNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProjectId"))
  {
    m_projectId = jsonValue.GetString("ProjectId");
    m_projectIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProjectDescription"))
  {
    m_projectDescription = jsonValue.GetString("ProjectDescription");
    m_projectDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceCatalogProvisioningDetails"))
  {
    m_serviceCatalogProvisioningDetails = jsonValue.GetObject("ServiceCatalogProvisioningDetails");
    m_serviceCatalogProvisioningDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServiceCatalogProvisionedProductDetails"))
  {
    m_serviceCatalogProvisionedProductDetails = jsonValue.GetObject("ServiceCatalogProvisionedProductDetails");
    m_serviceCatalogProvisionedProductDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProjectStatus"))
  {
    m_projectStatus = ProjectStatusMapper::GetProjectStatusForName(jsonValue.GetString("ProjectStatus"));
    m_projectStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TemplateProviderDetails"))
  {
    Aws::Utils::Array<JsonView> templateProviderDetailsJsonList = jsonValue.GetArray("TemplateProviderDetails");
    for(unsigned templateProviderDetailsIndex = 0; templateProviderDetailsIndex < templateProviderDetailsJsonList.GetLength(); ++templateProviderDetailsIndex)
    {
      m_templateProviderDetails.push_back(templateProviderDetailsJsonList[templateProviderDetailsIndex].AsObject());
    }
    m_templateProviderDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");
    m_lastModifiedByHasBeenSet = true;
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
