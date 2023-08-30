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
  enum class KeyUsagePropertyType
  {
    NOT_SET,
    ALL
  };

namespace KeyUsagePropertyTypeMapper
{
AWS_PCACONNECTORAD_API KeyUsagePropertyType GetKeyUsagePropertyTypeForName(const Aws::String& name);

AWS_PCACONNECTORAD_API Aws::String GetNameForKeyUsagePropertyType(KeyUsagePropertyType value);
} // namespace KeyUsagePropertyTypeMapper
} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
