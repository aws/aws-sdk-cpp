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
const size_t DynamoDBEndpointProviderTests::TEST_CASES_SZ = 433;

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
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 52*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 53*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 54*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 55*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 56*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 57*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 58*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 59*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 60*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 61*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 62*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 63*/
  {"{Endpoint=https://dynamodb.cn-north-1.api.amazonwebservices.com.cn, Region=cn-north-1, AccountIdEndpointMode=preferred}", // documentation
    {EpParam("Endpoint", "https://dynamodb.cn-north-1.api.amazonwebservices.com.cn"), EpParam("Region", "cn-north-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 64*/
  {"{Endpoint=https://dynamodb.us-gov-east-1.api.aws, Region=us-gov-east-1, AccountIdEndpointMode=preferred}", // documentation
    {EpParam("Endpoint", "https://dynamodb.us-gov-east-1.api.aws"), EpParam("Region", "us-gov-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 65*/
  {"{Endpoint=https://dynamodb.us-east-1.api.aws, Region=us-east-1, AccountIdEndpointMode=preferred}", // documentation
    {EpParam("Endpoint", "https://dynamodb.us-east-1.api.aws"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 66*/
  {"{Endpoint=https://111111111111.ddb.us-east-1.api.aws, Region=us-east-1, AccountIdEndpointMode=preferred}", // documentation
    {EpParam("Endpoint", "https://111111111111.ddb.us-east-1.api.aws"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 67*/
  {"{Endpoint=https://vpce-1a2b3c4d-5e6f.dynamodb.us-east-1.vpce.api.aws, Region=us-east-1, AccountIdEndpointMode=preferred}", // documentation
    {EpParam("Endpoint", "https://vpce-1a2b3c4d-5e6f.dynamodb.us-east-1.vpce.api.aws"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://vpce-1a2b3c4d-5e6f.dynamodb.us-east-1.vpce.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 68*/
  {"{Endpoint=https://dynamodb.eu-west-1.api.aws, Region=eu-west-1, AccountIdEndpointMode=preferred}", // documentation
    {EpParam("Endpoint", "https://dynamodb.eu-west-1.api.aws"), EpParam("Region", "eu-west-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 69*/
  {"{Endpoint=https://dynamodb.us-west-2.api.aws, Region=us-west-2, AccountIdEndpointMode=preferred}", // documentation
    {EpParam("Endpoint", "https://dynamodb.us-west-2.api.aws"), EpParam("Region", "us-west-2"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 70*/
  {"{Endpoint=https://dynamodb.us-east-1.api.aws/, Region=us-east-1, AccountIdEndpointMode=preferred}", // documentation
    {EpParam("Endpoint", "https://dynamodb.us-east-1.api.aws/"), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 71*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 72*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 73*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 74*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 75*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 76*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 77*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 78*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 79*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 80*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 81*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 82*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "local"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 83*/
  {"{UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Missing Region"} // expect
  },
  /*TEST CASE 84*/
  {"{Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:not_an_account:table/table_name}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:not_an_account:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 85*/
  {"{Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 86*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 87*/
  {"{AccountId=, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Credentials-sourced account ID parameter is invalid"} // expect
  },
  /*TEST CASE 88*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 89*/
  {"{ResourceArn=, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 90*/
  {"{ResourceArnList=[], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 91*/
  {"{ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 92*/
  {"{ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 93*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 94*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 95*/
  {"{AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 96*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 97*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 98*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 99*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 100*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 101*/
  {"{ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 102*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:af-south-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:af-south-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 103*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 104*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 105*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 106*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 107*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 108*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 109*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 110*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 111*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 112*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 113*/
  {"{Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 114*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 115*/
  {"{AccountId=, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 116*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 117*/
  {"{ResourceArn=, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 118*/
  {"{ResourceArnList=[], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 119*/
  {"{ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 120*/
  {"{ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 121*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 122*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 123*/
  {"{AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 124*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 125*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 126*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 127*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 128*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 129*/
  {"{ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 130*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:af-south-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:af-south-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 131*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 132*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 133*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 134*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 135*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 136*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 137*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 138*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 139*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 140*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 141*/
  {"{Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 142*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 143*/
  {"{AccountId=, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Credentials-sourced account ID parameter is invalid"} // expect
  },
  /*TEST CASE 144*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 145*/
  {"{ResourceArn=, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 146*/
  {"{ResourceArnList=[], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 147*/
  {"{ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 148*/
  {"{ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 149*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 150*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 151*/
  {"{AccountId=111111111111, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"),
     EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 152*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 153*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 154*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 155*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 156*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 157*/
  {"{ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 158*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, ResourceArnList=[arn:aws:dynamodb:af-south-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:af-south-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 159*/
  {"{AccountId=111111111111, ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, ResourceArnList=[arn:aws:s3:us-east-1:333333333333:stream/testStream], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:s3:us-east-1:333333333333:stream/testStream"})}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 160*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 161*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 162*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 163*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 164*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 165*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 166*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 167*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 168*/
  {"{ResourceArnList=[arn:aws:dynamodb:us-east-1:333333333333:table/table_name], Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws:dynamodb:us-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 169*/
  {"{Region=us-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-new-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-new-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 170*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 171*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 172*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 173*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 174*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 175*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 176*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 177*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 178*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 179*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 180*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 181*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 182*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 183*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 184*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 185*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 186*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 187*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 188*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 189*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 190*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 191*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 192*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 193*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 194*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 195*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 196*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 197*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 198*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 199*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 200*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 201*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 202*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 203*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 204*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 205*/
  {"{ResourceArnList=[arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name], Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-cn:dynamodb:cn-north-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 206*/
  {"{Region=cn-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-new-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.cn-new-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 207*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 208*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 209*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 210*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 211*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 212*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 213*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 214*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 215*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 216*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 217*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 218*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 219*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 220*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 221*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 222*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 223*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 224*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 225*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 226*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 227*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 228*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 229*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 230*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 231*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 232*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 233*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 234*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 235*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 236*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 237*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 238*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 239*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 240*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 241*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 242*/
  {"{ResourceArnList=[arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name], Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 243*/
  {"{Region=us-gov-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-new-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-gov-new-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 244*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 245*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 246*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 247*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 248*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 249*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 250*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 251*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 252*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 253*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 254*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 255*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 256*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 257*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 258*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 259*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 260*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 261*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 262*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 263*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 264*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 265*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 266*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 267*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 268*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 269*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 270*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 271*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 272*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 273*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 274*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 275*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 276*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 277*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 278*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 279*/
  {"{ResourceArnList=[arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name], Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required"), EpParam("ResourceArnList", Aws::Vector<Aws::String>{"arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/table_name"})}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 280*/
  {"{Region=us-iso-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-new-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://dynamodb.us-iso-new-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 281*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 282*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 283*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 284*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 285*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 286*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 287*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 288*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 289*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 290*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 291*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 292*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, Endpoint=https://example.com, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 293*/
  {"{Endpoint=https://dynamodb.cn-north-1.api.amazonwebservices.com.cn, Region=cn-north-1, AccountIdEndpointMode=preferred, IsSearchOperation=true}", // documentation
    {EpParam("Endpoint", "https://dynamodb.cn-north-1.api.amazonwebservices.com.cn"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 294*/
  {"{Endpoint=https://dynamodb.us-gov-east-1.api.aws, Region=us-gov-east-1, AccountIdEndpointMode=preferred, IsSearchOperation=true}", // documentation
    {EpParam("Endpoint", "https://dynamodb.us-gov-east-1.api.aws"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 295*/
  {"{Endpoint=https://dynamodb.us-east-1.api.aws, Region=us-east-1, AccountIdEndpointMode=preferred, IsSearchOperation=true}", // documentation
    {EpParam("Endpoint", "https://dynamodb.us-east-1.api.aws"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 296*/
  {"{Endpoint=https://111111111111.ddb.us-east-1.api.aws, Region=us-east-1, AccountIdEndpointMode=preferred, IsSearchOperation=true}", // documentation
    {EpParam("Endpoint", "https://111111111111.ddb.us-east-1.api.aws"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 297*/
  {"{Endpoint=https://vpce-1a2b3c4d-5e6f.dynamodb.us-east-1.vpce.api.aws, Region=us-east-1, AccountIdEndpointMode=preferred, IsSearchOperation=true}", // documentation
    {EpParam("Endpoint", "https://vpce-1a2b3c4d-5e6f.dynamodb.us-east-1.vpce.api.aws"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://vpce-1a2b3c4d-5e6f.dynamodb.us-east-1.vpce.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 298*/
  {"{Endpoint=https://dynamodb.eu-west-1.api.aws, Region=eu-west-1, AccountIdEndpointMode=preferred, IsSearchOperation=true}", // documentation
    {EpParam("Endpoint", "https://dynamodb.eu-west-1.api.aws"), EpParam("IsSearchOperation", true), EpParam("Region", "eu-west-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 299*/
  {"{Endpoint=https://dynamodb.us-west-2.api.aws, Region=us-west-2, AccountIdEndpointMode=preferred, IsSearchOperation=true}", // documentation
    {EpParam("Endpoint", "https://dynamodb.us-west-2.api.aws"), EpParam("IsSearchOperation", true), EpParam("Region", "us-west-2"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 300*/
  {"{Endpoint=https://dynamodb.us-east-1.api.aws/, Region=us-east-1, AccountIdEndpointMode=preferred, IsSearchOperation=true}", // documentation
    {EpParam("Endpoint", "https://dynamodb.us-east-1.api.aws/"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Endpoint override is not supported for dual-stack endpoints. Please enable dual-stack functionality by enabling the configuration. For more details, see: https://docs.aws.amazon.com/sdkref/latest/guide/feature-endpoints.html"} // expect
  },
  /*TEST CASE 301*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 302*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 303*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 304*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 305*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 306*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 307*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 308*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 309*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"http://localhost:8000",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 310*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and local endpoint are not supported"} // expect
  },
  /*TEST CASE 311*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 312*/
  {"{AccountId=111111111111, Region=local, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "local"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and local endpoint are not supported"} // expect
  },
  /*TEST CASE 313*/
  {"{UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Missing Region"} // expect
  },
  /*TEST CASE 314*/
  {"{Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, ResourceArn=arn:aws:dynamodb:us-east-1:not_an_account:table/table_name, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:not_an_account:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 315*/
  {"{Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 316*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 317*/
  {"{AccountId=, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Credentials-sourced account ID parameter is invalid"} // expect
  },
  /*TEST CASE 318*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 319*/
  {"{ResourceArn=, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 320*/
  {"{ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 321*/
  {"{ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 322*/
  {"{ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 323*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 324*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 325*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 326*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 327*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 328*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 329*/
  {"{Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 330*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 331*/
  {"{AccountId=, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 332*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 333*/
  {"{ResourceArn=, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 334*/
  {"{ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 335*/
  {"{ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 336*/
  {"{ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 337*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 338*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 339*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 340*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 341*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 342*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 343*/
  {"{Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 344*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 345*/
  {"{AccountId=, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Credentials-sourced account ID parameter is invalid"} // expect
  },
  /*TEST CASE 346*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 347*/
  {"{ResourceArn=, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", ""), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 348*/
  {"{ResourceArn=arn:aws:dynamodb:af-south-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:af-south-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 349*/
  {"{ResourceArn=arn:aws:s3:us-east-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:us-east-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 350*/
  {"{ResourceArn=arn:aws:s3:af-south-1:222222222222:stream/testStream, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:s3:af-south-1:222222222222:stream/testStream"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 351*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 352*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 353*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 354*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 355*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 356*/
  {"{ResourceArn=arn:aws:dynamodb:us-east-1:222222222222:table/table_name, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws:dynamodb:us-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 357*/
  {"{Region=us-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-new-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.us-new-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 358*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 359*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 360*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 361*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 362*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 363*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 364*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 365*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 366*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 367*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 368*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 369*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 370*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 371*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 372*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 373*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 374*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 375*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 376*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 377*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 378*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 379*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 380*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 381*/
  {"{ResourceArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 382*/
  {"{Region=cn-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "cn-new-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.cn-new-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 383*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 384*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 385*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 386*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 387*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 388*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 389*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 390*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 391*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 392*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 393*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 394*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 395*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 396*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 397*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 398*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 399*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 400*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 401*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.search-ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 402*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.search-ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 403*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 404*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 405*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 406*/
  {"{ResourceArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 407*/
  {"{Region=us-gov-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-gov-new-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-gov-new-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 408*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 409*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 410*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 411*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 412*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 413*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 414*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 415*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 416*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 417*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 418*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 419*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 420*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 421*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 422*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 423*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 424*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 425*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 426*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 427*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", false), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 428*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 429*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 430*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 431*/
  {"{ResourceArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, IsSearchOperation=true}", // documentation
    {EpParam("ResourceArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/table_name"), EpParam("UseFIPS", true), EpParam("IsSearchOperation", true),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required and FIPS is enabled, but FIPS account endpoints are not supported"} // expect
  },
  /*TEST CASE 432*/
  {"{Region=us-iso-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false, IsSearchOperation=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("IsSearchOperation", true), EpParam("Region", "us-iso-new-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://search-dynamodb.us-iso-new-1.c2s.ic.gov",
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
