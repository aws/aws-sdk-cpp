/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/signin/SigninEndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSSigninEndpointProviderTests";
using SigninEndpointProvider = Aws::Signin::Endpoint::SigninEndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::Vector<EpProp>>>;
using ExpEpAuthScheme = Aws::Vector<EpProp>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

struct SigninEndpointProviderEndpointTestCase
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

class SigninEndpointProviderTests : public ::testing::TestWithParam<size_t>
{
public:
    static const size_t TEST_CASES_SZ;
protected:
    static Aws::Vector<SigninEndpointProviderEndpointTestCase> getTestCase();
    static Aws::UniquePtrSafeDeleted<Aws::Vector<SigninEndpointProviderEndpointTestCase>> TEST_CASES;
    static void SetUpTestSuite()
    {
        TEST_CASES = Aws::MakeUniqueSafeDeleted<Aws::Vector<SigninEndpointProviderEndpointTestCase>>(ALLOCATION_TAG, getTestCase());
        ASSERT_TRUE(TEST_CASES) << "Failed to allocate TEST_CASES table";
        assert(TEST_CASES->size() == TEST_CASES_SZ);
    }

    static void TearDownTestSuite()
    {
        TEST_CASES.reset();
    }
};

Aws::UniquePtrSafeDeleted<Aws::Vector<SigninEndpointProviderEndpointTestCase>> SigninEndpointProviderTests::TEST_CASES;
const size_t SigninEndpointProviderTests::TEST_CASES_SZ = 22;

Aws::Vector<SigninEndpointProviderEndpointTestCase> SigninEndpointProviderTests::getTestCase() {

  Aws::Vector<SigninEndpointProviderEndpointTestCase> test_cases = {
  /*TEST CASE 0*/
  {"Control Plane operation in us-east-1 (aws partition)", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("IsControlPlane", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://signin.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 1*/
  {"Control Plane operation in cn-north-1 (aws-cn partition)", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("IsControlPlane", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://signin.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 2*/
  {"Data Plane operation in us-east-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("IsControlPlane", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-east-1.signin.aws.amazon.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 3*/
  {"Data Plane operation in us-east-1 (IsControlPlane not set)", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-east-1.signin.aws.amazon.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 4*/
  {"Data Plane operation in cn-north-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("IsControlPlane", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://cn-north-1.signin.amazonaws.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 5*/
  {"Data Plane operation in us-gov-west-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("IsControlPlane", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-gov-west-1.signin.amazonaws-us-gov.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 6*/
  {"FIPS endpoint in us-gov-west-1 (global endpoint)", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://signin-fips.amazonaws-us-gov.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 7*/
  {"FIPS endpoint in us-gov-east-1 (regional endpoint)", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-gov-east-1.signin-fips.amazonaws-us-gov.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 8*/
  {"FIPS endpoint in us-east-1", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://signin-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 9*/
  {"DualStack falls through to default SDK endpoint in us-east-1 (aws partition)", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://signin.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 10*/
  {"DualStack falls through to default SDK endpoint in cn-north-1 (aws-cn partition)", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://signin.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 11*/
  {"DualStack falls through to default SDK endpoint in us-gov-west-1 (aws-us-gov partition)", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://signin.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 12*/
  {"Custom SDK endpoint override", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://custom.signin.example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://custom.signin.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 13*/
  {"ISO partition (us-iso-east-1)", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-iso-east-1.signin.c2shome.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 14*/
  {"ISO-B partition (us-isob-east-1)", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-isob-east-1.signin.sc2shome.sgov.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 15*/
  {"OAuth endpoint in us-east-1 (aws partition)", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("IsOAuthEndpoint", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-east-1.oauth.signin.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 16*/
  {"OAuth endpoint in us-west-2 (aws partition)", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("IsOAuthEndpoint", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-west-2.oauth.signin.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 17*/
  {"OAuth endpoint with FIPS returns an error (no FIPS variant exists)", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("IsOAuthEndpoint", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"FIPS endpoints are not supported for OAuth operations. Disable FIPS or use a non-OAuth operation."} // expect
  },
  /*TEST CASE 18*/
  {"OAuth endpoint with FIPS returns an error in us-west-2 (aws partition)", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-2"), EpParam("IsOAuthEndpoint", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"FIPS endpoints are not supported for OAuth operations. Disable FIPS or use a non-OAuth operation."} // expect
  },
  /*TEST CASE 19*/
  {"OAuth endpoint with FIPS returns an error in cn-north-1 (non-aws partition, error is partition-agnostic)", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("IsOAuthEndpoint", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"FIPS endpoints are not supported for OAuth operations. Disable FIPS or use a non-OAuth operation."} // expect
  },
  /*TEST CASE 20*/
  {"OAuth endpoint with FIPS returns an error even with a custom SDK endpoint override", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://custom.signin.example.com"), EpParam("Region", "us-east-1"), EpParam("IsOAuthEndpoint", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"FIPS endpoints are not supported for OAuth operations. Disable FIPS or use a non-OAuth operation."} // expect
  },
  /*TEST CASE 21*/
  {"OAuth operation with custom SDK endpoint override", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://custom.signin.example.com"), EpParam("Region", "us-east-1"), EpParam("IsOAuthEndpoint", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://custom.signin.example.com",
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

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const SigninEndpointProviderEndpointTestCase::Expect& expect)
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

TEST_P(SigninEndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES->size()) << "Something is wrong with the test fixture itself.";
    const SigninEndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES->at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);
    SCOPED_TRACE(Aws::String("\n--gtest_filter=EndpointTestsFromModel/SigninEndpointProviderTests.EndpointProviderTest/") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX));

    std::shared_ptr<SigninEndpointProvider> endpointProvider = Aws::MakeShared<SigninEndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize SigninEndpointProvider";

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
        const Aws::Vector<std::reference_wrapper<const SigninEndpointProviderEndpointTestCase::OperationParamsFromTest>>
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
                         SigninEndpointProviderTests,
                         ::testing::Range((size_t) 0u, SigninEndpointProviderTests::TEST_CASES_SZ));
