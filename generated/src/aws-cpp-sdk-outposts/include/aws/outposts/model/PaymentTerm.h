/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class PaymentTerm
  {
    NOT_SET,
    THREE_YEARS,
    ONE_YEAR
  };

namespace PaymentTermMapper
{
AWS_OUTPOSTS_API PaymentTerm GetPaymentTermForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForPaymentTerm(PaymentTerm value);
} // namespace PaymentTermMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
