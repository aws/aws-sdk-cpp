/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/tracing/TelemetryProvider.h>

#include <iterator>

namespace smithy
{
    namespace client
    {
        using RawServiceResult = Aws::AmazonWebServiceResult<Aws::String>;
        using RawOutcome = Aws::Utils::Outcome<RawServiceResult, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

        /**
         * Outcome serializer for clients whose results are schema-serde shapes: it keeps the response body as the
         * raw bytes the client-owned ClientProtocol deserializes, instead of parsing it into a JsonValue /
         * XmlDocument first. The body is parsed once, by the protocol (see AwsSmithyClientT::BuildOperationResult,
         * which also records the deserialization duration).
         */
        class RawOutcomeSerializer
        {
        public:
            explicit RawOutcomeSerializer(const std::shared_ptr<components::tracing::TelemetryProvider>&) {}

            RawOutcomeSerializer(const RawOutcomeSerializer& other) = delete;
            RawOutcomeSerializer(RawOutcomeSerializer&& other) noexcept = default;
            RawOutcomeSerializer& operator=(const RawOutcomeSerializer& other) = delete;
            RawOutcomeSerializer& operator=(RawOutcomeSerializer&& other) noexcept = default;
            virtual ~RawOutcomeSerializer() = default;

            RawOutcome Deserialize(Aws::Utils::Outcome<std::shared_ptr<Aws::Http::HttpResponse>, Aws::Client::AWSError<Aws::Client::CoreErrors>>&& httpOutcome,
                                   const Aws::String& /*serviceName*/,
                                   const Aws::String& /*requestName*/) const
            {
                if (!httpOutcome.IsSuccess())
                {
                    return RawOutcome{std::move(httpOutcome.GetError())};
                }
                const auto& response = httpOutcome.GetResult();
                Aws::String body;
                auto& stream = response->GetResponseBody();
                if (stream.good() && stream.tellp() > 0)
                {
                    body.assign(std::istreambuf_iterator<char>(stream), std::istreambuf_iterator<char>());
                }
                Aws::Http::HeaderValueCollection headers = response->GetHeaders();
                return RawOutcome{RawServiceResult(std::move(body), std::move(headers), response->GetResponseCode())};
            }
        };
    } // namespace client
} // namespace smithy
