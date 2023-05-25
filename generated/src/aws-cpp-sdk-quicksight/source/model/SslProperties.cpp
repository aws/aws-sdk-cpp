/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SslProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SslProperties::SslProperties() : 
    m_disableSsl(false),
    m_disableSslHasBeenSet(false)
{
}

SslProperties::SslProperties(JsonView jsonValue) : 
    m_disableSsl(false),
    m_disableSslHasBeenSet(false)
{
  *this = jsonValue;
}

SslProperties& SslProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisableSsl"))
  {
    m_disableSsl = jsonValue.GetBool("DisableSsl");

    m_disableSslHasBeenSet = true;
  }

  return *this;
}

JsonValue SslProperties::Jsonize() const
{
  JsonValue payload;

  if(m_disableSslHasBeenSet)
  {
   payload.WithBool("DisableSsl", m_disableSsl);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
