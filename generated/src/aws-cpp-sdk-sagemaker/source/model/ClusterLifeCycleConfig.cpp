/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterLifeCycleConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ClusterLifeCycleConfig::ClusterLifeCycleConfig() : 
    m_sourceS3UriHasBeenSet(false),
    m_onCreateHasBeenSet(false)
{
}

ClusterLifeCycleConfig::ClusterLifeCycleConfig(JsonView jsonValue) : 
    m_sourceS3UriHasBeenSet(false),
    m_onCreateHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterLifeCycleConfig& ClusterLifeCycleConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceS3Uri"))
  {
    m_sourceS3Uri = jsonValue.GetString("SourceS3Uri");

    m_sourceS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnCreate"))
  {
    m_onCreate = jsonValue.GetString("OnCreate");

    m_onCreateHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterLifeCycleConfig::Jsonize() const
{
  JsonValue payload;

  if(m_sourceS3UriHasBeenSet)
  {
   payload.WithString("SourceS3Uri", m_sourceS3Uri);

  }

  if(m_onCreateHasBeenSet)
  {
   payload.WithString("OnCreate", m_onCreate);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
