/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <smithy/interceptor/Interceptor.h>
#include <aws/core/http/HttpRequest.h>

namespace Aws
{
    namespace Http
    {
/**
 * Interceptor that handles aws-chunked encoding for streaming requests.
 * Wraps request body with AwsChunkedStream and sets content-encoding headers.
 */
class ChunkingInterceptor : public smithy::interceptor::Interceptor {
public:
    explicit ChunkingInterceptor(Aws::Client::UseAwsChunkedEncoding useAwsChunkedEncoding = Aws::Client::UseAwsChunkedEncoding::ENABLE)
        : m_useAwsChunkedEncoding(useAwsChunkedEncoding) {}
    ~ChunkingInterceptor() override = default;

    ModifyRequestOutcome ModifyBeforeSigning(smithy::interceptor::InterceptorContext& context) override;
    ModifyResponseOutcome ModifyBeforeDeserialization(smithy::interceptor::InterceptorContext& context) override;

private:
    bool ShouldApplyAwsChunking(const std::shared_ptr<Aws::Http::HttpRequest>& request) const;
    Aws::Client::UseAwsChunkedEncoding m_useAwsChunkedEncoding;
};

    } // namespace Http
} // namespace Aws