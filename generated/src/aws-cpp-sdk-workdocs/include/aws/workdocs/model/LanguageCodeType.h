/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class LanguageCodeType
  {
    NOT_SET,
    AR,
    BG,
    BN,
    DA,
    DE,
    CS,
    EL,
    EN,
    ES,
    FA,
    FI,
    FR,
    HI,
    HU,
    ID,
    IT,
    JA,
    KO,
    LT,
    LV,
    NL,
    NO,
    PT,
    RO,
    RU,
    SV,
    SW,
    TH,
    TR,
    ZH,
    DEFAULT
  };

namespace LanguageCodeTypeMapper
{
AWS_WORKDOCS_API LanguageCodeType GetLanguageCodeTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForLanguageCodeType(LanguageCodeType value);
} // namespace LanguageCodeTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
