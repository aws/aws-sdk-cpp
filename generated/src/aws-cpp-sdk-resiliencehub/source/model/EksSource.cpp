/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/EksSource.h>
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

EksSource::EksSource() : 
    m_eksClusterArnHasBeenSet(false),
    m_namespacesHasBeenSet(false)
{
}

EksSource::EksSource(JsonView jsonValue) : 
    m_eksClusterArnHasBeenSet(false),
    m_namespacesHasBeenSet(false)
{
  *this = jsonValue;
}

EksSource& EksSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eksClusterArn"))
  {
    m_eksClusterArn = jsonValue.GetString("eksClusterArn");

    m_eksClusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespaces"))
  {
    Aws::Utils::Array<JsonView> namespacesJsonList = jsonValue.GetArray("namespaces");
    for(unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex)
    {
      m_namespaces.push_back(namespacesJsonList[namespacesIndex].AsString());
    }
    m_namespacesHasBeenSet = true;
  }

  return *this;
}

JsonValue EksSource::Jsonize() const
{
  JsonValue payload;

  if(m_eksClusterArnHasBeenSet)
  {
   payload.WithString("eksClusterArn", m_eksClusterArn);

  }

  if(m_namespacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namespacesJsonList(m_namespaces.size());
   for(unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex)
   {
     namespacesJsonList[namespacesIndex].AsString(m_namespaces[namespacesIndex]);
   }
   payload.WithArray("namespaces", std::move(namespacesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
