/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/NetworkFabricConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{

NetworkFabricConfiguration::NetworkFabricConfiguration() : 
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false)
{
}

NetworkFabricConfiguration::NetworkFabricConfiguration(JsonView jsonValue) : 
    m_edition(Edition::NOT_SET),
    m_editionHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFabricConfiguration& NetworkFabricConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Edition"))
  {
    m_edition = EditionMapper::GetEditionForName(jsonValue.GetString("Edition"));

    m_editionHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFabricConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_editionHasBeenSet)
  {
   payload.WithString("Edition", EditionMapper::GetNameForEdition(m_edition));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
