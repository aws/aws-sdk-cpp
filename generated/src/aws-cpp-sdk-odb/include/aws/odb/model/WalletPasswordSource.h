/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace odb {
namespace Model {
enum class WalletPasswordSource { NOT_SET, CUSTOMER_MANAGED_AWS_SECRET, API_REQUEST_PARAMETER };

namespace WalletPasswordSourceMapper {
AWS_ODB_API WalletPasswordSource GetWalletPasswordSourceForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForWalletPasswordSource(WalletPasswordSource value);
}  // namespace WalletPasswordSourceMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
