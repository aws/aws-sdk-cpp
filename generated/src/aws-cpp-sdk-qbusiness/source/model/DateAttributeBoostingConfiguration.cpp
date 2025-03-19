/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/DateAttributeBoostingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

DateAttributeBoostingConfiguration::DateAttributeBoostingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DateAttributeBoostingConfiguration& DateAttributeBoostingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("boostingLevel"))
  {
    m_boostingLevel = DocumentAttributeBoostingLevelMapper::GetDocumentAttributeBoostingLevelForName(jsonValue.GetString("boostingLevel"));
    m_boostingLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("boostingDurationInSeconds"))
  {
    m_boostingDurationInSeconds = jsonValue.GetInt64("boostingDurationInSeconds");
    m_boostingDurationInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue DateAttributeBoostingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_boostingLevelHasBeenSet)
  {
   payload.WithString("boostingLevel", DocumentAttributeBoostingLevelMapper::GetNameForDocumentAttributeBoostingLevel(m_boostingLevel));
  }

  if(m_boostingDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("boostingDurationInSeconds", m_boostingDurationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
