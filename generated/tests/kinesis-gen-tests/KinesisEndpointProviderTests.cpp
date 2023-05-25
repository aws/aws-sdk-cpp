/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/kinesis/KinesisEndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSKinesisEndpointProviderTests";
using KinesisEndpointProvider = Aws::Kinesis::Endpoint::KinesisEndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<EpProp>>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

class KinesisEndpointProviderTests : public ::testing::TestWithParam<size_t> {};

struct KinesisEndpointProviderEndpointTestCase
{
    using OperationParamsFromTest = EndpointParameters;

    struct Expect
    {
        struct Endpoint
        {
            Aws::String url;
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

static const Aws::Vector<KinesisEndpointProviderEndpointTestCase> TEST_CASES = {
  /*TEST CASE 0*/
  {"For region us-gov-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-gov-west-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 1*/
  {"For region us-gov-west-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-gov-west-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 2*/
  {"For region us-gov-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-gov-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 3*/
  {"For region us-gov-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-gov-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 4*/
  {"For region us-gov-east-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-gov-east-1.api.aws",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 5*/
  {"For region us-gov-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-gov-east-1.api.aws",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 6*/
  {"For region ap-southeast-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.ap-southeast-3.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 7*/
  {"For region ap-southeast-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.ap-southeast-2.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 8*/
  {"For region ap-southeast-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.ap-southeast-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 9*/
  {"For region eu-central-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.eu-central-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 10*/
  {"For region eu-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.eu-south-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 11*/
  {"For region ap-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.ap-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 12*/
  {"For region sa-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "sa-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.sa-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 13*/
  {"For region us-east-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-east-2.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 14*/
  {"For region us-east-2 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-east-2.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 15*/
  {"For region eu-north-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.eu-north-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 16*/
  {"For region me-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "me-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.me-south-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 17*/
  {"For region eu-west-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.eu-west-3.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 18*/
  {"For region eu-west-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.eu-west-2.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 19*/
  {"For region eu-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.eu-west-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 20*/
  {"For region us-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 21*/
  {"For region us-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 22*/
  {"For region ap-northeast-3 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-3"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.ap-northeast-3.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 23*/
  {"For region ap-northeast-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.ap-northeast-2.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 24*/
  {"For region ap-northeast-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.ap-northeast-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 25*/
  {"For region ap-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ap-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.ap-south-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 26*/
  {"For region af-south-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "af-south-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.af-south-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 27*/
  {"For region us-west-2 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-west-2.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 28*/
  {"For region us-west-2 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-west-2.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 29*/
  {"For region us-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-west-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 30*/
  {"For region us-west-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-west-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 31*/
  {"For region ca-central-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "ca-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.ca-central-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 32*/
  {"For region us-east-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-east-1.api.aws",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 33*/
  {"For region us-east-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-east-1.api.aws",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 34*/
  {"For region us-iso-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-iso-east-1.c2s.ic.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 35*/
  {"For region us-iso-west-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-iso-west-1.c2s.ic.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 36*/
  {"For region us-iso-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-iso-east-1.c2s.ic.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 37*/
  {"For region cn-north-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.cn-north-1.amazonaws.com.cn",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 38*/
  {"For region cn-northwest-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-northwest-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.cn-northwest-1.amazonaws.com.cn",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 39*/
  {"For region cn-north-1 with FIPS enabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.cn-north-1.api.amazonwebservices.com.cn",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 40*/
  {"For region cn-north-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.cn-north-1.amazonaws.com.cn",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 41*/
  {"For region cn-north-1 with FIPS disabled and DualStack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "cn-north-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.cn-north-1.api.amazonwebservices.com.cn",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 42*/
  {"For region us-isob-east-1 with FIPS disabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-isob-east-1.sc2s.sgov.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 43*/
  {"For region us-isob-east-1 with FIPS enabled and DualStack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-isob-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-isob-east-1.sc2s.sgov.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 44*/
  {"For custom endpoint with fips disabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 45*/
  {"For custom endpoint with fips enabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 46*/
  {"For custom endpoint with fips disabled and dualstack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 47*/
  {"Invalid ARN: Failed to parse ARN.", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamARN", "arn"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Failed to parse ARN."} // expect
  },
  /*TEST CASE 48*/
  {"Invalid ARN: partition missing from ARN.", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamARN", "arn::kinesis:us-west-2:123456789012:stream/testStream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Failed to parse ARN."} // expect
  },
  /*TEST CASE 49*/
  {"Invalid ARN: partitions mismatch.", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-gov-west-1"), EpParam("StreamARN", "arn:aws:kinesis:us-west-2:123456789012:stream/testStream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition: aws from ARN doesn't match with partition name: aws-us-gov."} // expect
  },
  /*TEST CASE 50*/
  {"Invalid ARN: Not Kinesis", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamARN", "arn:aws:s3:us-west-2:123456789012:stream/testStream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The ARN was not for the Kinesis service, found: s3."} // expect
  },
  /*TEST CASE 51*/
  {"Invalid ARN: Region is missing in ARN", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamARN", "arn:aws:kinesis::123456789012:stream/testStream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Invalid region."} // expect
  },
  /*TEST CASE 52*/
  {"Invalid ARN: Region is empty string in ARN", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamARN", "arn:aws:kinesis:  :123456789012:stream/testStream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Invalid region."} // expect
  },
  /*TEST CASE 53*/
  {"Invalid ARN: Invalid account id", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1::stream/testStream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Invalid account id."} // expect
  },
  /*TEST CASE 54*/
  {"Invalid ARN: Invalid account id", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1:   :stream/testStream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Invalid account id."} // expect
  },
  /*TEST CASE 55*/
  {"Invalid ARN: Kinesis ARNs only support stream arn types", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1:123:accesspoint/testStream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Kinesis ARNs don't support `accesspoint` arn types."} // expect
  },
  /*TEST CASE 56*/
  {"Dual Stack not supported region.", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-west-1"), EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws-iso:kinesis:us-iso-west-1:123456789012:stream/testStream"),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"FIPS and DualStack are enabled, but this partition does not support one or both"} // expect
  },
  /*TEST CASE 57*/
  {"OperationType not set", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1:123456789012:stream/testStream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Operation Type is not set. Please contact service team for resolution."} // expect
  },
  /*TEST CASE 58*/
  {"Custom Endpoint is specified", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("Region", "us-east-1"),
     EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 59*/
  {"Account endpoint targeting control operation type", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.control-kinesis.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 60*/
  {"Account endpoint targeting data operation type", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("OperationType", "data"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 61*/
  {"Account endpoint with fips targeting data operation type", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("OperationType", "data"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis-fips.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 62*/
  {"Account endpoint with fips targeting control operation type", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.control-kinesis-fips.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 63*/
  {"Account endpoint with Dual Stack and FIPS enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream"),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.control-kinesis-fips.us-east-1.api.aws",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 64*/
  {"Account endpoint with Dual Stack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-1"), EpParam("OperationType", "data"), EpParam("StreamARN", "arn:aws:kinesis:us-west-1:123:stream/test-stream"),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis.us-west-1.api.aws",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 65*/
  {"Account endpoint with FIPS and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-west-1"), EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws:kinesis:us-west-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.control-kinesis.us-west-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 66*/
  {"RegionMismatch: client region should be used for endpoint region", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-east-1"), EpParam("OperationType", "data"), EpParam("StreamARN", "arn:aws:kinesis:us-west-1:123:stream/testStream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 67*/
  {"Account endpoint with FIPS enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-northwest-1"), EpParam("OperationType", "data"), EpParam("StreamARN", "arn:aws-cn:kinesis:cn-northwest-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis-fips.cn-northwest-1.amazonaws.com.cn",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 68*/
  {"Account endpoint with FIPS and DualStack enabled for cn regions.", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "cn-northwest-1"), EpParam("OperationType", "data"), EpParam("StreamARN", "arn:aws-cn:kinesis:cn-northwest-1:123:stream/test-stream"),
     EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 69*/
  {"Account endpoint targeting control operation type in ADC regions", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-east-1"), EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws-iso:kinesis:us-iso-east-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-iso-east-1.c2s.ic.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 70*/
  {"Account endpoint targeting control operation type in ADC regions", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-iso-west-1"), EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws-iso:kinesis:us-iso-west-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-iso-west-1.c2s.ic.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 71*/
  {"Account endpoint targeting data operation type in ADC regions", // documentation
    {EpParam("UseFIPS", false), EpParam("Region", "us-isob-east-1"), EpParam("OperationType", "data"), EpParam("StreamARN", "arn:aws-iso-b:kinesis:us-isob-east-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-isob-east-1.sc2s.sgov.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 72*/
  {"Account endpoint with fips targeting control operation type in ADC regions", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-iso-east-1"), EpParam("OperationType", "control"), EpParam("StreamARN", "arn:aws-iso:kinesis:us-iso-east-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-iso-east-1.c2s.ic.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 73*/
  {"Account endpoint with fips targeting data operation type in ADC regions", // documentation
    {EpParam("UseFIPS", true), EpParam("Region", "us-isob-east-1"), EpParam("OperationType", "data"), EpParam("StreamARN", "arn:aws-iso-b:kinesis:us-isob-east-1:123:stream/test-stream"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-isob-east-1.sc2s.sgov.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 74*/
  {"Invalid ConsumerARN: Failed to parse ARN.", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Failed to parse ARN."} // expect
  },
  /*TEST CASE 75*/
  {"Invalid ConsumerARN: partition missing from ARN.", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn::kinesis:us-west-2:123456789012:stream/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Failed to parse ARN."} // expect
  },
  /*TEST CASE 76*/
  {"Invalid ARN: partitions mismatch.", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-west-2:123456789012:stream/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-gov-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Partition: aws from ARN doesn't match with partition name: aws-us-gov."} // expect
  },
  /*TEST CASE 77*/
  {"Invalid ARN: Not Kinesis", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:s3:us-west-2:123456789012:stream/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: The ARN was not for the Kinesis service, found: s3."} // expect
  },
  /*TEST CASE 78*/
  {"Invalid ARN: Region is missing in ARN", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis::123456789012:stream/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Invalid region."} // expect
  },
  /*TEST CASE 79*/
  {"Invalid ARN: Region is empty string in ARN", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:  :123456789012:stream/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Invalid region."} // expect
  },
  /*TEST CASE 80*/
  {"Invalid ARN: Invalid account id", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1::stream/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Invalid account id."} // expect
  },
  /*TEST CASE 81*/
  {"Invalid ARN: Invalid account id", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:   :stream/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Invalid account id."} // expect
  },
  /*TEST CASE 82*/
  {"Invalid ARN: Kinesis ARNs only support stream arn/consumer arn types", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:123:accesspoint/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid ARN: Kinesis ARNs don't support `accesspoint` arn types."} // expect
  },
  /*TEST CASE 83*/
  {"Dual Stack not supported region.", // documentation
    {EpParam("UseFIPS", true), EpParam("ConsumerARN", "arn:aws-iso:kinesis:us-iso-west-1:123456789012:stream/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-iso-west-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"FIPS and DualStack are enabled, but this partition does not support one or both"} // expect
  },
  /*TEST CASE 84*/
  {"OperationType not set", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:123456789012:stream/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Operation Type is not set. Please contact service team for resolution."} // expect
  },
  /*TEST CASE 85*/
  {"Custom Endpoint is specified", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://example.com"), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://example.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 86*/
  {"Account endpoint targeting control operation type", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.control-kinesis.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 87*/
  {"Account endpoint targeting data operation type", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "data"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 88*/
  {"Account endpoint with fips targeting data operation type", // documentation
    {EpParam("UseFIPS", true), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "data"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis-fips.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 89*/
  {"Account endpoint with fips targeting control operation type", // documentation
    {EpParam("UseFIPS", true), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.control-kinesis-fips.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 90*/
  {"Account endpoint with Dual Stack and FIPS enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.control-kinesis-fips.us-east-1.api.aws",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 91*/
  {"Account endpoint with Dual Stack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-west-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-west-1"), EpParam("OperationType", "data"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis.us-west-1.api.aws",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 92*/
  {"Account endpoint with FIPS and DualStack disabled", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-west-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-west-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.control-kinesis.us-west-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 93*/
  {"RegionMismatch: client region should be used for endpoint region", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-west-1:123:stream/testStream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "data"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 94*/
  {"Account endpoint with FIPS enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("ConsumerARN", "arn:aws-cn:kinesis:cn-northwest-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "cn-northwest-1"), EpParam("OperationType", "data"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis-fips.cn-northwest-1.amazonaws.com.cn",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 95*/
  {"Account endpoint with FIPS and DualStack enabled for cn regions.", // documentation
    {EpParam("UseFIPS", true), EpParam("ConsumerARN", "arn:aws-cn:kinesis:cn-northwest-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "cn-northwest-1"), EpParam("OperationType", "data"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis-fips.cn-northwest-1.api.amazonwebservices.com.cn",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 96*/
  {"Account endpoint targeting control operation type in ADC regions", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws-iso:kinesis:us-iso-east-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-iso-east-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-iso-east-1.c2s.ic.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 97*/
  {"Account endpoint targeting control operation type in ADC regions", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws-iso:kinesis:us-iso-west-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-iso-west-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-iso-west-1.c2s.ic.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 98*/
  {"Account endpoint targeting data operation type in ADC regions", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws-iso-b:kinesis:us-isob-east-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-isob-east-1"), EpParam("OperationType", "data"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis.us-isob-east-1.sc2s.sgov.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 99*/
  {"Account endpoint with fips targeting control operation type in ADC regions", // documentation
    {EpParam("UseFIPS", true), EpParam("ConsumerARN", "arn:aws-iso:kinesis:us-iso-east-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-iso-east-1"), EpParam("OperationType", "control"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-iso-east-1.c2s.ic.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 100*/
  {"Account endpoint with fips targeting data operation type in ADC regions", // documentation
    {EpParam("UseFIPS", true), EpParam("ConsumerARN", "arn:aws-iso-b:kinesis:us-isob-east-1:123:stream/test-stream/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-isob-east-1"), EpParam("OperationType", "data"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://kinesis-fips.us-isob-east-1.sc2s.sgov.gov",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 101*/
  {"ConsumerARN targeting US-EAST-1", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:123456789123:stream/foobar/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "data"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123456789123.data-kinesis.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 102*/
  {"Both StreamARN and ConsumerARN specified. StreamARN should take precedence", // documentation
    {EpParam("UseFIPS", false), EpParam("ConsumerARN", "arn:aws:kinesis:us-east-1:123456789123:stream/foobar/consumer/test-consumer:1525898737"),
     EpParam("Region", "us-east-1"), EpParam("OperationType", "data"), EpParam("StreamARN", "arn:aws:kinesis:us-east-1:123:stream/foobar"),
     EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://123.data-kinesis.us-east-1.amazonaws.com",
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
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
    } else {
        sdkSigner = rulesSignerName;
    }

    return sdkSigner;
}

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const KinesisEndpointProviderEndpointTestCase::Expect& expect)
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
            const auto& endpointResultAttrs = outcome.GetResult().GetAttributes();
            ASSERT_TRUE(endpointResultAttrs) << "Expected non-empty EndpointAttributes (authSchemes)";
            for (const auto& expProperty : expAuthSchemesIt->second)
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

TEST_P(KinesisEndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES.size()) << "Something is wrong with the test fixture itself.";
    const KinesisEndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES.at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);

    std::shared_ptr<KinesisEndpointProvider> endpointProvider = Aws::MakeShared<KinesisEndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize KinesisEndpointProvider";

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
        const Aws::Vector<std::reference_wrapper<const KinesisEndpointProviderEndpointTestCase::OperationParamsFromTest>>
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
                         KinesisEndpointProviderTests,
                         ::testing::Range((size_t) 0u, TEST_CASES.size()));
