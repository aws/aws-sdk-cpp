/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/testing/Testing_EXPORTS.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>
#include <aws/testing/AwsTestHelpers.h>


#define AWS_PROTOCOL_TEST TEST_F
#define AWS_PROTOCOL_TEST_SUITE Aws::Testing::AwsCppSdkGTestSuite

using JsonValue = Aws::Utils::Json::JsonValue;
