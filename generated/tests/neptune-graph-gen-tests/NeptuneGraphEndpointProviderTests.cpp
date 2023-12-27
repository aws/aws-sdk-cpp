/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/neptune-graph/NeptuneGraphEndpointProvider.h>


static const char* ALLOCATION_TAG = "AWSNeptuneGraphEndpointProviderTests";
using NeptuneGraphEndpointProvider = Aws::NeptuneGraph::Endpoint::NeptuneGraphEndpointProvider;
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

using EpParam = Aws::Endpoint::EndpointParameter;
using EpProp = Aws::Endpoint::EndpointParameter; // just a container to store test expectations
using ExpEpProps = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::Vector<EpProp>>>;
using ExpEpAuthScheme = Aws::Vector<EpProp>;
using ExpEpHeaders = Aws::UnorderedMap<Aws::String, Aws::Vector<Aws::String>>;

class NeptuneGraphEndpointProviderTests : public ::testing::TestWithParam<size_t> {};

struct NeptuneGraphEndpointProviderEndpointTestCase
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

static const Aws::Vector<NeptuneGraphEndpointProviderEndpointTestCase> TEST_CASES = {
  /*TEST CASE 0*/
  {"Region and CP ApiType are provided", // documentation
    {EpParam("Endpoint", "https://mycustomDomain.com"), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://mycustomDomain.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 1*/
  {"Region and DP ApiType are provided", // documentation
    {EpParam("Endpoint", "https://mycustomDomain.com"), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://mycustomDomain.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 2*/
  {"Region and invalid ApiType are provided", // documentation
    {EpParam("Endpoint", "https://mycustomDomain.com"), EpParam("ApiType", "someInvalidApiType"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*epUrl*/"https://mycustomDomain.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 3*/
  {"Only invalid ApiType is provided", // documentation
    {EpParam("Endpoint", "https://mycustomDomain.com"), EpParam("ApiType", "someInvalidApiType")}, // params
    {}, // tags
    {{/*epUrl*/"https://mycustomDomain.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 4*/
  {"Validate CP endpoint in region: us-east-1, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 5*/
  {"Validate DP endpoint in region: us-east-1, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 6*/
  {"Validate CP endpoint in region: us-east-1, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 7*/
  {"Validate DP endpoint in region: us-east-1, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 8*/
  {"Validate CP endpoint in region: us-east-1, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.us-east-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 9*/
  {"Validate DP endpoint in region: us-east-1, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.us-east-1.on.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 10*/
  {"Validate CP endpoint in region: us-east-1, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.us-east-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 11*/
  {"Validate DP endpoint in region: us-east-1, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-east-1.neptune-graph.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 12*/
  {"Validate CP endpoint in region: us-east-2, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.us-east-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 13*/
  {"Validate DP endpoint in region: us-east-2, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 14*/
  {"Validate CP endpoint in region: us-east-2, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 15*/
  {"Validate DP endpoint in region: us-east-2, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 16*/
  {"Validate CP endpoint in region: us-east-2, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.us-east-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 17*/
  {"Validate DP endpoint in region: us-east-2, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.us-east-2.on.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 18*/
  {"Validate CP endpoint in region: us-east-2, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.us-east-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 19*/
  {"Validate DP endpoint in region: us-east-2, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-east-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-east-2.neptune-graph.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 20*/
  {"Validate CP endpoint in region: us-west-2, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.us-west-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 21*/
  {"Validate DP endpoint in region: us-west-2, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 22*/
  {"Validate CP endpoint in region: us-west-2, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 23*/
  {"Validate DP endpoint in region: us-west-2, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 24*/
  {"Validate CP endpoint in region: us-west-2, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.us-west-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 25*/
  {"Validate DP endpoint in region: us-west-2, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.us-west-2.on.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 26*/
  {"Validate CP endpoint in region: us-west-2, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.us-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 27*/
  {"Validate DP endpoint in region: us-west-2, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "us-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://us-west-2.neptune-graph.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 28*/
  {"Validate CP endpoint in region: eu-west-1, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 29*/
  {"Validate DP endpoint in region: eu-west-1, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 30*/
  {"Validate CP endpoint in region: eu-west-1, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 31*/
  {"Validate DP endpoint in region: eu-west-1, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 32*/
  {"Validate CP endpoint in region: eu-west-1, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.eu-west-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 33*/
  {"Validate DP endpoint in region: eu-west-1, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.eu-west-1.on.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 34*/
  {"Validate CP endpoint in region: eu-west-1, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.eu-west-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 35*/
  {"Validate DP endpoint in region: eu-west-1, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-west-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://eu-west-1.neptune-graph.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 36*/
  {"Validate CP endpoint in region: eu-west-2, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.eu-west-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 37*/
  {"Validate DP endpoint in region: eu-west-2, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 38*/
  {"Validate CP endpoint in region: eu-west-2, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.eu-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 39*/
  {"Validate DP endpoint in region: eu-west-2, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 40*/
  {"Validate CP endpoint in region: eu-west-2, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.eu-west-2.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 41*/
  {"Validate DP endpoint in region: eu-west-2, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.eu-west-2.on.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 42*/
  {"Validate CP endpoint in region: eu-west-2, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.eu-west-2.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 43*/
  {"Validate DP endpoint in region: eu-west-2, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-west-2"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://eu-west-2.neptune-graph.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 44*/
  {"Validate CP endpoint in region: eu-central-1, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.eu-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 45*/
  {"Validate DP endpoint in region: eu-central-1, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 46*/
  {"Validate CP endpoint in region: eu-central-1, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.eu-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 47*/
  {"Validate DP endpoint in region: eu-central-1, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 48*/
  {"Validate CP endpoint in region: eu-central-1, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.eu-central-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 49*/
  {"Validate DP endpoint in region: eu-central-1, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.eu-central-1.on.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 50*/
  {"Validate CP endpoint in region: eu-central-1, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.eu-central-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 51*/
  {"Validate DP endpoint in region: eu-central-1, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "eu-central-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://eu-central-1.neptune-graph.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 52*/
  {"Validate CP endpoint in region: ap-southeast-1, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.ap-southeast-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 53*/
  {"Validate DP endpoint in region: ap-southeast-1, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 54*/
  {"Validate CP endpoint in region: ap-southeast-1, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.ap-southeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 55*/
  {"Validate DP endpoint in region: ap-southeast-1, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 56*/
  {"Validate CP endpoint in region: ap-southeast-1, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.ap-southeast-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 57*/
  {"Validate DP endpoint in region: ap-southeast-1, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.ap-southeast-1.on.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 58*/
  {"Validate CP endpoint in region: ap-southeast-1, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.ap-southeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 59*/
  {"Validate DP endpoint in region: ap-southeast-1, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "ap-southeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://ap-southeast-1.neptune-graph.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 60*/
  {"Validate CP endpoint in region: ap-northeast-1, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.ap-northeast-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 61*/
  {"Validate DP endpoint in region: ap-northeast-1, useFipsEndpoint: true, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 62*/
  {"Validate CP endpoint in region: ap-northeast-1, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "ControlPlane"), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph-fips.ap-northeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 63*/
  {"Validate DP endpoint in region: ap-northeast-1, useFipsEndpoint: true, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", true), EpParam("ApiType", "DataPlane"), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: fips endpoint is not supported for this API"} // expect
  },
  /*TEST CASE 64*/
  {"Validate CP endpoint in region: ap-northeast-1, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.ap-northeast-1.api.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 65*/
  {"Validate DP endpoint in region: ap-northeast-1, useFipsEndpoint: false, useDualStackEndpoint: true", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.ap-northeast-1.on.aws",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 66*/
  {"Validate CP endpoint in region: ap-northeast-1, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "ControlPlane"), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://neptune-graph.ap-northeast-1.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 67*/
  {"Validate DP endpoint in region: ap-northeast-1, useFipsEndpoint: false, useDualStackEndpoint: false", // documentation
    {EpParam("UseFIPS", false), EpParam("ApiType", "DataPlane"), EpParam("Region", "ap-northeast-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*epUrl*/"https://ap-northeast-1.neptune-graph.amazonaws.com",
       {/*authScheme*/}, 
       {/*properties*/},
       {/*headers*/}}, {/*No error*/}} // expect
  },
  /*TEST CASE 68*/
  {"Validate When no region is provided", // documentation
    {EpParam("ApiType", "DataPlane")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Missing Region"} // expect
  },
  /*TEST CASE 69*/
  {"Validate When invalid/unknown ApiType provided", // documentation
    {EpParam("ApiType", "someUnknownValue"), EpParam("Region", "us-east-1")}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Unknown ApiType"} // expect
  },
  /*TEST CASE 70*/
  {"Both Fips and dualstack enabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://mycustomDomain.com"), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 71*/
  {"Fips enabled and dualstack disabled", // documentation
    {EpParam("UseFIPS", true), EpParam("Endpoint", "https://mycustomDomain.com"), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", false)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: FIPS and custom endpoint are not supported"} // expect
  },
  /*TEST CASE 72*/
  {"Fips disabled and dualstack enabled", // documentation
    {EpParam("UseFIPS", false), EpParam("Endpoint", "https://mycustomDomain.com"), EpParam("ApiType", "ControlPlane"), EpParam("Region", "us-east-1"), EpParam("UseDualStack", true)}, // params
    {}, // tags
    {{/*No endpoint expected*/}, /*error*/"Invalid Configuration: Dualstack and custom endpoint are not supported"} // expect
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

void ValidateOutcome(const ResolveEndpointOutcome& outcome, const NeptuneGraphEndpointProviderEndpointTestCase::Expect& expect)
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

TEST_P(NeptuneGraphEndpointProviderTests, EndpointProviderTest)
{
    const size_t TEST_CASE_IDX = GetParam();
    ASSERT_LT(TEST_CASE_IDX, TEST_CASES.size()) << "Something is wrong with the test fixture itself.";
    const NeptuneGraphEndpointProviderEndpointTestCase& TEST_CASE = TEST_CASES.at(TEST_CASE_IDX);
    SCOPED_TRACE(Aws::String("\nTEST CASE # ") + Aws::Utils::StringUtils::to_string(TEST_CASE_IDX) + ": " + TEST_CASE.documentation);

    std::shared_ptr<NeptuneGraphEndpointProvider> endpointProvider = Aws::MakeShared<NeptuneGraphEndpointProvider>(ALLOCATION_TAG);
    ASSERT_TRUE(endpointProvider) << "Failed to allocate/initialize NeptuneGraphEndpointProvider";

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
        const Aws::Vector<std::reference_wrapper<const NeptuneGraphEndpointProviderEndpointTestCase::OperationParamsFromTest>>
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
                         NeptuneGraphEndpointProviderTests,
                         ::testing::Range((size_t) 0u, TEST_CASES.size()));
