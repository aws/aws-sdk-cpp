/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/dynamodb/DynamoDBEndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSDynamoDBEndpointProviderTests";
using DynamoDBEndpointProvider = Aws::DynamoDB::Endpoint::DynamoDBEndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::Vector<EpProp>>>;
using ExpEpAuthScheme = Aws::Vector<EpProp>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

struct DynamoDBEndpointProviderEndpointTestCase
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

class DynamoDBEndpointProviderTests : public ::testing::TestWithParam<size_t>
{
public:
    static const size_t TEST_CASES_SZ;
protected:
    static Aws::Vector<DynamoDBEndpointProviderEndpointTestCase> getTestCase();
    static Aws::UniquePtrSafeDeleted<Aws::Vector<DynamoDBEndpointProviderEndpointTestCase>> TEST_CASES;
    static void SetUpTestSuite()
    {
        TEST_CASES = Aws::MakeUniqueSafeDeleted<Aws::Vector<DynamoDBEndpointProviderEndpointTestCase>>(ALLOCATION_TAG, getTestCase());
        ASSERT_TRUE(TEST_CASES) << "Failed to allocate TEST_CASES table";
        assert(TEST_CASES->size() == TEST_CASES_SZ);
    }

    static void TearDownTestSuite()
    {
        TEST_CASES.reset();
    }
};

Aws::UniquePtrSafeDeleted<Aws::Vector<DynamoDBEndpointProviderEndpointTestCase>> DynamoDBEndpointProviderTests::TEST_CASES;
const size_t DynamoDBEndpointProviderTests::TEST_CASES_SZ = 357;

Aws::Vector<DynamoDBEndpointProviderEndpointTestCase> DynamoDBEndpointProviderTests::getTestCase() {

  Aws::Vector<DynamoDBEndpointProviderEndpointTestCase> test_cases = {
  /*TEST CASE 0*/
  {"For region af-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "af-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 1*/
  {"For region ap-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.ap-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 2*/
  {"For region ap-northeast-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.ap-northeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 3*/
  {"For region ap-northeast-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.ap-northeast-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 4*/
  {"For region ap-northeast-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.ap-northeast-3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 5*/
  {"For region ap-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.ap-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 6*/
  {"For region ap-southeast-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.ap-southeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 7*/
  {"For region ap-southeast-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.ap-southeast-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 8*/
  {"For region ap-southeast-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.ap-southeast-3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 9*/
  {"For region ca-central-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ca-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.ca-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 10*/
  {"For region ca-central-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "ca-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.ca-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 11*/
  {"For region eu-central-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.eu-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 12*/
  {"For region eu-north-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.eu-north-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 13*/
  {"For region eu-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.eu-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 14*/
  {"For region eu-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 15*/
  {"For region eu-west-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.eu-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 16*/
  {"For region eu-west-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.eu-west-3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 17*/
  {"For region local with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 18*/
  {"For region me-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 19*/
  {"For region sa-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "sa-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.sa-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 20*/
  {"For region us-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 21*/
  {"For region us-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 22*/
  {"For region us-east-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 23*/
  {"For region us-east-2 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 24*/
  {"For region us-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 25*/
  {"For region us-west-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 26*/
  {"For region us-west-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 27*/
  {"For region us-west-2 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 28*/
  {"For region us-east-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 29*/
  {"For region us-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 30*/
  {"For region cn-north-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 31*/
  {"For region cn-northwest-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 32*/
  {"For region cn-north-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 33*/
  {"For region cn-north-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 34*/
  {"For region cn-north-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 35*/
  {"For region us-gov-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 36*/
  {"For region us-gov-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 37*/
  {"For region us-gov-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 38*/
  {"For region us-gov-west-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 39*/
  {"For region us-gov-east-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 40*/
  {"For region us-gov-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 41*/
  {"For region us-iso-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 42*/
  {"For region us-iso-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-west-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 43*/
  {"For region us-iso-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 44*/
  {"For region us-isob-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-isob-east-1.sc2s.sgov.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 45*/
  {"For region us-isob-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-isob-east-1.sc2s.sgov.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 46*/
  {"For custom endpoint with region set and fips disabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 47*/
  {"For custom endpoint with region not set and fips disabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 48*/
  {"For custom endpoint with fips enabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 49*/
  {"For custom endpoint with fips disabled and dualstack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 50*/
  {"Missing region", // documentation
    {}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Missing Region"} // expect
  },
  /*TEST CASE 51*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 52*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 53*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 54*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 55*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 56*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 57*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 58*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 59*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 60*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 61*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 62*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 63*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 64*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 65*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 66*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 67*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 68*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 69*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 70*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 71*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 72*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 73*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 74*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=preferred, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 75*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 76*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 77*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 78*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 79*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 80*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 81*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 82*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 83*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 84*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 85*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 86*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 87*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 88*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 89*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 90*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 91*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 92*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 93*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 94*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 95*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 96*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 97*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 98*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=disabled, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 99*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 100*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 101*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 102*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 103*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 104*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 105*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 106*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 107*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 108*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 109*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 110*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 111*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 112*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 113*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 114*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 115*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 116*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 117*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 118*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 119*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 120*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 121*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 122*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=required, Region=us-east-1, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 123*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 124*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 125*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 126*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 127*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 128*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 129*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 130*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 131*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 132*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 133*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 134*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 135*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 136*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 137*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 138*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 139*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 140*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 141*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 142*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 143*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 144*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 145*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 146*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=preferred, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 147*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 148*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 149*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 150*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 151*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 152*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 153*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 154*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 155*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 156*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 157*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 158*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 159*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 160*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 161*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 162*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 163*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 164*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 165*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 166*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 167*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 168*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 169*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 170*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=disabled, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 171*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 172*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 173*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 174*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 175*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 176*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 177*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 178*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 179*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 180*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 181*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 182*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 183*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 184*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 185*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 186*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 187*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 188*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 189*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 190*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 191*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 192*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 193*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 194*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=required, Region=local}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 195*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 196*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 197*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 198*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 199*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 200*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 201*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 202*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 203*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 204*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 205*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Credentials-sourced account ID parameter is invalid"} // expect
  },
  /*TEST CASE 206*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 207*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 208*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 209*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 210*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 211*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 212*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 213*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 214*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 215*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 216*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 217*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 218*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=preferred, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 219*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 220*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 221*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and DualStack is enabled, but DualStack account endpoints are not supported"} // expect
  },
  /*TEST CASE 222*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 223*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 224*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 225*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 226*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 227*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 228*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 229*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Credentials-sourced account ID parameter is invalid"} // expect
  },
  /*TEST CASE 230*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 231*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 232*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and DualStack is enabled, but DualStack account endpoints are not supported"} // expect
  },
  /*TEST CASE 233*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 234*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 235*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 236*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 237*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 238*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 239*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and DualStack is enabled, but DualStack account endpoints are not supported"} // expect
  },
  /*TEST CASE 240*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 241*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 242*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=required, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 243*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 244*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 245*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and DualStack is enabled, but DualStack account endpoints are not supported"} // expect
  },
  /*TEST CASE 246*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 247*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 248*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 249*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 250*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 251*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 252*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 253*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 254*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 255*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 256*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and DualStack is enabled, but DualStack account endpoints are not supported"} // expect
  },
  /*TEST CASE 257*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 258*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 259*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 260*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 261*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 262*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 263*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and DualStack is enabled, but DualStack account endpoints are not supported"} // expect
  },
  /*TEST CASE 264*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 265*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 266*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=required, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this partition"} // expect
  },
  /*TEST CASE 267*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 268*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 269*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 270*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 271*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 272*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 273*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 274*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 275*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 276*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 277*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 278*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 279*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 280*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 281*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 282*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 283*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 284*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 285*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 286*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 287*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 288*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 289*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 290*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=disabled, Region=us-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 291*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 292*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 293*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 294*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 295*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 296*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 297*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 298*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 299*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 300*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 301*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 302*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 303*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 304*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 305*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 306*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 307*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 308*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 309*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 310*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 311*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 312*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 313*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 314*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=preferred, Region=cn-north-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 315*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 316*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 317*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 318*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 319*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 320*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 321*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 322*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 323*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 324*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 325*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 326*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 327*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 328*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 329*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 330*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 331*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 332*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=preferred, Region=us-iso-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 333*/
  {"{UseFIPS=true, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 334*/
  {"{UseFIPS=true, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 335*/
  {"{UseFIPS=false, UseDualStack=true, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 336*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 337*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 338*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 339*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 340*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 341*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-west-2:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-west-2:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 342*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=111111111111, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 343*/
  {"{UseFIPS=false, UseDualStack=false, AccountId=, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 344*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 345*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 346*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 347*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 348*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-west-2:222222222222:table/table_name, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-west-2:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 349*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:s3:us-west-2:222222222222:stream/testStream, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-west-2:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 350*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 351*/
  {"{UseFIPS=true, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 352*/
  {"{UseFIPS=true, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 353*/
  {"{UseFIPS=false, UseDualStack=true, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 354*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 355*/
  {"{UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 356*/
  {"{UseFIPS=false, UseDualStack=false, AccountIdEndpointMode=preferred, Region=us-gov-east-1}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
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

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const DynamoDBEndpointProviderEndpointTestCase::Expect& expect)
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

TEST_P(DynamoDBEndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES->size()) << "Something is wrong with the test fixture itself.";
    const DynamoDBEndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES->at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);
    SCOPED_TRACE(Aws::String("\n--gtest_filter=EndpointTestsFromModel/DynamoDBEndpointProviderTests.EndpointProviderTest/") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX));

    std::shared_ptr<DynamoDBEndpointProvider> endpointProvider = Aws::MakeShared<DynamoDBEndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize DynamoDBEndpointProvider";

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
        const Aws::Vector<std::reference_wrapper<const DynamoDBEndpointProviderEndpointTestCase::OperationParamsFromTest>>
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
                         DynamoDBEndpointProviderTests,
                         ::testing::Range((size_t) 0u, DynamoDBEndpointProviderTests::TEST_CASES_SZ));
