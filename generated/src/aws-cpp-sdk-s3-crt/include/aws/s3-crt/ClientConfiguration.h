/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3-crt/S3CrtClientConfiguration.h>

namespace Aws
{
    namespace S3Crt
    {
        /* Backward compatibility, please use just S3CrtClientConfiguration */
        using ClientConfiguration = Aws::S3Crt::S3CrtClientConfiguration;
    }
}
