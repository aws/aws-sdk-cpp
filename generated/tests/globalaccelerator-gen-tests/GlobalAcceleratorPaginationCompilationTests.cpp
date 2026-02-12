/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for GlobalAccelerator pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/globalaccelerator/GlobalAcceleratorClientPagination.h>
#include <aws/globalaccelerator/GlobalAcceleratorPaginationBase.h>
#include <aws/globalaccelerator/model/ListCustomRoutingAcceleratorsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCrossAccountResourcesPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCustomRoutingListenersPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsByDestinationPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCrossAccountAttachmentsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListListenersPaginationTraits.h>
#include <aws/globalaccelerator/model/ListCustomRoutingEndpointGroupsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListEndpointGroupsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListByoipCidrsPaginationTraits.h>
#include <aws/globalaccelerator/model/ListAcceleratorsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class GlobalAcceleratorPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(GlobalAcceleratorPaginationCompilationTest, GlobalAcceleratorPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
