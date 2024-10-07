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
  enum class WebScopeType
  {
    NOT_SET,
    HOST_ONLY,
    SUBDOMAINS
  };

namespace WebScopeTypeMapper
{
AWS_QCONNECT_API WebScopeType GetWebScopeTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForWebScopeType(WebScopeType value);
} // namespace WebScopeTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
