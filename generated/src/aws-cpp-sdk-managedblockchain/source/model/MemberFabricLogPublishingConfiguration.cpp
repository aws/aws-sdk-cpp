/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/MemberFabricLogPublishingConfiguration.h>
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

MemberFabricLogPublishingConfiguration::MemberFabricLogPublishingConfiguration() : 
    m_caLogsHasBeenSet(false)
{
}

MemberFabricLogPublishingConfiguration::MemberFabricLogPublishingConfiguration(JsonView jsonValue) : 
    m_caLogsHasBeenSet(false)
{
  *this = jsonValue;
}

MemberFabricLogPublishingConfiguration& MemberFabricLogPublishingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CaLogs"))
  {
    m_caLogs = jsonValue.GetObject("CaLogs");

    m_caLogsHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberFabricLogPublishingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_caLogsHasBeenSet)
  {
   payload.WithObject("CaLogs", m_caLogs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
