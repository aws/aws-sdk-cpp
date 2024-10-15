/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
  enum class LanguageCode
  {
    NOT_SET,
    en_US,
    en_GB,
    es_US,
    fr_CA,
    fr_FR,
    en_AU,
    it_IT,
    de_DE,
    pt_BR,
    ja_JP,
    ko_KR,
    zh_CN,
    th_TH,
    es_ES,
    ar_SA,
    pt_PT,
    ca_ES,
    ar_AE,
    hi_IN,
    zh_HK,
    nl_NL,
    no_NO,
    sv_SE,
    pl_PL,
    fi_FI,
    zh_TW,
    en_IN,
    en_IE,
    en_NZ,
    en_AB,
    en_ZA,
    en_WL,
    de_CH,
    af_ZA,
    eu_ES,
    hr_HR,
    cs_CZ,
    da_DK,
    fa_IR,
    gl_ES,
    el_GR,
    he_IL,
    id_ID,
    lv_LV,
    ms_MY,
    ro_RO,
    ru_RU,
    sr_RS,
    sk_SK,
    so_SO,
    tl_PH,
    uk_UA,
    vi_VN,
    zu_ZA
  };

namespace LanguageCodeMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
