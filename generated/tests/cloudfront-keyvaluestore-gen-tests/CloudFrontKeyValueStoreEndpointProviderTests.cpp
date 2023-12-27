/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreEndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSCloudFrontKeyValueStoreEndpointProviderTests";
using CloudFrontKeyValueStoreEndpointProvider = Aws::CloudFrontKeyValueStore::Endpoint::CloudFrontKeyValueStoreEndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::Vector<EpProp>>>;
using ExpEpAuthScheme = Aws::Vector<EpProp>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

class CloudFrontKeyValueStoreEndpointProviderTests : public ::testing::TestWithParam<size_t> {};

struct CloudFrontKeyValueStoreEndpointProviderEndpointTestCase
{
    using OperationParamsFromTest = EndpointParameters;

    struct Expect
    {
        struct Endpoint
        {
            Aws::String url;
            ExpEpAuthScheme authScheme;
            ExpEpProps properties;
            ExpEpHeaders headers;
        } endpoint;
        Aws::String error;
    };
    struct OperationInput
    {
        Aws::String operationName;
        OperationParamsFromTest operationParams;
        OperationParamsFromTest builtinParams;
        OperationParamsFromTest clientParams;
    };

    Aws::String documentation;
    // Specification tells us it is Client Initialization parameters
    // At the same time, specification tells us to test EndpointProvider not the client itself
    // Hence params here will be set as a client params (just like a dedicated field above).
    Aws::Vector<Aws::Endpoint::EndpointParameter> params;
    Aws::Vector<Aws::String> tags;
    Expect expect;
    // Aws::Vector<OperationInput> operationInput;
};

static const Aws::Vector<CloudFrontKeyValueStoreEndpointProviderEndpointTestCase> TEST_CASES = {
  /*TEST CASE 0*/
  {"FIPS should error", // documentation
    {EpParam("UseFIPS", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS is not supported with CloudFront-KeyValueStore."} // expect
  },
  /*TEST CASE 1*/
  {"KVS ARN must be provided to use this service", // documentation
    {}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"KVS ARN must be provided to use this service"} // expect
  },
  /*TEST CASE 2*/
  {"KVS ARN must be a valid ARN", // documentation
    {EpParam("KvsARN", "not-a-valid-arn")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"KVS ARN must be a valid ARN"} // expect
  },
  /*TEST CASE 3*/
  {"Provided ARN was not a valid CloudFront Service ARN. Found: `notcloudfront`", // documentation
    {EpParam("KvsARN", "arn:aws:notcloudfront::123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Provided ARN is not a valid CloudFront Service ARN. Found: `notcloudfront`"} // expect
  },
  /*TEST CASE 4*/
  {"Provided ARN must be a global resource ARN. Found: `us-west-2`", // documentation
    {EpParam("KvsARN", "arn:aws:cloudfront:us-west-2:123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Provided ARN must be a global resource ARN. Found: `us-west-2`"} // expect
  },
  /*TEST CASE 5*/
  {"ARN resource type is invalid. Expected `key-value-store`, found: `some-other-resource-type`", // documentation
    {EpParam("KvsARN", "arn:aws:cloudfront::123456789012:some-other-resource-type/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"ARN resource type is invalid. Expected `key-value-store`, found: `some-other-resource-type`"} // expect
  },
  /*TEST CASE 6*/
  {"CloudFront-KeyValueStore is not supported in partition `aws-cn`", // documentation
    {EpParam("KvsARN", "arn:aws-cn:cloudfront::123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"CloudFront-KeyValueStore is not supported in partition `aws-cn`"} // expect
  },
  /*TEST CASE 7*/
  {"CloudFront-KeyValueStore is not supported in partition `aws-us-gov`", // documentation
    {EpParam("KvsARN", "arn:aws-us-gov:cloudfront::123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"CloudFront-KeyValueStore is not supported in partition `aws-us-gov`"} // expect
  },
  /*TEST CASE 8*/
  {"Valid account based endpoint", // documentation
    {EpParam("KvsARN", "arn:aws:cloudfront::123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.cloudfront-kvs.global.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 9*/
  {"Valid account based endpoint, with SDK region", // documentation
    {EpParam("Region", "us-west-2"), EpParam("KvsARN", "arn:aws:cloudfront::123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.cloudfront-kvs.global.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 10*/
  {"Valid ARN, different partition, should error", // documentation
    {EpParam("Region", "cn-north-1"), EpParam("KvsARN", "arn:aws:cloudfront::123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws-cn` but Kvs ARN has `aws`"} // expect
  },
  /*TEST CASE 11*/
  {"Valid account based endpoint with FIPS, should error", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("KvsARN", "arn:aws:cloudfront::123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS is not supported with CloudFront-KeyValueStore."} // expect
  },
  /*TEST CASE 12*/
  {"Custom sdk endpoint override", // documentation
    {EpParam("Endpoint", "https://my-override.example.com"), EpParam("Region", "us-east-1"), EpParam("KvsARN", "arn:aws:cloudfront::123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.my-override.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 13*/
  {"Custom sdk endpoint override with path and http", // documentation
    {EpParam("Endpoint", "http://my-override.example.com/custom-path"), EpParam("KvsARN", "arn:aws:cloudfront::123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*epUrl*/"http://123456789012.my-override.example.com/custom-path",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 14*/
  {"Custom override with different partition should error", // documentation
    {EpParam("Endpoint", "https://my-override.example.com"), EpParam("Region", "us-gov-east-1"), EpParam("KvsARN", "arn:aws:cloudfront::123456789012:key-value-store/my-first-kvs-e10b1dce4f394248811e77167e0451ba")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws-us-gov` but Kvs ARN has `aws`"} // expect
  }
};

Aws::String RulesToSdkSignerName(const Aws::String& rulesSignerName)
{
    Aws::String sdkSigner = "NullSigner";
    if (rulesSignerName == "sigv4") {
        sdkSigner = "SignatureV4";
    } else if (rulesSignerName == "sigv4a") {
        sdkSigner = "AsymmetricSignatureV4";
    } else if (rulesSignerName == "none") {
        sdkSigner = "NullSigner";
    } else if (rulesSignerName == "bearer") {
        sdkSigner = "Bearer";
    } else if (rulesSignerName == "s3Express") {
        sdkSigner = "S3ExpressSigner";
    } else {
        sdkSigner = rulesSignerName;
    }

    return sdkSigner;
}

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const CloudFrontKeyValueStoreEndpointProviderEndpointTestCase::Expect& expect)
{
    if(!expect.error.empty())
    {
        ASSERT_FALSE(outcome.IsSuccess()) << "Expected failure with message:\n" << expect.error;
        ASSERT_EQ(outcome.GetError().GetMessage(), expect.error);
    }
    else
    {
        AWS_ASSERT_SUCCESS(outcome);
        ASSERT_EQ(outcome.GetResult().GetURL(), expect.endpoint.url);
        const auto expAuthSchemesIt = expect.endpoint.properties.find("authSchemes");
        if (expAuthSchemesIt != expect.endpoint.properties.end())
        {
            // in the list of AuthSchemes, select the one with a highest priority
            const Aws::Vector<Aws::String> priotityList = {"s3Express", "sigv4a", "sigv4", "bearer", "none", ""};
            const auto expectedAuthSchemePropsIt = std::find_first_of(expAuthSchemesIt->second.begin(), expAuthSchemesIt->second.end(),
                                                                    priotityList.begin(), priotityList.end(), [](const Aws::Vector<EpProp>& props, const Aws::String& expName)
                                                                    {
                                                                        const auto& propNameIt = std::find_if(props.begin(), props.end(), [](const EpProp& prop)
                                                                        {
                                                                            return prop.GetName() == "name";
                                                                        });
                                                                        assert(propNameIt != props.end());
                                                                        return propNameIt->GetStrValueNoCheck() == expName;
                                                                    });
            assert(expectedAuthSchemePropsIt != expAuthSchemesIt->second.end());

            const auto& endpointResultAttrs = outcome.GetResult().GetAttributes();
            ASSERT_TRUE(endpointResultAttrs) << "Expected non-empty EndpointAttributes (authSchemes)";
            for (const auto& expProperty : *expectedAuthSchemePropsIt)
            {
                if (expProperty.GetName() == "name") {
                    ASSERT_TRUE(!endpointResultAttrs->authScheme.GetName().empty());
                    ASSERT_EQ(RulesToSdkSignerName(expProperty.GetStrValueNoCheck()), endpointResultAttrs->authScheme.GetName());
                } else if (expProperty.GetName() == "signingName") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetSigningName());
                    ASSERT_EQ(expProperty.GetStrValueNoCheck(), endpointResultAttrs->authScheme.GetSigningName().value());
                } else if (expProperty.GetName() == "signingRegion") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetSigningRegion());
                    ASSERT_EQ(expProperty.GetStrValueNoCheck(), endpointResultAttrs->authScheme.GetSigningRegion().value());
                } else if (expProperty.GetName() == "signingRegionSet") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetSigningRegionSet());
                    ASSERT_EQ(expProperty.GetStrValueNoCheck(), endpointResultAttrs->authScheme.GetSigningRegionSet().value());
                } else if (expProperty.GetName() == "disableDoubleEncoding") {
                    ASSERT_TRUE(endpointResultAttrs->authScheme.GetDisableDoubleEncoding());
                    ASSERT_EQ(expProperty.GetBoolValueNoCheck(), endpointResultAttrs->authScheme.GetDisableDoubleEncoding().value());
                } else {
                    FAIL() << "Unsupported Auth type property " << expProperty.GetName() << ". Need to update test.";
                }
            }
        }

        EXPECT_EQ(expect.endpoint.headers.empty(), outcome.GetResult().GetHeaders().empty());
        for(const auto& expHeaderVec : expect.endpoint.headers)
        {
            const auto& retHeaderIt = outcome.GetResult().GetHeaders().find(expHeaderVec.first);
            ASSERT_TRUE(retHeaderIt != outcome.GetResult().GetHeaders().end());

            auto retHeaderVec = Aws::Utils::StringUtils::Split(retHeaderIt->second, ';');
            std::sort(retHeaderVec.begin(), retHeaderVec.end());

            auto expHeaderVecSorted = expHeaderVec.second;
            std::sort(expHeaderVecSorted.begin(), expHeaderVecSorted.end());

            ASSERT_EQ(expHeaderVecSorted, retHeaderVec);
        }
    }
}

TEST_P(CloudFrontKeyValueStoreEndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES.size()) << "Something is wrong with the test fixture itself.";
    const CloudFrontKeyValueStoreEndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES.at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);

    std::shared_ptr<CloudFrontKeyValueStoreEndpointProvider> endpointProvider = Aws::MakeShared<CloudFrontKeyValueStoreEndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize CloudFrontKeyValueStoreEndpointProvider";

    EndpointParameters endpointParameters;
    for(const auto& param : TEST_CASE.params)
    {
        endpointParameters.emplace(endpointParameters.end(), Aws::Endpoint::EndpointParameter(param));
    }
    auto resolvedEndpointOutcome = endpointProvider->ResolveEndpoint(endpointParameters);
    ValidateOutcome(resolvedEndpointOutcome, TEST_CASE.expect);

#if 0 // temporarily disabled
    for(const auto& operation : TEST_CASE.operationInput)
    {
        /*
         * Most specific to least specific value locations:
            staticContextParams
            contextParam
            clientContextParams
            Built-In Bindings
            Built-in binding default values
         */
        const Aws::Vector<std::reference_wrapper<const CloudFrontKeyValueStoreEndpointProviderEndpointTestCase::OperationParamsFromTest>>
                operationInputParams = {std::cref(operation.builtinParams), std::cref(operation.clientParams), std::cref(operation.operationParams)};

        for(const auto& paramSource : operationInputParams)
        {
            for(const auto& param : paramSource.get())
            {
                endpointParameters.emplace(endpointParameters.end(), Aws::Endpoint::EndpointParameter(param));
            }
        }
        auto resolvedEndpointOutcomePerOperation = endpointProvider->ResolveEndpoint(endpointParameters);
        ValidateOutcome(resolvedEndpointOutcomePerOperation, TEST_CASE.expect);
    }
#endif
}

INSTANTIATE_TEST_SUITE_P(EndpointTestsFromModel,
                         CloudFrontKeyValueStoreEndpointProviderTests,
                         ::testing::Range((size_t) 0u, TEST_CASES.size()));
