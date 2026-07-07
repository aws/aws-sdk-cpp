/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>

namespace Aws {
namespace Client {

class AWS_PARTNERCENTRALREVENUEMEASUREMENT_API PartnerCentralRevenueMeasurementErrorMarshaller : public Aws::Client::RpcV2ErrorMarshaller {
 public:
  Aws::Client::AWSError<Aws::Client::CoreErrors> FindErrorByName(const char* exceptionName) const override;
};

}  // namespace Client
}  // namespace Aws
