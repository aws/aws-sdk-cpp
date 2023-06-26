/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/testing/AwsCppSdkGTestSuite.h>

#if defined(HAS_UMASK)
#include <sys/stat.h>
#endif

int main(int argc, char** argv)
{
#if defined(HAS_UMASK)
    // In order to fix github issue at https://github.com/aws/aws-sdk-cpp/issues/232
    // Created dir by this process will be set with mode 0777, so that multiple users can build on the same machine
    umask(0);
#endif
    Aws::Testing::RedirectHomeToTempIfAppropriate();

    // Disable EC2 metadata in client configuration to avoid requests retrieving EC2 metadata in unit tests.
    Aws::Testing::SaveEnvironmentVariable("AWS_EC2_METADATA_DISABLED");
    Aws::Environment::SetEnv("AWS_EC2_METADATA_DISABLED", "true", 1/*override*/);

    ::testing::InitGoogleTest(&argc, argv);
    int retVal = RUN_ALL_TESTS();

    return retVal;
}
