/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{
  enum class TemplateStatus
  {
    NOT_SET,
    ACTIVE,
    DELETING
  };

namespace TemplateStatusMapper
{
AWS_PCACONNECTORAD_API TemplateStatus GetTemplateStatusForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForTemplateStatus(TemplateStatus value);
} // namespace TemplateStatusMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
