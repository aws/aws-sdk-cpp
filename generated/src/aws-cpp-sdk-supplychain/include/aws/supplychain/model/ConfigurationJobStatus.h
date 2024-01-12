/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{
  enum class ConfigurationJobStatus
  {
    NOT_SET,
    NEW_,
    FAILED,
    IN_PROGRESS,
    QUEUED,
    SUCCESS
  };

namespace ConfigurationJobStatusMapper
{
AWS_SUPPLYCHAIN_API ConfigurationJobStatus GetConfigurationJobStatusForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForConfigurationJobStatus(ConfigurationJobStatus value);
} // namespace ConfigurationJobStatusMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
