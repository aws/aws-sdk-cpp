/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HubContentDependency.h>
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

HubContentDependency::HubContentDependency() : 
    m_dependencyOriginPathHasBeenSet(false),
    m_dependencyCopyPathHasBeenSet(false)
{
}

HubContentDependency::HubContentDependency(JsonView jsonValue) : 
    m_dependencyOriginPathHasBeenSet(false),
    m_dependencyCopyPathHasBeenSet(false)
{
  *this = jsonValue;
}

HubContentDependency& HubContentDependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DependencyOriginPath"))
  {
    m_dependencyOriginPath = jsonValue.GetString("DependencyOriginPath");

    m_dependencyOriginPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DependencyCopyPath"))
  {
    m_dependencyCopyPath = jsonValue.GetString("DependencyCopyPath");

    m_dependencyCopyPathHasBeenSet = true;
  }

  return *this;
}

JsonValue HubContentDependency::Jsonize() const
{
  JsonValue payload;

  if(m_dependencyOriginPathHasBeenSet)
  {
   payload.WithString("DependencyOriginPath", m_dependencyOriginPath);

  }

  if(m_dependencyCopyPathHasBeenSet)
  {
   payload.WithString("DependencyCopyPath", m_dependencyCopyPath);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
