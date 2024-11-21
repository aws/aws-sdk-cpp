/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Notifications
{
namespace Model
{
  enum class LocaleCode
  {
    NOT_SET,
    de_DE,
    en_CA,
    en_US,
    en_UK,
    es_ES,
    fr_CA,
    fr_FR,
    id_ID,
    it_IT,
    ja_JP,
    ko_KR,
    pt_BR,
    tr_TR,
    zh_CN,
    zh_TW
  };

namespace LocaleCodeMapper
{
AWS_NOTIFICATIONS_API LocaleCode GetLocaleCodeForName(const Aws::String& name);

AWS_NOTIFICATIONS_API Aws::String GetNameForLocaleCode(LocaleCode value);
} // namespace LocaleCodeMapper
} // namespace Model
} // namespace Notifications
} // namespace Aws
