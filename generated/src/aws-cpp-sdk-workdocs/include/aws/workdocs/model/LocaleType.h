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
  enum class LocaleType
  {
    NOT_SET,
    en,
    fr,
    ko,
    de,
    es,
    ja,
    ru,
    zh_CN,
    zh_TW,
    pt_BR,
    default_
  };

namespace LocaleTypeMapper
{
AWS_WORKDOCS_API LocaleType GetLocaleTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForLocaleType(LocaleType value);
} // namespace LocaleTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
