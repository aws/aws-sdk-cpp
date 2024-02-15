/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{
  enum class OpenSearchPartitionInstanceType
  {
    NOT_SET,
    m3_medium_search,
    m3_large_search,
    m3_xlarge_search,
    m3_2xlarge_search,
    m4_large_search,
    m4_xlarge_search,
    m4_2xlarge_search,
    m4_4xlarge_search,
    m4_10xlarge_search,
    m5_large_search,
    m5_xlarge_search,
    m5_2xlarge_search,
    m5_4xlarge_search,
    m5_12xlarge_search,
    m5_24xlarge_search,
    r5_large_search,
    r5_xlarge_search,
    r5_2xlarge_search,
    r5_4xlarge_search,
    r5_12xlarge_search,
    r5_24xlarge_search,
    c5_large_search,
    c5_xlarge_search,
    c5_2xlarge_search,
    c5_4xlarge_search,
    c5_9xlarge_search,
    c5_18xlarge_search,
    t3_nano_search,
    t3_micro_search,
    t3_small_search,
    t3_medium_search,
    t3_large_search,
    t3_xlarge_search,
    t3_2xlarge_search,
    or1_medium_search,
    or1_large_search,
    or1_xlarge_search,
    or1_2xlarge_search,
    or1_4xlarge_search,
    or1_8xlarge_search,
    or1_12xlarge_search,
    or1_16xlarge_search,
    ultrawarm1_medium_search,
    ultrawarm1_large_search,
    ultrawarm1_xlarge_search,
    t2_micro_search,
    t2_small_search,
    t2_medium_search,
    r3_large_search,
    r3_xlarge_search,
    r3_2xlarge_search,
    r3_4xlarge_search,
    r3_8xlarge_search,
    i2_xlarge_search,
    i2_2xlarge_search,
    d2_xlarge_search,
    d2_2xlarge_search,
    d2_4xlarge_search,
    d2_8xlarge_search,
    c4_large_search,
    c4_xlarge_search,
    c4_2xlarge_search,
    c4_4xlarge_search,
    c4_8xlarge_search,
    r4_large_search,
    r4_xlarge_search,
    r4_2xlarge_search,
    r4_4xlarge_search,
    r4_8xlarge_search,
    r4_16xlarge_search,
    i3_large_search,
    i3_xlarge_search,
    i3_2xlarge_search,
    i3_4xlarge_search,
    i3_8xlarge_search,
    i3_16xlarge_search,
    r6g_large_search,
    r6g_xlarge_search,
    r6g_2xlarge_search,
    r6g_4xlarge_search,
    r6g_8xlarge_search,
    r6g_12xlarge_search,
    m6g_large_search,
    m6g_xlarge_search,
    m6g_2xlarge_search,
    m6g_4xlarge_search,
    m6g_8xlarge_search,
    m6g_12xlarge_search,
    c6g_large_search,
    c6g_xlarge_search,
    c6g_2xlarge_search,
    c6g_4xlarge_search,
    c6g_8xlarge_search,
    c6g_12xlarge_search,
    r6gd_large_search,
    r6gd_xlarge_search,
    r6gd_2xlarge_search,
    r6gd_4xlarge_search,
    r6gd_8xlarge_search,
    r6gd_12xlarge_search,
    r6gd_16xlarge_search,
    t4g_small_search,
    t4g_medium_search
  };

namespace OpenSearchPartitionInstanceTypeMapper
{
AWS_OPENSEARCHSERVICE_API OpenSearchPartitionInstanceType GetOpenSearchPartitionInstanceTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForOpenSearchPartitionInstanceType(OpenSearchPartitionInstanceType value);
} // namespace OpenSearchPartitionInstanceTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
