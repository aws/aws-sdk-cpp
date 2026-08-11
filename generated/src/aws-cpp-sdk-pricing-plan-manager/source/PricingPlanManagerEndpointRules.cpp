/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/memory/stl/AWSArray.h>
#include <aws/pricing-plan-manager/internal/PricingPlanManagerEndpointRules.h>

namespace Aws {
namespace PricingPlanManager {
const size_t PricingPlanManagerEndpointRules::RulesBlobStrLen = 320;
const size_t PricingPlanManagerEndpointRules::RulesBlobSize = 320;

using RulesBlobT = Aws::Array<const char, PricingPlanManagerEndpointRules::RulesBlobSize>;
static constexpr RulesBlobT RulesBlob = {
    {'\x52', '\x44', '\x50', '\x45', '\xd0', '\x00', '\x00', '\x00', '\x31', '\x2e', '\x31', '\x24', '\x24', '\x45', '\x6e', '\x64', '\x70',
     '\x6f', '\x69', '\x6e', '\x74', '\x24', '\x24', '\x53', '\x44', '\x4b', '\x3a', '\x3a', '\x45', '\x6e', '\x64', '\x70', '\x6f', '\x69',
     '\x6e', '\x74', '\x24', '\x24', '\x52', '\x65', '\x67', '\x69', '\x6f', '\x6e', '\x24', '\x24', '\x41', '\x57', '\x53', '\x3a', '\x3a',
     '\x52', '\x65', '\x67', '\x69', '\x6f', '\x6e', '\x24', '\x24', '\x7b', '\x45', '\x6e', '\x64', '\x70', '\x6f', '\x69', '\x6e', '\x74',
     '\x7d', '\x24', '\x24', '\x7b', '\x22', '\x61', '\x75', '\x74', '\x68', '\x53', '\x63', '\x68', '\x65', '\x6d', '\x65', '\x73', '\x22',
     '\x3a', '\x5b', '\x7b', '\x22', '\x6e', '\x61', '\x6d', '\x65', '\x22', '\x3a', '\x22', '\x73', '\x69', '\x67', '\x76', '\x34', '\x22',
     '\x2c', '\x22', '\x73', '\x69', '\x67', '\x6e', '\x69', '\x6e', '\x67', '\x4e', '\x61', '\x6d', '\x65', '\x22', '\x3a', '\x22', '\x70',
     '\x72', '\x69', '\x63', '\x69', '\x6e', '\x67', '\x70', '\x6c', '\x61', '\x6e', '\x6d', '\x61', '\x6e', '\x61', '\x67', '\x65', '\x72',
     '\x22', '\x2c', '\x22', '\x73', '\x69', '\x67', '\x6e', '\x69', '\x6e', '\x67', '\x52', '\x65', '\x67', '\x69', '\x6f', '\x6e', '\x22',
     '\x3a', '\x22', '\x75', '\x73', '\x2d', '\x65', '\x61', '\x73', '\x74', '\x2d', '\x31', '\x22', '\x7d', '\x5d', '\x7d', '\x24', '\x24',
     '\x68', '\x74', '\x74', '\x70', '\x73', '\x3a', '\x2f', '\x2f', '\x70', '\x72', '\x69', '\x63', '\x69', '\x6e', '\x67', '\x70', '\x6c',
     '\x61', '\x6e', '\x6d', '\x61', '\x6e', '\x61', '\x67', '\x65', '\x72', '\x2e', '\x75', '\x73', '\x2d', '\x65', '\x61', '\x73', '\x74',
     '\x2d', '\x31', '\x2e', '\x61', '\x70', '\x69', '\x2e', '\x61', '\x77', '\x73', '\x24', '\x24', '\x00', '\x00', '\x03', '\x00', '\x02',
     '\x00', '\x01', '\x05', '\x00', '\x08', '\x00', '\x00', '\x00', '\x01', '\x0f', '\x00', '\x0d', '\x00', '\x01', '\x1e', '\x00', '\x06',
     '\x00', '\x00', '\x01', '\x01', '\x26', '\x00', '\x0b', '\x00', '\x01', '\x00', '\x10', '\x00', '\x01', '\x00', '\x04', '\x05', '\x00',
     '\x08', '\x00', '\x00', '\x02', '\x00', '\x20', '\x01', '\x33', '\x00', '\x0a', '\x00', '\x3f', '\x00', '\x61', '\x00', '\x00', '\x00',
     '\x20', '\x01', '\xa2', '\x00', '\x2c', '\x00', '\x3f', '\x00', '\x61', '\x00', '\x00', '\x00', '\x02', '\x00', '\x00', '\x00', '\x02',
     '\x00', '\x00', '\x00', '\x18', '\x00', '\x01', '\x00', '\xff', '\xff', '\xff', '\xff', '\x01', '\x00', '\x00', '\x00', '\xff', '\xff',
     '\xff', '\xff', '\x00', '\x00', '\x00', '\x00', '\x01', '\xe1', '\xf5', '\x05', '\x02', '\xe1', '\xf5', '\x05'}};

const char* PricingPlanManagerEndpointRules::GetRulesBlob() { return RulesBlob.data(); }
}  // namespace PricingPlanManager
}  // namespace Aws
