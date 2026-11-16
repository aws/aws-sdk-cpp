/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/opensearchmemory/OpenSearchMemoryEndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSOpenSearchMemoryEndpointProviderTests";
using OpenSearchMemoryEndpointProvider = Aws::OpenSearchMemory::Endpoint::OpenSearchMemoryEndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::Vector<EpProp>>>;
using ExpEpAuthScheme = Aws::Vector<EpProp>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

struct OpenSearchMemoryEndpointProviderEndpointTestCase
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

class OpenSearchMemoryEndpointProviderTests : public ::testing::TestWithParam<size_t>
{
public:
    static const size_t TEST_CASES_SZ;
protected:
    static Aws::Vector<OpenSearchMemoryEndpointProviderEndpointTestCase> getTestCase();
    static Aws::UniquePtrSafeDeleted<Aws::Vector<OpenSearchMemoryEndpointProviderEndpointTestCase>> TEST_CASES;
    static void SetUpTestSuite()
    {
        TEST_CASES = Aws::MakeUniqueSafeDeleted<Aws::Vector<OpenSearchMemoryEndpointProviderEndpointTestCase>>(ALLOCATION_TAG, getTestCase());
        ASSERT_TRUE(TEST_CASES) << "Failed to allocate TEST_CASES table";
        assert(TEST_CASES->size() == TEST_CASES_SZ);
    }

    static void TearDownTestSuite()
    {
        TEST_CASES.reset();
    }
};

Aws::UniquePtrSafeDeleted<Aws::Vector<OpenSearchMemoryEndpointProviderEndpointTestCase>> OpenSearchMemoryEndpointProviderTests::TEST_CASES;
const size_t OpenSearchMemoryEndpointProviderTests::TEST_CASES_SZ = 14;

Aws::Vector<OpenSearchMemoryEndpointProviderEndpointTestCase> OpenSearchMemoryEndpointProviderTests::getTestCase() {

  Aws::Vector<OpenSearchMemoryEndpointProviderEndpointTestCase> test_cases = {
  /*TEST CASE 0*/
  {"A space ID that is not a host label is rejected rather than put in the host name.", // documentation
    {EpParam("SpaceId", "evil.example/#"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid SpaceId: must be a valid host label"} // expect
  },
  /*TEST CASE 1*/
  {"A Region that is not a host label is rejected.", // documentation
    {EpParam("Region", "us-east-1/#")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Region must be a valid host label"} // expect
  },
  /*TEST CASE 2*/
  {"A space ID containing a dot is rejected rather than split across host labels.", // documentation
    {EpParam("SpaceId", "sp-abc.def123"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid SpaceId: must be a valid host label"} // expect
  },
  /*TEST CASE 3*/
  {"GetMemory goes to the endpoint of the space in its input.", // documentation
    {EpParam("SpaceId", "sp-abc123def456"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://sp-abc123def456.osm.us-east-1.on.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 4*/
  {"ListSpaces goes to the regional endpoint.", // documentation
    {EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://osm.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 5*/
  {"With a space ID: the space's endpoint.", // documentation
    {EpParam("SpaceId", "sp-abc123def456"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://sp-abc123def456.osm.us-east-1.on.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 6*/
  {"Without a space ID: the regional endpoint.", // documentation
    {EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://osm.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 7*/
  {"Endpoint override with a space ID: the override URL.", // documentation
    {EpParam("Endpoint", "https://example.com"), EpParam("SpaceId", "sp-000000000000"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 8*/
  {"Endpoint override without a space ID: the override URL.", // documentation
    {EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 9*/
  {"FIPS without a space ID fails: the service has no FIPS endpoint.", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS is not supported with OpenSearch Memory."} // expect
  },
  /*TEST CASE 10*/
  {"FIPS with a space ID fails: the service has no FIPS endpoint.", // documentation
    {EpParam("UseFIPS", true), EpParam("SpaceId", "sp-abc123def456"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS is not supported with OpenSearch Memory."} // expect
  },
  /*TEST CASE 11*/
  {"FIPS with an endpoint override fails.", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 12*/
  {"GetMemory with FIPS on fails rather than going to the space's endpoint.", // documentation
    {EpParam("UseFIPS", true), EpParam("SpaceId", "sp-abc123def456"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS is not supported with OpenSearch Memory."} // expect
  },
  /*TEST CASE 13*/
  {"ListSpaces with FIPS on fails rather than going to the regional endpoint.", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS is not supported with OpenSearch Memory."} // expect
  }
  };
  return test_cases;
}

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

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const OpenSearchMemoryEndpointProviderEndpointTestCase::Expect& expect)
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

TEST_P(OpenSearchMemoryEndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES->size()) << "Something is wrong with the test fixture itself.";
    const OpenSearchMemoryEndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES->at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);
    SCOPED_TRACE(Aws::String("\n--gtest_filter=EndpointTestsFromModel/OpenSearchMemoryEndpointProviderTests.EndpointProviderTest/") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX));

    std::shared_ptr<OpenSearchMemoryEndpointProvider> endpointProvider = Aws::MakeShared<OpenSearchMemoryEndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize OpenSearchMemoryEndpointProvider";

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
        const Aws::Vector<std::reference_wrapper<const OpenSearchMemoryEndpointProviderEndpointTestCase::OperationParamsFromTest>>
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
                         OpenSearchMemoryEndpointProviderTests,
                         ::testing::Range((size_t) 0u, OpenSearchMemoryEndpointProviderTests::TEST_CASES_SZ));
