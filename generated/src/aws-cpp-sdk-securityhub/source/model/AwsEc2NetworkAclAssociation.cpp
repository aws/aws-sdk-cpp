/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2NetworkAclAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2NetworkAclAssociation::AwsEc2NetworkAclAssociation() : 
    m_networkAclAssociationIdHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

AwsEc2NetworkAclAssociation::AwsEc2NetworkAclAssociation(JsonView jsonValue) : 
    m_networkAclAssociationIdHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2NetworkAclAssociation& AwsEc2NetworkAclAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkAclAssociationId"))
  {
    m_networkAclAssociationId = jsonValue.GetString("NetworkAclAssociationId");

    m_networkAclAssociationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkAclId"))
  {
    m_networkAclId = jsonValue.GetString("NetworkAclId");

    m_networkAclIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2NetworkAclAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_networkAclAssociationIdHasBeenSet)
  {
   payload.WithString("NetworkAclAssociationId", m_networkAclAssociationId);

  }

  if(m_networkAclIdHasBeenSet)
  {
   payload.WithString("NetworkAclId", m_networkAclId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
