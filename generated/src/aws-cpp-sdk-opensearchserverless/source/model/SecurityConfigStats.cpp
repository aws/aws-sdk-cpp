/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/SecurityConfigStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

SecurityConfigStats::SecurityConfigStats() : 
    m_samlConfigCount(0),
    m_samlConfigCountHasBeenSet(false)
{
}

SecurityConfigStats::SecurityConfigStats(JsonView jsonValue) : 
    m_samlConfigCount(0),
    m_samlConfigCountHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityConfigStats& SecurityConfigStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SamlConfigCount"))
  {
    m_samlConfigCount = jsonValue.GetInt64("SamlConfigCount");

    m_samlConfigCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityConfigStats::Jsonize() const
{
  JsonValue payload;

  if(m_samlConfigCountHasBeenSet)
  {
   payload.WithInt64("SamlConfigCount", m_samlConfigCount);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
