/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NegativeFormat.h>
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

NegativeFormat::NegativeFormat() : 
    m_prefixHasBeenSet(false),
    m_suffixHasBeenSet(false)
{
}

NegativeFormat::NegativeFormat(JsonView jsonValue) : 
    m_prefixHasBeenSet(false),
    m_suffixHasBeenSet(false)
{
  *this = jsonValue;
}

NegativeFormat& NegativeFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Suffix"))
  {
    m_suffix = jsonValue.GetString("Suffix");

    m_suffixHasBeenSet = true;
  }

  return *this;
}

JsonValue NegativeFormat::Jsonize() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_suffixHasBeenSet)
  {
   payload.WithString("Suffix", m_suffix);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
