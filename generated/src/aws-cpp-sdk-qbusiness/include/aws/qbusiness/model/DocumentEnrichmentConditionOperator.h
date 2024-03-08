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
  enum class DocumentEnrichmentConditionOperator
  {
    NOT_SET,
    GREATER_THAN,
    GREATER_THAN_OR_EQUALS,
    LESS_THAN,
    LESS_THAN_OR_EQUALS,
    EQUALS,
    NOT_EQUALS,
    CONTAINS,
    NOT_CONTAINS,
    EXISTS,
    NOT_EXISTS,
    BEGINS_WITH
  };

namespace DocumentEnrichmentConditionOperatorMapper
{
AWS_QBUSINESS_API DocumentEnrichmentConditionOperator GetDocumentEnrichmentConditionOperatorForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForDocumentEnrichmentConditionOperator(DocumentEnrichmentConditionOperator value);
} // namespace DocumentEnrichmentConditionOperatorMapper
} // namespace Model
} // namespace QBusiness
} // namespace Aws
