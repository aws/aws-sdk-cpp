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
  enum class Tr34KeyBlockFormat
  {
    NOT_SET,
    X9_TR34_2012
  };

namespace Tr34KeyBlockFormatMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API Tr34KeyBlockFormat GetTr34KeyBlockFormatForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForTr34KeyBlockFormat(Tr34KeyBlockFormat value);
} // namespace Tr34KeyBlockFormatMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
