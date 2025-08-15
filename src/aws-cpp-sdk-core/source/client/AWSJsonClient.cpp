/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSJsonClient.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <cassert>


using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;

static const char AWS_JSON_CLIENT_LOG_TAG[] = "AWSJsonClient";

AWSJsonClient::AWSJsonClient(const Aws::Client::ClientConfiguration& configuration,
    const std::shared_ptr<Aws::Client::AWSAuthSigner>& signer,
    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller) :
    BASECLASS(configuration, signer, errorMarshaller)
{
}

AWSJsonClient::AWSJsonClient(const Aws::Client::ClientConfiguration& configuration,
    const std::shared_ptr<Aws::Auth::AWSAuthSignerProvider>& signerProvider,
    const std::shared_ptr<AWSErrorMarshaller>& errorMarshaller) :
    BASECLASS(configuration, signerProvider, errorMarshaller)
{
}

JsonValue AWSJsonClient::ParseResponse(const HttpResponseOutcome& httpOutcome) const
{
    return JsonValue(httpOutcome.GetResult()->GetResponseBody());
}

bool AWSJsonClient::HasParseError(const Utils::Json::JsonValue& response) const
{
    return !response.WasParseSuccessful();
}

AWSError<CoreErrors> AWSJsonClient::CreateParseError() const
{
    return AWSError<CoreErrors>(CoreErrors::UNKNOWN, "Json Parser Error", "Failed to parse JSON response", false);
}

JsonValue AWSJsonClient::CreateEmptyResponse() const
{
    return JsonValue();
}

const char* AWSJsonClient::GetClientLogTag() const
{
  return AWS_JSON_CLIENT_LOG_TAG;
}

AWSError<CoreErrors> AWSJsonClient::BuildAWSError(
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
