/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {
enum class Locale { NOT_SET, de_DE, en_US, es_ES, fr_FR, id_ID, it_IT, ja_JP, ko_KR, pt_BR, zh_CN, zh_TW };

namespace LocaleMapper {
AWS_WORKSPACESWEB_API Locale GetLocaleForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForLocale(Locale value);
}  // namespace LocaleMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
