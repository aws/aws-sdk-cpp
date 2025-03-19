/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/PackageAssociationConfiguration.h>
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

PackageAssociationConfiguration::PackageAssociationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageAssociationConfiguration& PackageAssociationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyStoreAccessOption"))
  {
    m_keyStoreAccessOption = jsonValue.GetObject("KeyStoreAccessOption");
    m_keyStoreAccessOptionHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageAssociationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_keyStoreAccessOptionHasBeenSet)
  {
   payload.WithObject("KeyStoreAccessOption", m_keyStoreAccessOption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
