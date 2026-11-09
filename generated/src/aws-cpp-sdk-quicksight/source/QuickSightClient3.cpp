/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/quicksight/QuickSightClient.h>
#include <aws/quicksight/QuickSightEndpointProvider.h>
#include <aws/quicksight/QuickSightErrorMarshaller.h>
#include <aws/quicksight/model/UpdateVPCConnectionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QuickSight;
using namespace Aws::QuickSight::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

UpdateVPCConnectionOutcome QuickSightClient::UpdateVPCConnection(const UpdateVPCConnectionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVPCConnection", "Required field: AwsAccountId, is not set");
    return UpdateVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }
  if (!request.VPCConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVPCConnection", "Required field: VPCConnectionId, is not set");
    return UpdateVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [VPCConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVPCConnectionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateVPCConnectionOutcome(result.GetResultWithOwnership())
                            : UpdateVPCConnectionOutcome(std::move(result.GetError()));
}
