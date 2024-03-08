/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pipes/model/FirehoseLogDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pipes
{
namespace Model
{

FirehoseLogDestination::FirehoseLogDestination() : 
    m_deliveryStreamArnHasBeenSet(false)
{
}

FirehoseLogDestination::FirehoseLogDestination(JsonView jsonValue) : 
    m_deliveryStreamArnHasBeenSet(false)
{
  *this = jsonValue;
}

FirehoseLogDestination& FirehoseLogDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveryStreamArn"))
  {
    m_deliveryStreamArn = jsonValue.GetString("DeliveryStreamArn");

    m_deliveryStreamArnHasBeenSet = true;
  }

  return *this;
}

JsonValue FirehoseLogDestination::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryStreamArnHasBeenSet)
  {
   payload.WithString("DeliveryStreamArn", m_deliveryStreamArn);

  }

  return payload;
}

} // namespace Model
} // namespace Pipes
} // namespace Aws
