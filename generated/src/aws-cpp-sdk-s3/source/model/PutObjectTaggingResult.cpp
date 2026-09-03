/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/PutObjectTaggingResult.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

PutObjectTaggingResult::PutObjectTaggingResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

PutObjectTaggingResult& PutObjectTaggingResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) { return *this; }
