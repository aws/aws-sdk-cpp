/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/QApps_EXPORTS.h>

namespace Aws {
namespace QApps {
namespace Model {
enum class CardType { NOT_SET, text_input, q_query, file_upload, q_plugin, form_input };

namespace CardTypeMapper {
AWS_QAPPS_API CardType GetCardTypeForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForCardType(CardType value);
}  // namespace CardTypeMapper
}  // namespace Model
}  // namespace QApps
}  // namespace Aws
