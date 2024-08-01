/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>


#include <aws/core/client/ClientConfiguration.h>

#include "aws/core/endpoint/EndpointProviderBase.h"
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/http/HttpClientFactory.h>


class SmithyClientTest : public Aws::Testing::AwsCppSdkGTestSuite {
};

class MyTestEndpointProvider : public Aws::Endpoint::EndpointProviderBase<>
{
};

static constexpr char MyServiceName[] = "MySuperService";

TEST_F(SmithyClientTest, TestCompiles) {

    const char ALLOCATION_TAG[] = "SmithyClientTest";

    using MySmithyClientConfig = Aws::Client::ClientConfiguration;
    using MyServiceAuthSchemeResolver = smithy::SigV4AuthSchemeResolver<>;

    Aws::Client::ClientConfiguration clientConfig;
    std::shared_ptr<Aws::Http::HttpClient> httpClient = Aws::Http::CreateHttpClient(clientConfig);
    std::shared_ptr<Aws::Client::AWSErrorMarshaller> errorMarshaller = Aws::MakeShared<Aws::Client::XmlErrorMarshaller>(ALLOCATION_TAG);
    std::shared_ptr<MyTestEndpointProvider> endPointProvider;

    std::shared_ptr<MyServiceAuthSchemeResolver> authSchemeResolver = Aws::MakeShared<MyServiceAuthSchemeResolver>(ALLOCATION_TAG);


    Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<smithy::SigV4AuthScheme>> authSchemesMap;

    using MySmithyClient = smithy::client::AwsSmithyClientT<MyServiceName,
                                                            MySmithyClientConfig,
                                                            MyServiceAuthSchemeResolver,
                                                            Aws::Crt::Variant<smithy::SigV4AuthScheme>,
                                                            MyTestEndpointProvider>;

    std::shared_ptr<MySmithyClient> ptr = Aws::MakeShared<MySmithyClient>(
        ALLOCATION_TAG,
        clientConfig,
        "MyService",
        httpClient,
        errorMarshaller,
        endPointProvider,
        authSchemeResolver,
        authSchemesMap
        );
    AWS_UNREFERENCED_PARAM(ptr);
}