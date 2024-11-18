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
  enum class ContentDisposition
  {
    NOT_SET,
    ATTACHMENT
  };

namespace ContentDispositionMapper
{
AWS_QCONNECT_API ContentDisposition GetContentDispositionForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForContentDisposition(ContentDisposition value);
} // namespace ContentDispositionMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
