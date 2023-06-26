/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{
  enum class CollectionType
  {
    NOT_SET,
    SEARCH,
    TIMESERIES
  };

namespace CollectionTypeMapper
{
AWS_OPENSEARCHSERVERLESS_API CollectionType GetCollectionTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForCollectionType(CollectionType value);
} // namespace CollectionTypeMapper
} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
