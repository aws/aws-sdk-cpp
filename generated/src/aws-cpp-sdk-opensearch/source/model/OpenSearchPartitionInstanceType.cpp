/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/OpenSearchPartitionInstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace OpenSearchPartitionInstanceTypeMapper
      {

        static const int m3_medium_search_HASH = HashingUtils::HashString("m3.medium.search");
        static const int m3_large_search_HASH = HashingUtils::HashString("m3.large.search");
        static const int m3_xlarge_search_HASH = HashingUtils::HashString("m3.xlarge.search");
        static const int m3_2xlarge_search_HASH = HashingUtils::HashString("m3.2xlarge.search");
        static const int m4_large_search_HASH = HashingUtils::HashString("m4.large.search");
        static const int m4_xlarge_search_HASH = HashingUtils::HashString("m4.xlarge.search");
        static const int m4_2xlarge_search_HASH = HashingUtils::HashString("m4.2xlarge.search");
        static const int m4_4xlarge_search_HASH = HashingUtils::HashString("m4.4xlarge.search");
        static const int m4_10xlarge_search_HASH = HashingUtils::HashString("m4.10xlarge.search");
        static const int m5_large_search_HASH = HashingUtils::HashString("m5.large.search");
        static const int m5_xlarge_search_HASH = HashingUtils::HashString("m5.xlarge.search");
        static const int m5_2xlarge_search_HASH = HashingUtils::HashString("m5.2xlarge.search");
        static const int m5_4xlarge_search_HASH = HashingUtils::HashString("m5.4xlarge.search");
        static const int m5_12xlarge_search_HASH = HashingUtils::HashString("m5.12xlarge.search");
        static const int m5_24xlarge_search_HASH = HashingUtils::HashString("m5.24xlarge.search");
        static const int r5_large_search_HASH = HashingUtils::HashString("r5.large.search");
        static const int r5_xlarge_search_HASH = HashingUtils::HashString("r5.xlarge.search");
        static const int r5_2xlarge_search_HASH = HashingUtils::HashString("r5.2xlarge.search");
        static const int r5_4xlarge_search_HASH = HashingUtils::HashString("r5.4xlarge.search");
        static const int r5_12xlarge_search_HASH = HashingUtils::HashString("r5.12xlarge.search");
        static const int r5_24xlarge_search_HASH = HashingUtils::HashString("r5.24xlarge.search");
        static const int c5_large_search_HASH = HashingUtils::HashString("c5.large.search");
        static const int c5_xlarge_search_HASH = HashingUtils::HashString("c5.xlarge.search");
        static const int c5_2xlarge_search_HASH = HashingUtils::HashString("c5.2xlarge.search");
        static const int c5_4xlarge_search_HASH = HashingUtils::HashString("c5.4xlarge.search");
        static const int c5_9xlarge_search_HASH = HashingUtils::HashString("c5.9xlarge.search");
        static const int c5_18xlarge_search_HASH = HashingUtils::HashString("c5.18xlarge.search");
        static const int t3_nano_search_HASH = HashingUtils::HashString("t3.nano.search");
        static const int t3_micro_search_HASH = HashingUtils::HashString("t3.micro.search");
        static const int t3_small_search_HASH = HashingUtils::HashString("t3.small.search");
        static const int t3_medium_search_HASH = HashingUtils::HashString("t3.medium.search");
        static const int t3_large_search_HASH = HashingUtils::HashString("t3.large.search");
        static const int t3_xlarge_search_HASH = HashingUtils::HashString("t3.xlarge.search");
        static const int t3_2xlarge_search_HASH = HashingUtils::HashString("t3.2xlarge.search");
        static const int or1_medium_search_HASH = HashingUtils::HashString("or1.medium.search");
        static const int or1_large_search_HASH = HashingUtils::HashString("or1.large.search");
        static const int or1_xlarge_search_HASH = HashingUtils::HashString("or1.xlarge.search");
        static const int or1_2xlarge_search_HASH = HashingUtils::HashString("or1.2xlarge.search");
        static const int or1_4xlarge_search_HASH = HashingUtils::HashString("or1.4xlarge.search");
        static const int or1_8xlarge_search_HASH = HashingUtils::HashString("or1.8xlarge.search");
        static const int or1_12xlarge_search_HASH = HashingUtils::HashString("or1.12xlarge.search");
        static const int or1_16xlarge_search_HASH = HashingUtils::HashString("or1.16xlarge.search");
        static const int ultrawarm1_medium_search_HASH = HashingUtils::HashString("ultrawarm1.medium.search");
        static const int ultrawarm1_large_search_HASH = HashingUtils::HashString("ultrawarm1.large.search");
        static const int ultrawarm1_xlarge_search_HASH = HashingUtils::HashString("ultrawarm1.xlarge.search");
        static const int t2_micro_search_HASH = HashingUtils::HashString("t2.micro.search");
        static const int t2_small_search_HASH = HashingUtils::HashString("t2.small.search");
        static const int t2_medium_search_HASH = HashingUtils::HashString("t2.medium.search");
        static const int r3_large_search_HASH = HashingUtils::HashString("r3.large.search");
        static const int r3_xlarge_search_HASH = HashingUtils::HashString("r3.xlarge.search");
        static const int r3_2xlarge_search_HASH = HashingUtils::HashString("r3.2xlarge.search");
        static const int r3_4xlarge_search_HASH = HashingUtils::HashString("r3.4xlarge.search");
        static const int r3_8xlarge_search_HASH = HashingUtils::HashString("r3.8xlarge.search");
        static const int i2_xlarge_search_HASH = HashingUtils::HashString("i2.xlarge.search");
        static const int i2_2xlarge_search_HASH = HashingUtils::HashString("i2.2xlarge.search");
        static const int d2_xlarge_search_HASH = HashingUtils::HashString("d2.xlarge.search");
        static const int d2_2xlarge_search_HASH = HashingUtils::HashString("d2.2xlarge.search");
        static const int d2_4xlarge_search_HASH = HashingUtils::HashString("d2.4xlarge.search");
        static const int d2_8xlarge_search_HASH = HashingUtils::HashString("d2.8xlarge.search");
        static const int c4_large_search_HASH = HashingUtils::HashString("c4.large.search");
        static const int c4_xlarge_search_HASH = HashingUtils::HashString("c4.xlarge.search");
        static const int c4_2xlarge_search_HASH = HashingUtils::HashString("c4.2xlarge.search");
        static const int c4_4xlarge_search_HASH = HashingUtils::HashString("c4.4xlarge.search");
        static const int c4_8xlarge_search_HASH = HashingUtils::HashString("c4.8xlarge.search");
        static const int r4_large_search_HASH = HashingUtils::HashString("r4.large.search");
        static const int r4_xlarge_search_HASH = HashingUtils::HashString("r4.xlarge.search");
        static const int r4_2xlarge_search_HASH = HashingUtils::HashString("r4.2xlarge.search");
        static const int r4_4xlarge_search_HASH = HashingUtils::HashString("r4.4xlarge.search");
        static const int r4_8xlarge_search_HASH = HashingUtils::HashString("r4.8xlarge.search");
        static const int r4_16xlarge_search_HASH = HashingUtils::HashString("r4.16xlarge.search");
        static const int i3_large_search_HASH = HashingUtils::HashString("i3.large.search");
        static const int i3_xlarge_search_HASH = HashingUtils::HashString("i3.xlarge.search");
        static const int i3_2xlarge_search_HASH = HashingUtils::HashString("i3.2xlarge.search");
        static const int i3_4xlarge_search_HASH = HashingUtils::HashString("i3.4xlarge.search");
        static const int i3_8xlarge_search_HASH = HashingUtils::HashString("i3.8xlarge.search");
        static const int i3_16xlarge_search_HASH = HashingUtils::HashString("i3.16xlarge.search");
        static const int r6g_large_search_HASH = HashingUtils::HashString("r6g.large.search");
        static const int r6g_xlarge_search_HASH = HashingUtils::HashString("r6g.xlarge.search");
        static const int r6g_2xlarge_search_HASH = HashingUtils::HashString("r6g.2xlarge.search");
        static const int r6g_4xlarge_search_HASH = HashingUtils::HashString("r6g.4xlarge.search");
        static const int r6g_8xlarge_search_HASH = HashingUtils::HashString("r6g.8xlarge.search");
        static const int r6g_12xlarge_search_HASH = HashingUtils::HashString("r6g.12xlarge.search");
        static const int m6g_large_search_HASH = HashingUtils::HashString("m6g.large.search");
        static const int m6g_xlarge_search_HASH = HashingUtils::HashString("m6g.xlarge.search");
        static const int m6g_2xlarge_search_HASH = HashingUtils::HashString("m6g.2xlarge.search");
        static const int m6g_4xlarge_search_HASH = HashingUtils::HashString("m6g.4xlarge.search");
        static const int m6g_8xlarge_search_HASH = HashingUtils::HashString("m6g.8xlarge.search");
        static const int m6g_12xlarge_search_HASH = HashingUtils::HashString("m6g.12xlarge.search");
        static const int c6g_large_search_HASH = HashingUtils::HashString("c6g.large.search");
        static const int c6g_xlarge_search_HASH = HashingUtils::HashString("c6g.xlarge.search");
        static const int c6g_2xlarge_search_HASH = HashingUtils::HashString("c6g.2xlarge.search");
        static const int c6g_4xlarge_search_HASH = HashingUtils::HashString("c6g.4xlarge.search");
        static const int c6g_8xlarge_search_HASH = HashingUtils::HashString("c6g.8xlarge.search");
        static const int c6g_12xlarge_search_HASH = HashingUtils::HashString("c6g.12xlarge.search");
        static const int r6gd_large_search_HASH = HashingUtils::HashString("r6gd.large.search");
        static const int r6gd_xlarge_search_HASH = HashingUtils::HashString("r6gd.xlarge.search");
        static const int r6gd_2xlarge_search_HASH = HashingUtils::HashString("r6gd.2xlarge.search");
        static const int r6gd_4xlarge_search_HASH = HashingUtils::HashString("r6gd.4xlarge.search");
        static const int r6gd_8xlarge_search_HASH = HashingUtils::HashString("r6gd.8xlarge.search");
        static const int r6gd_12xlarge_search_HASH = HashingUtils::HashString("r6gd.12xlarge.search");
        static const int r6gd_16xlarge_search_HASH = HashingUtils::HashString("r6gd.16xlarge.search");
        static const int t4g_small_search_HASH = HashingUtils::HashString("t4g.small.search");
        static const int t4g_medium_search_HASH = HashingUtils::HashString("t4g.medium.search");


        OpenSearchPartitionInstanceType GetOpenSearchPartitionInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == m3_medium_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m3_medium_search;
          }
          else if (hashCode == m3_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m3_large_search;
          }
          else if (hashCode == m3_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m3_xlarge_search;
          }
          else if (hashCode == m3_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m3_2xlarge_search;
          }
          else if (hashCode == m4_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m4_large_search;
          }
          else if (hashCode == m4_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m4_xlarge_search;
          }
          else if (hashCode == m4_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m4_2xlarge_search;
          }
          else if (hashCode == m4_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m4_4xlarge_search;
          }
          else if (hashCode == m4_10xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m4_10xlarge_search;
          }
          else if (hashCode == m5_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m5_large_search;
          }
          else if (hashCode == m5_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m5_xlarge_search;
          }
          else if (hashCode == m5_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m5_2xlarge_search;
          }
          else if (hashCode == m5_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m5_4xlarge_search;
          }
          else if (hashCode == m5_12xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m5_12xlarge_search;
          }
          else if (hashCode == m5_24xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m5_24xlarge_search;
          }
          else if (hashCode == r5_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r5_large_search;
          }
          else if (hashCode == r5_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r5_xlarge_search;
          }
          else if (hashCode == r5_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r5_2xlarge_search;
          }
          else if (hashCode == r5_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r5_4xlarge_search;
          }
          else if (hashCode == r5_12xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r5_12xlarge_search;
          }
          else if (hashCode == r5_24xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r5_24xlarge_search;
          }
          else if (hashCode == c5_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c5_large_search;
          }
          else if (hashCode == c5_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c5_xlarge_search;
          }
          else if (hashCode == c5_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c5_2xlarge_search;
          }
          else if (hashCode == c5_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c5_4xlarge_search;
          }
          else if (hashCode == c5_9xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c5_9xlarge_search;
          }
          else if (hashCode == c5_18xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c5_18xlarge_search;
          }
          else if (hashCode == t3_nano_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t3_nano_search;
          }
          else if (hashCode == t3_micro_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t3_micro_search;
          }
          else if (hashCode == t3_small_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t3_small_search;
          }
          else if (hashCode == t3_medium_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t3_medium_search;
          }
          else if (hashCode == t3_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t3_large_search;
          }
          else if (hashCode == t3_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t3_xlarge_search;
          }
          else if (hashCode == t3_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t3_2xlarge_search;
          }
          else if (hashCode == or1_medium_search_HASH)
          {
            return OpenSearchPartitionInstanceType::or1_medium_search;
          }
          else if (hashCode == or1_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::or1_large_search;
          }
          else if (hashCode == or1_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::or1_xlarge_search;
          }
          else if (hashCode == or1_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::or1_2xlarge_search;
          }
          else if (hashCode == or1_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::or1_4xlarge_search;
          }
          else if (hashCode == or1_8xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::or1_8xlarge_search;
          }
          else if (hashCode == or1_12xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::or1_12xlarge_search;
          }
          else if (hashCode == or1_16xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::or1_16xlarge_search;
          }
          else if (hashCode == ultrawarm1_medium_search_HASH)
          {
            return OpenSearchPartitionInstanceType::ultrawarm1_medium_search;
          }
          else if (hashCode == ultrawarm1_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::ultrawarm1_large_search;
          }
          else if (hashCode == ultrawarm1_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::ultrawarm1_xlarge_search;
          }
          else if (hashCode == t2_micro_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t2_micro_search;
          }
          else if (hashCode == t2_small_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t2_small_search;
          }
          else if (hashCode == t2_medium_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t2_medium_search;
          }
          else if (hashCode == r3_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r3_large_search;
          }
          else if (hashCode == r3_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r3_xlarge_search;
          }
          else if (hashCode == r3_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r3_2xlarge_search;
          }
          else if (hashCode == r3_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r3_4xlarge_search;
          }
          else if (hashCode == r3_8xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r3_8xlarge_search;
          }
          else if (hashCode == i2_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::i2_xlarge_search;
          }
          else if (hashCode == i2_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::i2_2xlarge_search;
          }
          else if (hashCode == d2_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::d2_xlarge_search;
          }
          else if (hashCode == d2_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::d2_2xlarge_search;
          }
          else if (hashCode == d2_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::d2_4xlarge_search;
          }
          else if (hashCode == d2_8xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::d2_8xlarge_search;
          }
          else if (hashCode == c4_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c4_large_search;
          }
          else if (hashCode == c4_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c4_xlarge_search;
          }
          else if (hashCode == c4_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c4_2xlarge_search;
          }
          else if (hashCode == c4_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c4_4xlarge_search;
          }
          else if (hashCode == c4_8xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c4_8xlarge_search;
          }
          else if (hashCode == r4_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r4_large_search;
          }
          else if (hashCode == r4_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r4_xlarge_search;
          }
          else if (hashCode == r4_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r4_2xlarge_search;
          }
          else if (hashCode == r4_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r4_4xlarge_search;
          }
          else if (hashCode == r4_8xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r4_8xlarge_search;
          }
          else if (hashCode == r4_16xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r4_16xlarge_search;
          }
          else if (hashCode == i3_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::i3_large_search;
          }
          else if (hashCode == i3_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::i3_xlarge_search;
          }
          else if (hashCode == i3_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::i3_2xlarge_search;
          }
          else if (hashCode == i3_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::i3_4xlarge_search;
          }
          else if (hashCode == i3_8xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::i3_8xlarge_search;
          }
          else if (hashCode == i3_16xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::i3_16xlarge_search;
          }
          else if (hashCode == r6g_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6g_large_search;
          }
          else if (hashCode == r6g_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6g_xlarge_search;
          }
          else if (hashCode == r6g_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6g_2xlarge_search;
          }
          else if (hashCode == r6g_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6g_4xlarge_search;
          }
          else if (hashCode == r6g_8xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6g_8xlarge_search;
          }
          else if (hashCode == r6g_12xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6g_12xlarge_search;
          }
          else if (hashCode == m6g_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m6g_large_search;
          }
          else if (hashCode == m6g_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m6g_xlarge_search;
          }
          else if (hashCode == m6g_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m6g_2xlarge_search;
          }
          else if (hashCode == m6g_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m6g_4xlarge_search;
          }
          else if (hashCode == m6g_8xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m6g_8xlarge_search;
          }
          else if (hashCode == m6g_12xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::m6g_12xlarge_search;
          }
          else if (hashCode == c6g_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c6g_large_search;
          }
          else if (hashCode == c6g_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c6g_xlarge_search;
          }
          else if (hashCode == c6g_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c6g_2xlarge_search;
          }
          else if (hashCode == c6g_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c6g_4xlarge_search;
          }
          else if (hashCode == c6g_8xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c6g_8xlarge_search;
          }
          else if (hashCode == c6g_12xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::c6g_12xlarge_search;
          }
          else if (hashCode == r6gd_large_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6gd_large_search;
          }
          else if (hashCode == r6gd_xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6gd_xlarge_search;
          }
          else if (hashCode == r6gd_2xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6gd_2xlarge_search;
          }
          else if (hashCode == r6gd_4xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6gd_4xlarge_search;
          }
          else if (hashCode == r6gd_8xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6gd_8xlarge_search;
          }
          else if (hashCode == r6gd_12xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6gd_12xlarge_search;
          }
          else if (hashCode == r6gd_16xlarge_search_HASH)
          {
            return OpenSearchPartitionInstanceType::r6gd_16xlarge_search;
          }
          else if (hashCode == t4g_small_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t4g_small_search;
          }
          else if (hashCode == t4g_medium_search_HASH)
          {
            return OpenSearchPartitionInstanceType::t4g_medium_search;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenSearchPartitionInstanceType>(hashCode);
          }

          return OpenSearchPartitionInstanceType::NOT_SET;
        }

        Aws::String GetNameForOpenSearchPartitionInstanceType(OpenSearchPartitionInstanceType enumValue)
        {
          switch(enumValue)
          {
          case OpenSearchPartitionInstanceType::NOT_SET:
            return {};
          case OpenSearchPartitionInstanceType::m3_medium_search:
            return "m3.medium.search";
          case OpenSearchPartitionInstanceType::m3_large_search:
            return "m3.large.search";
          case OpenSearchPartitionInstanceType::m3_xlarge_search:
            return "m3.xlarge.search";
          case OpenSearchPartitionInstanceType::m3_2xlarge_search:
            return "m3.2xlarge.search";
          case OpenSearchPartitionInstanceType::m4_large_search:
            return "m4.large.search";
          case OpenSearchPartitionInstanceType::m4_xlarge_search:
            return "m4.xlarge.search";
          case OpenSearchPartitionInstanceType::m4_2xlarge_search:
            return "m4.2xlarge.search";
          case OpenSearchPartitionInstanceType::m4_4xlarge_search:
            return "m4.4xlarge.search";
          case OpenSearchPartitionInstanceType::m4_10xlarge_search:
            return "m4.10xlarge.search";
          case OpenSearchPartitionInstanceType::m5_large_search:
            return "m5.large.search";
          case OpenSearchPartitionInstanceType::m5_xlarge_search:
            return "m5.xlarge.search";
          case OpenSearchPartitionInstanceType::m5_2xlarge_search:
            return "m5.2xlarge.search";
          case OpenSearchPartitionInstanceType::m5_4xlarge_search:
            return "m5.4xlarge.search";
          case OpenSearchPartitionInstanceType::m5_12xlarge_search:
            return "m5.12xlarge.search";
          case OpenSearchPartitionInstanceType::m5_24xlarge_search:
            return "m5.24xlarge.search";
          case OpenSearchPartitionInstanceType::r5_large_search:
            return "r5.large.search";
          case OpenSearchPartitionInstanceType::r5_xlarge_search:
            return "r5.xlarge.search";
          case OpenSearchPartitionInstanceType::r5_2xlarge_search:
            return "r5.2xlarge.search";
          case OpenSearchPartitionInstanceType::r5_4xlarge_search:
            return "r5.4xlarge.search";
          case OpenSearchPartitionInstanceType::r5_12xlarge_search:
            return "r5.12xlarge.search";
          case OpenSearchPartitionInstanceType::r5_24xlarge_search:
            return "r5.24xlarge.search";
          case OpenSearchPartitionInstanceType::c5_large_search:
            return "c5.large.search";
          case OpenSearchPartitionInstanceType::c5_xlarge_search:
            return "c5.xlarge.search";
          case OpenSearchPartitionInstanceType::c5_2xlarge_search:
            return "c5.2xlarge.search";
          case OpenSearchPartitionInstanceType::c5_4xlarge_search:
            return "c5.4xlarge.search";
          case OpenSearchPartitionInstanceType::c5_9xlarge_search:
            return "c5.9xlarge.search";
          case OpenSearchPartitionInstanceType::c5_18xlarge_search:
            return "c5.18xlarge.search";
          case OpenSearchPartitionInstanceType::t3_nano_search:
            return "t3.nano.search";
          case OpenSearchPartitionInstanceType::t3_micro_search:
            return "t3.micro.search";
          case OpenSearchPartitionInstanceType::t3_small_search:
            return "t3.small.search";
          case OpenSearchPartitionInstanceType::t3_medium_search:
            return "t3.medium.search";
          case OpenSearchPartitionInstanceType::t3_large_search:
            return "t3.large.search";
          case OpenSearchPartitionInstanceType::t3_xlarge_search:
            return "t3.xlarge.search";
          case OpenSearchPartitionInstanceType::t3_2xlarge_search:
            return "t3.2xlarge.search";
          case OpenSearchPartitionInstanceType::or1_medium_search:
            return "or1.medium.search";
          case OpenSearchPartitionInstanceType::or1_large_search:
            return "or1.large.search";
          case OpenSearchPartitionInstanceType::or1_xlarge_search:
            return "or1.xlarge.search";
          case OpenSearchPartitionInstanceType::or1_2xlarge_search:
            return "or1.2xlarge.search";
          case OpenSearchPartitionInstanceType::or1_4xlarge_search:
            return "or1.4xlarge.search";
          case OpenSearchPartitionInstanceType::or1_8xlarge_search:
            return "or1.8xlarge.search";
          case OpenSearchPartitionInstanceType::or1_12xlarge_search:
            return "or1.12xlarge.search";
          case OpenSearchPartitionInstanceType::or1_16xlarge_search:
            return "or1.16xlarge.search";
          case OpenSearchPartitionInstanceType::ultrawarm1_medium_search:
            return "ultrawarm1.medium.search";
          case OpenSearchPartitionInstanceType::ultrawarm1_large_search:
            return "ultrawarm1.large.search";
          case OpenSearchPartitionInstanceType::ultrawarm1_xlarge_search:
            return "ultrawarm1.xlarge.search";
          case OpenSearchPartitionInstanceType::t2_micro_search:
            return "t2.micro.search";
          case OpenSearchPartitionInstanceType::t2_small_search:
            return "t2.small.search";
          case OpenSearchPartitionInstanceType::t2_medium_search:
            return "t2.medium.search";
          case OpenSearchPartitionInstanceType::r3_large_search:
            return "r3.large.search";
          case OpenSearchPartitionInstanceType::r3_xlarge_search:
            return "r3.xlarge.search";
          case OpenSearchPartitionInstanceType::r3_2xlarge_search:
            return "r3.2xlarge.search";
          case OpenSearchPartitionInstanceType::r3_4xlarge_search:
            return "r3.4xlarge.search";
          case OpenSearchPartitionInstanceType::r3_8xlarge_search:
            return "r3.8xlarge.search";
          case OpenSearchPartitionInstanceType::i2_xlarge_search:
            return "i2.xlarge.search";
          case OpenSearchPartitionInstanceType::i2_2xlarge_search:
            return "i2.2xlarge.search";
          case OpenSearchPartitionInstanceType::d2_xlarge_search:
            return "d2.xlarge.search";
          case OpenSearchPartitionInstanceType::d2_2xlarge_search:
            return "d2.2xlarge.search";
          case OpenSearchPartitionInstanceType::d2_4xlarge_search:
            return "d2.4xlarge.search";
          case OpenSearchPartitionInstanceType::d2_8xlarge_search:
            return "d2.8xlarge.search";
          case OpenSearchPartitionInstanceType::c4_large_search:
            return "c4.large.search";
          case OpenSearchPartitionInstanceType::c4_xlarge_search:
            return "c4.xlarge.search";
          case OpenSearchPartitionInstanceType::c4_2xlarge_search:
            return "c4.2xlarge.search";
          case OpenSearchPartitionInstanceType::c4_4xlarge_search:
            return "c4.4xlarge.search";
          case OpenSearchPartitionInstanceType::c4_8xlarge_search:
            return "c4.8xlarge.search";
          case OpenSearchPartitionInstanceType::r4_large_search:
            return "r4.large.search";
          case OpenSearchPartitionInstanceType::r4_xlarge_search:
            return "r4.xlarge.search";
          case OpenSearchPartitionInstanceType::r4_2xlarge_search:
            return "r4.2xlarge.search";
          case OpenSearchPartitionInstanceType::r4_4xlarge_search:
            return "r4.4xlarge.search";
          case OpenSearchPartitionInstanceType::r4_8xlarge_search:
            return "r4.8xlarge.search";
          case OpenSearchPartitionInstanceType::r4_16xlarge_search:
            return "r4.16xlarge.search";
          case OpenSearchPartitionInstanceType::i3_large_search:
            return "i3.large.search";
          case OpenSearchPartitionInstanceType::i3_xlarge_search:
            return "i3.xlarge.search";
          case OpenSearchPartitionInstanceType::i3_2xlarge_search:
            return "i3.2xlarge.search";
          case OpenSearchPartitionInstanceType::i3_4xlarge_search:
            return "i3.4xlarge.search";
          case OpenSearchPartitionInstanceType::i3_8xlarge_search:
            return "i3.8xlarge.search";
          case OpenSearchPartitionInstanceType::i3_16xlarge_search:
            return "i3.16xlarge.search";
          case OpenSearchPartitionInstanceType::r6g_large_search:
            return "r6g.large.search";
          case OpenSearchPartitionInstanceType::r6g_xlarge_search:
            return "r6g.xlarge.search";
          case OpenSearchPartitionInstanceType::r6g_2xlarge_search:
            return "r6g.2xlarge.search";
          case OpenSearchPartitionInstanceType::r6g_4xlarge_search:
            return "r6g.4xlarge.search";
          case OpenSearchPartitionInstanceType::r6g_8xlarge_search:
            return "r6g.8xlarge.search";
          case OpenSearchPartitionInstanceType::r6g_12xlarge_search:
            return "r6g.12xlarge.search";
          case OpenSearchPartitionInstanceType::m6g_large_search:
            return "m6g.large.search";
          case OpenSearchPartitionInstanceType::m6g_xlarge_search:
            return "m6g.xlarge.search";
          case OpenSearchPartitionInstanceType::m6g_2xlarge_search:
            return "m6g.2xlarge.search";
          case OpenSearchPartitionInstanceType::m6g_4xlarge_search:
            return "m6g.4xlarge.search";
          case OpenSearchPartitionInstanceType::m6g_8xlarge_search:
            return "m6g.8xlarge.search";
          case OpenSearchPartitionInstanceType::m6g_12xlarge_search:
            return "m6g.12xlarge.search";
          case OpenSearchPartitionInstanceType::c6g_large_search:
            return "c6g.large.search";
          case OpenSearchPartitionInstanceType::c6g_xlarge_search:
            return "c6g.xlarge.search";
          case OpenSearchPartitionInstanceType::c6g_2xlarge_search:
            return "c6g.2xlarge.search";
          case OpenSearchPartitionInstanceType::c6g_4xlarge_search:
            return "c6g.4xlarge.search";
          case OpenSearchPartitionInstanceType::c6g_8xlarge_search:
            return "c6g.8xlarge.search";
          case OpenSearchPartitionInstanceType::c6g_12xlarge_search:
            return "c6g.12xlarge.search";
          case OpenSearchPartitionInstanceType::r6gd_large_search:
            return "r6gd.large.search";
          case OpenSearchPartitionInstanceType::r6gd_xlarge_search:
            return "r6gd.xlarge.search";
          case OpenSearchPartitionInstanceType::r6gd_2xlarge_search:
            return "r6gd.2xlarge.search";
          case OpenSearchPartitionInstanceType::r6gd_4xlarge_search:
            return "r6gd.4xlarge.search";
          case OpenSearchPartitionInstanceType::r6gd_8xlarge_search:
            return "r6gd.8xlarge.search";
          case OpenSearchPartitionInstanceType::r6gd_12xlarge_search:
            return "r6gd.12xlarge.search";
          case OpenSearchPartitionInstanceType::r6gd_16xlarge_search:
            return "r6gd.16xlarge.search";
          case OpenSearchPartitionInstanceType::t4g_small_search:
            return "t4g.small.search";
          case OpenSearchPartitionInstanceType::t4g_medium_search:
            return "t4g.medium.search";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenSearchPartitionInstanceTypeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
