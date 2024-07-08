/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QApps
{
namespace Model
{
  enum class CardOutputSource
  {
    NOT_SET,
    approved_sources,
    llm
  };

namespace CardOutputSourceMapper
{
AWS_QAPPS_API CardOutputSource GetCardOutputSourceForName(const Aws::String& name);

AWS_QAPPS_API Aws::String GetNameForCardOutputSource(CardOutputSource value);
} // namespace CardOutputSourceMapper
} // namespace Model
} // namespace QApps
} // namespace Aws
