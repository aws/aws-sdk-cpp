/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/vpc-lattice/model/ResourceConfigurationDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

ResourceConfigurationDefinition::ResourceConfigurationDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceConfigurationDefinition& ResourceConfigurationDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arnResource"))
  {
    m_arnResource = jsonValue.GetObject("arnResource");
    m_arnResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dnsResource"))
  {
    m_dnsResource = jsonValue.GetObject("dnsResource");
    m_dnsResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipResource"))
  {
    m_ipResource = jsonValue.GetObject("ipResource");
    m_ipResourceHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceConfigurationDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_arnResourceHasBeenSet)
  {
   payload.WithObject("arnResource", m_arnResource.Jsonize());

  }

  if(m_dnsResourceHasBeenSet)
  {
   payload.WithObject("dnsResource", m_dnsResource.Jsonize());

  }

  if(m_ipResourceHasBeenSet)
  {
   payload.WithObject("ipResource", m_ipResource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
