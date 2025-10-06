/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-explorer-2/model/StreamingAccessDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

StreamingAccessDetails::StreamingAccessDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

StreamingAccessDetails& StreamingAccessDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServicePrincipal"))
  {
    m_servicePrincipal = jsonValue.GetString("ServicePrincipal");
    m_servicePrincipalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamingAccessDetails::Jsonize() const
{
  JsonValue payload;

  if(m_servicePrincipalHasBeenSet)
  {
   payload.WithString("ServicePrincipal", m_servicePrincipal);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
