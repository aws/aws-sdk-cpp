/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDmsReplicationInstanceReplicationSubnetGroupDetails.h>
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

AwsDmsReplicationInstanceReplicationSubnetGroupDetails::AwsDmsReplicationInstanceReplicationSubnetGroupDetails() : 
    m_replicationSubnetGroupIdentifierHasBeenSet(false)
{
}

AwsDmsReplicationInstanceReplicationSubnetGroupDetails::AwsDmsReplicationInstanceReplicationSubnetGroupDetails(JsonView jsonValue) : 
    m_replicationSubnetGroupIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDmsReplicationInstanceReplicationSubnetGroupDetails& AwsDmsReplicationInstanceReplicationSubnetGroupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationSubnetGroupIdentifier"))
  {
    m_replicationSubnetGroupIdentifier = jsonValue.GetString("ReplicationSubnetGroupIdentifier");

    m_replicationSubnetGroupIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDmsReplicationInstanceReplicationSubnetGroupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_replicationSubnetGroupIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationSubnetGroupIdentifier", m_replicationSubnetGroupIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
