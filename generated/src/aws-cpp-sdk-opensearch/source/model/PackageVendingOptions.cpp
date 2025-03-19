/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PackageVendingOptions.h>
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

PackageVendingOptions::PackageVendingOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageVendingOptions& PackageVendingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VendingEnabled"))
  {
    m_vendingEnabled = jsonValue.GetBool("VendingEnabled");
    m_vendingEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageVendingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_vendingEnabledHasBeenSet)
  {
   payload.WithBool("VendingEnabled", m_vendingEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
