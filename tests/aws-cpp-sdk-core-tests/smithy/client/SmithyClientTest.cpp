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


class SmithyClientTest : public Aws::Testing::AwsCppSdkGTestSuite {
};

class MyTestEndpointProvider : public Aws::Endpoint::EndpointProviderBase<>
{
};

static constexpr char MyServiceName[] = "MySuperService";

TEST_F(SmithyClientTest, TestCompiles) {

    using MySmithyClientConfig = Aws::Client::ClientConfiguration;
    using MyServiceAuthSchemeResolver = smithy::SigV4AuthSchemeResolver<>;

    using MySmithyClient = smithy::client::AwsSmithyClientT<MyServiceName, MySmithyClientConfig, MyServiceAuthSchemeResolver, smithy::SigV4AuthScheme, MyTestEndpointProvider>;

    MySmithyClient* ptr = nullptr;
    AWS_UNREFERENCED_PARAM(ptr);
}
