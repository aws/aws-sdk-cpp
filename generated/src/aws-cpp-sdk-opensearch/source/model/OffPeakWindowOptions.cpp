/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/OffPeakWindowOptions.h>
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

OffPeakWindowOptions::OffPeakWindowOptions() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_offPeakWindowHasBeenSet(false)
{
}

OffPeakWindowOptions::OffPeakWindowOptions(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_offPeakWindowHasBeenSet(false)
{
  *this = jsonValue;
}

OffPeakWindowOptions& OffPeakWindowOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OffPeakWindow"))
  {
    m_offPeakWindow = jsonValue.GetObject("OffPeakWindow");

    m_offPeakWindowHasBeenSet = true;
  }

  return *this;
}

JsonValue OffPeakWindowOptions::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_offPeakWindowHasBeenSet)
  {
   payload.WithObject("OffPeakWindow", m_offPeakWindow.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
