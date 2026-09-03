/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/AnnotationTableConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3 {
namespace Model {

AnnotationTableConfiguration::AnnotationTableConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

AnnotationTableConfiguration& AnnotationTableConfiguration::operator=(const XmlNode& xmlNode) { return *this; }

void AnnotationTableConfiguration::AddToNode(XmlNode& parentNode) const {}

}  // namespace Model
}  // namespace S3
}  // namespace Aws
