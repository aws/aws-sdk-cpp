/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/InstanceMarketOptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{

InstanceMarketOptionsRequest::InstanceMarketOptionsRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceMarketOptionsRequest& InstanceMarketOptionsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MarketType"))
  {
    m_marketType = MarketTypeEnumMapper::GetMarketTypeEnumForName(jsonValue.GetString("MarketType"));
    m_marketTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpotOptions"))
  {
    m_spotOptions = jsonValue.GetObject("SpotOptions");
    m_spotOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceMarketOptionsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_marketTypeHasBeenSet)
  {
   payload.WithString("MarketType", MarketTypeEnumMapper::GetNameForMarketTypeEnum(m_marketType));
  }

  if(m_spotOptionsHasBeenSet)
  {
   payload.WithObject("SpotOptions", m_spotOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
