/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3/S3_EXPORTS.h>
#include <smithy/identity/auth/AuthSchemeOption.h>

namespace Aws {
namespace S3 {

    struct S3ExpressSigV4AuthSchemeOption
    {
        static AWS_S3_API smithy::AuthSchemeOption s3ExpressSigV4AuthSchemeOption;
    };
}
}
