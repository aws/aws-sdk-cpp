/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/RateLimitLabelNamespace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

RateLimitLabelNamespace::RateLimitLabelNamespace() : 
    m_namespaceHasBeenSet(false)
{
}

RateLimitLabelNamespace::RateLimitLabelNamespace(JsonView jsonValue) : 
    m_namespaceHasBeenSet(false)
{
  *this = jsonValue;
}

RateLimitLabelNamespace& RateLimitLabelNamespace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue RateLimitLabelNamespace::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
