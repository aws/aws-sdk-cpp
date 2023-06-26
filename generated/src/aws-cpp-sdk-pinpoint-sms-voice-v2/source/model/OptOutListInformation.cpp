/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/OptOutListInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

OptOutListInformation::OptOutListInformation() : 
    m_optOutListArnHasBeenSet(false),
    m_optOutListNameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

OptOutListInformation::OptOutListInformation(JsonView jsonValue) : 
    m_optOutListArnHasBeenSet(false),
    m_optOutListNameHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

OptOutListInformation& OptOutListInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OptOutListArn"))
  {
    m_optOutListArn = jsonValue.GetString("OptOutListArn");

    m_optOutListArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptOutListName"))
  {
    m_optOutListName = jsonValue.GetString("OptOutListName");

    m_optOutListNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue OptOutListInformation::Jsonize() const
{
  JsonValue payload;

  if(m_optOutListArnHasBeenSet)
  {
   payload.WithString("OptOutListArn", m_optOutListArn);

  }

  if(m_optOutListNameHasBeenSet)
  {
   payload.WithString("OptOutListName", m_optOutListName);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
