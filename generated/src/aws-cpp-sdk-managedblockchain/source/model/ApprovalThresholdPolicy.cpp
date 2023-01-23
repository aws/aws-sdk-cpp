/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/ApprovalThresholdPolicy.h>
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

ApprovalThresholdPolicy::ApprovalThresholdPolicy() : 
    m_thresholdPercentage(0),
    m_thresholdPercentageHasBeenSet(false),
    m_proposalDurationInHours(0),
    m_proposalDurationInHoursHasBeenSet(false),
    m_thresholdComparator(ThresholdComparator::NOT_SET),
    m_thresholdComparatorHasBeenSet(false)
{
}

ApprovalThresholdPolicy::ApprovalThresholdPolicy(JsonView jsonValue) : 
    m_thresholdPercentage(0),
    m_thresholdPercentageHasBeenSet(false),
    m_proposalDurationInHours(0),
    m_proposalDurationInHoursHasBeenSet(false),
    m_thresholdComparator(ThresholdComparator::NOT_SET),
    m_thresholdComparatorHasBeenSet(false)
{
  *this = jsonValue;
}

ApprovalThresholdPolicy& ApprovalThresholdPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ThresholdPercentage"))
  {
    m_thresholdPercentage = jsonValue.GetInteger("ThresholdPercentage");

    m_thresholdPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProposalDurationInHours"))
  {
    m_proposalDurationInHours = jsonValue.GetInteger("ProposalDurationInHours");

    m_proposalDurationInHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThresholdComparator"))
  {
    m_thresholdComparator = ThresholdComparatorMapper::GetThresholdComparatorForName(jsonValue.GetString("ThresholdComparator"));

    m_thresholdComparatorHasBeenSet = true;
  }

  return *this;
}

JsonValue ApprovalThresholdPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_thresholdPercentageHasBeenSet)
  {
   payload.WithInteger("ThresholdPercentage", m_thresholdPercentage);

  }

  if(m_proposalDurationInHoursHasBeenSet)
  {
   payload.WithInteger("ProposalDurationInHours", m_proposalDurationInHours);

  }

  if(m_thresholdComparatorHasBeenSet)
  {
   payload.WithString("ThresholdComparator", ThresholdComparatorMapper::GetNameForThresholdComparator(m_thresholdComparator));
  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
