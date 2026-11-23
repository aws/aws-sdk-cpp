/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/AssumedRoleUser.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace STS {
namespace Model {

AssumedRoleUser::AssumedRoleUser(const XmlNode& xmlNode) { *this = xmlNode; }

AssumedRoleUser& AssumedRoleUser::operator=(const XmlNode&) { return *this; }

void AssumedRoleUser::OutputToStream(Aws::OStream&, const char*, unsigned, const char*) const {}

void AssumedRoleUser::OutputToStream(Aws::OStream&, const char*) const {}

}  // namespace Model
}  // namespace STS
}  // namespace Aws
