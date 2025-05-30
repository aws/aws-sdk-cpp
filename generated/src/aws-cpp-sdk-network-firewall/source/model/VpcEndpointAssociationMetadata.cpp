/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/VpcEndpointAssociationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

VpcEndpointAssociationMetadata::VpcEndpointAssociationMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

VpcEndpointAssociationMetadata& VpcEndpointAssociationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcEndpointAssociationArn"))
  {
    m_vpcEndpointAssociationArn = jsonValue.GetString("VpcEndpointAssociationArn");
    m_vpcEndpointAssociationArnHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcEndpointAssociationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_vpcEndpointAssociationArnHasBeenSet)
  {
   payload.WithString("VpcEndpointAssociationArn", m_vpcEndpointAssociationArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
