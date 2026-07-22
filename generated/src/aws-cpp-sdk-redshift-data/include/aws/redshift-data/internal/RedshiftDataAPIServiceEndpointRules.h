/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>

#include <cstddef>

namespace Aws {
namespace RedshiftDataAPIService {
class AWS_REDSHIFTDATAAPISERVICE_LOCAL RedshiftDataAPIServiceEndpointRules {
 public:
  static const size_t RulesBlobStrLen;
  static const size_t RulesBlobSize;

  static const char* GetRulesBlob();
};
}  // namespace RedshiftDataAPIService
}  // namespace Aws
