/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for NetworkFirewall pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/network-firewall/NetworkFirewallClientPagination.h>
#include <aws/network-firewall/NetworkFirewallPaginationBase.h>
#include <aws/network-firewall/model/GetAnalysisReportResultsPaginationTraits.h>
#include <aws/network-firewall/model/ListFlowOperationsPaginationTraits.h>
#include <aws/network-firewall/model/ListRuleGroupsPaginationTraits.h>
#include <aws/network-firewall/model/ListFlowOperationResultsPaginationTraits.h>
#include <aws/network-firewall/model/ListProxiesPaginationTraits.h>
#include <aws/network-firewall/model/ListAnalysisReportsPaginationTraits.h>
#include <aws/network-firewall/model/ListTagsForResourcePaginationTraits.h>
#include <aws/network-firewall/model/ListProxyRuleGroupsPaginationTraits.h>
#include <aws/network-firewall/model/ListTLSInspectionConfigurationsPaginationTraits.h>
#include <aws/network-firewall/model/ListFirewallsPaginationTraits.h>
#include <aws/network-firewall/model/ListProxyConfigurationsPaginationTraits.h>
#include <aws/network-firewall/model/ListVpcEndpointAssociationsPaginationTraits.h>
#include <aws/network-firewall/model/ListFirewallPoliciesPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class NetworkFirewallPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(NetworkFirewallPaginationCompilationTest, NetworkFirewallPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
