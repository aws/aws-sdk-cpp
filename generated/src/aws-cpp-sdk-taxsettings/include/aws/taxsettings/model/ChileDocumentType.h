/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>

namespace Aws {
namespace TaxSettings {
namespace Model {
enum class ChileDocumentType { NOT_SET, Invoice, Receipt };

namespace ChileDocumentTypeMapper {
AWS_TAXSETTINGS_API ChileDocumentType GetChileDocumentTypeForName(const Aws::String& name);

AWS_TAXSETTINGS_API Aws::String GetNameForChileDocumentType(ChileDocumentType value);
}  // namespace ChileDocumentTypeMapper
}  // namespace Model
}  // namespace TaxSettings
}  // namespace Aws
