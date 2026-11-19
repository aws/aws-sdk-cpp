/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
enum class AssetLanguage { NOT_SET, en, es, es_419, fr, de, it, pt_BR, id, tr, ja, ko, zh_Hans, zh_Hant, ar };

namespace AssetLanguageMapper {
AWS_PARTNERCENTRALMARKETING_API AssetLanguage GetAssetLanguageForName(const Aws::String& name);

AWS_PARTNERCENTRALMARKETING_API Aws::String GetNameForAssetLanguage(AssetLanguage value);
}  // namespace AssetLanguageMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
