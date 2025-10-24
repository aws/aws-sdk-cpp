/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class DocumentContentOperator { NOT_SET, DELETE_ };

namespace DocumentContentOperatorMapper {
AWS_QBUSINESS_API DocumentContentOperator GetDocumentContentOperatorForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForDocumentContentOperator(DocumentContentOperator value);
}  // namespace DocumentContentOperatorMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
