

#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/utils/memory/stl/AWSArray.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

namespace {
const size_t RulesBlobSize = 498;
using RulesBlobT = Aws::Array<const char, RulesBlobSize>;

static constexpr RulesBlobT RulesBlob = {{
'{','"','v','e','r','s','i','o','n','"',':','"','1','.','0','"',',','"','p','a','r','a','m','e','t',
'e','r','s','"',':','{','"','s','t','r','i','n','g','A','r','r','a','y','P','a','r','a','m','"',':',
'{','"','t','y','p','e','"',':','"','s','t','r','i','n','g','A','r','r','a','y','"',',','"','r','e',
'q','u','i','r','e','d','"',':','t','r','u','e',',','"','d','e','f','a','u','l','t','"',':','[','"',
'd','e','f','a','u','l','t','V','a','l','u','e','1','"',',','"','d','e','f','a','u','l','t','V','a',
'l','u','e','2','"',']',',','"','d','o','c','u','m','e','n','t','a','t','i','o','n','"',':','"','d',
'o','c','s','"','}','}',',','"','r','u','l','e','s','"',':','[','{','"','d','o','c','u','m','e','n',
't','a','t','i','o','n','"',':','"','T','e','m','p','l','a','t','e',' ','f','i','r','s','t',' ','a',
'r','r','a','y',' ','v','a','l','u','e',' ','i','n','t','o',' ','U','R','I',' ','i','f',' ','s','e',
't','"',',','"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"','g',
'e','t','A','t','t','r','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','s',
't','r','i','n','g','A','r','r','a','y','P','a','r','a','m','"','}',',','"','[','0',']','"',']',',',
'"','a','s','s','i','g','n','"',':','"','a','r','r','a','y','V','a','l','u','e','"','}',']',',','"',
'e','n','d','p','o','i','n','t','"',':','{','"','u','r','l','"',':','"','h','t','t','p','s',':','/',
'/','e','x','a','m','p','l','e','.','c','o','m','/','{','a','r','r','a','y','V','a','l','u','e','}',
'"','}',',','"','t','y','p','e','"',':','"','e','n','d','p','o','i','n','t','"','}',',','{','"','c',
'o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','d','o','c','u','m','e','n','t','a','t',
'i','o','n','"',':','"','e','r','r','o','r',' ','f','a','l','l','t','h','r','o','u','g','h','"',',',
'"','e','r','r','o','r','"',':','"','n','o',' ','a','r','r','a','y',' ','v','a','l','u','e','s',' ',
's','e','t','"',',','"','t','y','p','e','"',':','"','e','r','r','o','r','"','}',']','}','\0'
}};

/**
We store endpoint rules json as a character array. This is the pretty print
of the following test rules set
{
    "version": "1.0",
    "parameters": {
        "Region": {
            "builtIn": "AWS::Region",
            "required": false,
            "documentation": "The AWS region used to dispatch the request.",
            "type": "string"
        }
    },
    "rules": [
        {
            "documentation": "Test region blob",
            "conditions": [
                {
                    "fn": "isSet",
                    "argv": [
                        {
                            "ref": "Region"
                        }
                    ]
                }
            ],
            "endpoint": {
                "url": "https://tartarus.{Region}.amazon.aws.com/"
            },
            "type": "endpoint"
        },
        {
            "conditions": [],
            "documentation": "error fallthrough",
            "error": "no array values set",
            "type": "error"
        }
    ]
}
 */
const size_t RegionRulesBlobSize = 447;
using RegionRulesBlobT = Aws::Array<const char, RegionRulesBlobSize>;
static constexpr RegionRulesBlobT RegionRulesBlob = {
    {'{', '"', 'v', 'e', 'r', 's', 'i', 'o', 'n', '"', ':', '"', '1', '.', '0', '"', ',', '"', 'p', 'a', 'r', 'a', 'm', 'e', 't', 'e', 'r',
     's', '"', ':', '{', '"', 'R', 'e', 'g', 'i', 'o', 'n', '"', ':', '{', '"', 'b', 'u', 'i', 'l', 't', 'I', 'n', '"', ':', '"', 'A', 'W',
     'S', ':', ':', 'R', 'e', 'g', 'i', 'o', 'n', '"', ',', '"', 'r', 'e', 'q', 'u', 'i', 'r', 'e', 'd', '"', ':', 'f', 'a', 'l', 's', 'e',
     ',', '"', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', '"', ':', '"', 'T', 'h', 'e', ' ', 'A', 'W', 'S', ' ', 'r',
     'e', 'g', 'i', 'o', 'n', ' ', 'u', 's', 'e', 'd', ' ', 't', 'o', ' ', 'd', 'i', 's', 'p', 'a', 't', 'c', 'h', ' ', 't', 'h', 'e', ' ',
     'r', 'e', 'q', 'u', 'e', 's', 't', '.', '"', ',', '"', 't', 'y', 'p', 'e', '"', ':', '"', 's', 't', 'r', 'i', 'n', 'g', '"', '}', '}',
     ',', '"', 'r', 'u', 'l', 'e', 's', '"', ':', '[', '{', '"', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', '"', ':',
     '"', 'T', 'e', 's', 't', ' ', 'r', 'e', 'g', 'i', 'o', 'n', ' ', 'b', 'l', 'o', 'b', '"', ',', '"', 'c', 'o', 'n', 'd', 'i', 't', 'i',
     'o', 'n', 's', '"', ':', '[', '{', '"', 'f', 'n', '"', ':', '"', 'i', 's', 'S', 'e', 't', '"', ',', '"', 'a', 'r', 'g', 'v', '"', ':',
     '[', '{', '"', 'r', 'e', 'f', '"', ':', '"', 'R', 'e', 'g', 'i', 'o', 'n', '"', '}', ']', '}', ']', ',', '"', 'e', 'n', 'd', 'p', 'o',
     'i', 'n', 't', '"', ':', '{', '"', 'u', 'r', 'l', '"', ':', '"', 'h', 't', 't', 'p', 's', ':', '/', '/', 't', 'a', 'r', 't', 'a', 'r',
     'u', 's', '.', '{', 'R', 'e', 'g', 'i', 'o', 'n', '}', '.', 'a', 'm', 'a', 'z', 'o', 'n', '.', 'a', 'w', 's', '.', 'c', 'o', 'm', '/',
     '"', '}', ',', '"', 't', 'y', 'p', 'e', '"', ':', '"', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '"', '}', ',', '{', '"', 'c', 'o', 'n',
     'd', 'i', 't', 'i', 'o', 'n', 's', '"', ':', '[', ']', ',', '"', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'a', 't', 'i', 'o', 'n', '"',
     ':', '"', 'e', 'r', 'r', 'o', 'r', ' ', 'f', 'a', 'l', 'l', 't', 'h', 'r', 'o', 'u', 'g', 'h', '"', ',', '"', 'e', 'r', 'r', 'o', 'r',
     '"', ':', '"', 'n', 'o', ' ', 'a', 'r', 'r', 'a', 'y', ' ', 'v', 'a', 'l', 'u', 'e', 's', ' ', 's', 'e', 't', '"', ',', '"', 't', 'y',
     'p', 'e', '"', ':', '"', 'e', 'r', 'r', 'o', 'r', '"', '}', ']', '}', '\0'}};

class RegionEndpointProviderTest : public Aws::Endpoint::DefaultEndpointProvider<> {
 public:
  using RegionEndpointResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  RegionEndpointProviderTest() : Aws::Endpoint::DefaultEndpointProvider<>(RegionRulesBlob.data(), RegionRulesBlobSize) {}

  ~RegionEndpointProviderTest() override = default;
};

class TestServiceEndpointProviderTest : public Aws::Endpoint::DefaultEndpointProvider<> {
public:
    using TestServiceResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    TestServiceEndpointProviderTest()
      : Aws::Endpoint::DefaultEndpointProvider<>(RulesBlob.data(), RulesBlobSize)
    {}

    ~TestServiceEndpointProviderTest()
    {
    }
};
}  // namespace

class EndpointTest : public Aws::Testing::AwsCppSdkGTestSuite {
    protected:
    static const char ALLOCATION_TAG[];
   
    public:
    void SetUp() override{
    }
};
const char EndpointTest::ALLOCATION_TAG[] = "EndpointTest";

TEST_F(EndpointTest, testStringArrayParam) {

    std::shared_ptr<TestServiceEndpointProviderTest> endpointProvider_sp = Aws::MakeShared<TestServiceEndpointProviderTest>(ALLOCATION_TAG);

    Aws::Endpoint::EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("stringArrayParam"), Aws::Vector<Aws::String>{"staticValue2","staticValue1"}, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);

    auto res = endpointProvider_sp->ResolveEndpoint(parameters);
    EXPECT_TRUE(res.IsSuccess());
    EXPECT_EQ( res.GetResult().GetURL(), "https://example.com/staticValue2");
}

TEST_F(EndpointTest, testStringArrayParamError) {

    std::shared_ptr<TestServiceEndpointProviderTest> endpointProvider_sp = Aws::MakeShared<TestServiceEndpointProviderTest>(ALLOCATION_TAG);

    Aws::Endpoint::EndpointParameters parameters;
    // Static context parameters
    parameters.emplace_back(Aws::String("stringArrayParam"), Aws::Vector<Aws::String>{}, Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);

    auto res = endpointProvider_sp->ResolveEndpoint(parameters);

    EXPECT_FALSE(res.IsSuccess());
}

TEST_F(EndpointTest, validRegionShouldBeUsed) {
  RegionEndpointProviderTest regionEndpointProvider{};
  Aws::Client::ClientConfiguration configuration{};
  configuration.region = "us-east-1";
  regionEndpointProvider.InitBuiltInParameters(configuration);
  const auto result = regionEndpointProvider.ResolveEndpoint({});
  EXPECT_TRUE(result.IsSuccess());
  EXPECT_EQ(result.GetResult().GetURL(), "https://tartarus.us-east-1.amazon.aws.com");
}

TEST_F(EndpointTest, invalidRegionShouldNotBeUsed) {
  RegionEndpointProviderTest regionEndpointProvider{};
  Aws::Client::ClientConfiguration configuration{};
  configuration.region = "i-am-thou-thou-art-i/";
  regionEndpointProvider.InitBuiltInParameters(configuration);
  const auto result = regionEndpointProvider.ResolveEndpoint({});
  EXPECT_FALSE(result.IsSuccess());
  EXPECT_EQ(result.GetError().GetErrorType(), Aws::Client::CoreErrors::INVALID_PARAMETER_COMBINATION);
}
