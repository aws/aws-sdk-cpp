#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSSet.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

<#assign client = "" />

<#list tests as test>
    <#if test_index == 0>
        <#assign client = test.clientName?lower_case />
    </#if>
</#list>

// client header
#include <aws/${client}/${client}Client.h>

<#list tests as test>
#include <aws/${test.clientName?lower_case}/model/${test.operationName}Request.h>
</#list>
#include <utility>
#include <algorithm>

using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::${client};
using namespace Aws::${client}::Model;

namespace ${client}SmokeTest {
    static const char ALLOCATION_TAG[] = "${client}SmokeTest";

    class ${client}SmokeTestSuite : public Aws::Testing::AwsCppSdkGTestSuite {
    };

    <#list tests as test>
    TEST_F(${client}SmokeTestSuite, ${test.testcaseName}) {
        Aws::${client}::${client}ClientConfiguration& clientConfiguration;
        <#if !test.config.region?has_content>
        clientConfiguration.region = ${test.config.region};
        </#if>
        clientConfiguration.useFIPS = ${test.config.useFips?c};
        clientConfiguration.useDualstack = ${test.config.useDualstack?c};
        <#if (test.auth == "sigv4") || (test.auth == "sigv4a")>
        auto clientSp = Aws::MakeShared<${client}Client>(ALLOCATION_TAG, clientConfiguration);
        </#if>

        // populate input params
        // Prepare getters
        <#list test.getterCodeBlock as line>
        ${line}
        </#list>

        // Prepare Request
        <#assign lines = test.functionBlock?split("\n") />
        <#list lines as line>
        ${line}
        </#list>
        auto outcome = clientSp->${test.operationName}(input);
        <#if test.expectSuccess>
        EXPECT_TRUE(outcome.IsSuccess());
        <#else>
        EXPECT_FALSE(outcome.IsSuccess());
        </#if>
    }
    </#list>
}
