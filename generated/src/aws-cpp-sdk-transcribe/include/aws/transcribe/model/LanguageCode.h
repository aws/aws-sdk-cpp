/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{
  enum class LanguageCode
  {
    NOT_SET,
    af_ZA,
    ar_AE,
    ar_SA,
    da_DK,
    de_CH,
    de_DE,
    en_AB,
    en_AU,
    en_GB,
    en_IE,
    en_IN,
    en_US,
    en_WL,
    es_ES,
    es_US,
    fa_IR,
    fr_CA,
    fr_FR,
    he_IL,
    hi_IN,
    id_ID,
    it_IT,
    ja_JP,
    ko_KR,
    ms_MY,
    nl_NL,
    pt_BR,
    pt_PT,
    ru_RU,
    ta_IN,
    te_IN,
    tr_TR,
    zh_CN,
    zh_TW,
    th_TH,
    en_ZA,
    en_NZ,
    vi_VN,
    sv_SE,
    ab_GE,
    ast_ES,
    az_AZ,
    ba_RU,
    be_BY,
    bg_BG,
    bn_IN,
    bs_BA,
    ca_ES,
    ckb_IQ,
    ckb_IR,
    cs_CZ,
    cy_WL,
    el_GR,
    et_ET,
    eu_ES,
    fi_FI,
    gl_ES,
    gu_IN,
    ha_NG,
    hr_HR,
    hu_HU,
    hy_AM,
    is_IS,
    ka_GE,
    kab_DZ,
    kk_KZ,
    kn_IN,
    ky_KG,
    lg_IN,
    lt_LT,
    lv_LV,
    mhr_RU,
    mi_NZ,
    mk_MK,
    ml_IN,
    mn_MN,
    mr_IN,
    mt_MT,
    no_NO,
    or_IN,
    pa_IN,
    pl_PL,
    ps_AF,
    ro_RO,
    rw_RW,
    si_LK,
    sk_SK,
    sl_SI,
    so_SO,
    sr_RS,
    su_ID,
    sw_BI,
    sw_KE,
    sw_RW,
    sw_TZ,
    sw_UG,
    tl_PH,
    tt_RU,
    ug_CN,
    uk_UA,
    uz_UZ,
    wo_SN,
    zu_ZA
  };

namespace LanguageCodeMapper
{
AWS_TRANSCRIBESERVICE_API LanguageCode GetLanguageCodeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForLanguageCode(LanguageCode value);
} // namespace LanguageCodeMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
