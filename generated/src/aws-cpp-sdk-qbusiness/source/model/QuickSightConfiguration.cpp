/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/QuickSightConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

QuickSightConfiguration::QuickSightConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

QuickSightConfiguration& QuickSightConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientNamespace"))
  {
    m_clientNamespace = jsonValue.GetString("clientNamespace");
    m_clientNamespaceHasBeenSet = true;
  }
  return *this;
}

JsonValue QuickSightConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_clientNamespaceHasBeenSet)
  {
   payload.WithString("clientNamespace", m_clientNamespace);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
