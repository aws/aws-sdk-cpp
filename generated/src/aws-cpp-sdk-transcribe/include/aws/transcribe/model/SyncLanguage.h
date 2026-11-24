/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

namespace Aws {
namespace TranscribeService {
namespace Model {
enum class SyncLanguage { NOT_SET, en, es, fr, it, de, ja, pt, ko, zh_CN, zh_TW, zh_HK };

namespace SyncLanguageMapper {
AWS_TRANSCRIBESERVICE_API SyncLanguage GetSyncLanguageForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForSyncLanguage(SyncLanguage value);
}  // namespace SyncLanguageMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
