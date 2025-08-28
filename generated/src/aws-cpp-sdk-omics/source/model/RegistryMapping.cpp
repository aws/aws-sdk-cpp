/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/RegistryMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

RegistryMapping::RegistryMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

RegistryMapping& RegistryMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("upstreamRegistryUrl"))
  {
    m_upstreamRegistryUrl = jsonValue.GetString("upstreamRegistryUrl");
    m_upstreamRegistryUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ecrRepositoryPrefix"))
  {
    m_ecrRepositoryPrefix = jsonValue.GetString("ecrRepositoryPrefix");
    m_ecrRepositoryPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("upstreamRepositoryPrefix"))
  {
    m_upstreamRepositoryPrefix = jsonValue.GetString("upstreamRepositoryPrefix");
    m_upstreamRepositoryPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ecrAccountId"))
  {
    m_ecrAccountId = jsonValue.GetString("ecrAccountId");
    m_ecrAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue RegistryMapping::Jsonize() const
{
  JsonValue payload;

  if(m_upstreamRegistryUrlHasBeenSet)
  {
   payload.WithString("upstreamRegistryUrl", m_upstreamRegistryUrl);

  }

  if(m_ecrRepositoryPrefixHasBeenSet)
  {
   payload.WithString("ecrRepositoryPrefix", m_ecrRepositoryPrefix);

  }

  if(m_upstreamRepositoryPrefixHasBeenSet)
  {
   payload.WithString("upstreamRepositoryPrefix", m_upstreamRepositoryPrefix);

  }

  if(m_ecrAccountIdHasBeenSet)
  {
   payload.WithString("ecrAccountId", m_ecrAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
