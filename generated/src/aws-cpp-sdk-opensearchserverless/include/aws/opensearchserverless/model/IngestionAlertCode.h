/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
enum class IngestionAlertCode {
  NOT_SET,
  SOURCE_ACCESS_DENIED,
  SOURCE_RESOURCE_NOT_FOUND,
  DESTINATION_ACCESS_DENIED,
  DESTINATION_RESOURCE_NOT_FOUND,
  INTERNAL_SERVER_ERROR
};

namespace IngestionAlertCodeMapper {
AWS_OPENSEARCHSERVERLESS_API IngestionAlertCode GetIngestionAlertCodeForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForIngestionAlertCode(IngestionAlertCode value);
}  // namespace IngestionAlertCodeMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
