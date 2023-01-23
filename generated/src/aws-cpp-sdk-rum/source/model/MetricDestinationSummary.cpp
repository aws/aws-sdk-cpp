/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/MetricDestinationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

MetricDestinationSummary::MetricDestinationSummary() : 
    m_destination(MetricDestination::NOT_SET),
    m_destinationHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
}

MetricDestinationSummary::MetricDestinationSummary(JsonView jsonValue) : 
    m_destination(MetricDestination::NOT_SET),
    m_destinationHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

MetricDestinationSummary& MetricDestinationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = MetricDestinationMapper::GetMetricDestinationForName(jsonValue.GetString("Destination"));

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationArn"))
  {
    m_destinationArn = jsonValue.GetString("DestinationArn");

    m_destinationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricDestinationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", MetricDestinationMapper::GetNameForMetricDestination(m_destination));
  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("DestinationArn", m_destinationArn);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
