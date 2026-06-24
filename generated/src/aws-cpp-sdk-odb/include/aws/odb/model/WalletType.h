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
enum class WalletType { NOT_SET, REGIONAL, INSTANCE };

namespace WalletTypeMapper {
AWS_ODB_API WalletType GetWalletTypeForName(const Aws::String& name);

AWS_ODB_API Aws::String GetNameForWalletType(WalletType value);
}  // namespace WalletTypeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
