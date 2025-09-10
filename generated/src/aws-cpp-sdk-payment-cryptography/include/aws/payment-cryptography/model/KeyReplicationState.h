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
  enum class KeyReplicationState
  {
    NOT_SET,
    IN_PROGRESS,
    DELETE_IN_PROGRESS,
    FAILED,
    SYNCHRONIZED
  };

namespace KeyReplicationStateMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API KeyReplicationState GetKeyReplicationStateForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForKeyReplicationState(KeyReplicationState value);
} // namespace KeyReplicationStateMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
