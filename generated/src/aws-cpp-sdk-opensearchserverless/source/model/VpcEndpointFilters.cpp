/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/VpcEndpointFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

VpcEndpointFilters::VpcEndpointFilters() : 
    m_status(VpcEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

VpcEndpointFilters::VpcEndpointFilters(JsonView jsonValue) : 
    m_status(VpcEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

VpcEndpointFilters& VpcEndpointFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = VpcEndpointStatusMapper::GetVpcEndpointStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcEndpointFilters::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", VpcEndpointStatusMapper::GetNameForVpcEndpointStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
