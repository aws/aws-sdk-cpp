/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms-voice/model/KinesisFirehoseDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

KinesisFirehoseDestination::KinesisFirehoseDestination() : 
    m_deliveryStreamArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
}

KinesisFirehoseDestination::KinesisFirehoseDestination(JsonView jsonValue) : 
    m_deliveryStreamArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisFirehoseDestination& KinesisFirehoseDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveryStreamArn"))
  {
    m_deliveryStreamArn = jsonValue.GetString("DeliveryStreamArn");

    m_deliveryStreamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisFirehoseDestination::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryStreamArnHasBeenSet)
  {
   payload.WithString("DeliveryStreamArn", m_deliveryStreamArn);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
