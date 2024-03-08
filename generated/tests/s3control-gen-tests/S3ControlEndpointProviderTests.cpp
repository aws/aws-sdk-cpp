/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/s3control/S3ControlEndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSS3ControlEndpointProviderTests";
using S3ControlEndpointProvider = Aws::S3Control::Endpoint::S3ControlEndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::Vector<EpProp>>>;
using ExpEpAuthScheme = Aws::Vector<EpProp>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

class S3ControlEndpointProviderTests : public ::testing::TestWithParam<size_t> {};

struct S3ControlEndpointProviderEndpointTestCase
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

static const Aws::Vector<S3ControlEndpointProviderEndpointTestCase> TEST_CASES = {
  /*TEST CASE 0*/
  {"Vanilla outposts without ARN region + access point ARN@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 1*/
  {"Vanilla outposts with ARN region + access point ARN@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 2*/
  {"accept an access point ARN@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 3*/
  {"vanilla outposts china@cn-north-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws-cn:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 4*/
  {"gov region@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 5*/
  {"gov cloud with fips@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 6*/
  {"govcloud with fips + arn region@us-gov-west-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws-us-gov:s3-outposts:us-gov-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 7*/
  {"gov region@cn-north-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws-cn:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 8*/
  {"gov cloud with fips@cn-north-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws-cn:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 9*/
  {"govcloud with fips + arn region@us-gov-west-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws-us-gov:s3-outposts:us-gov-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 10*/
  {"gov region@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:af-south-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "af-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 11*/
  {"gov cloud with fips@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:af-south-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "af-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 12*/
  {"govcloud with fips + arn region@us-gov-west-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws-us-gov:s3-outposts:us-gov-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 13*/
  {"CreateBucket + OutpostId = outposts endpoint@us-east-2", // documentation
    {EpParam("RequiresAccountId", false), EpParam("OutpostId", "123"), EpParam("UseFIPS", false), EpParam("Bucket", "blah"), EpParam("Region", "us-east-2"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 14*/
  {"CreateBucket + OutpostId with fips = outposts endpoint@us-east-2", // documentation
    {EpParam("RequiresAccountId", false), EpParam("OutpostId", "123"), EpParam("UseFIPS", true), EpParam("Bucket", "blah"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 15*/
  {"CreateBucket without OutpostId = regular endpoint@us-east-2", // documentation
    {EpParam("RequiresAccountId", false), EpParam("UseFIPS", false), EpParam("Bucket", "blah"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-control.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 16*/
  {"ListRegionalBuckets + OutpostId = outposts endpoint@us-east-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("OutpostId", "op-123"), EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-2"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 17*/
  {"ListRegionalBuckets without OutpostId = regular endpoint@us-east-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.s3-control.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 18*/
  {"ListRegionalBucket + OutpostId with fips = outposts endpoint@us-east-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("OutpostId", "op-123"), EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-2"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 19*/
  {"outpost access points support dualstack@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-west-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 20*/
  {"outpost access points support dualstack@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:af-south-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "af-south-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.af-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 21*/
  {"outpost access points support fips + dualstack@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:af-south-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "af-south-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.af-south-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 22*/
  {"invalid ARN: must be include outpost ID@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost"), EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The Outpost Id was not set"} // expect
  },
  /*TEST CASE 23*/
  {"invalid ARN: must specify access point@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456"), EpParam("UseFIPS", false),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Expected a 4-component resource"} // expect
  },
  /*TEST CASE 24*/
  {"invalid ARN@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:myaccesspoint"), EpParam("UseFIPS", false),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Expected a 4-component resource"} // expect
  },
  /*TEST CASE 25*/
  {"when set, AccountId drives AP construction@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "myaccesspoint"), EpParam("UseFIPS", false), EpParam("AccountId", "myid-1234"), EpParam("Region", "us-west-2"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myid-1234.s3-control.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 26*/
  {"Account ID set inline and in ARN but they both match@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 27*/
  {"Account ID set inline and in ARN and they do not match@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "999999999999"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: the accountId specified in the ARN (`123456789012`) does not match the parameter (`999999999999`)"} // expect
  },
  /*TEST CASE 28*/
  {"get access point prefixed with account id using endpoint url@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "apname"), EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 29*/
  {"endpoint url with s3-outposts@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Endpoint", "https://beta.example.com"), EpParam("Region", "us-west-2"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 30*/
  {"access point name with a bucket arn@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("UseFIPS", false), EpParam("Endpoint", "beta.example.com"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Expected an outpost type `accesspoint`, found `bucket`"} // expect
  },
  /*TEST CASE 31*/
  {"bucket arn with access point name@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Endpoint", "beta.example.com"), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Expected an outpost type `bucket`, found `accesspoint`"} // expect
  },
  /*TEST CASE 32*/
  {"create bucket with outposts@us-west-2", // documentation
    {EpParam("RequiresAccountId", false), EpParam("OutpostId", "op-123"), EpParam("UseFIPS", false), EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "bucketname"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 33*/
  {"get bucket with endpoint_url@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 34*/
  {"ListRegionalBucket + OutpostId endpoint url@us-east-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("OutpostId", "op-123"), EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Endpoint", "https://beta.example.com"),
     EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 35*/
  {"ListRegionalBucket + OutpostId + fips + endpoint url@us-east-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("OutpostId", "op-123"), EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Endpoint", "https://beta.example.com"),
     EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 36*/
  {"ListRegionalBucket + OutpostId + fips + dualstack@us-east-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("OutpostId", "op-123"), EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-2"),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-east-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 37*/
  {"CreateBucket + OutpostId endpoint url@us-east-2", // documentation
    {EpParam("RequiresAccountId", false), EpParam("OutpostId", "123"), EpParam("UseFIPS", true), EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "blah"),
     EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 38*/
  {"dualstack cannot be used with outposts when an endpoint URL is set@us-west-2.", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("Endpoint", "https://s3-outposts.us-west-2.api.aws"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: DualStack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 39*/
  {"vanilla bucket arn requires account id@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 40*/
  {"bucket arn with UseArnRegion = true (arn region supercedes client configured region)@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 41*/
  {"bucket ARN in gov partition (non-fips)@us-gov-east-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws-us-gov:s3-outposts:us-gov-east-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 42*/
  {"bucket ARN in gov partition with FIPS@us-gov-west-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-us-gov:s3-outposts:us-gov-west-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 43*/
  {"bucket ARN in aws partition with FIPS@us-east-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3-outposts:us-east-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 44*/
  {"bucket ARN in aws partition with fips + dualstack@us-east-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3-outposts:us-east-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-east-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-east-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 45*/
  {"vanilla bucket arn requires account id@cn-north-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws-cn:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 46*/
  {"bucket arn with UseArnRegion = true (arn region supercedes client configured region)@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 47*/
  {"bucket ARN in gov partition (non-fips)@us-gov-east-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws-us-gov:s3-outposts:us-gov-east-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 48*/
  {"bucket ARN in gov partition with FIPS@us-gov-west-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-us-gov:s3-outposts:us-gov-west-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 49*/
  {"bucket ARN in aws partition with FIPS@us-east-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3-outposts:us-east-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 50*/
  {"Outposts support dualstack @us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-west-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 51*/
  {"vanilla bucket arn requires account id@af-south-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:af-south-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "af-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 52*/
  {"bucket arn with UseArnRegion = true (arn region supercedes client configured region)@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 53*/
  {"bucket ARN in gov partition (non-fips)@us-gov-east-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws-us-gov:s3-outposts:us-gov-east-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 54*/
  {"bucket ARN in gov partition with FIPS@us-gov-west-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-us-gov:s3-outposts:us-gov-west-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-gov-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 55*/
  {"bucket ARN in aws partition with FIPS@us-east-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3-outposts:us-east-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts-fips.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 56*/
  {"Invalid ARN: missing outpost id and bucket@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost"), EpParam("Region", "us-west-2"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The Outpost Id was not set"} // expect
  },
  /*TEST CASE 57*/
  {"Invalid ARN: missing bucket@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Expected a 4-component resource"} // expect
  },
  /*TEST CASE 58*/
  {"Invalid ARN: missing outpost and bucket ids@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:bucket"), EpParam("Region", "us-west-2"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Expected a 4-component resource"} // expect
  },
  /*TEST CASE 59*/
  {"Invalid ARN: missing bucket id@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:bucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: expected a bucket name"} // expect
  },
  /*TEST CASE 60*/
  {"account id inserted into hostname@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("AccountId", "1234567890"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://1234567890.s3-control.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 61*/
  {"account id prefix with dualstack@us-east-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("AccountId", "1234567890"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://1234567890.s3-control.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 62*/
  {"account id prefix with fips@us-east-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("AccountId", "1234567890"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://1234567890.s3-control-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 63*/
  {"custom account id prefix with fips@us-east-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.s3-control-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 64*/
  {"standard url @ us-east-1", // documentation
    {EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-control.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 65*/
  {"fips url @ us-east-1", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-control-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 66*/
  {"dualstack url @ us-east-1", // documentation
    {EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-control.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 67*/
  {"fips,dualstack url @ us-east-1", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-control-fips.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 68*/
  {"standard url @ cn-north-1", // documentation
    {EpParam("Region", "cn-north-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-control.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 69*/
  {"fips @ cn-north-1", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 70*/
  {"custom account id prefix @us-east-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.s3-control.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 71*/
  {"invalid account id prefix @us-east-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("AccountId", "/?invalid&not-host*label"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountId must only contain a-z, A-Z, 0-9 and `-`."} // expect
  },
  /*TEST CASE 72*/
  {"custom account id prefix with fips@us-east-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.s3-control-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 73*/
  {"custom account id prefix with dualstack,fips@us-east-1", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.s3-control-fips.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 74*/
  {"custom account id with custom endpoint", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccountId", "123456789012"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 75*/
  {"RequiresAccountId with AccountId unset", // documentation
    {EpParam("RequiresAccountId", true), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountId is required but not set"} // expect
  },
  /*TEST CASE 76*/
  {"RequiresAccountId with AccountId unset and custom endpoint", // documentation
    {EpParam("RequiresAccountId", true), EpParam("Endpoint", "https://beta.example.com"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountId is required but not set"} // expect
  },
  /*TEST CASE 77*/
  {"RequiresAccountId with invalid AccountId and custom endpoint", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccountId", "/?invalid&not-host*label"), EpParam("Endpoint", "https://beta.example.com"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountId must only contain a-z, A-Z, 0-9 and `-`."} // expect
  },
  /*TEST CASE 78*/
  {"account id with custom endpoint, fips", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", true), EpParam("AccountId", "123456789012"), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 79*/
  {"custom endpoint, fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 80*/
  {"custom endpoint, fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 81*/
  {"custom endpoint, DualStack", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: DualStack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 82*/
  {"region not set", // documentation
    {}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Region must be set"} // expect
  },
  /*TEST CASE 83*/
  {"invalid partition", // documentation
    {EpParam("Region", "invalid-region 42")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region: region was not a valid DNS name."} // expect
  },
  /*TEST CASE 84*/
  {"ListRegionalBuckets + OutpostId without accountId set.", // documentation
    {EpParam("RequiresAccountId", true), EpParam("OutpostId", "op-123"), EpParam("UseFIPS", false), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountId is required but not set"} // expect
  },
  /*TEST CASE 85*/
  {"ListRegionalBuckets + OutpostId with invalid accountId set.", // documentation
    {EpParam("RequiresAccountId", true), EpParam("OutpostId", "op-123"), EpParam("UseFIPS", false), EpParam("AccountId", "/?invalid&not-host*label"), EpParam("Region", "us-east-2"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountId must only contain a-z, A-Z, 0-9 and `-`."} // expect
  },
  /*TEST CASE 86*/
  {"accesspoint set but missing accountId", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "myaccesspoint"), EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"AccountId is required but not set"} // expect
  },
  /*TEST CASE 87*/
  {"outpost accesspoint ARN with missing accountId", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2::outpost:op-01234567890123456:outpost:op1"), EpParam("UseFIPS", false),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: missing account ID"} // expect
  },
  /*TEST CASE 88*/
  {"bucket ARN with missing accountId", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2::outpost:op-01234567890123456:bucket:mybucket"), EpParam("UseFIPS", false),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: missing account ID"} // expect
  },
  /*TEST CASE 89*/
  {"endpoint url with accesspoint (non-arn)", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "apname"), EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Endpoint", "https://beta.example.com"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789012.beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 90*/
  {"access point name with an accesspoint arn@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("Endpoint", "https://beta.example.com"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 91*/
  {"DualStack + Custom endpoint is not supported(non-arn)", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "apname"), EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Endpoint", "https://beta.example.com"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: DualStack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 92*/
  {"get bucket with custom endpoint and dualstack is not supported@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://s3-outposts.us-west-2.api.aws"), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: DualStack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 93*/
  {"ListRegionalBuckets + OutpostId with fips in CN.", // documentation
    {EpParam("RequiresAccountId", true), EpParam("OutpostId", "op-123"), EpParam("UseFIPS", true), EpParam("AccountId", "0123456789012"), EpParam("Region", "cn-north-1"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 94*/
  {"ListRegionalBuckets + invalid OutpostId.", // documentation
    {EpParam("RequiresAccountId", true), EpParam("OutpostId", "?outpost/invalid+"), EpParam("UseFIPS", false), EpParam("AccountId", "0123456789012"), EpParam("Region", "us-west-1"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"OutpostId must only contain a-z, A-Z, 0-9 and `-`."} // expect
  },
  /*TEST CASE 95*/
  {"bucket ARN with mismatched accountId", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("AccountId", "0123456789012"), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:999999:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: the accountId specified in the ARN (`999999`) does not match the parameter (`0123456789012`)"} // expect
  },
  /*TEST CASE 96*/
  {"OutpostId with invalid region", // documentation
    {EpParam("RequiresAccountId", true), EpParam("OutpostId", "op-123"), EpParam("UseFIPS", false), EpParam("AccountId", "0123456"), EpParam("Region", "invalid-region 42"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region: region was not a valid DNS name."} // expect
  },
  /*TEST CASE 97*/
  {"OutpostId with RequireAccountId unset", // documentation
    {EpParam("OutpostId", "op-123"), EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 98*/
  {"Outpost Accesspoint ARN with arn region and client region mismatch with UseArnRegion=false", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `us-west-2` and UseArnRegion is `false`"} // expect
  },
  /*TEST CASE 99*/
  {"Outpost Bucket ARN with arn region and client region mismatch with UseArnRegion=false", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `us-west-2` and UseArnRegion is `false`"} // expect
  },
  /*TEST CASE 100*/
  {"Accesspoint ARN with region mismatch and UseArnRegion unset", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 101*/
  {"Bucket ARN with region mismatch and UseArnRegion unset", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 102*/
  {"Outpost Bucket ARN with partition mismatch with UseArnRegion=true", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws` but ARN has `aws-cn`"} // expect
  },
  /*TEST CASE 103*/
  {"Accesspoint ARN with partition mismatch and UseArnRegion=true", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("AccountId", "123456789012"), EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws` but ARN has `aws-cn`"} // expect
  },
  /*TEST CASE 104*/
  {"Accesspoint ARN with region mismatch, UseArnRegion=false and custom endpoint", // documentation
    {EpParam("RequiresAccountId", true), EpParam("AccessPointName", "arn:aws:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `cn-north-1` does not match client region `us-west-2` and UseArnRegion is `false`"} // expect
  },
  /*TEST CASE 105*/
  {"outpost bucket arn@us-west-2", // documentation
    {EpParam("RequiresAccountId", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-outposts.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/{"x-amz-account-id", {"123456789012"}}, {"x-amz-outpost-id", {"op-01234567890123456"}}}}, {/*No error*/}} // expect
  },
  /*TEST CASE 106*/
  {"S3 Snow Control with bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://10.0.1.12:433"), EpParam("Bucket", "bucketName"), EpParam("Region", "snow"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://10.0.1.12:433",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 107*/
  {"S3 Snow Control without bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://10.0.1.12:433"), EpParam("Region", "snow"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://10.0.1.12:433",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 108*/
  {"S3 Snow Control with bucket and without port", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://10.0.1.12"), EpParam("Bucket", "bucketName"), EpParam("Region", "snow"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://10.0.1.12",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 109*/
  {"S3 Snow Control with bucket and with DNS", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://s3snow.com"), EpParam("Bucket", "bucketName"), EpParam("Region", "snow"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://s3snow.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 110*/
  {"S3 Snow Control with FIPS enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://10.0.1.12:433"), EpParam("Bucket", "bucketName"), EpParam("Region", "snow"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Snow does not support FIPS"} // expect
  },
  /*TEST CASE 111*/
  {"S3 Snow Control with Dualstack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://10.0.1.12:433"), EpParam("Bucket", "bucketName"), EpParam("Region", "snow"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Snow does not support DualStack"} // expect
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

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const S3ControlEndpointProviderEndpointTestCase::Expect& expect)
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

TEST_P(S3ControlEndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES.size()) << "Something is wrong with the test fixture itself.";
    const S3ControlEndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES.at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);

    std::shared_ptr<S3ControlEndpointProvider> endpointProvider = Aws::MakeShared<S3ControlEndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize S3ControlEndpointProvider";

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
        const Aws::Vector<std::reference_wrapper<const S3ControlEndpointProviderEndpointTestCase::OperationParamsFromTest>>
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
                         S3ControlEndpointProviderTests,
                         ::testing::Range((size_t) 0u, TEST_CASES.size()));
