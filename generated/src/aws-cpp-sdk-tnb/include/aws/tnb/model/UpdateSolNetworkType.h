﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/Tnb_EXPORTS.h>

namespace Aws {
namespace tnb {
namespace Model {
enum class UpdateSolNetworkType { NOT_SET, MODIFY_VNF_INFORMATION, UPDATE_NS };

namespace UpdateSolNetworkTypeMapper {
AWS_TNB_API UpdateSolNetworkType GetUpdateSolNetworkTypeForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForUpdateSolNetworkType(UpdateSolNetworkType value);
}  // namespace UpdateSolNetworkTypeMapper
}  // namespace Model
}  // namespace tnb
}  // namespace Aws
