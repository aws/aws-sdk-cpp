/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/RuleSummary.h>
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

RuleSummary::RuleSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleSummary& RuleSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SID"))
  {
    m_sID = jsonValue.GetString("SID");
    m_sIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Msg"))
  {
    m_msg = jsonValue.GetString("Msg");
    m_msgHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetString("Metadata");
    m_metadataHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleSummary::Jsonize() const
{
  JsonValue payload;

  if(m_sIDHasBeenSet)
  {
   payload.WithString("SID", m_sID);

  }

  if(m_msgHasBeenSet)
  {
   payload.WithString("Msg", m_msg);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
