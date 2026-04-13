/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterInstanceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterInstanceTypeMapper {

static const int ml_p4d_24xlarge_HASH = HashingUtils::HashString("ml.p4d.24xlarge");
static const int ml_p4de_24xlarge_HASH = HashingUtils::HashString("ml.p4de.24xlarge");
static const int ml_p5_48xlarge_HASH = HashingUtils::HashString("ml.p5.48xlarge");
static const int ml_p5_4xlarge_HASH = HashingUtils::HashString("ml.p5.4xlarge");
static const int ml_p6e_gb200_36xlarge_HASH = HashingUtils::HashString("ml.p6e-gb200.36xlarge");
static const int ml_trn1_32xlarge_HASH = HashingUtils::HashString("ml.trn1.32xlarge");
static const int ml_trn1n_32xlarge_HASH = HashingUtils::HashString("ml.trn1n.32xlarge");
static const int ml_g5_xlarge_HASH = HashingUtils::HashString("ml.g5.xlarge");
static const int ml_g5_2xlarge_HASH = HashingUtils::HashString("ml.g5.2xlarge");
static const int ml_g5_4xlarge_HASH = HashingUtils::HashString("ml.g5.4xlarge");
static const int ml_g5_8xlarge_HASH = HashingUtils::HashString("ml.g5.8xlarge");
static const int ml_g5_12xlarge_HASH = HashingUtils::HashString("ml.g5.12xlarge");
static const int ml_g5_16xlarge_HASH = HashingUtils::HashString("ml.g5.16xlarge");
static const int ml_g5_24xlarge_HASH = HashingUtils::HashString("ml.g5.24xlarge");
static const int ml_g5_48xlarge_HASH = HashingUtils::HashString("ml.g5.48xlarge");
static const int ml_c5_large_HASH = HashingUtils::HashString("ml.c5.large");
static const int ml_c5_xlarge_HASH = HashingUtils::HashString("ml.c5.xlarge");
static const int ml_c5_2xlarge_HASH = HashingUtils::HashString("ml.c5.2xlarge");
static const int ml_c5_4xlarge_HASH = HashingUtils::HashString("ml.c5.4xlarge");
static const int ml_c5_9xlarge_HASH = HashingUtils::HashString("ml.c5.9xlarge");
static const int ml_c5_12xlarge_HASH = HashingUtils::HashString("ml.c5.12xlarge");
static const int ml_c5_18xlarge_HASH = HashingUtils::HashString("ml.c5.18xlarge");
static const int ml_c5_24xlarge_HASH = HashingUtils::HashString("ml.c5.24xlarge");
static const int ml_c5n_large_HASH = HashingUtils::HashString("ml.c5n.large");
static const int ml_c5n_2xlarge_HASH = HashingUtils::HashString("ml.c5n.2xlarge");
static const int ml_c5n_4xlarge_HASH = HashingUtils::HashString("ml.c5n.4xlarge");
static const int ml_c5n_9xlarge_HASH = HashingUtils::HashString("ml.c5n.9xlarge");
static const int ml_c5n_18xlarge_HASH = HashingUtils::HashString("ml.c5n.18xlarge");
static const int ml_m5_large_HASH = HashingUtils::HashString("ml.m5.large");
static const int ml_m5_xlarge_HASH = HashingUtils::HashString("ml.m5.xlarge");
static const int ml_m5_2xlarge_HASH = HashingUtils::HashString("ml.m5.2xlarge");
static const int ml_m5_4xlarge_HASH = HashingUtils::HashString("ml.m5.4xlarge");
static const int ml_m5_8xlarge_HASH = HashingUtils::HashString("ml.m5.8xlarge");
static const int ml_m5_12xlarge_HASH = HashingUtils::HashString("ml.m5.12xlarge");
static const int ml_m5_16xlarge_HASH = HashingUtils::HashString("ml.m5.16xlarge");
static const int ml_m5_24xlarge_HASH = HashingUtils::HashString("ml.m5.24xlarge");
static const int ml_t3_medium_HASH = HashingUtils::HashString("ml.t3.medium");
static const int ml_t3_large_HASH = HashingUtils::HashString("ml.t3.large");
static const int ml_t3_xlarge_HASH = HashingUtils::HashString("ml.t3.xlarge");
static const int ml_t3_2xlarge_HASH = HashingUtils::HashString("ml.t3.2xlarge");
static const int ml_g6_xlarge_HASH = HashingUtils::HashString("ml.g6.xlarge");
static const int ml_g6_2xlarge_HASH = HashingUtils::HashString("ml.g6.2xlarge");
static const int ml_g6_4xlarge_HASH = HashingUtils::HashString("ml.g6.4xlarge");
static const int ml_g6_8xlarge_HASH = HashingUtils::HashString("ml.g6.8xlarge");
static const int ml_g6_16xlarge_HASH = HashingUtils::HashString("ml.g6.16xlarge");
static const int ml_g6_12xlarge_HASH = HashingUtils::HashString("ml.g6.12xlarge");
static const int ml_g6_24xlarge_HASH = HashingUtils::HashString("ml.g6.24xlarge");
static const int ml_g6_48xlarge_HASH = HashingUtils::HashString("ml.g6.48xlarge");
static const int ml_gr6_4xlarge_HASH = HashingUtils::HashString("ml.gr6.4xlarge");
static const int ml_gr6_8xlarge_HASH = HashingUtils::HashString("ml.gr6.8xlarge");
static const int ml_g6e_xlarge_HASH = HashingUtils::HashString("ml.g6e.xlarge");
static const int ml_g6e_2xlarge_HASH = HashingUtils::HashString("ml.g6e.2xlarge");
static const int ml_g6e_4xlarge_HASH = HashingUtils::HashString("ml.g6e.4xlarge");
static const int ml_g6e_8xlarge_HASH = HashingUtils::HashString("ml.g6e.8xlarge");
static const int ml_g6e_16xlarge_HASH = HashingUtils::HashString("ml.g6e.16xlarge");
static const int ml_g6e_12xlarge_HASH = HashingUtils::HashString("ml.g6e.12xlarge");
static const int ml_g6e_24xlarge_HASH = HashingUtils::HashString("ml.g6e.24xlarge");
static const int ml_g6e_48xlarge_HASH = HashingUtils::HashString("ml.g6e.48xlarge");
static const int ml_p5e_48xlarge_HASH = HashingUtils::HashString("ml.p5e.48xlarge");
static const int ml_p5en_48xlarge_HASH = HashingUtils::HashString("ml.p5en.48xlarge");
static const int ml_p6_b200_48xlarge_HASH = HashingUtils::HashString("ml.p6-b200.48xlarge");
static const int ml_trn2_3xlarge_HASH = HashingUtils::HashString("ml.trn2.3xlarge");
static const int ml_trn2_48xlarge_HASH = HashingUtils::HashString("ml.trn2.48xlarge");
static const int ml_c6i_large_HASH = HashingUtils::HashString("ml.c6i.large");
static const int ml_c6i_xlarge_HASH = HashingUtils::HashString("ml.c6i.xlarge");
static const int ml_c6i_2xlarge_HASH = HashingUtils::HashString("ml.c6i.2xlarge");
static const int ml_c6i_4xlarge_HASH = HashingUtils::HashString("ml.c6i.4xlarge");
static const int ml_c6i_8xlarge_HASH = HashingUtils::HashString("ml.c6i.8xlarge");
static const int ml_c6i_12xlarge_HASH = HashingUtils::HashString("ml.c6i.12xlarge");
static const int ml_c6i_16xlarge_HASH = HashingUtils::HashString("ml.c6i.16xlarge");
static const int ml_c6i_24xlarge_HASH = HashingUtils::HashString("ml.c6i.24xlarge");
static const int ml_c6i_32xlarge_HASH = HashingUtils::HashString("ml.c6i.32xlarge");
static const int ml_m6i_large_HASH = HashingUtils::HashString("ml.m6i.large");
static const int ml_m6i_xlarge_HASH = HashingUtils::HashString("ml.m6i.xlarge");
static const int ml_m6i_2xlarge_HASH = HashingUtils::HashString("ml.m6i.2xlarge");
static const int ml_m6i_4xlarge_HASH = HashingUtils::HashString("ml.m6i.4xlarge");
static const int ml_m6i_8xlarge_HASH = HashingUtils::HashString("ml.m6i.8xlarge");
static const int ml_m6i_12xlarge_HASH = HashingUtils::HashString("ml.m6i.12xlarge");
static const int ml_m6i_16xlarge_HASH = HashingUtils::HashString("ml.m6i.16xlarge");
static const int ml_m6i_24xlarge_HASH = HashingUtils::HashString("ml.m6i.24xlarge");
static const int ml_m6i_32xlarge_HASH = HashingUtils::HashString("ml.m6i.32xlarge");
static const int ml_r6i_large_HASH = HashingUtils::HashString("ml.r6i.large");
static const int ml_r6i_xlarge_HASH = HashingUtils::HashString("ml.r6i.xlarge");
static const int ml_r6i_2xlarge_HASH = HashingUtils::HashString("ml.r6i.2xlarge");
static const int ml_r6i_4xlarge_HASH = HashingUtils::HashString("ml.r6i.4xlarge");
static const int ml_r6i_8xlarge_HASH = HashingUtils::HashString("ml.r6i.8xlarge");
static const int ml_r6i_12xlarge_HASH = HashingUtils::HashString("ml.r6i.12xlarge");
static const int ml_r6i_16xlarge_HASH = HashingUtils::HashString("ml.r6i.16xlarge");
static const int ml_r6i_24xlarge_HASH = HashingUtils::HashString("ml.r6i.24xlarge");
static const int ml_r6i_32xlarge_HASH = HashingUtils::HashString("ml.r6i.32xlarge");
static const int ml_i3en_large_HASH = HashingUtils::HashString("ml.i3en.large");
static const int ml_i3en_xlarge_HASH = HashingUtils::HashString("ml.i3en.xlarge");
static const int ml_i3en_2xlarge_HASH = HashingUtils::HashString("ml.i3en.2xlarge");
static const int ml_i3en_3xlarge_HASH = HashingUtils::HashString("ml.i3en.3xlarge");
static const int ml_i3en_6xlarge_HASH = HashingUtils::HashString("ml.i3en.6xlarge");
static const int ml_i3en_12xlarge_HASH = HashingUtils::HashString("ml.i3en.12xlarge");
static const int ml_i3en_24xlarge_HASH = HashingUtils::HashString("ml.i3en.24xlarge");
static const int ml_m7i_large_HASH = HashingUtils::HashString("ml.m7i.large");
static const int ml_m7i_xlarge_HASH = HashingUtils::HashString("ml.m7i.xlarge");
static const int ml_m7i_2xlarge_HASH = HashingUtils::HashString("ml.m7i.2xlarge");
static const int ml_m7i_4xlarge_HASH = HashingUtils::HashString("ml.m7i.4xlarge");
static const int ml_m7i_8xlarge_HASH = HashingUtils::HashString("ml.m7i.8xlarge");
static const int ml_m7i_12xlarge_HASH = HashingUtils::HashString("ml.m7i.12xlarge");
static const int ml_m7i_16xlarge_HASH = HashingUtils::HashString("ml.m7i.16xlarge");
static const int ml_m7i_24xlarge_HASH = HashingUtils::HashString("ml.m7i.24xlarge");
static const int ml_m7i_48xlarge_HASH = HashingUtils::HashString("ml.m7i.48xlarge");
static const int ml_r7i_large_HASH = HashingUtils::HashString("ml.r7i.large");
static const int ml_r7i_xlarge_HASH = HashingUtils::HashString("ml.r7i.xlarge");
static const int ml_r7i_2xlarge_HASH = HashingUtils::HashString("ml.r7i.2xlarge");
static const int ml_r7i_4xlarge_HASH = HashingUtils::HashString("ml.r7i.4xlarge");
static const int ml_r7i_8xlarge_HASH = HashingUtils::HashString("ml.r7i.8xlarge");
static const int ml_r7i_12xlarge_HASH = HashingUtils::HashString("ml.r7i.12xlarge");
static const int ml_r7i_16xlarge_HASH = HashingUtils::HashString("ml.r7i.16xlarge");
static const int ml_r7i_24xlarge_HASH = HashingUtils::HashString("ml.r7i.24xlarge");
static const int ml_r7i_48xlarge_HASH = HashingUtils::HashString("ml.r7i.48xlarge");
static const int ml_r5d_16xlarge_HASH = HashingUtils::HashString("ml.r5d.16xlarge");
static const int ml_g7e_2xlarge_HASH = HashingUtils::HashString("ml.g7e.2xlarge");
static const int ml_g7e_4xlarge_HASH = HashingUtils::HashString("ml.g7e.4xlarge");
static const int ml_g7e_8xlarge_HASH = HashingUtils::HashString("ml.g7e.8xlarge");
static const int ml_g7e_12xlarge_HASH = HashingUtils::HashString("ml.g7e.12xlarge");
static const int ml_g7e_24xlarge_HASH = HashingUtils::HashString("ml.g7e.24xlarge");
static const int ml_g7e_48xlarge_HASH = HashingUtils::HashString("ml.g7e.48xlarge");
static const int ml_p6_b300_48xlarge_HASH = HashingUtils::HashString("ml.p6-b300.48xlarge");

/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/
static bool GetEnumForNameHelper0(int hashCode, ClusterInstanceType& enumValue) {
  if (hashCode == ml_p4d_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_p4d_24xlarge;
    return true;
  } else if (hashCode == ml_p4de_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_p4de_24xlarge;
    return true;
  } else if (hashCode == ml_p5_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_p5_48xlarge;
    return true;
  } else if (hashCode == ml_p5_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_p5_4xlarge;
    return true;
  } else if (hashCode == ml_p6e_gb200_36xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_p6e_gb200_36xlarge;
    return true;
  } else if (hashCode == ml_trn1_32xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_trn1_32xlarge;
    return true;
  } else if (hashCode == ml_trn1n_32xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_trn1n_32xlarge;
    return true;
  } else if (hashCode == ml_g5_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g5_xlarge;
    return true;
  } else if (hashCode == ml_g5_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g5_2xlarge;
    return true;
  } else if (hashCode == ml_g5_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g5_4xlarge;
    return true;
  } else if (hashCode == ml_g5_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g5_8xlarge;
    return true;
  } else if (hashCode == ml_g5_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g5_12xlarge;
    return true;
  } else if (hashCode == ml_g5_16xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g5_16xlarge;
    return true;
  } else if (hashCode == ml_g5_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g5_24xlarge;
    return true;
  } else if (hashCode == ml_g5_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g5_48xlarge;
    return true;
  } else if (hashCode == ml_c5_large_HASH) {
    enumValue = ClusterInstanceType::ml_c5_large;
    return true;
  } else if (hashCode == ml_c5_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5_xlarge;
    return true;
  } else if (hashCode == ml_c5_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5_2xlarge;
    return true;
  } else if (hashCode == ml_c5_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5_4xlarge;
    return true;
  } else if (hashCode == ml_c5_9xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5_9xlarge;
    return true;
  } else if (hashCode == ml_c5_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5_12xlarge;
    return true;
  } else if (hashCode == ml_c5_18xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5_18xlarge;
    return true;
  } else if (hashCode == ml_c5_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5_24xlarge;
    return true;
  } else if (hashCode == ml_c5n_large_HASH) {
    enumValue = ClusterInstanceType::ml_c5n_large;
    return true;
  } else if (hashCode == ml_c5n_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5n_2xlarge;
    return true;
  } else if (hashCode == ml_c5n_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5n_4xlarge;
    return true;
  } else if (hashCode == ml_c5n_9xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5n_9xlarge;
    return true;
  } else if (hashCode == ml_c5n_18xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c5n_18xlarge;
    return true;
  } else if (hashCode == ml_m5_large_HASH) {
    enumValue = ClusterInstanceType::ml_m5_large;
    return true;
  } else if (hashCode == ml_m5_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m5_xlarge;
    return true;
  } else if (hashCode == ml_m5_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m5_2xlarge;
    return true;
  } else if (hashCode == ml_m5_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m5_4xlarge;
    return true;
  } else if (hashCode == ml_m5_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m5_8xlarge;
    return true;
  } else if (hashCode == ml_m5_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m5_12xlarge;
    return true;
  } else if (hashCode == ml_m5_16xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m5_16xlarge;
    return true;
  } else if (hashCode == ml_m5_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m5_24xlarge;
    return true;
  } else if (hashCode == ml_t3_medium_HASH) {
    enumValue = ClusterInstanceType::ml_t3_medium;
    return true;
  } else if (hashCode == ml_t3_large_HASH) {
    enumValue = ClusterInstanceType::ml_t3_large;
    return true;
  } else if (hashCode == ml_t3_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_t3_xlarge;
    return true;
  } else if (hashCode == ml_t3_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_t3_2xlarge;
    return true;
  } else if (hashCode == ml_g6_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6_xlarge;
    return true;
  } else if (hashCode == ml_g6_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6_2xlarge;
    return true;
  } else if (hashCode == ml_g6_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6_4xlarge;
    return true;
  } else if (hashCode == ml_g6_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6_8xlarge;
    return true;
  } else if (hashCode == ml_g6_16xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6_16xlarge;
    return true;
  } else if (hashCode == ml_g6_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6_12xlarge;
    return true;
  } else if (hashCode == ml_g6_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6_24xlarge;
    return true;
  } else if (hashCode == ml_g6_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6_48xlarge;
    return true;
  } else if (hashCode == ml_gr6_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_gr6_4xlarge;
    return true;
  } else if (hashCode == ml_gr6_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_gr6_8xlarge;
    return true;
  } else if (hashCode == ml_g6e_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6e_xlarge;
    return true;
  } else if (hashCode == ml_g6e_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6e_2xlarge;
    return true;
  } else if (hashCode == ml_g6e_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6e_4xlarge;
    return true;
  } else if (hashCode == ml_g6e_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6e_8xlarge;
    return true;
  } else if (hashCode == ml_g6e_16xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6e_16xlarge;
    return true;
  } else if (hashCode == ml_g6e_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6e_12xlarge;
    return true;
  } else if (hashCode == ml_g6e_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6e_24xlarge;
    return true;
  } else if (hashCode == ml_g6e_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g6e_48xlarge;
    return true;
  } else if (hashCode == ml_p5e_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_p5e_48xlarge;
    return true;
  } else if (hashCode == ml_p5en_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_p5en_48xlarge;
    return true;
  } else if (hashCode == ml_p6_b200_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_p6_b200_48xlarge;
    return true;
  } else if (hashCode == ml_trn2_3xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_trn2_3xlarge;
    return true;
  } else if (hashCode == ml_trn2_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_trn2_48xlarge;
    return true;
  } else if (hashCode == ml_c6i_large_HASH) {
    enumValue = ClusterInstanceType::ml_c6i_large;
    return true;
  } else if (hashCode == ml_c6i_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c6i_xlarge;
    return true;
  } else if (hashCode == ml_c6i_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c6i_2xlarge;
    return true;
  } else if (hashCode == ml_c6i_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c6i_4xlarge;
    return true;
  } else if (hashCode == ml_c6i_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c6i_8xlarge;
    return true;
  } else if (hashCode == ml_c6i_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c6i_12xlarge;
    return true;
  } else if (hashCode == ml_c6i_16xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c6i_16xlarge;
    return true;
  } else if (hashCode == ml_c6i_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c6i_24xlarge;
    return true;
  } else if (hashCode == ml_c6i_32xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_c6i_32xlarge;
    return true;
  } else if (hashCode == ml_m6i_large_HASH) {
    enumValue = ClusterInstanceType::ml_m6i_large;
    return true;
  } else if (hashCode == ml_m6i_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m6i_xlarge;
    return true;
  } else if (hashCode == ml_m6i_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m6i_2xlarge;
    return true;
  } else if (hashCode == ml_m6i_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m6i_4xlarge;
    return true;
  } else if (hashCode == ml_m6i_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m6i_8xlarge;
    return true;
  } else if (hashCode == ml_m6i_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m6i_12xlarge;
    return true;
  } else if (hashCode == ml_m6i_16xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m6i_16xlarge;
    return true;
  } else if (hashCode == ml_m6i_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m6i_24xlarge;
    return true;
  } else if (hashCode == ml_m6i_32xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m6i_32xlarge;
    return true;
  } else if (hashCode == ml_r6i_large_HASH) {
    enumValue = ClusterInstanceType::ml_r6i_large;
    return true;
  } else if (hashCode == ml_r6i_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r6i_xlarge;
    return true;
  } else if (hashCode == ml_r6i_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r6i_2xlarge;
    return true;
  } else if (hashCode == ml_r6i_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r6i_4xlarge;
    return true;
  } else if (hashCode == ml_r6i_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r6i_8xlarge;
    return true;
  } else if (hashCode == ml_r6i_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r6i_12xlarge;
    return true;
  } else if (hashCode == ml_r6i_16xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r6i_16xlarge;
    return true;
  } else if (hashCode == ml_r6i_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r6i_24xlarge;
    return true;
  } else if (hashCode == ml_r6i_32xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r6i_32xlarge;
    return true;
  } else if (hashCode == ml_i3en_large_HASH) {
    enumValue = ClusterInstanceType::ml_i3en_large;
    return true;
  } else if (hashCode == ml_i3en_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_i3en_xlarge;
    return true;
  } else if (hashCode == ml_i3en_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_i3en_2xlarge;
    return true;
  } else if (hashCode == ml_i3en_3xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_i3en_3xlarge;
    return true;
  } else if (hashCode == ml_i3en_6xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_i3en_6xlarge;
    return true;
  } else if (hashCode == ml_i3en_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_i3en_12xlarge;
    return true;
  } else if (hashCode == ml_i3en_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_i3en_24xlarge;
    return true;
  } else if (hashCode == ml_m7i_large_HASH) {
    enumValue = ClusterInstanceType::ml_m7i_large;
    return true;
  } else if (hashCode == ml_m7i_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m7i_xlarge;
    return true;
  } else if (hashCode == ml_m7i_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m7i_2xlarge;
    return true;
  } else if (hashCode == ml_m7i_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m7i_4xlarge;
    return true;
  } else if (hashCode == ml_m7i_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m7i_8xlarge;
    return true;
  } else if (hashCode == ml_m7i_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m7i_12xlarge;
    return true;
  } else if (hashCode == ml_m7i_16xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m7i_16xlarge;
    return true;
  } else if (hashCode == ml_m7i_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m7i_24xlarge;
    return true;
  } else if (hashCode == ml_m7i_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_m7i_48xlarge;
    return true;
  } else if (hashCode == ml_r7i_large_HASH) {
    enumValue = ClusterInstanceType::ml_r7i_large;
    return true;
  } else if (hashCode == ml_r7i_xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r7i_xlarge;
    return true;
  } else if (hashCode == ml_r7i_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r7i_2xlarge;
    return true;
  } else if (hashCode == ml_r7i_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r7i_4xlarge;
    return true;
  } else if (hashCode == ml_r7i_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r7i_8xlarge;
    return true;
  } else if (hashCode == ml_r7i_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r7i_12xlarge;
    return true;
  } else if (hashCode == ml_r7i_16xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r7i_16xlarge;
    return true;
  } else if (hashCode == ml_r7i_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r7i_24xlarge;
    return true;
  } else if (hashCode == ml_r7i_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r7i_48xlarge;
    return true;
  } else if (hashCode == ml_r5d_16xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_r5d_16xlarge;
    return true;
  } else if (hashCode == ml_g7e_2xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g7e_2xlarge;
    return true;
  } else if (hashCode == ml_g7e_4xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g7e_4xlarge;
    return true;
  } else if (hashCode == ml_g7e_8xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g7e_8xlarge;
    return true;
  } else if (hashCode == ml_g7e_12xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g7e_12xlarge;
    return true;
  } else if (hashCode == ml_g7e_24xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g7e_24xlarge;
    return true;
  } else if (hashCode == ml_g7e_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_g7e_48xlarge;
    return true;
  }
  return false;
}
static bool GetEnumForNameHelper1(int hashCode, ClusterInstanceType& enumValue) {
  if (hashCode == ml_p6_b300_48xlarge_HASH) {
    enumValue = ClusterInstanceType::ml_p6_b300_48xlarge;
    return true;
  }
  return false;
}

static bool GetNameForEnumHelper0(ClusterInstanceType enumValue, Aws::String& value) {
  switch (enumValue) {
    case ClusterInstanceType::ml_p4d_24xlarge:
      value = "ml.p4d.24xlarge";
      return true;
    case ClusterInstanceType::ml_p4de_24xlarge:
      value = "ml.p4de.24xlarge";
      return true;
    case ClusterInstanceType::ml_p5_48xlarge:
      value = "ml.p5.48xlarge";
      return true;
    case ClusterInstanceType::ml_p5_4xlarge:
      value = "ml.p5.4xlarge";
      return true;
    case ClusterInstanceType::ml_p6e_gb200_36xlarge:
      value = "ml.p6e-gb200.36xlarge";
      return true;
    case ClusterInstanceType::ml_trn1_32xlarge:
      value = "ml.trn1.32xlarge";
      return true;
    case ClusterInstanceType::ml_trn1n_32xlarge:
      value = "ml.trn1n.32xlarge";
      return true;
    case ClusterInstanceType::ml_g5_xlarge:
      value = "ml.g5.xlarge";
      return true;
    case ClusterInstanceType::ml_g5_2xlarge:
      value = "ml.g5.2xlarge";
      return true;
    case ClusterInstanceType::ml_g5_4xlarge:
      value = "ml.g5.4xlarge";
      return true;
    case ClusterInstanceType::ml_g5_8xlarge:
      value = "ml.g5.8xlarge";
      return true;
    case ClusterInstanceType::ml_g5_12xlarge:
      value = "ml.g5.12xlarge";
      return true;
    case ClusterInstanceType::ml_g5_16xlarge:
      value = "ml.g5.16xlarge";
      return true;
    case ClusterInstanceType::ml_g5_24xlarge:
      value = "ml.g5.24xlarge";
      return true;
    case ClusterInstanceType::ml_g5_48xlarge:
      value = "ml.g5.48xlarge";
      return true;
    case ClusterInstanceType::ml_c5_large:
      value = "ml.c5.large";
      return true;
    case ClusterInstanceType::ml_c5_xlarge:
      value = "ml.c5.xlarge";
      return true;
    case ClusterInstanceType::ml_c5_2xlarge:
      value = "ml.c5.2xlarge";
      return true;
    case ClusterInstanceType::ml_c5_4xlarge:
      value = "ml.c5.4xlarge";
      return true;
    case ClusterInstanceType::ml_c5_9xlarge:
      value = "ml.c5.9xlarge";
      return true;
    case ClusterInstanceType::ml_c5_12xlarge:
      value = "ml.c5.12xlarge";
      return true;
    case ClusterInstanceType::ml_c5_18xlarge:
      value = "ml.c5.18xlarge";
      return true;
    case ClusterInstanceType::ml_c5_24xlarge:
      value = "ml.c5.24xlarge";
      return true;
    case ClusterInstanceType::ml_c5n_large:
      value = "ml.c5n.large";
      return true;
    case ClusterInstanceType::ml_c5n_2xlarge:
      value = "ml.c5n.2xlarge";
      return true;
    case ClusterInstanceType::ml_c5n_4xlarge:
      value = "ml.c5n.4xlarge";
      return true;
    case ClusterInstanceType::ml_c5n_9xlarge:
      value = "ml.c5n.9xlarge";
      return true;
    case ClusterInstanceType::ml_c5n_18xlarge:
      value = "ml.c5n.18xlarge";
      return true;
    case ClusterInstanceType::ml_m5_large:
      value = "ml.m5.large";
      return true;
    case ClusterInstanceType::ml_m5_xlarge:
      value = "ml.m5.xlarge";
      return true;
    case ClusterInstanceType::ml_m5_2xlarge:
      value = "ml.m5.2xlarge";
      return true;
    case ClusterInstanceType::ml_m5_4xlarge:
      value = "ml.m5.4xlarge";
      return true;
    case ClusterInstanceType::ml_m5_8xlarge:
      value = "ml.m5.8xlarge";
      return true;
    case ClusterInstanceType::ml_m5_12xlarge:
      value = "ml.m5.12xlarge";
      return true;
    case ClusterInstanceType::ml_m5_16xlarge:
      value = "ml.m5.16xlarge";
      return true;
    case ClusterInstanceType::ml_m5_24xlarge:
      value = "ml.m5.24xlarge";
      return true;
    case ClusterInstanceType::ml_t3_medium:
      value = "ml.t3.medium";
      return true;
    case ClusterInstanceType::ml_t3_large:
      value = "ml.t3.large";
      return true;
    case ClusterInstanceType::ml_t3_xlarge:
      value = "ml.t3.xlarge";
      return true;
    case ClusterInstanceType::ml_t3_2xlarge:
      value = "ml.t3.2xlarge";
      return true;
    case ClusterInstanceType::ml_g6_xlarge:
      value = "ml.g6.xlarge";
      return true;
    case ClusterInstanceType::ml_g6_2xlarge:
      value = "ml.g6.2xlarge";
      return true;
    case ClusterInstanceType::ml_g6_4xlarge:
      value = "ml.g6.4xlarge";
      return true;
    case ClusterInstanceType::ml_g6_8xlarge:
      value = "ml.g6.8xlarge";
      return true;
    case ClusterInstanceType::ml_g6_16xlarge:
      value = "ml.g6.16xlarge";
      return true;
    case ClusterInstanceType::ml_g6_12xlarge:
      value = "ml.g6.12xlarge";
      return true;
    case ClusterInstanceType::ml_g6_24xlarge:
      value = "ml.g6.24xlarge";
      return true;
    case ClusterInstanceType::ml_g6_48xlarge:
      value = "ml.g6.48xlarge";
      return true;
    case ClusterInstanceType::ml_gr6_4xlarge:
      value = "ml.gr6.4xlarge";
      return true;
    case ClusterInstanceType::ml_gr6_8xlarge:
      value = "ml.gr6.8xlarge";
      return true;
    case ClusterInstanceType::ml_g6e_xlarge:
      value = "ml.g6e.xlarge";
      return true;
    case ClusterInstanceType::ml_g6e_2xlarge:
      value = "ml.g6e.2xlarge";
      return true;
    case ClusterInstanceType::ml_g6e_4xlarge:
      value = "ml.g6e.4xlarge";
      return true;
    case ClusterInstanceType::ml_g6e_8xlarge:
      value = "ml.g6e.8xlarge";
      return true;
    case ClusterInstanceType::ml_g6e_16xlarge:
      value = "ml.g6e.16xlarge";
      return true;
    case ClusterInstanceType::ml_g6e_12xlarge:
      value = "ml.g6e.12xlarge";
      return true;
    case ClusterInstanceType::ml_g6e_24xlarge:
      value = "ml.g6e.24xlarge";
      return true;
    case ClusterInstanceType::ml_g6e_48xlarge:
      value = "ml.g6e.48xlarge";
      return true;
    case ClusterInstanceType::ml_p5e_48xlarge:
      value = "ml.p5e.48xlarge";
      return true;
    case ClusterInstanceType::ml_p5en_48xlarge:
      value = "ml.p5en.48xlarge";
      return true;
    case ClusterInstanceType::ml_p6_b200_48xlarge:
      value = "ml.p6-b200.48xlarge";
      return true;
    case ClusterInstanceType::ml_trn2_3xlarge:
      value = "ml.trn2.3xlarge";
      return true;
    case ClusterInstanceType::ml_trn2_48xlarge:
      value = "ml.trn2.48xlarge";
      return true;
    case ClusterInstanceType::ml_c6i_large:
      value = "ml.c6i.large";
      return true;
    case ClusterInstanceType::ml_c6i_xlarge:
      value = "ml.c6i.xlarge";
      return true;
    case ClusterInstanceType::ml_c6i_2xlarge:
      value = "ml.c6i.2xlarge";
      return true;
    case ClusterInstanceType::ml_c6i_4xlarge:
      value = "ml.c6i.4xlarge";
      return true;
    case ClusterInstanceType::ml_c6i_8xlarge:
      value = "ml.c6i.8xlarge";
      return true;
    case ClusterInstanceType::ml_c6i_12xlarge:
      value = "ml.c6i.12xlarge";
      return true;
    case ClusterInstanceType::ml_c6i_16xlarge:
      value = "ml.c6i.16xlarge";
      return true;
    case ClusterInstanceType::ml_c6i_24xlarge:
      value = "ml.c6i.24xlarge";
      return true;
    case ClusterInstanceType::ml_c6i_32xlarge:
      value = "ml.c6i.32xlarge";
      return true;
    case ClusterInstanceType::ml_m6i_large:
      value = "ml.m6i.large";
      return true;
    case ClusterInstanceType::ml_m6i_xlarge:
      value = "ml.m6i.xlarge";
      return true;
    case ClusterInstanceType::ml_m6i_2xlarge:
      value = "ml.m6i.2xlarge";
      return true;
    case ClusterInstanceType::ml_m6i_4xlarge:
      value = "ml.m6i.4xlarge";
      return true;
    case ClusterInstanceType::ml_m6i_8xlarge:
      value = "ml.m6i.8xlarge";
      return true;
    case ClusterInstanceType::ml_m6i_12xlarge:
      value = "ml.m6i.12xlarge";
      return true;
    case ClusterInstanceType::ml_m6i_16xlarge:
      value = "ml.m6i.16xlarge";
      return true;
    case ClusterInstanceType::ml_m6i_24xlarge:
      value = "ml.m6i.24xlarge";
      return true;
    case ClusterInstanceType::ml_m6i_32xlarge:
      value = "ml.m6i.32xlarge";
      return true;
    case ClusterInstanceType::ml_r6i_large:
      value = "ml.r6i.large";
      return true;
    case ClusterInstanceType::ml_r6i_xlarge:
      value = "ml.r6i.xlarge";
      return true;
    case ClusterInstanceType::ml_r6i_2xlarge:
      value = "ml.r6i.2xlarge";
      return true;
    case ClusterInstanceType::ml_r6i_4xlarge:
      value = "ml.r6i.4xlarge";
      return true;
    case ClusterInstanceType::ml_r6i_8xlarge:
      value = "ml.r6i.8xlarge";
      return true;
    case ClusterInstanceType::ml_r6i_12xlarge:
      value = "ml.r6i.12xlarge";
      return true;
    case ClusterInstanceType::ml_r6i_16xlarge:
      value = "ml.r6i.16xlarge";
      return true;
    case ClusterInstanceType::ml_r6i_24xlarge:
      value = "ml.r6i.24xlarge";
      return true;
    case ClusterInstanceType::ml_r6i_32xlarge:
      value = "ml.r6i.32xlarge";
      return true;
    case ClusterInstanceType::ml_i3en_large:
      value = "ml.i3en.large";
      return true;
    case ClusterInstanceType::ml_i3en_xlarge:
      value = "ml.i3en.xlarge";
      return true;
    case ClusterInstanceType::ml_i3en_2xlarge:
      value = "ml.i3en.2xlarge";
      return true;
    case ClusterInstanceType::ml_i3en_3xlarge:
      value = "ml.i3en.3xlarge";
      return true;
    case ClusterInstanceType::ml_i3en_6xlarge:
      value = "ml.i3en.6xlarge";
      return true;
    case ClusterInstanceType::ml_i3en_12xlarge:
      value = "ml.i3en.12xlarge";
      return true;
    case ClusterInstanceType::ml_i3en_24xlarge:
      value = "ml.i3en.24xlarge";
      return true;
    case ClusterInstanceType::ml_m7i_large:
      value = "ml.m7i.large";
      return true;
    case ClusterInstanceType::ml_m7i_xlarge:
      value = "ml.m7i.xlarge";
      return true;
    case ClusterInstanceType::ml_m7i_2xlarge:
      value = "ml.m7i.2xlarge";
      return true;
    case ClusterInstanceType::ml_m7i_4xlarge:
      value = "ml.m7i.4xlarge";
      return true;
    case ClusterInstanceType::ml_m7i_8xlarge:
      value = "ml.m7i.8xlarge";
      return true;
    case ClusterInstanceType::ml_m7i_12xlarge:
      value = "ml.m7i.12xlarge";
      return true;
    case ClusterInstanceType::ml_m7i_16xlarge:
      value = "ml.m7i.16xlarge";
      return true;
    case ClusterInstanceType::ml_m7i_24xlarge:
      value = "ml.m7i.24xlarge";
      return true;
    case ClusterInstanceType::ml_m7i_48xlarge:
      value = "ml.m7i.48xlarge";
      return true;
    case ClusterInstanceType::ml_r7i_large:
      value = "ml.r7i.large";
      return true;
    case ClusterInstanceType::ml_r7i_xlarge:
      value = "ml.r7i.xlarge";
      return true;
    case ClusterInstanceType::ml_r7i_2xlarge:
      value = "ml.r7i.2xlarge";
      return true;
    case ClusterInstanceType::ml_r7i_4xlarge:
      value = "ml.r7i.4xlarge";
      return true;
    case ClusterInstanceType::ml_r7i_8xlarge:
      value = "ml.r7i.8xlarge";
      return true;
    case ClusterInstanceType::ml_r7i_12xlarge:
      value = "ml.r7i.12xlarge";
      return true;
    case ClusterInstanceType::ml_r7i_16xlarge:
      value = "ml.r7i.16xlarge";
      return true;
    case ClusterInstanceType::ml_r7i_24xlarge:
      value = "ml.r7i.24xlarge";
      return true;
    case ClusterInstanceType::ml_r7i_48xlarge:
      value = "ml.r7i.48xlarge";
      return true;
    case ClusterInstanceType::ml_r5d_16xlarge:
      value = "ml.r5d.16xlarge";
      return true;
    case ClusterInstanceType::ml_g7e_2xlarge:
      value = "ml.g7e.2xlarge";
      return true;
    case ClusterInstanceType::ml_g7e_4xlarge:
      value = "ml.g7e.4xlarge";
      return true;
    case ClusterInstanceType::ml_g7e_8xlarge:
      value = "ml.g7e.8xlarge";
      return true;
    case ClusterInstanceType::ml_g7e_12xlarge:
      value = "ml.g7e.12xlarge";
      return true;
    case ClusterInstanceType::ml_g7e_24xlarge:
      value = "ml.g7e.24xlarge";
      return true;
    case ClusterInstanceType::ml_g7e_48xlarge:
      value = "ml.g7e.48xlarge";
      return true;
    default:
      return false;
  }
}
static bool GetNameForEnumHelper1(ClusterInstanceType enumValue, Aws::String& value) {
  switch (enumValue) {
    case ClusterInstanceType::ml_p6_b300_48xlarge:
      value = "ml.p6-b300.48xlarge";
      return true;
    default:
      return false;
  }
}

ClusterInstanceType GetClusterInstanceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  ClusterInstanceType enumValue;
  if (GetEnumForNameHelper0(hashCode, enumValue)) {
    return enumValue;
  } else if (GetEnumForNameHelper1(hashCode, enumValue)) {
    return enumValue;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterInstanceType>(hashCode);
  }

  return ClusterInstanceType::NOT_SET;
}

Aws::String GetNameForClusterInstanceType(ClusterInstanceType enumValue) {
  Aws::String value;
  if (GetNameForEnumHelper0(enumValue, value)) {
    return value;
  } else if (GetNameForEnumHelper1(enumValue, value)) {
    return value;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
  }

  return {};
}

}  // namespace ClusterInstanceTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
