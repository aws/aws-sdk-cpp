/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

namespace Aws {
namespace mgn {
namespace Model {
enum class SsmDocumentType { NOT_SET, AUTOMATION, COMMAND };

namespace SsmDocumentTypeMapper {
AWS_MGN_API SsmDocumentType GetSsmDocumentTypeForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForSsmDocumentType(SsmDocumentType value);
}  // namespace SsmDocumentTypeMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
