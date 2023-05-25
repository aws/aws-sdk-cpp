/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/PostLaunchActions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

PostLaunchActions::PostLaunchActions() : 
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_deployment(PostLaunchActionsDeploymentType::NOT_SET),
    m_deploymentHasBeenSet(false),
    m_s3LogBucketHasBeenSet(false),
    m_s3OutputKeyPrefixHasBeenSet(false),
    m_ssmDocumentsHasBeenSet(false)
{
}

PostLaunchActions::PostLaunchActions(JsonView jsonValue) : 
    m_cloudWatchLogGroupNameHasBeenSet(false),
    m_deployment(PostLaunchActionsDeploymentType::NOT_SET),
    m_deploymentHasBeenSet(false),
    m_s3LogBucketHasBeenSet(false),
    m_s3OutputKeyPrefixHasBeenSet(false),
    m_ssmDocumentsHasBeenSet(false)
{
  *this = jsonValue;
}

PostLaunchActions& PostLaunchActions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudWatchLogGroupName"))
  {
    m_cloudWatchLogGroupName = jsonValue.GetString("cloudWatchLogGroupName");

    m_cloudWatchLogGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deployment"))
  {
    m_deployment = PostLaunchActionsDeploymentTypeMapper::GetPostLaunchActionsDeploymentTypeForName(jsonValue.GetString("deployment"));

    m_deploymentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3LogBucket"))
  {
    m_s3LogBucket = jsonValue.GetString("s3LogBucket");

    m_s3LogBucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3OutputKeyPrefix"))
  {
    m_s3OutputKeyPrefix = jsonValue.GetString("s3OutputKeyPrefix");

    m_s3OutputKeyPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ssmDocuments"))
  {
    Aws::Utils::Array<JsonView> ssmDocumentsJsonList = jsonValue.GetArray("ssmDocuments");
    for(unsigned ssmDocumentsIndex = 0; ssmDocumentsIndex < ssmDocumentsJsonList.GetLength(); ++ssmDocumentsIndex)
    {
      m_ssmDocuments.push_back(ssmDocumentsJsonList[ssmDocumentsIndex].AsObject());
    }
    m_ssmDocumentsHasBeenSet = true;
  }

  return *this;
}

JsonValue PostLaunchActions::Jsonize() const
{
  JsonValue payload;

  if(m_cloudWatchLogGroupNameHasBeenSet)
  {
   payload.WithString("cloudWatchLogGroupName", m_cloudWatchLogGroupName);

  }

  if(m_deploymentHasBeenSet)
  {
   payload.WithString("deployment", PostLaunchActionsDeploymentTypeMapper::GetNameForPostLaunchActionsDeploymentType(m_deployment));
  }

  if(m_s3LogBucketHasBeenSet)
  {
   payload.WithString("s3LogBucket", m_s3LogBucket);

  }

  if(m_s3OutputKeyPrefixHasBeenSet)
  {
   payload.WithString("s3OutputKeyPrefix", m_s3OutputKeyPrefix);

  }

  if(m_ssmDocumentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ssmDocumentsJsonList(m_ssmDocuments.size());
   for(unsigned ssmDocumentsIndex = 0; ssmDocumentsIndex < ssmDocumentsJsonList.GetLength(); ++ssmDocumentsIndex)
   {
     ssmDocumentsJsonList[ssmDocumentsIndex].AsObject(m_ssmDocuments[ssmDocumentsIndex].Jsonize());
   }
   payload.WithArray("ssmDocuments", std::move(ssmDocumentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
