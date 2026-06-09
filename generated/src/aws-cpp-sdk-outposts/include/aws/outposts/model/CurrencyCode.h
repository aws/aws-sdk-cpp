/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class CurrencyCode { NOT_SET, USD };

namespace CurrencyCodeMapper {
AWS_OUTPOSTS_API CurrencyCode GetCurrencyCodeForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForCurrencyCode(CurrencyCode value);
}  // namespace CurrencyCodeMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
