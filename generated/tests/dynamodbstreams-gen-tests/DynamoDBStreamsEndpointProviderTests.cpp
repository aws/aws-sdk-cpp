/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/dynamodbstreams/DynamoDBStreamsEndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSDynamoDBStreamsEndpointProviderTests";
using DynamoDBStreamsEndpointProvider = Aws::DynamoDBStreams::Endpoint::DynamoDBStreamsEndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::Vector<EpProp>>>;
using ExpEpAuthScheme = Aws::Vector<EpProp>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

struct DynamoDBStreamsEndpointProviderEndpointTestCase
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

class DynamoDBStreamsEndpointProviderTests : public ::testing::TestWithParam<size_t>
{
public:
    static const size_t TEST_CASES_SZ;
protected:
    static Aws::Vector<DynamoDBStreamsEndpointProviderEndpointTestCase> getTestCase();
    static Aws::UniquePtrSafeDeleted<Aws::Vector<DynamoDBStreamsEndpointProviderEndpointTestCase>> TEST_CASES;
    static void SetUpTestSuite()
    {
        TEST_CASES = Aws::MakeUniqueSafeDeleted<Aws::Vector<DynamoDBStreamsEndpointProviderEndpointTestCase>>(ALLOCATION_TAG, getTestCase());
        ASSERT_TRUE(TEST_CASES) << "Failed to allocate TEST_CASES table";
        assert(TEST_CASES->size() == TEST_CASES_SZ);
    }

    static void TearDownTestSuite()
    {
        TEST_CASES.reset();
    }
};

Aws::UniquePtrSafeDeleted<Aws::Vector<DynamoDBStreamsEndpointProviderEndpointTestCase>> DynamoDBStreamsEndpointProviderTests::TEST_CASES;
const size_t DynamoDBStreamsEndpointProviderTests::TEST_CASES_SZ = 424;

Aws::Vector<DynamoDBStreamsEndpointProviderEndpointTestCase> DynamoDBStreamsEndpointProviderTests::getTestCase() {

  Aws::Vector<DynamoDBStreamsEndpointProviderEndpointTestCase> test_cases = {
  /*TEST CASE 0*/
  {"For region af-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "af-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 1*/
  {"For region ap-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.ap-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 2*/
  {"For region ap-northeast-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.ap-northeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 3*/
  {"For region ap-northeast-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.ap-northeast-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 4*/
  {"For region ap-northeast-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.ap-northeast-3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 5*/
  {"For region ap-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.ap-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 6*/
  {"For region ap-southeast-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.ap-southeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 7*/
  {"For region ap-southeast-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.ap-southeast-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 8*/
  {"For region ap-southeast-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.ap-southeast-3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 9*/
  {"For region ca-central-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ca-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.ca-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 10*/
  {"For region eu-central-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.eu-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 11*/
  {"For region eu-north-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.eu-north-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 12*/
  {"For region eu-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.eu-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 13*/
  {"For region eu-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 14*/
  {"For region eu-west-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.eu-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 15*/
  {"For region eu-west-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.eu-west-3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 16*/
  {"For region me-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 17*/
  {"For region sa-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "sa-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.sa-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 18*/
  {"For region us-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 19*/
  {"For region us-east-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 20*/
  {"For region us-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 21*/
  {"For region us-west-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 22*/
  {"For region us-east-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 23*/
  {"For region us-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 24*/
  {"For region us-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 25*/
  {"For region cn-north-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 26*/
  {"For region cn-northwest-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 27*/
  {"For region cn-north-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 28*/
  {"For region cn-north-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 29*/
  {"For region cn-north-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 30*/
  {"For region us-gov-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 31*/
  {"For region us-gov-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 32*/
  {"For region us-gov-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 33*/
  {"For region us-gov-west-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 34*/
  {"For region us-gov-east-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 35*/
  {"For region us-gov-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 36*/
  {"For region us-iso-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 37*/
  {"For region us-iso-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 38*/
  {"For region us-isob-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-isob-east-1.sc2s.sgov.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 39*/
  {"For region us-isob-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-isob-east-1.sc2s.sgov.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 40*/
  {"For custom endpoint with region set and fips disabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 41*/
  {"For custom endpoint with region not set and fips disabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 42*/
  {"For custom endpoint with fips enabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 43*/
  {"For custom endpoint with fips disabled and dualstack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 44*/
  {"Missing region", // documentation
    {}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Missing Region"} // expect
  },
  /*TEST CASE 45*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 46*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 47*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 48*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 49*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 50*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 51*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 52*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 53*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 54*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 55*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 56*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true, Endpoint=https://example.com}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 57*/
  {"{Region=local, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "local"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.local.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 58*/
  {"{UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Missing Region"} // expect
  },
  /*TEST CASE 59*/
  {"{Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false, StreamArn=arn:aws:dynamodb:us-east-1:not_an_account:table/T/stream/2024-01-01T00:00:00.000}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:not_an_account:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 60*/
  {"{Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 61*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 62*/
  {"{AccountId=, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Credentials-sourced account ID parameter is invalid"} // expect
  },
  /*TEST CASE 63*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 64*/
  {"{StreamArn=, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", ""), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 65*/
  {"{StreamArn=arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 66*/
  {"{StreamArn=arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 67*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 68*/
  {"{ShardIterator=arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 69*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 70*/
  {"{AccountId=111111111111, StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 71*/
  {"{AccountId=111111111111, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 72*/
  {"{AccountId=111111111111, StreamArn=arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 73*/
  {"{AccountId=111111111111, StreamArn=arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 74*/
  {"{AccountId=111111111111, StreamArn=arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 75*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 76*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 77*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 78*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 79*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 80*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 81*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 82*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 83*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 84*/
  {"{Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 85*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 86*/
  {"{AccountId=, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 87*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 88*/
  {"{StreamArn=, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", ""), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 89*/
  {"{StreamArn=arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 90*/
  {"{StreamArn=arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 91*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 92*/
  {"{ShardIterator=arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 93*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 94*/
  {"{AccountId=111111111111, StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 95*/
  {"{AccountId=111111111111, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 96*/
  {"{AccountId=111111111111, StreamArn=arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 97*/
  {"{AccountId=111111111111, StreamArn=arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 98*/
  {"{AccountId=111111111111, StreamArn=arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 99*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 100*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 101*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 102*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 103*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 104*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 105*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 106*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 107*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 108*/
  {"{Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 109*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 110*/
  {"{AccountId=, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", ""), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Credentials-sourced account ID parameter is invalid"} // expect
  },
  /*TEST CASE 111*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 112*/
  {"{StreamArn=, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", ""), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 113*/
  {"{StreamArn=arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 114*/
  {"{StreamArn=arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 115*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 116*/
  {"{ShardIterator=arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountIdEndpointMode is required but no AccountID was provided or able to be loaded"} // expect
  },
  /*TEST CASE 117*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 118*/
  {"{AccountId=111111111111, StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 119*/
  {"{AccountId=111111111111, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 120*/
  {"{AccountId=111111111111, StreamArn=arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 121*/
  {"{AccountId=111111111111, StreamArn=arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:kinesis:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 122*/
  {"{AccountId=111111111111, StreamArn=arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, ShardIterator=arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("ShardIterator", "arn:aws:dynamodb:af-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:af-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"), EpParam("UseDualStack", false),
     EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 123*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 124*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 125*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 126*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 127*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 128*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 129*/
  {"{AccountId=111111111111, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 130*/
  {"{StreamArn=arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("StreamArn", "arn:aws:dynamodb:us-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 131*/
  {"{ShardIterator=arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:us-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 132*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 133*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 134*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 135*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 136*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 137*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 138*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 139*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 140*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "eu-west-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 141*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 142*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 143*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "eu-west-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 144*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 145*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 146*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 147*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 148*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 149*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 150*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 151*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 152*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "eu-west-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 153*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 154*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 155*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "eu-west-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 156*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 157*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 158*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 159*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 160*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 161*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 162*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 163*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 164*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "eu-west-1"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 165*/
  {"{AccountId=111111111111, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 166*/
  {"{StreamArn=arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "eu-west-1"), EpParam("StreamArn", "arn:aws:dynamodb:eu-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 167*/
  {"{ShardIterator=arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=eu-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:eu-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"), EpParam("Region", "eu-west-1"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 168*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 169*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 170*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 171*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 172*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 173*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 174*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 175*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 176*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 177*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 178*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 179*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 180*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 181*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 182*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 183*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 184*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 185*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 186*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 187*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 188*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 189*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 190*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 191*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 192*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 193*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 194*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 195*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 196*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 197*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 198*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 199*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 200*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 201*/
  {"{AccountId=111111111111, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 202*/
  {"{StreamArn=arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-central-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-central-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 203*/
  {"{ShardIterator=arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-central-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-central-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-central-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 204*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 205*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 206*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 207*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 208*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 209*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 210*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 211*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 212*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 213*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 214*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 215*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 216*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 217*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 218*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 219*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 220*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 221*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 222*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 223*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 224*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 225*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 226*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 227*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.me-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 228*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 229*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 230*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 231*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 232*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 233*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 234*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 235*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 236*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 237*/
  {"{AccountId=111111111111, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 238*/
  {"{StreamArn=arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "me-south-1"), EpParam("StreamArn", "arn:aws:dynamodb:me-south-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 239*/
  {"{ShardIterator=arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=me-south-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws:dynamodb:me-south-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "me-south-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 240*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 241*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 242*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 243*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 244*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 245*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 246*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 247*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 248*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 249*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 250*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 251*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 252*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 253*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 254*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 255*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 256*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 257*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 258*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 259*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 260*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 261*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 262*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 263*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 264*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 265*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 266*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 267*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 268*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 269*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 270*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 271*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 272*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 273*/
  {"{AccountId=111111111111, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 274*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-north-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 275*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-north-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-north-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 276*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 277*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 278*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 279*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 280*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 281*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 282*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 283*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 284*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 285*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 286*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 287*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 288*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 289*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 290*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 291*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 292*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 293*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 294*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 295*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 296*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 297*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 298*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 299*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 300*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 301*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 302*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 303*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 304*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 305*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 306*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 307*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 308*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.cn-northwest-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 309*/
  {"{AccountId=111111111111, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 310*/
  {"{StreamArn=arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-northwest-1"), EpParam("StreamArn", "arn:aws-cn:dynamodb:cn-northwest-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 311*/
  {"{ShardIterator=arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=cn-northwest-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-cn:dynamodb:cn-northwest-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 312*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 313*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 314*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 315*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 316*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 317*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 318*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 319*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 320*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 321*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 322*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 323*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 324*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 325*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 326*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 327*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 328*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 329*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 330*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 331*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 332*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 333*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 334*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 335*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 336*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 337*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 338*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 339*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 340*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 341*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 342*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 343*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 344*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 345*/
  {"{AccountId=111111111111, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 346*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 347*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-gov-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 348*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 349*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 350*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 351*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 352*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 353*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 354*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 355*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 356*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 357*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 358*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 359*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 360*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 361*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 362*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 363*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 364*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 365*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 366*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 367*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 368*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 369*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 370*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 371*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 372*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 373*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 374*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 375*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 376*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 377*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 378*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 379*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 380*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 381*/
  {"{AccountId=111111111111, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb-fips.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 382*/
  {"{StreamArn=arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("StreamArn", "arn:aws-us-gov:dynamodb:us-gov-west-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://222222222222.streams-ddb-fips.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 383*/
  {"{ShardIterator=arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-gov-west-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-us-gov:dynamodb:us-gov-west-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*epUrl*/"https://333333333333.streams-ddb-fips.us-gov-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 384*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 385*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 386*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 387*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 388*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 389*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 390*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 391*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 392*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 393*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 394*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 395*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=preferred, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 396*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 397*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 398*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 399*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 400*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 401*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 402*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 403*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 404*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb-fips.us-iso-east-1.c2s.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 405*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 406*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 407*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=disabled, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "disabled")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams-dynamodb-fips.us-iso-east-1.api.aws.ic.gov",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 408*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 409*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 410*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 411*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 412*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 413*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=false, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", false), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 414*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 415*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 416*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 417*/
  {"{AccountId=111111111111, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 418*/
  {"{StreamArn=arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("StreamArn", "arn:aws-iso:dynamodb:us-iso-east-1:222222222222:table/T/stream/2024-01-01T00:00:00.000"),
     EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 419*/
  {"{ShardIterator=arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz, Region=us-iso-east-1, AccountIdEndpointMode=required, UseFIPS=true, UseDualStack=true}", // documentation
    {EpParam("UseFIPS", true), EpParam("ShardIterator", "arn:aws-iso:dynamodb:us-iso-east-1:333333333333:table/T/stream/2024-01-01T00:00:00.000|1|AAAAAAAAAAIxyz"),
     EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", true), EpParam("AccountIdEndpointMode", "required")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: AccountIdEndpointMode is required but account endpoints are not supported in this region"} // expect
  },
  /*TEST CASE 420*/
  {"{Region=us-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-new-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-new-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 421*/
  {"{Region=cn-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "cn-new-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.cn-new-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 422*/
  {"{Region=us-gov-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-gov-new-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://111111111111.streams-ddb.us-gov-new-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 423*/
  {"{Region=us-iso-new-1, AccountIdEndpointMode=preferred, AccountId=111111111111, UseFIPS=false, UseDualStack=false}", // documentation
    {EpParam("UseFIPS", false), EpParam("AccountId", "111111111111"), EpParam("Region", "us-iso-new-1"), EpParam("UseDualStack", false), EpParam("AccountIdEndpointMode", "preferred")}, // params
    {}, // tags
    {{/*epUrl*/"https://streams.dynamodb.us-iso-new-1.c2s.ic.gov",
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

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const DynamoDBStreamsEndpointProviderEndpointTestCase::Expect& expect)
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

TEST_P(DynamoDBStreamsEndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES->size()) << "Something is wrong with the test fixture itself.";
    const DynamoDBStreamsEndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES->at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);
    SCOPED_TRACE(Aws::String("\n--gtest_filter=EndpointTestsFromModel/DynamoDBStreamsEndpointProviderTests.EndpointProviderTest/") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX));

    std::shared_ptr<DynamoDBStreamsEndpointProvider> endpointProvider = Aws::MakeShared<DynamoDBStreamsEndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize DynamoDBStreamsEndpointProvider";

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
        const Aws::Vector<std::reference_wrapper<const DynamoDBStreamsEndpointProviderEndpointTestCase::OperationParamsFromTest>>
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
                         DynamoDBStreamsEndpointProviderTests,
                         ::testing::Range((size_t) 0u, DynamoDBStreamsEndpointProviderTests::TEST_CASES_SZ));
