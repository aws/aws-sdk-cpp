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

VerificationFailedException::VerificationFailedException() : 
    m_messageHasBeenSet(false),
    m_reason(VerificationFailedReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
}

VerificationFailedException::VerificationFailedException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_reason(VerificationFailedReason::NOT_SET),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

VerificationFailedException& VerificationFailedException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = VerificationFailedReasonMapper::GetVerificationFailedReasonForName(jsonValue.GetString("Reason"));

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue VerificationFailedException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", VerificationFailedReasonMapper::GetNameForVerificationFailedReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
