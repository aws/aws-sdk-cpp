/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{
  enum class KeyState
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_COMPLETE,
    DELETE_PENDING,
    DELETE_COMPLETE
  };

namespace KeyStateMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API KeyState GetKeyStateForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForKeyState(KeyState value);
} // namespace KeyStateMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
