/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/KendraIndexConfiguration.h>
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

KendraIndexConfiguration::KendraIndexConfiguration() : 
    m_indexIdHasBeenSet(false)
{
}

KendraIndexConfiguration::KendraIndexConfiguration(JsonView jsonValue) : 
    m_indexIdHasBeenSet(false)
{
  *this = jsonValue;
}

KendraIndexConfiguration& KendraIndexConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("indexId"))
  {
    m_indexId = jsonValue.GetString("indexId");

    m_indexIdHasBeenSet = true;
  }

  return *this;
}

JsonValue KendraIndexConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("indexId", m_indexId);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
