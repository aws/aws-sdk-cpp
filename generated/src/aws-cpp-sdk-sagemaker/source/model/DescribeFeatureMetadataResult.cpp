/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeFeatureMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFeatureMetadataResult::DescribeFeatureMetadataResult() : 
    m_featureType(FeatureType::NOT_SET)
{
}

DescribeFeatureMetadataResult::DescribeFeatureMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_featureType(FeatureType::NOT_SET)
{
  *this = result;
}

DescribeFeatureMetadataResult& DescribeFeatureMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FeatureGroupArn"))
  {
    m_featureGroupArn = jsonValue.GetString("FeatureGroupArn");

  }

  if(jsonValue.ValueExists("FeatureGroupName"))
  {
    m_featureGroupName = jsonValue.GetString("FeatureGroupName");

  }

  if(jsonValue.ValueExists("FeatureName"))
  {
    m_featureName = jsonValue.GetString("FeatureName");

  }

  if(jsonValue.ValueExists("FeatureType"))
  {
    m_featureType = FeatureTypeMapper::GetFeatureTypeForName(jsonValue.GetString("FeatureType"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("Parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
  }



  return *this;
}
