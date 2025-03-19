/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/payment-cryptography-data/model/VerificationFailedException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PaymentCryptographyData
{
namespace Model
{

VerificationFailedException::VerificationFailedException(JsonView jsonValue)
{
  *this = jsonValue;
}

VerificationFailedException& VerificationFailedException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = VerificationFailedReasonMapper::GetVerificationFailedReasonForName(jsonValue.GetString("Reason"));
    m_reasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue VerificationFailedException::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", VerificationFailedReasonMapper::GetNameForVerificationFailedReason(m_reason));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
