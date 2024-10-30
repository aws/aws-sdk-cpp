/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{
  enum class SubjectKeyIdCOption
  {
    NOT_SET,
    UserName,
    UserId,
    Email
  };

namespace SubjectKeyIdCOptionMapper
{
AWS_OPENSEARCHSERVICE_API SubjectKeyIdCOption GetSubjectKeyIdCOptionForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForSubjectKeyIdCOption(SubjectKeyIdCOption value);
} // namespace SubjectKeyIdCOptionMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
