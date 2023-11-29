/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ResourceSpec.h>
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

ResourceSpec::ResourceSpec() : 
    m_sageMakerImageArnHasBeenSet(false),
    m_sageMakerImageVersionArnHasBeenSet(false),
    m_sageMakerImageVersionAliasHasBeenSet(false),
    m_instanceType(AppInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_lifecycleConfigArnHasBeenSet(false)
{
}

ResourceSpec::ResourceSpec(JsonView jsonValue) : 
    m_sageMakerImageArnHasBeenSet(false),
    m_sageMakerImageVersionArnHasBeenSet(false),
    m_sageMakerImageVersionAliasHasBeenSet(false),
    m_instanceType(AppInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_lifecycleConfigArnHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceSpec& ResourceSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SageMakerImageArn"))
  {
    m_sageMakerImageArn = jsonValue.GetString("SageMakerImageArn");

    m_sageMakerImageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SageMakerImageVersionArn"))
  {
    m_sageMakerImageVersionArn = jsonValue.GetString("SageMakerImageVersionArn");

    m_sageMakerImageVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SageMakerImageVersionAlias"))
  {
    m_sageMakerImageVersionAlias = jsonValue.GetString("SageMakerImageVersionAlias");

    m_sageMakerImageVersionAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = AppInstanceTypeMapper::GetAppInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LifecycleConfigArn"))
  {
    m_lifecycleConfigArn = jsonValue.GetString("LifecycleConfigArn");

    m_lifecycleConfigArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceSpec::Jsonize() const
{
  JsonValue payload;

  if(m_sageMakerImageArnHasBeenSet)
  {
   payload.WithString("SageMakerImageArn", m_sageMakerImageArn);

  }

  if(m_sageMakerImageVersionArnHasBeenSet)
  {
   payload.WithString("SageMakerImageVersionArn", m_sageMakerImageVersionArn);

  }

  if(m_sageMakerImageVersionAliasHasBeenSet)
  {
   payload.WithString("SageMakerImageVersionAlias", m_sageMakerImageVersionAlias);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", AppInstanceTypeMapper::GetNameForAppInstanceType(m_instanceType));
  }

  if(m_lifecycleConfigArnHasBeenSet)
  {
   payload.WithString("LifecycleConfigArn", m_lifecycleConfigArn);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
