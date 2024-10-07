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
  enum class SessionDataNamespace
  {
    NOT_SET,
    Custom
  };

namespace SessionDataNamespaceMapper
{
AWS_QCONNECT_API SessionDataNamespace GetSessionDataNamespaceForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForSessionDataNamespace(SessionDataNamespace value);
} // namespace SessionDataNamespaceMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
