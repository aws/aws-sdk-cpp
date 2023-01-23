/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbClusterMember.h>
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

AwsRdsDbClusterMember::AwsRdsDbClusterMember() : 
    m_isClusterWriter(false),
    m_isClusterWriterHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false),
    m_dbInstanceIdentifierHasBeenSet(false),
    m_dbClusterParameterGroupStatusHasBeenSet(false)
{
}

AwsRdsDbClusterMember::AwsRdsDbClusterMember(JsonView jsonValue) : 
    m_isClusterWriter(false),
    m_isClusterWriterHasBeenSet(false),
    m_promotionTier(0),
    m_promotionTierHasBeenSet(false),
    m_dbInstanceIdentifierHasBeenSet(false),
    m_dbClusterParameterGroupStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbClusterMember& AwsRdsDbClusterMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsClusterWriter"))
  {
    m_isClusterWriter = jsonValue.GetBool("IsClusterWriter");

    m_isClusterWriterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PromotionTier"))
  {
    m_promotionTier = jsonValue.GetInteger("PromotionTier");

    m_promotionTierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbInstanceIdentifier"))
  {
    m_dbInstanceIdentifier = jsonValue.GetString("DbInstanceIdentifier");

    m_dbInstanceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbClusterParameterGroupStatus"))
  {
    m_dbClusterParameterGroupStatus = jsonValue.GetString("DbClusterParameterGroupStatus");

    m_dbClusterParameterGroupStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbClusterMember::Jsonize() const
{
  JsonValue payload;

  if(m_isClusterWriterHasBeenSet)
  {
   payload.WithBool("IsClusterWriter", m_isClusterWriter);

  }

  if(m_promotionTierHasBeenSet)
  {
   payload.WithInteger("PromotionTier", m_promotionTier);

  }

  if(m_dbInstanceIdentifierHasBeenSet)
  {
   payload.WithString("DbInstanceIdentifier", m_dbInstanceIdentifier);

  }

  if(m_dbClusterParameterGroupStatusHasBeenSet)
  {
   payload.WithString("DbClusterParameterGroupStatus", m_dbClusterParameterGroupStatus);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
