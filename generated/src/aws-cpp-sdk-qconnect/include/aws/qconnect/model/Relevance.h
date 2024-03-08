/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{
  enum class Relevance
  {
    NOT_SET,
    HELPFUL,
    NOT_HELPFUL
  };

namespace RelevanceMapper
{
AWS_QCONNECT_API Relevance GetRelevanceForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForRelevance(Relevance value);
} // namespace RelevanceMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
