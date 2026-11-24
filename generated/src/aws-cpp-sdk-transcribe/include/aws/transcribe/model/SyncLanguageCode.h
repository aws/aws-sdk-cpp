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
enum class SyncLanguageCode {
  NOT_SET,
  en_US,
  en_AB,
  en_AU,
  en_GB,
  en_IE,
  en_IN,
  en_WL,
  en_ZA,
  en_NZ,
  es_US,
  es_ES,
  es_MX,
  fr_FR,
  fr_CA,
  it_IT,
  de_DE,
  de_CH,
  ja_JP,
  pt_BR,
  pt_PT,
  zh_CN,
  zh_TW,
  zh_HK,
  ko_KR
};

namespace SyncLanguageCodeMapper {
AWS_TRANSCRIBESERVICE_API SyncLanguageCode GetSyncLanguageCodeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForSyncLanguageCode(SyncLanguageCode value);
}  // namespace SyncLanguageCodeMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
