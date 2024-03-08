/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/s3/S3EndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSS3EndpointProviderTests";
using S3EndpointProvider = Aws::S3::Endpoint::S3EndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::Vector<EpProp>>>;
using ExpEpAuthScheme = Aws::Vector<EpProp>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

class S3EndpointProviderTests : public ::testing::TestWithParam<size_t> {};

struct S3EndpointProviderEndpointTestCase
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

static const Aws::Vector<S3EndpointProviderEndpointTestCase> TEST_CASES = {
  /*TEST CASE 0*/
  {"region is not a valid DNS-suffix", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "a b"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region: region was not a valid DNS name."} // expect
  },
  /*TEST CASE 1*/
  {"Invalid access point ARN: Not S3", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:not-s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The ARN was not for the S3 service, found: not-s3"} // expect
  },
  /*TEST CASE 2*/
  {"Invalid access point ARN: invalid resource", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint:more-data"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The ARN may only contain a single resource component after `accesspoint`."} // expect
  },
  /*TEST CASE 3*/
  {"Invalid access point ARN: invalid no ap name", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Expected a resource of the format `accesspoint:<accesspoint name>` but no name was provided"} // expect
  },
  /*TEST CASE 4*/
  {"Invalid access point ARN: AccountId is invalid", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456_789012:accesspoint:apname"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The account id may only contain a-z, A-Z, 0-9 and `-`. Found: `123456_789012`"} // expect
  },
  /*TEST CASE 5*/
  {"Invalid access point ARN: access point name is invalid", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:ap_name"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The access point name may only contain a-z, A-Z, 0-9 and `-`. Found: `ap_name`"} // expect
  },
  /*TEST CASE 6*/
  {"Access points (disable access points explicitly false)", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("DisableAccessPoints", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 7*/
  {"Access points: partition does not support FIPS", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 8*/
  {"Bucket region is invalid", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west -2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("DisableAccessPoints", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region in ARN: `us-west -2` (invalid DNS name)"} // expect
  },
  /*TEST CASE 9*/
  {"Access points when Access points explicitly disabled (used for CreateBucket)", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("DisableAccessPoints", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Access points are not supported for this operation"} // expect
  },
  /*TEST CASE 10*/
  {"missing arn type", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("DisableAccessPoints", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: `arn:aws:s3:us-west-2:123456789012:` was not a valid ARN"} // expect
  },
  /*TEST CASE 11*/
  {"SDK::Host + access point + Dualstack is an error", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 12*/
  {"Access point ARN with FIPS & Dualstack", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("DisableAccessPoints", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint-fips.dualstack.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 13*/
  {"Access point ARN with Dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("DisableAccessPoints", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.dualstack.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 14*/
  {"vanilla MRAP", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("DisableMultiRegionAccessPoints", false),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mfzwi23gnjvgw.mrap.accesspoint.s3-global.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 15*/
  {"MRAP does not support FIPS", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("DisableMultiRegionAccessPoints", false),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 MRAP does not support FIPS"} // expect
  },
  /*TEST CASE 16*/
  {"MRAP does not support DualStack", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("DisableMultiRegionAccessPoints", false),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 MRAP does not support dual-stack"} // expect
  },
  /*TEST CASE 17*/
  {"MRAP does not support S3 Accelerate", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("DisableMultiRegionAccessPoints", false),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 MRAP does not support S3 Accelerate"} // expect
  },
  /*TEST CASE 18*/
  {"MRAP explicitly disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("DisableMultiRegionAccessPoints", true),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: Multi-Region Access Point ARNs are disabled."} // expect
  },
  /*TEST CASE 19*/
  {"Dual-stack endpoint with path-style forced", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucketname"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-west-2.amazonaws.com/bucketname",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 20*/
  {"Dual-stack endpoint + SDK::Host is error", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://abc.com"), EpParam("Bucket", "bucketname"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 21*/
  {"path style + ARN bucket", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with ARN buckets"} // expect
  },
  /*TEST CASE 22*/
  {"implicit path style bucket + dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "99_ab"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-west-2.amazonaws.com/99_ab",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 23*/
  {"implicit path style bucket + dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://abc.com"), EpParam("Bucket", "99_ab"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 24*/
  {"don't allow URL injections in the bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "example.com#"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/example.com%23",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 25*/
  {"URI encode bucket names in the path", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/bucket%20name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 26*/
  {"scheme is respected", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"), EpParam("Bucket", "99_ab"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/99_ab",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 27*/
  {"scheme is respected (virtual addressing)", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/foo"), EpParam("Bucket", "bucketname"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://bucketname.control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/foo",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 28*/
  {"path style + implicit private link", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"), EpParam("Bucket", "99_ab"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/99_ab",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 29*/
  {"invalid Endpoint override", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "abcde://nota#url"), EpParam("Bucket", "bucketname"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Custom endpoint `abcde://nota#url` was not a valid URI"} // expect
  },
  /*TEST CASE 30*/
  {"using an IPv4 address forces path style", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://123.123.0.1"), EpParam("Bucket", "bucketname"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.123.0.1/bucketname",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 31*/
  {"vanilla access point arn with region mismatch and UseArnRegion=false", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-east-1:123456789012:accesspoint:myendpoint"), EpParam("UseArnRegion", false),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `us-west-2` and UseArnRegion is `false`"} // expect
  },
  /*TEST CASE 32*/
  {"vanilla access point arn with region mismatch and UseArnRegion unset", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 33*/
  {"vanilla access point arn with region mismatch and UseArnRegion=true", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("UseArnRegion", true),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 34*/
  {"subdomains are not allowed in virtual buckets", // documentation
    {EpParam("Bucket", "bucket.name"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-east-1.amazonaws.com/bucket.name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 35*/
  {"bucket names with 3 characters are allowed in virtual buckets", // documentation
    {EpParam("Bucket", "aaa"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://aaa.s3.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 36*/
  {"bucket names with fewer than 3 characters are not allowed in virtual host", // documentation
    {EpParam("Bucket", "aa"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-east-1.amazonaws.com/aa",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 37*/
  {"bucket names with uppercase characters are not allowed in virtual host", // documentation
    {EpParam("Bucket", "BucketName"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-east-1.amazonaws.com/BucketName",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 38*/
  {"subdomains are allowed in virtual buckets on http endpoints", // documentation
    {EpParam("Endpoint", "http://example.com"), EpParam("Bucket", "bucket.name"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"http://bucket.name.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 39*/
  {"no region set", // documentation
    {EpParam("Bucket", "bucket-name")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A region must be set when sending requests to S3."} // expect
  },
  /*TEST CASE 40*/
  {"UseGlobalEndpoints=true, region=us-east-1 uses the global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 41*/
  {"UseGlobalEndpoints=true, region=us-west-2 uses the regional endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 42*/
  {"UseGlobalEndpoints=true, region=cn-north-1 uses the regional endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 43*/
  {"UseGlobalEndpoints=true, region=us-east-1, fips=true uses the regional endpoint with fips", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 44*/
  {"UseGlobalEndpoints=true, region=us-east-1, dualstack=true uses the regional endpoint with dualstack", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 45*/
  {"UseGlobalEndpoints=true, region=us-east-1, dualstack and fips uses the regional endpoint with fips/dualstack", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 46*/
  {"UseGlobalEndpoints=true, region=us-east-1 with custom endpoint, uses custom", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 47*/
  {"UseGlobalEndpoints=true, region=us-west-2 with custom endpoint, uses custom", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 48*/
  {"UseGlobalEndpoints=true, region=us-east-1 with accelerate on non bucket case uses the global endpoint and ignores accelerate", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 49*/
  {"aws-global region uses the global endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 50*/
  {"aws-global region with fips uses the regional endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 51*/
  {"aws-global region with dualstack uses the regional endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 52*/
  {"aws-global region with fips and dualstack uses the regional endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 53*/
  {"aws-global region with accelerate on non-bucket case, uses global endpoint and ignores accelerate", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "aws-global"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 54*/
  {"aws-global region with custom endpoint, uses custom", // documentation
    {EpParam("UseGlobalEndpoint", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 55*/
  {"virtual addressing, aws-global region uses the global endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 56*/
  {"virtual addressing, aws-global region with Prefix, and Key uses the global endpoint. Prefix and Key parameters should not be used in endpoint evaluation.", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("Prefix", "prefix"),
     EpParam("UseDualStack", false), EpParam("Key", "key")}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 57*/
  {"virtual addressing, aws-global region with fips uses the regional fips endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 58*/
  {"virtual addressing, aws-global region with dualstack uses the regional dualstack endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 59*/
  {"virtual addressing, aws-global region with fips/dualstack uses the regional fips/dualstack endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 60*/
  {"virtual addressing, aws-global region with accelerate uses the global accelerate endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 61*/
  {"virtual addressing, aws-global region with custom endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 62*/
  {"virtual addressing, UseGlobalEndpoint and us-east-1 region uses the global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 63*/
  {"virtual addressing, UseGlobalEndpoint and us-west-2 region uses the regional endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 64*/
  {"virtual addressing, UseGlobalEndpoint and us-east-1 region and fips uses the regional fips endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 65*/
  {"virtual addressing, UseGlobalEndpoint and us-east-1 region and dualstack uses the regional dualstack endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 66*/
  {"virtual addressing, UseGlobalEndpoint and us-east-1 region and accelerate uses the global accelerate endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 67*/
  {"virtual addressing, UseGlobalEndpoint and us-east-1 region with custom endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 68*/
  {"ForcePathStyle, aws-global region uses the global endpoint", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 69*/
  {"ForcePathStyle, aws-global region with fips is invalid", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-east-1.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 70*/
  {"ForcePathStyle, aws-global region with dualstack uses regional dualstack endpoint", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-east-1.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 71*/
  {"ForcePathStyle, aws-global region custom endpoint uses the custom endpoint", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Bucket", "bucket-name"), EpParam("Region", "aws-global"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 72*/
  {"ForcePathStyle, UseGlobalEndpoint us-east-1 region uses the global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 73*/
  {"ForcePathStyle, UseGlobalEndpoint us-west-2 region uses the regional endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 74*/
  {"ForcePathStyle, UseGlobalEndpoint us-east-1 region, dualstack uses the regional dualstack endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-east-1.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 75*/
  {"ForcePathStyle, UseGlobalEndpoint us-east-1 region custom endpoint uses the custom endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 76*/
  {"ARN with aws-global region and  UseArnRegion uses the regional endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost/op-01234567890123456/accesspoint/reports"), EpParam("UseArnRegion", true),
     EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://reports-123456789012.op-01234567890123456.s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 77*/
  {"cross partition MRAP ARN is an error", // documentation
    {EpParam("Bucket", "arn:aws-cn:s3::123456789012:accesspoint:mfzwi23gnjvgw.mrap"), EpParam("Region", "us-west-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws` but bucket referred to partition `aws-cn`"} // expect
  },
  /*TEST CASE 78*/
  {"Endpoint override, accesspoint with HTTP, port", // documentation
    {EpParam("Endpoint", "http://beta.example.com:1234"), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-west-2")}, // params
    {}, // tags
    {{/*epUrl*/"http://myendpoint-123456789012.beta.example.com:1234",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 79*/
  {"Endpoint override, accesspoint with http, path, query, and port", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://beta.example.com:1234/path"), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://myendpoint-123456789012.beta.example.com:1234/path",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 80*/
  {"non-bucket endpoint override with FIPS = error", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "http://beta.example.com:1234/path"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 81*/
  {"FIPS + dualstack + custom endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "http://beta.example.com:1234/path"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 82*/
  {"dualstack + custom endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://beta.example.com:1234/path"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 83*/
  {"custom endpoint without FIPS/dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://beta.example.com:1234/path"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://beta.example.com:1234/path",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 84*/
  {"s3 object lambda with access points disabled", // documentation
    {EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-west-2"), EpParam("DisableAccessPoints", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Access points are not supported for this operation"} // expect
  },
  /*TEST CASE 85*/
  {"non bucket + FIPS", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 86*/
  {"standard non bucket endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 87*/
  {"non bucket endpoint with FIPS + Dualstack", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 88*/
  {"non bucket endpoint with dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 89*/
  {"use global endpoint + IP address endpoint override", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Endpoint", "http://127.0.0.1"), EpParam("Bucket", "bucket"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://127.0.0.1/bucket",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 90*/
  {"non-dns endpoint + global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 91*/
  {"endpoint override + use global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://foo.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 92*/
  {"FIPS + dualstack + non-bucket endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 93*/
  {"FIPS + dualstack + non-DNS endpoint", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 94*/
  {"endpoint override + FIPS + dualstack (BUG)", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 95*/
  {"endpoint override + non-dns bucket + FIPS (BUG)", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 96*/
  {"FIPS + bucket endpoint + force path style", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 97*/
  {"bucket + FIPS + force path style", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-east-1.amazonaws.com/bucket",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 98*/
  {"FIPS + dualstack + use global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket.s3-fips.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 99*/
  {"URI encoded bucket + use global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Endpoint", "https://foo.com"), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 100*/
  {"FIPS + path based endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 101*/
  {"accelerate + dualstack + global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket"), EpParam("Region", "us-east-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket.s3-accelerate.dualstack.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 102*/
  {"dualstack + global endpoint + non URI safe bucket", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 103*/
  {"FIPS + uri encoded bucket", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 104*/
  {"endpoint override + non-uri safe endpoint + force path style", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket!"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 105*/
  {"FIPS + Dualstack + global endpoint + non-dns bucket", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 106*/
  {"endpoint override + FIPS + dualstack", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Endpoint", "http://foo.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 107*/
  {"non-bucket endpoint override + dualstack + global endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Endpoint", "http://foo.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 108*/
  {"Endpoint override + UseGlobalEndpoint + us-east-1", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Endpoint", "http://foo.com"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 109*/
  {"non-FIPS partition with FIPS set + custom endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 110*/
  {"aws-global signs as us-east-1", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "bucket!"), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 111*/
  {"aws-global signs as us-east-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://foo.com"), EpParam("Bucket", "bucket"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket.foo.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 112*/
  {"aws-global + dualstack + path-only bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket!"), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 113*/
  {"aws-global + path-only bucket", // documentation
    {EpParam("Bucket", "bucket!"), EpParam("Region", "aws-global")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 114*/
  {"aws-global + fips + custom endpoint", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket!"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 115*/
  {"aws-global, endpoint override & path only-bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket!"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://foo.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 116*/
  {"aws-global + dualstack + custom endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://foo.com"), EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 117*/
  {"accelerate, dualstack + aws-global", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "bucket"), EpParam("Region", "aws-global"), EpParam("Accelerate", true), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket.s3-accelerate.dualstack.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 118*/
  {"FIPS + aws-global + path only bucket. This is not supported by S3 but we allow garbage in garbage out", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket!"), EpParam("Region", "aws-global"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.dualstack.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 119*/
  {"aws-global + FIPS + endpoint override.", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "http://foo.com"), EpParam("Region", "aws-global")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 120*/
  {"force path style, FIPS, aws-global & endpoint override", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket!"), EpParam("Region", "aws-global")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 121*/
  {"ip address causes path style to be forced", // documentation
    {EpParam("Endpoint", "http://192.168.1.1"), EpParam("Bucket", "bucket"), EpParam("Region", "aws-global")}, // params
    {}, // tags
    {{/*epUrl*/"http://192.168.1.1/bucket",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 122*/
  {"endpoint override with aws-global region", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "http://foo.com"), EpParam("Region", "aws-global"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 123*/
  {"FIPS + path-only (TODO: consider making this an error)", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "bucket!"), EpParam("Region", "aws-global")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-east-1.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 124*/
  {"empty arn type", // documentation
    {EpParam("Bucket", "arn:aws:not-s3:us-west-2:123456789012::myendpoint"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: No ARN type specified"} // expect
  },
  /*TEST CASE 125*/
  {"path style can't be used with accelerate", // documentation
    {EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-2"), EpParam("Accelerate", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with S3 Accelerate"} // expect
  },
  /*TEST CASE 126*/
  {"invalid region", // documentation
    {EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket.subdomain"), EpParam("Region", "us-east-2!")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region: region was not a valid DNS name."} // expect
  },
  /*TEST CASE 127*/
  {"invalid region", // documentation
    {EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket"), EpParam("Region", "us-east-2!")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region: region was not a valid DNS name."} // expect
  },
  /*TEST CASE 128*/
  {"empty arn type", // documentation
    {EpParam("Bucket", "arn:aws:s3::123456789012:accesspoint:my_endpoint"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Access Point Name"} // expect
  },
  /*TEST CASE 129*/
  {"empty arn type", // documentation
    {EpParam("Bucket", "arn:aws:s3:cn-north-1:123456789012:accesspoint:my-endpoint"), EpParam("UseArnRegion", true), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws` but ARN (`arn:aws:s3:cn-north-1:123456789012:accesspoint:my-endpoint`) has `aws-cn`"} // expect
  },
  /*TEST CASE 130*/
  {"invalid arn region", // documentation
    {EpParam("Bucket", "arn:aws:s3-object-lambda:us-east_2:123456789012:accesspoint:my-endpoint"), EpParam("UseArnRegion", true), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region in ARN: `us-east_2` (invalid DNS name)"} // expect
  },
  /*TEST CASE 131*/
  {"invalid ARN outpost", // documentation
    {EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost/op_01234567890123456/accesspoint/reports"), EpParam("UseArnRegion", true), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The outpost Id may only contain a-z, A-Z, 0-9 and `-`. Found: `op_01234567890123456`"} // expect
  },
  /*TEST CASE 132*/
  {"invalid ARN", // documentation
    {EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost/op-01234567890123456/reports"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: expected an access point name"} // expect
  },
  /*TEST CASE 133*/
  {"invalid ARN", // documentation
    {EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost/op-01234567890123456"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Expected a 4-component resource"} // expect
  },
  /*TEST CASE 134*/
  {"invalid outpost type", // documentation
    {EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost/op-01234567890123456/not-accesspoint/reports"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Expected an outpost type `accesspoint`, found not-accesspoint"} // expect
  },
  /*TEST CASE 135*/
  {"invalid outpost type", // documentation
    {EpParam("Bucket", "arn:aws:s3-outposts:us-east_1:123456789012:outpost/op-01234567890123456/not-accesspoint/reports"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region in ARN: `us-east_1` (invalid DNS name)"} // expect
  },
  /*TEST CASE 136*/
  {"invalid outpost type", // documentation
    {EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:12345_789012:outpost/op-01234567890123456/not-accesspoint/reports"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The account id may only contain a-z, A-Z, 0-9 and `-`. Found: `12345_789012`"} // expect
  },
  /*TEST CASE 137*/
  {"invalid outpost type", // documentation
    {EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:12345789012:outpost"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The Outpost Id was not set"} // expect
  },
  /*TEST CASE 138*/
  {"use global endpoint virtual addressing", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("Endpoint", "http://example.com"), EpParam("Bucket", "bucket"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*epUrl*/"http://bucket.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 139*/
  {"global endpoint + ip address", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("Endpoint", "http://192.168.0.1"), EpParam("Bucket", "bucket"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*epUrl*/"http://192.168.0.1/bucket",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 140*/
  {"invalid outpost type", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-east-2.amazonaws.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 141*/
  {"invalid outpost type", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("Bucket", "bucket"), EpParam("Region", "us-east-2"), EpParam("Accelerate", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket.s3-accelerate.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 142*/
  {"use global endpoint + custom endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*epUrl*/"http://foo.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 143*/
  {"use global endpoint, not us-east-1, force path style", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("ForcePathStyle", true), EpParam("Endpoint", "http://foo.com"), EpParam("Bucket", "bucket!"), EpParam("Region", "us-east-2")}, // params
    {}, // tags
    {{/*epUrl*/"http://foo.com/bucket%21",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 144*/
  {"vanilla virtual addressing@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 145*/
  {"virtual addressing + dualstack@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.dualstack.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 146*/
  {"accelerate + dualstack@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", true),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.dualstack.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 147*/
  {"accelerate (dualstack=false)@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 148*/
  {"virtual addressing + fips@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 149*/
  {"virtual addressing + dualstack + fips@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.dualstack.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 150*/
  {"accelerate + fips = error@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Accelerate cannot be used with FIPS"} // expect
  },
  /*TEST CASE 151*/
  {"vanilla virtual addressing@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 152*/
  {"virtual addressing + dualstack@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.dualstack.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 153*/
  {"accelerate (dualstack=false)@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Accelerate cannot be used in this region"} // expect
  },
  /*TEST CASE 154*/
  {"virtual addressing + fips@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 155*/
  {"vanilla virtual addressing@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 156*/
  {"virtual addressing + dualstack@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3.dualstack.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 157*/
  {"accelerate + dualstack@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.dualstack.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 158*/
  {"accelerate (dualstack=false)@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-accelerate.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 159*/
  {"virtual addressing + fips@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 160*/
  {"virtual addressing + dualstack + fips@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.s3-fips.dualstack.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 161*/
  {"accelerate + fips = error@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Accelerate cannot be used with FIPS"} // expect
  },
  /*TEST CASE 162*/
  {"vanilla path style@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 163*/
  {"fips@us-gov-west-2, bucket is not S3-dns-compatible (subdomains)", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "bucket.with.dots"), EpParam("Region", "us-gov-west-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.us-gov-west-1.amazonaws.com/bucket.with.dots",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 164*/
  {"path style + accelerate = error@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with S3 Accelerate"} // expect
  },
  /*TEST CASE 165*/
  {"path style + dualstack@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.us-west-2.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 166*/
  {"path style + arn is error@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:PARTITION:s3-outposts:REGION:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with ARN buckets"} // expect
  },
  /*TEST CASE 167*/
  {"path style + invalid DNS name@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "99a_b"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/99a_b",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 168*/
  {"no path style + invalid DNS name@us-west-2", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "99a_b"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.us-west-2.amazonaws.com/99a_b",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 169*/
  {"vanilla path style@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.cn-north-1.amazonaws.com.cn/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 170*/
  {"path style + fips@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 171*/
  {"path style + accelerate = error@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with S3 Accelerate"} // expect
  },
  /*TEST CASE 172*/
  {"path style + dualstack@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.cn-north-1.amazonaws.com.cn/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 173*/
  {"path style + arn is error@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:PARTITION:s3-outposts:REGION:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with ARN buckets"} // expect
  },
  /*TEST CASE 174*/
  {"path style + invalid DNS name@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "99a_b"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.cn-north-1.amazonaws.com.cn/99a_b",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 175*/
  {"no path style + invalid DNS name@cn-north-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "99a_b"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.cn-north-1.amazonaws.com.cn/99a_b",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 176*/
  {"vanilla path style@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.af-south-1.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 177*/
  {"path style + fips@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-fips.af-south-1.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 178*/
  {"path style + accelerate = error@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", true),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with S3 Accelerate"} // expect
  },
  /*TEST CASE 179*/
  {"path style + dualstack@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.dualstack.af-south-1.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 180*/
  {"path style + arn is error@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:PARTITION:s3-outposts:REGION:123456789012:outpost:op-01234567890123456:bucket:mybucket"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Path-style addressing cannot be used with ARN buckets"} // expect
  },
  /*TEST CASE 181*/
  {"path style + invalid DNS name@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Bucket", "99a_b"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.af-south-1.amazonaws.com/99a_b",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 182*/
  {"no path style + invalid DNS name@af-south-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "99a_b"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3.af-south-1.amazonaws.com/99a_b",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 183*/
  {"virtual addressing + private link@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "http://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://bucket-name.control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 184*/
  {"path style + private link@us-west-2", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 185*/
  {"SDK::Host + FIPS@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 186*/
  {"SDK::Host + DualStack@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 187*/
  {"SDK::HOST + accelerate@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "http://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with S3 Accelerate"} // expect
  },
  /*TEST CASE 188*/
  {"SDK::Host + access point ARN@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 189*/
  {"virtual addressing + private link@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 190*/
  {"path style + private link@cn-north-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 191*/
  {"FIPS@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 192*/
  {"SDK::Host + DualStack@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 193*/
  {"SDK::HOST + accelerate@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "cn-north-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with S3 Accelerate"} // expect
  },
  /*TEST CASE 194*/
  {"SDK::Host + access point ARN@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 195*/
  {"virtual addressing + private link@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://bucket-name.control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 196*/
  {"path style + private link@af-south-1", // documentation
    {EpParam("ForcePathStyle", true), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com/bucket-name",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 197*/
  {"SDK::Host + FIPS@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"), EpParam("Bucket", "bucket-name"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with FIPS"} // expect
  },
  /*TEST CASE 198*/
  {"SDK::Host + DualStack@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Cannot set dual-stack in combination with a custom endpoint."} // expect
  },
  /*TEST CASE 199*/
  {"SDK::HOST + accelerate@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://control.vpce-1a2b3c4d-5e6f.s3.us-west-2.vpce.amazonaws.com"),
     EpParam("Bucket", "bucket-name"), EpParam("Region", "af-south-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"A custom endpoint cannot be combined with S3 Accelerate"} // expect
  },
  /*TEST CASE 200*/
  {"SDK::Host + access point ARN@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://beta.example.com"), EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"),
     EpParam("Region", "af-south-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.beta.example.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 201*/
  {"vanilla access point arn@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 202*/
  {"access point arn + FIPS@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint-fips.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 203*/
  {"access point arn + accelerate = error@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Access Points do not support S3 Accelerate"} // expect
  },
  /*TEST CASE 204*/
  {"access point arn + FIPS + DualStack@us-west-2", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3:us-west-2:123456789012:accesspoint:myendpoint"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint-fips.dualstack.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 205*/
  {"vanilla access point arn@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "cn-north-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.cn-north-1.amazonaws.com.cn",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 206*/
  {"access point arn + FIPS@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "cn-north-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 207*/
  {"access point arn + accelerate = error@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "cn-north-1"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Access Points do not support S3 Accelerate"} // expect
  },
  /*TEST CASE 208*/
  {"access point arn + FIPS + DualStack@cn-north-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-cn:s3:cn-north-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "cn-north-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 209*/
  {"vanilla access point arn@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 210*/
  {"access point arn + FIPS@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint-fips.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 211*/
  {"access point arn + accelerate = error@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Access Points do not support S3 Accelerate"} // expect
  },
  /*TEST CASE 212*/
  {"access point arn + FIPS + DualStack@af-south-1", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3:af-south-1:123456789012:accesspoint:myendpoint"), EpParam("Region", "af-south-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://myendpoint-123456789012.s3-accesspoint-fips.dualstack.af-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 213*/
  {"S3 outposts vanilla test", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://reports-123456789012.op-01234567890123456.s3-outposts.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 214*/
  {"S3 outposts custom endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.amazonaws.com"), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://reports-123456789012.op-01234567890123456.example.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 215*/
  {"outposts arn with region mismatch and UseArnRegion=false", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `us-west-2` and UseArnRegion is `false`"} // expect
  },
  /*TEST CASE 216*/
  {"outposts arn with region mismatch, custom region and UseArnRegion=false", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `us-west-2` and UseArnRegion is `false`"} // expect
  },
  /*TEST CASE 217*/
  {"outposts arn with region mismatch and UseArnRegion=true", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myaccesspoint-123456789012.op-01234567890123456.s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 218*/
  {"outposts arn with region mismatch and UseArnRegion unset", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://myaccesspoint-123456789012.op-01234567890123456.s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 219*/
  {"outposts arn with partition mismatch and UseArnRegion=true", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint"),
     EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws` but ARN (`arn:aws:s3-outposts:cn-north-1:123456789012:outpost:op-01234567890123456:accesspoint:myaccesspoint`) has `aws-cn`"} // expect
  },
  /*TEST CASE 220*/
  {"ARN with UseGlobalEndpoint and use-east-1 region uses the regional endpoint", // documentation
    {EpParam("UseGlobalEndpoint", true), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-east-1:123456789012:outpost/op-01234567890123456/accesspoint/reports"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://reports-123456789012.op-01234567890123456.s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 221*/
  {"S3 outposts does not support dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Outposts does not support Dual-stack"} // expect
  },
  /*TEST CASE 222*/
  {"S3 outposts does not support fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Outposts does not support FIPS"} // expect
  },
  /*TEST CASE 223*/
  {"S3 outposts does not support accelerate", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost/op-01234567890123456/accesspoint/reports"), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Outposts does not support S3 Accelerate"} // expect
  },
  /*TEST CASE 224*/
  {"validates against subresource", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-outposts:us-west-2:123456789012:outpost:op-01234567890123456:accesspoint:mybucket:object:foo"),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Arn: Outpost Access Point ARN contains sub resources"} // expect
  },
  /*TEST CASE 225*/
  {"object lambda @us-east-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", false), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 226*/
  {"object lambda @us-west-2", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 227*/
  {"object lambda, colon resource deliminator @us-west-2", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint:mybanner"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 228*/
  {"object lambda @us-east-1, client region us-west-2, useArnRegion=true", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 229*/
  {"object lambda @us-east-1, client region s3-external-1, useArnRegion=true", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", true), EpParam("Region", "s3-external-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 230*/
  {"object lambda @us-east-1, client region s3-external-1, useArnRegion=false", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", false), EpParam("Region", "s3-external-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `s3-external-1` and UseArnRegion is `false`"} // expect
  },
  /*TEST CASE 231*/
  {"object lambda @us-east-1, client region aws-global, useArnRegion=true", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", true), EpParam("Region", "aws-global"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 232*/
  {"object lambda @us-east-1, client region aws-global, useArnRegion=false", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", false), EpParam("Region", "aws-global"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `aws-global` and UseArnRegion is `false`"} // expect
  },
  /*TEST CASE 233*/
  {"object lambda @cn-north-1, client region us-west-2 (cross partition), useArnRegion=true", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws-cn:s3-object-lambda:cn-north-1:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", true),
     EpParam("Region", "aws-global"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Client was configured for partition `aws` but ARN (`arn:aws-cn:s3-object-lambda:cn-north-1:123456789012:accesspoint/mybanner`) has `aws-cn`"} // expect
  },
  /*TEST CASE 234*/
  {"object lambda with dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Object Lambda does not support Dual-stack"} // expect
  },
  /*TEST CASE 235*/
  {"object lambda @us-gov-east-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws-us-gov:s3-object-lambda:us-gov-east-1:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", false),
     EpParam("Region", "us-gov-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 236*/
  {"object lambda @us-gov-east-1, with fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-us-gov:s3-object-lambda:us-gov-east-1:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", false),
     EpParam("Region", "us-gov-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.s3-object-lambda-fips.us-gov-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 237*/
  {"object lambda @cn-north-1, with fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "arn:aws-cn:s3-object-lambda:cn-north-1:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", false),
     EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 238*/
  {"object lambda with accelerate", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Object Lambda does not support S3 Accelerate"} // expect
  },
  /*TEST CASE 239*/
  {"object lambda with invalid arn - bad service and someresource", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:sqs:us-west-2:123456789012:someresource"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Unrecognized format: arn:aws:sqs:us-west-2:123456789012:someresource (type: someresource)"} // expect
  },
  /*TEST CASE 240*/
  {"object lambda with invalid arn - invalid resource", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:bucket_name:mybucket"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Object Lambda ARNs only support `accesspoint` arn types, but found: `bucket_name`"} // expect
  },
  /*TEST CASE 241*/
  {"object lambda with invalid arn - missing region", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda::123456789012:accesspoint/mybanner"), EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: bucket ARN is missing a region"} // expect
  },
  /*TEST CASE 242*/
  {"object lambda with invalid arn - missing account-id", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2::accesspoint/mybanner"), EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Missing account id"} // expect
  },
  /*TEST CASE 243*/
  {"object lambda with invalid arn - account id contains invalid characters", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123.45678.9012:accesspoint:mybucket"), EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The account id may only contain a-z, A-Z, 0-9 and `-`. Found: `123.45678.9012`"} // expect
  },
  /*TEST CASE 244*/
  {"object lambda with invalid arn - missing access point name", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint"), EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Expected a resource of the format `accesspoint:<accesspoint name>` but no name was provided"} // expect
  },
  /*TEST CASE 245*/
  {"object lambda with invalid arn - access point name contains invalid character: *", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint:*"), EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The access point name may only contain a-z, A-Z, 0-9 and `-`. Found: `*`"} // expect
  },
  /*TEST CASE 246*/
  {"object lambda with invalid arn - access point name contains invalid character: .", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint:my.bucket"), EpParam("UseArnRegion", true), EpParam("Region", "us-west-2"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The access point name may only contain a-z, A-Z, 0-9 and `-`. Found: `my.bucket`"} // expect
  },
  /*TEST CASE 247*/
  {"object lambda with invalid arn - access point name contains sub resources", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint:mybucket:object:foo"), EpParam("UseArnRegion", true),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The ARN may only contain a single resource component after `accesspoint`."} // expect
  },
  /*TEST CASE 248*/
  {"object lambda with custom endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://my-endpoint.com"), EpParam("Bucket", "arn:aws:s3-object-lambda:us-west-2:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybanner-123456789012.my-endpoint.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 249*/
  {"object lambda arn with region mismatch and UseArnRegion=false", // documentation
    {EpParam("ForcePathStyle", false), EpParam("UseFIPS", false), EpParam("Bucket", "arn:aws:s3-object-lambda:us-east-1:123456789012:accesspoint/mybanner"),
     EpParam("UseArnRegion", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid configuration: region from ARN `us-east-1` does not match client region `us-west-2` and UseArnRegion is `false`"} // expect
  },
  /*TEST CASE 250*/
  {"WriteGetObjectResponse @ us-west-2", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-object-lambda.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 251*/
  {"WriteGetObjectResponse with custom endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://my-endpoint.com"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://my-endpoint.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 252*/
  {"WriteGetObjectResponse @ us-east-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-object-lambda.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 253*/
  {"WriteGetObjectResponse with fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-object-lambda-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 254*/
  {"WriteGetObjectResponse with dualstack", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", true), EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Object Lambda does not support Dual-stack"} // expect
  },
  /*TEST CASE 255*/
  {"WriteGetObjectResponse with accelerate", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", true), EpParam("UseDualStack", false), EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3 Object Lambda does not support S3 Accelerate"} // expect
  },
  /*TEST CASE 256*/
  {"WriteGetObjectResponse with fips in CN", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition does not support FIPS"} // expect
  },
  /*TEST CASE 257*/
  {"WriteGetObjectResponse with invalid partition", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "not a valid DNS name"), EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid region: region was not a valid DNS name."} // expect
  },
  /*TEST CASE 258*/
  {"WriteGetObjectResponse with an unknown partition", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east.special"), EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("UseObjectLambdaEndpoint", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3-object-lambda.us-east.special.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 259*/
  {"S3 Outposts bucketAlias Real Outpost Prod us-west-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "test-accessp-o0b1d075431d83bebde8xz5w8ijx1qzlbp3i3kuse10--op-s3"), EpParam("Region", "us-west-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://test-accessp-o0b1d075431d83bebde8xz5w8ijx1qzlbp3i3kuse10--op-s3.op-0b1d075431d83bebd.s3-outposts.us-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 260*/
  {"S3 Outposts bucketAlias Real Outpost Prod ap-east-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "test-accessp-o0b1d075431d83bebde8xz5w8ijx1qzlbp3i3kuse10--op-s3"), EpParam("Region", "ap-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://test-accessp-o0b1d075431d83bebde8xz5w8ijx1qzlbp3i3kuse10--op-s3.op-0b1d075431d83bebd.s3-outposts.ap-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 261*/
  {"S3 Outposts bucketAlias Ec2 Outpost Prod us-east-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "test-accessp-e0000075431d83bebde8xz5w8ijx1qzlbp3i3kuse10--op-s3"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://test-accessp-e0000075431d83bebde8xz5w8ijx1qzlbp3i3kuse10--op-s3.ec2.s3-outposts.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 262*/
  {"S3 Outposts bucketAlias Ec2 Outpost Prod me-south-1", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "test-accessp-e0000075431d83bebde8xz5w8ijx1qzlbp3i3kuse10--op-s3"), EpParam("Region", "me-south-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://test-accessp-e0000075431d83bebde8xz5w8ijx1qzlbp3i3kuse10--op-s3.ec2.s3-outposts.me-south-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 263*/
  {"S3 Outposts bucketAlias Real Outpost Beta", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.amazonaws.com"), EpParam("Bucket", "test-accessp-o0b1d075431d83bebde8xz5w8ijx1qzlbp3i3kbeta0--op-s3"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://test-accessp-o0b1d075431d83bebde8xz5w8ijx1qzlbp3i3kbeta0--op-s3.op-0b1d075431d83bebd.example.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 264*/
  {"S3 Outposts bucketAlias Ec2 Outpost Beta", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.amazonaws.com"), EpParam("Bucket", "161743052723-e00000136899934034jeahy1t8gpzpbwjj8kb7beta0--op-s3"),
     EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://161743052723-e00000136899934034jeahy1t8gpzpbwjj8kb7beta0--op-s3.ec2.example.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 265*/
  {"S3 Outposts bucketAlias - No endpoint set for beta", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "test-accessp-o0b1d075431d83bebde8xz5w8ijx1qzlbp3i3kbeta0--op-s3"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Expected a endpoint to be specified but no endpoint was found"} // expect
  },
  /*TEST CASE 266*/
  {"S3 Outposts bucketAlias Invalid hardware type", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "test-accessp-h0000075431d83bebde8xz5w8ijx1qzlbp3i3kuse10--op-s3"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/R"(Unrecognized hardware type: "Expected hardware type o or e but got h")"} // expect
  },
  /*TEST CASE 267*/
  {"S3 Outposts bucketAlias Special character in Outpost Arn", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "test-accessp-o00000754%1d83bebde8xz5w8ijx1qzlbp3i3kuse10--op-s3"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The outpost Id must only contain a-z, A-Z, 0-9 and `-`."} // expect
  },
  /*TEST CASE 268*/
  {"S3 Outposts bucketAlias - No endpoint set for beta", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "test-accessp-e0b1d075431d83bebde8xz5w8ijx1qzlbp3i3ebeta0--op-s3"), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Expected a endpoint to be specified but no endpoint was found"} // expect
  },
  /*TEST CASE 269*/
  {"S3 Snow with bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://10.0.1.12:433"), EpParam("Bucket", "bucketName"), EpParam("Region", "snow"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://10.0.1.12:433/bucketName",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 270*/
  {"S3 Snow without bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://10.0.1.12:433"), EpParam("Region", "snow"), EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://10.0.1.12:433",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 271*/
  {"S3 Snow no port", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "http://10.0.1.12"), EpParam("Bucket", "bucketName"), EpParam("Region", "snow"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"http://10.0.1.12/bucketName",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 272*/
  {"S3 Snow dns endpoint", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://amazonaws.com"), EpParam("Bucket", "bucketName"), EpParam("Region", "snow"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://amazonaws.com/bucketName",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 273*/
  {"Data Plane with short AZ", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "mybucket--use1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybucket--use1-az1--x-s3.s3express-use1-az1.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 274*/
  {"Data Plane with short AZ fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "mybucket--use1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybucket--use1-az1--x-s3.s3express-fips-use1-az1.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 275*/
  {"Data Plane with long AZ", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "mybucket--apne1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "ap-northeast-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybucket--apne1-az1--x-s3.s3express-apne1-az1.ap-northeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 276*/
  {"Data Plane with long AZ fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "mybucket--apne1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "ap-northeast-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybucket--apne1-az1--x-s3.s3express-fips-apne1-az1.ap-northeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 277*/
  {"Control plane with short AZ bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "mybucket--use1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", true), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("DisableS3ExpressSessionAuth", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3express-control.us-east-1.amazonaws.com/mybucket--use1-az1--x-s3",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 278*/
  {"Control plane with short AZ bucket and fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "mybucket--use1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", true), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false), EpParam("DisableS3ExpressSessionAuth", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3express-control-fips.us-east-1.amazonaws.com/mybucket--use1-az1--x-s3",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 279*/
  {"Control plane without bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("UseS3ExpressControlEndpoint", true), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("DisableS3ExpressSessionAuth", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3express-control.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 280*/
  {"Control plane without bucket and fips", // documentation
    {EpParam("UseFIPS", true), EpParam("UseS3ExpressControlEndpoint", true), EpParam("Region", "us-east-1"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("DisableS3ExpressSessionAuth", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://s3express-control-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 281*/
  {"Data Plane sigv4 auth with short AZ", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "mybucket--usw2-az1--x-s3"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("DisableS3ExpressSessionAuth", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybucket--usw2-az1--x-s3.s3express-usw2-az1.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 282*/
  {"Data Plane sigv4 auth with short AZ fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "mybucket--usw2-az1--x-s3"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false),
     EpParam("DisableS3ExpressSessionAuth", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybucket--usw2-az1--x-s3.s3express-fips-usw2-az1.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 283*/
  {"Data Plane sigv4 auth with long AZ", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "mybucket--apne1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "ap-northeast-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("DisableS3ExpressSessionAuth", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybucket--apne1-az1--x-s3.s3express-apne1-az1.ap-northeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 284*/
  {"Data Plane sigv4 auth with long AZ fips", // documentation
    {EpParam("UseFIPS", true), EpParam("Bucket", "mybucket--apne1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "ap-northeast-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("DisableS3ExpressSessionAuth", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybucket--apne1-az1--x-s3.s3express-fips-apne1-az1.ap-northeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 285*/
  {"Control Plane host override", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://custom.com"), EpParam("Bucket", "mybucket--usw2-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", true),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("DisableS3ExpressSessionAuth", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybucket--usw2-az1--x-s3.custom.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 286*/
  {"Control Plane host override no bucket", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://custom.com"), EpParam("UseS3ExpressControlEndpoint", true), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false), EpParam("DisableS3ExpressSessionAuth", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://custom.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 287*/
  {"Data plane host override non virtual session auth", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://10.0.0.1"), EpParam("Bucket", "mybucket--usw2-az1--x-s3"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://10.0.0.1/mybucket--usw2-az1--x-s3",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 288*/
  {"Control Plane host override ip", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://10.0.0.1"), EpParam("Bucket", "mybucket--usw2-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", true),
     EpParam("Region", "us-west-2"), EpParam("Accelerate", false), EpParam("UseDualStack", false), EpParam("DisableS3ExpressSessionAuth", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://10.0.0.1/mybucket--usw2-az1--x-s3",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 289*/
  {"Data plane host override", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://custom.com"), EpParam("Bucket", "mybucket--usw2-az1--x-s3"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://mybucket--usw2-az1--x-s3.custom.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 290*/
  {"bad format error", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "mybucket--usaz1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Unrecognized S3Express bucket name format."} // expect
  },
  /*TEST CASE 291*/
  {"bad format error no session auth", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "mybucket--usaz1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "us-east-1"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false), EpParam("DisableS3ExpressSessionAuth", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Unrecognized S3Express bucket name format."} // expect
  },
  /*TEST CASE 292*/
  {"dual-stack error", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "mybucket--use1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3Express does not support Dual-stack."} // expect
  },
  /*TEST CASE 293*/
  {"accelerate error", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "mybucket--use1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", true), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3Express does not support S3 Accelerate."} // expect
  },
  /*TEST CASE 294*/
  {"Data plane bucket format error", // documentation
    {EpParam("UseFIPS", false), EpParam("Bucket", "my.bucket--use1-az1--x-s3"), EpParam("UseS3ExpressControlEndpoint", false), EpParam("Region", "us-east-1"),
     EpParam("Accelerate", false), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3Express bucket name is not a valid virtual hostable name."} // expect
  },
  /*TEST CASE 295*/
  {"host override data plane bucket error session auth", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://custom.com"), EpParam("Bucket", "my.bucket--usw2-az1--x-s3"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3Express bucket name is not a valid virtual hostable name."} // expect
  },
  /*TEST CASE 296*/
  {"host override data plane bucket error", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://custom.com"), EpParam("Bucket", "my.bucket--usw2-az1--x-s3"), EpParam("Region", "us-west-2"), EpParam("Accelerate", false),
     EpParam("UseDualStack", false), EpParam("DisableS3ExpressSessionAuth", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"S3Express bucket name is not a valid virtual hostable name."} // expect
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

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const S3EndpointProviderEndpointTestCase::Expect& expect)
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

TEST_P(S3EndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES.size()) << "Something is wrong with the test fixture itself.";
    const S3EndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES.at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);

    std::shared_ptr<S3EndpointProvider> endpointProvider = Aws::MakeShared<S3EndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize S3EndpointProvider";

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
        const Aws::Vector<std::reference_wrapper<const S3EndpointProviderEndpointTestCase::OperationParamsFromTest>>
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
                         S3EndpointProviderTests,
                         ::testing::Range((size_t) 0u, TEST_CASES.size()));
