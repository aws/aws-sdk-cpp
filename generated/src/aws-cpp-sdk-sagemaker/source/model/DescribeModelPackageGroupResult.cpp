﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeModelPackageGroupResult.h>
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

DescribeModelPackageGroupResult::DescribeModelPackageGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeModelPackageGroupResult& DescribeModelPackageGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelPackageGroupName"))
  {
    m_modelPackageGroupName = jsonValue.GetString("ModelPackageGroupName");
    m_modelPackageGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelPackageGroupArn"))
  {
    m_modelPackageGroupArn = jsonValue.GetString("ModelPackageGroupArn");
    m_modelPackageGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelPackageGroupDescription"))
  {
    m_modelPackageGroupDescription = jsonValue.GetString("ModelPackageGroupDescription");
    m_modelPackageGroupDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelPackageGroupStatus"))
  {
    m_modelPackageGroupStatus = ModelPackageGroupStatusMapper::GetModelPackageGroupStatusForName(jsonValue.GetString("ModelPackageGroupStatus"));
    m_modelPackageGroupStatusHasBeenSet = true;
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
