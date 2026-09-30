/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/eventbridgev2/EventBridgeV2EndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSEventBridgeV2EndpointProviderTests";
using EventBridgeV2EndpointProvider = Aws::EventBridgeV2::Endpoint::EventBridgeV2EndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::Vector<EpProp>>>;
using ExpEpAuthScheme = Aws::Vector<EpProp>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

struct EventBridgeV2EndpointProviderEndpointTestCase
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

class EventBridgeV2EndpointProviderTests : public ::testing::TestWithParam<size_t>
{
public:
    static const size_t TEST_CASES_SZ;
protected:
    static Aws::Vector<EventBridgeV2EndpointProviderEndpointTestCase> getTestCase();
    static Aws::UniquePtrSafeDeleted<Aws::Vector<EventBridgeV2EndpointProviderEndpointTestCase>> TEST_CASES;
    static void SetUpTestSuite()
    {
        TEST_CASES = Aws::MakeUniqueSafeDeleted<Aws::Vector<EventBridgeV2EndpointProviderEndpointTestCase>>(ALLOCATION_TAG, getTestCase());
        ASSERT_TRUE(TEST_CASES) << "Failed to allocate TEST_CASES table";
        assert(TEST_CASES->size() == TEST_CASES_SZ);
    }

    static void TearDownTestSuite()
    {
        TEST_CASES.reset();
    }
};

Aws::UniquePtrSafeDeleted<Aws::Vector<EventBridgeV2EndpointProviderEndpointTestCase>> EventBridgeV2EndpointProviderTests::TEST_CASES;
const size_t EventBridgeV2EndpointProviderTests::TEST_CASES_SZ = 31;

Aws::Vector<EventBridgeV2EndpointProviderEndpointTestCase> EventBridgeV2EndpointProviderTests::getTestCase() {

  Aws::Vector<EventBridgeV2EndpointProviderEndpointTestCase> test_cases = {
  /*TEST CASE 0*/
  {"Bus ARN account takes precedence over the credentials-sourced account (cross-account call).", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred"), EpParam("EventBusArn", "arn:aws:events:us-east-1:210987654321:event-busv2/owner-bus/abcdefghij0123456789abcde")}, // params
    {}, // tags
    {{/*epUrl*/"https://210987654321.eventsv2.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 1*/
  {"Bus ARN routing works without a credentials-sourced account ID.", // documentation
    {EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred"), EpParam("EventBusArn", "arn:aws:events:us-east-1:210987654321:event-busv2/owner-bus/abcdefghij0123456789abcde")}, // params
    {}, // tags
    {{/*epUrl*/"https://210987654321.eventsv2.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 2*/
  {"Disabled mode ignores the bus ARN and the credentials-sourced account.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "disabled"), EpParam("EventBusArn", "arn:aws:events:us-east-1:210987654321:event-busv2/owner-bus/abcdefghij0123456789abcde")}, // params
    {}, // tags
    {{/*epUrl*/"https://eventsv2.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 3*/
  {"An unparseable bus ARN falls through to the credentials-sourced account.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred"), EpParam("EventBusArn", "not-an-arn")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 4*/
  {"FIPS account-based endpoint from the bus ARN.", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred"), EpParam("EventBusArn", "arn:aws:events:us-east-1:210987654321:event-busv2/owner-bus/abcdefghij0123456789abcde")}, // params
    {}, // tags
    {{/*epUrl*/"https://210987654321.eventsv2-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 5*/
  {"DualStack account-based endpoint from the bus ARN.", // documentation
    {EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("EventBusArn", "arn:aws:events:us-east-1:210987654321:event-busv2/owner-bus/abcdefghij0123456789abcde")}, // params
    {}, // tags
    {{/*epUrl*/"https://210987654321.eventsv2.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 6*/
  {"FIPS + DualStack account-based endpoint from the bus ARN.", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("EventBusArn", "arn:aws:events:us-east-1:210987654321:event-busv2/owner-bus/abcdefghij0123456789abcde")}, // params
    {}, // tags
    {{/*epUrl*/"https://210987654321.eventsv2-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 7*/
  {"FIPS account-based endpoint from the credentials-sourced account.", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 8*/
  {"FIPS + DualStack account-based endpoint from the credentials-sourced account.", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 9*/
  {"Explicit endpoint override wins over account-based routing.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 10*/
  {"FIPS cannot be combined with an endpoint override.", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 11*/
  {"DualStack cannot be combined with an endpoint override.", // documentation
    {EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 12*/
  {"Account-based endpoint when mode is preferred and account ID is available.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 13*/
  {"Regional endpoint when mode is disabled.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://eventsv2.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 14*/
  {"Regional FIPS endpoint when mode is disabled.", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://eventsv2-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 15*/
  {"Regional DualStack endpoint when mode is disabled.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://eventsv2.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 16*/
  {"Regional FIPS + DualStack endpoint when mode is disabled.", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://eventsv2-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 17*/
  {"Regional endpoint when no account ID is available and mode is preferred.", // documentation
    {EpParam("Region", "eu-west-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://eventsv2.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 18*/
  {"Error when mode is required but no account ID is available.", // documentation
    {EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 19*/
  {"Account-based endpoint in the aws-cn partition when mode is required (account routing works in every partition).", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "cn-north-1"), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 20*/
  {"Error when the credentials-sourced account ID is not a valid host label.", // documentation
    {EpParam("AccountId", "not/valid"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Credentials-sourced account ID parameter is invalid"} // expect
  },
  /*TEST CASE 21*/
  {"Regional endpoint when AccountIdEndpointMode is not set at all, even with an account ID and bus ARN available. The explicit empty properties pin that regional endpoints carry no adoption metric.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("EventBusArn", "arn:aws:events:us-east-1:210987654321:event-busv2/owner-bus/abcdefghij0123456789abcde")}, // params
    {}, // tags
    {{/*epUrl*/"https://eventsv2.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 22*/
  {"Account-based endpoint in the aws-us-gov partition when mode is preferred (account routing works in every partition).", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-gov-west-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 23*/
  {"Account-based FIPS endpoint in the aws-us-gov partition when mode is required.", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-gov-west-1"), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 24*/
  {"Account-based endpoint in the aws-iso partition when mode is preferred, composing the iso DNS suffix.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-iso-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 25*/
  {"DualStack account-based endpoint in the aws-iso partition, composing the iso dualstack DNS suffix.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 26*/
  {"A parseable bus ARN whose account is not a valid host label falls through to the credentials-sourced account.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred"), EpParam("EventBusArn", "arn:aws:events:us-east-1:not_a_valid_label!:event-busv2/owner-bus/abcdefghij0123456789abcde")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 27*/
  {"A bus ARN for another service falls through to the credentials-sourced account.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred"), EpParam("EventBusArn", "arn:aws:sqs:us-east-1:210987654321:some-queue")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 28*/
  {"Cross-region bus ARN: the ARN account routes within the CLIENT region (cells are per-account per-region).", // documentation
    {EpParam("Region", "us-west-2"), EpParam("AccountIdEndpointMode", "preferred"), EpParam("EventBusArn", "arn:aws:events:us-east-1:210987654321:event-busv2/owner-bus/abcdefghij0123456789abcde")}, // params
    {}, // tags
    {{/*epUrl*/"https://210987654321.eventsv2.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 29*/
  {"Required mode succeeds through the bus ARN account.", // documentation
    {EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "required"), EpParam("EventBusArn", "arn:aws:events:us-east-1:210987654321:event-busv2/owner-bus/abcdefghij0123456789abcde")}, // params
    {}, // tags
    {{/*epUrl*/"https://210987654321.eventsv2.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 30*/
  {"Account-based endpoint in the aws-cn partition when mode is preferred, composing the cn DNS suffix.", // documentation
    {EpParam("AccountId", "123456789012"), EpParam("Region", "cn-north-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.eventsv2.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
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

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const EventBridgeV2EndpointProviderEndpointTestCase::Expect& expect)
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

TEST_P(EventBridgeV2EndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES->size()) << "Something is wrong with the test fixture itself.";
    const EventBridgeV2EndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES->at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);
    SCOPED_TRACE(Aws::String("\n--gtest_filter=EndpointTestsFromModel/EventBridgeV2EndpointProviderTests.EndpointProviderTest/") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX));

    std::shared_ptr<EventBridgeV2EndpointProvider> endpointProvider = Aws::MakeShared<EventBridgeV2EndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize EventBridgeV2EndpointProvider";

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
        const Aws::Vector<std::reference_wrapper<const EventBridgeV2EndpointProviderEndpointTestCase::OperationParamsFromTest>>
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
                         EventBridgeV2EndpointProviderTests,
                         ::testing::Range((size_t) 0u, EventBridgeV2EndpointProviderTests::TEST_CASES_SZ));
