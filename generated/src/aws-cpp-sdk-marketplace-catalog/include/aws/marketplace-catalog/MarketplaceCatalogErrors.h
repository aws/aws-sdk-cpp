/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws
{
namespace MarketplaceCatalog
{
enum class MarketplaceCatalogErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,

  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////

  INTERNAL_SERVICE= static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1,
  RESOURCE_IN_USE,
  RESOURCE_NOT_SUPPORTED,
  SERVICE_QUOTA_EXCEEDED
};

class AWS_MARKETPLACECATALOG_API MarketplaceCatalogError : public Aws::Client::AWSError<MarketplaceCatalogErrors>
{
public:
  MarketplaceCatalogError() {}
  MarketplaceCatalogError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<MarketplaceCatalogErrors>(rhs) {}
  MarketplaceCatalogError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<MarketplaceCatalogErrors>(rhs) {}
  MarketplaceCatalogError(const Aws::Client::AWSError<MarketplaceCatalogErrors>& rhs) : Aws::Client::AWSError<MarketplaceCatalogErrors>(rhs) {}
  MarketplaceCatalogError(Aws::Client::AWSError<MarketplaceCatalogErrors>&& rhs) : Aws::Client::AWSError<MarketplaceCatalogErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace MarketplaceCatalogErrorMapper
{
  AWS_MARKETPLACECATALOG_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace MarketplaceCatalog
} // namespace Aws
