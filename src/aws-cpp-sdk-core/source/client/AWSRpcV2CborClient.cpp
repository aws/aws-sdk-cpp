/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/client/AWSRpcV2CborClient.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/utils/cbor/CborValue.h>

#include <cassert>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils::Cbor;
using namespace smithy::components::tracing;

static const char AWS_CBOR_CLIENT_LOG_TAG[] = "AWSRpcV2CborClient";

AWSRpcV2CborClient::AWSRpcV2CborClient(const Aws::Client::ClientConfiguration& configuration,
    const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller) :
    BASECLASS(configuration, signer, errorMarshaller)
{
}

AWSRpcV2CborClient::AWSRpcV2CborClient(const Aws::Client::ClientConfiguration& configuration,
    const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller) :
    BASECLASS(configuration, signerProvider, errorMarshaller)
{
}

AWSError<CoreErrors> AWSRpcV2CborClient::CreateParseError() const
{
    return AWSError<CoreErrors>(CoreErrors::UNKNOWN, "Cbor Parser Error", "Failed to parse CBOR response", false);
}

const char* AWSRpcV2CborClient::GetClientLogTag() const
{
  return AWS_CBOR_CLIENT_LOG_TAG;
}

