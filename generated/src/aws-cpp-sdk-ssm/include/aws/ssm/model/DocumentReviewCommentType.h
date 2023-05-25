/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class DocumentReviewCommentType
  {
    NOT_SET,
    Comment
  };

namespace DocumentReviewCommentTypeMapper
{
AWS_SSM_API DocumentReviewCommentType GetDocumentReviewCommentTypeForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForDocumentReviewCommentType(DocumentReviewCommentType value);
} // namespace DocumentReviewCommentTypeMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
