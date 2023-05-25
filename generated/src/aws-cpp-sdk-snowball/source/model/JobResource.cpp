/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/JobResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

JobResource::JobResource() : 
    m_s3ResourcesHasBeenSet(false),
    m_lambdaResourcesHasBeenSet(false),
    m_ec2AmiResourcesHasBeenSet(false)
{
}

JobResource::JobResource(JsonView jsonValue) : 
    m_s3ResourcesHasBeenSet(false),
    m_lambdaResourcesHasBeenSet(false),
    m_ec2AmiResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

JobResource& JobResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Resources"))
  {
    Aws::Utils::Array<JsonView> s3ResourcesJsonList = jsonValue.GetArray("S3Resources");
    for(unsigned s3ResourcesIndex = 0; s3ResourcesIndex < s3ResourcesJsonList.GetLength(); ++s3ResourcesIndex)
    {
      m_s3Resources.push_back(s3ResourcesJsonList[s3ResourcesIndex].AsObject());
    }
    m_s3ResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaResources"))
  {
    Aws::Utils::Array<JsonView> lambdaResourcesJsonList = jsonValue.GetArray("LambdaResources");
    for(unsigned lambdaResourcesIndex = 0; lambdaResourcesIndex < lambdaResourcesJsonList.GetLength(); ++lambdaResourcesIndex)
    {
      m_lambdaResources.push_back(lambdaResourcesJsonList[lambdaResourcesIndex].AsObject());
    }
    m_lambdaResourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ec2AmiResources"))
  {
    Aws::Utils::Array<JsonView> ec2AmiResourcesJsonList = jsonValue.GetArray("Ec2AmiResources");
    for(unsigned ec2AmiResourcesIndex = 0; ec2AmiResourcesIndex < ec2AmiResourcesJsonList.GetLength(); ++ec2AmiResourcesIndex)
    {
      m_ec2AmiResources.push_back(ec2AmiResourcesJsonList[ec2AmiResourcesIndex].AsObject());
    }
    m_ec2AmiResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue JobResource::Jsonize() const
{
  JsonValue payload;

  if(m_s3ResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3ResourcesJsonList(m_s3Resources.size());
   for(unsigned s3ResourcesIndex = 0; s3ResourcesIndex < s3ResourcesJsonList.GetLength(); ++s3ResourcesIndex)
   {
     s3ResourcesJsonList[s3ResourcesIndex].AsObject(m_s3Resources[s3ResourcesIndex].Jsonize());
   }
   payload.WithArray("S3Resources", std::move(s3ResourcesJsonList));

  }

  if(m_lambdaResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lambdaResourcesJsonList(m_lambdaResources.size());
   for(unsigned lambdaResourcesIndex = 0; lambdaResourcesIndex < lambdaResourcesJsonList.GetLength(); ++lambdaResourcesIndex)
   {
     lambdaResourcesJsonList[lambdaResourcesIndex].AsObject(m_lambdaResources[lambdaResourcesIndex].Jsonize());
   }
   payload.WithArray("LambdaResources", std::move(lambdaResourcesJsonList));

  }

  if(m_ec2AmiResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2AmiResourcesJsonList(m_ec2AmiResources.size());
   for(unsigned ec2AmiResourcesIndex = 0; ec2AmiResourcesIndex < ec2AmiResourcesJsonList.GetLength(); ++ec2AmiResourcesIndex)
   {
     ec2AmiResourcesJsonList[ec2AmiResourcesIndex].AsObject(m_ec2AmiResources[ec2AmiResourcesIndex].Jsonize());
   }
   payload.WithArray("Ec2AmiResources", std::move(ec2AmiResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
