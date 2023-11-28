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
  enum class DocumentStatus
  {
    NOT_SET,
    RECEIVED,
    PROCESSING,
    INDEXED,
    UPDATED,
    FAILED,
    DELETING,
    DELETED,
    DOCUMENT_FAILED_TO_INDEX
  };

namespace DocumentStatusMapper
{
AWS_QBUSINESS_API DocumentStatus GetDocumentStatusForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForDocumentStatus(DocumentStatus value);
} // namespace DocumentStatusMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
