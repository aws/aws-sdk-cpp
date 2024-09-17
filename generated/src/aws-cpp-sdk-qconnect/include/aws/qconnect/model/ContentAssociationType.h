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
  enum class ContentAssociationType
  {
    NOT_SET,
    AMAZON_CONNECT_GUIDE
  };

namespace ContentAssociationTypeMapper
{
AWS_QCONNECT_API ContentAssociationType GetContentAssociationTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForContentAssociationType(ContentAssociationType value);
} // namespace ContentAssociationTypeMapper
} // namespace Model
} // namespace QConnect
} // namespace Aws
