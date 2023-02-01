/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class ClarifyTextLanguage
  {
    NOT_SET,
    af,
    sq,
    ar,
    hy,
    eu,
    bn,
    bg,
    ca,
    zh,
    hr,
    cs,
    da,
    nl,
    en,
    et,
    fi,
    fr,
    de,
    el,
    gu,
    he,
    hi,
    hu,
    is,
    id,
    ga,
    it,
    kn,
    ky,
    lv,
    lt,
    lb,
    mk,
    ml,
    mr,
    ne,
    nb,
    fa,
    pl,
    pt,
    ro,
    ru,
    sa,
    sr,
    tn,
    si,
    sk,
    sl,
    es,
    sv,
    tl,
    ta,
    tt,
    te,
    tr,
    uk,
    ur,
    yo,
    lij,
    xx
  };

namespace ClarifyTextLanguageMapper
{
AWS_SAGEMAKER_API ClarifyTextLanguage GetClarifyTextLanguageForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClarifyTextLanguage(ClarifyTextLanguage value);
} // namespace ClarifyTextLanguageMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
