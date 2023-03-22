/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/EksSourceClusterNamespace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

EksSourceClusterNamespace::EksSourceClusterNamespace() : 
    m_eksClusterArnHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

EksSourceClusterNamespace::EksSourceClusterNamespace(JsonView jsonValue) : 
    m_eksClusterArnHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
  *this = jsonValue;
}

EksSourceClusterNamespace& EksSourceClusterNamespace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eksClusterArn"))
  {
    m_eksClusterArn = jsonValue.GetString("eksClusterArn");

    m_eksClusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue EksSourceClusterNamespace::Jsonize() const
{
  JsonValue payload;

  if(m_eksClusterArnHasBeenSet)
  {
   payload.WithString("eksClusterArn", m_eksClusterArn);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
