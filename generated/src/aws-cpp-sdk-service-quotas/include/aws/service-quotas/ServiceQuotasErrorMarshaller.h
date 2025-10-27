/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>

namespace Aws {
namespace Client {

class AWS_SERVICEQUOTAS_API ServiceQuotasErrorMarshaller : public Aws::Client::JsonErrorMarshaller {
 public:
  Aws::Client::AWSError<Aws::Client::CoreErrors> FindErrorByName(const char* exceptionName) const override;
};

}  // namespace Client
}  // namespace Aws
