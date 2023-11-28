/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{
  enum class ContentType
  {
    NOT_SET,
    PDF,
    HTML,
    MS_WORD,
    PLAIN_TEXT,
    PPT,
    RTF,
    XML,
    XSLT,
    MS_EXCEL,
    CSV,
    JSON,
    MD
  };

namespace ContentTypeMapper
{
AWS_QBUSINESS_API ContentType GetContentTypeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForContentType(ContentType value);
} // namespace ContentTypeMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
