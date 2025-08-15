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
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>

#include <cassert>


using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils;
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

Aws::UniquePtr<Crt::Cbor::CborDecoder> AWSRpcV2CborClient::ParseResponse(const HttpResponseOutcome& httpOutcome) const
{
    return CreateCborDecoder(httpOutcome);
}

bool AWSRpcV2CborClient::HasParseError(const Aws::UniquePtr<Crt::Cbor::CborDecoder>& response) const
{
    return response == nullptr;
}

AWSError<CoreErrors> AWSRpcV2CborClient::CreateParseError() const
{
    return AWSError<CoreErrors>(CoreErrors::UNKNOWN, "Cbor Parser Error", "Failed to parse CBOR response", false);
}

Aws::UniquePtr<Crt::Cbor::CborDecoder> AWSRpcV2CborClient::CreateEmptyResponse() const
{
    return nullptr;
}

const char* AWSRpcV2CborClient::GetClientLogTag() const
{
  return AWS_CBOR_CLIENT_LOG_TAG;
}

AWSError<CoreErrors> AWSRpcV2CborClient::BuildAWSError(
    const std::shared_ptr<Aws::Http::HttpResponse>& httpResponse) const
{
    AWSError<CoreErrors> error;
    if (httpResponse->HasClientError())
    {
        bool retryable = httpResponse->GetClientErrorType() == CoreErrors::NETWORK_CONNECTION ? true : false;
        error = AWSError<CoreErrors>(httpResponse->GetClientErrorType(), "", httpResponse->GetClientErrorMessage(), retryable);
    }
    else if (!httpResponse->GetResponseBody() || httpResponse->GetResponseBody().tellp() < 1)
    {
        auto responseCode = httpResponse->GetResponseCode();
        auto errorCode = AWSClient::GuessBodylessErrorType(responseCode);

        Aws::StringStream ss;
        ss << "No response body.";
        error = AWSError<CoreErrors>(errorCode, "", ss.str(),
            IsRetryableHttpResponseCode(responseCode));
    }
    else
    {
        assert(httpResponse->GetResponseCode() != HttpResponseCode::OK);
        error = GetErrorMarshaller()->Marshall(*httpResponse);
    }

    error.SetResponseHeaders(httpResponse->GetHeaders());
    error.SetResponseCode(httpResponse->GetResponseCode());
    error.SetRemoteHostIpAddress(httpResponse->GetOriginatingRequest().GetResolvedRemoteHost());
    AWS_LOGSTREAM_ERROR(GetClientLogTag(), error);
    return error;
}

Aws::UniquePtr<Aws::Crt::Cbor::CborDecoder> AWSRpcV2CborClient::CreateCborDecoder(
    const HttpResponseOutcome& httpOutcome) const
{
    Aws::StringStream ss;
    ss << httpOutcome.GetResult()->GetResponseBody().rdbuf();
    const Aws::Crt::ByteCursor cborDecoder = Aws::Crt::ByteCursorFromCString(ss.str().c_str());
    return Aws::MakeUnique<Crt::Cbor::CborDecoder>(GetClientLogTag(), cborDecoder);
}
