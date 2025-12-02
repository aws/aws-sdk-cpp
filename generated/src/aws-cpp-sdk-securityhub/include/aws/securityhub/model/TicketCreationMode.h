/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

namespace Aws {
namespace SecurityHub {
namespace Model {
enum class TicketCreationMode { NOT_SET, DRYRUN };

namespace TicketCreationModeMapper {
AWS_SECURITYHUB_API TicketCreationMode GetTicketCreationModeForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForTicketCreationMode(TicketCreationMode value);
}  // namespace TicketCreationModeMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
