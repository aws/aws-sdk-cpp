/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/IpFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

IpFilter::IpFilter() : 
    m_cidrHasBeenSet(false)
{
}

IpFilter::IpFilter(JsonView jsonValue) : 
    m_cidrHasBeenSet(false)
{
  *this = jsonValue;
}

IpFilter& IpFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cidr"))
  {
    m_cidr = jsonValue.GetString("Cidr");

    m_cidrHasBeenSet = true;
  }

  return *this;
}

JsonValue IpFilter::Jsonize() const
{
  JsonValue payload;

  if(m_cidrHasBeenSet)
  {
   payload.WithString("Cidr", m_cidr);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
