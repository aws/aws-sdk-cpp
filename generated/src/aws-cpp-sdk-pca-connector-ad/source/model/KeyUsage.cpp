/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/KeyUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

KeyUsage::KeyUsage() : 
    m_critical(false),
    m_criticalHasBeenSet(false),
    m_usageFlagsHasBeenSet(false)
{
}

KeyUsage::KeyUsage(JsonView jsonValue) : 
    m_critical(false),
    m_criticalHasBeenSet(false),
    m_usageFlagsHasBeenSet(false)
{
  *this = jsonValue;
}

KeyUsage& KeyUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Critical"))
  {
    m_critical = jsonValue.GetBool("Critical");

    m_criticalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UsageFlags"))
  {
    m_usageFlags = jsonValue.GetObject("UsageFlags");

    m_usageFlagsHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyUsage::Jsonize() const
{
  JsonValue payload;

  if(m_criticalHasBeenSet)
  {
   payload.WithBool("Critical", m_critical);

  }

  if(m_usageFlagsHasBeenSet)
  {
   payload.WithObject("UsageFlags", m_usageFlags.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
