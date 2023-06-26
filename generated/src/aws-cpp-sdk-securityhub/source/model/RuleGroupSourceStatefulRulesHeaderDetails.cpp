/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RuleGroupSourceStatefulRulesHeaderDetails.h>
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

RuleGroupSourceStatefulRulesHeaderDetails::RuleGroupSourceStatefulRulesHeaderDetails() : 
    m_destinationHasBeenSet(false),
    m_destinationPortHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourcePortHasBeenSet(false)
{
}

RuleGroupSourceStatefulRulesHeaderDetails::RuleGroupSourceStatefulRulesHeaderDetails(JsonView jsonValue) : 
    m_destinationHasBeenSet(false),
    m_destinationPortHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourcePortHasBeenSet(false)
{
  *this = jsonValue;
}

RuleGroupSourceStatefulRulesHeaderDetails& RuleGroupSourceStatefulRulesHeaderDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationPort"))
  {
    m_destinationPort = jsonValue.GetString("DestinationPort");

    m_destinationPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Direction"))
  {
    m_direction = jsonValue.GetString("Direction");

    m_directionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Protocol"))
  {
    m_protocol = jsonValue.GetString("Protocol");

    m_protocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePort"))
  {
    m_sourcePort = jsonValue.GetString("SourcePort");

    m_sourcePortHasBeenSet = true;
  }

  return *this;
}

JsonValue RuleGroupSourceStatefulRulesHeaderDetails::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  if(m_destinationPortHasBeenSet)
  {
   payload.WithString("DestinationPort", m_destinationPort);

  }

  if(m_directionHasBeenSet)
  {
   payload.WithString("Direction", m_direction);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", m_protocol);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  if(m_sourcePortHasBeenSet)
  {
   payload.WithString("SourcePort", m_sourcePort);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
