/**class OSVersionInfoTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/platform/OSVersionInfo.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

using namespace Aws::Utils;

class OSVersionInfoTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(OSVersionInfoTest, TestComputeVersionString)
{
  Aws::String versionString = Aws::OSVersionInfo::ComputeOSVersionString();
  ASSERT_TRUE(versionString.length() > 0);
}

