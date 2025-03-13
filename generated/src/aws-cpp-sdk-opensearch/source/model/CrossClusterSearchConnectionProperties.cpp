/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CrossClusterSearchConnectionProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

CrossClusterSearchConnectionProperties::CrossClusterSearchConnectionProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

CrossClusterSearchConnectionProperties& CrossClusterSearchConnectionProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SkipUnavailable"))
  {
    m_skipUnavailable = SkipUnavailableStatusMapper::GetSkipUnavailableStatusForName(jsonValue.GetString("SkipUnavailable"));
    m_skipUnavailableHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossClusterSearchConnectionProperties::Jsonize() const
{
  JsonValue payload;

  if(m_skipUnavailableHasBeenSet)
  {
   payload.WithString("SkipUnavailable", SkipUnavailableStatusMapper::GetNameForSkipUnavailableStatus(m_skipUnavailable));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
