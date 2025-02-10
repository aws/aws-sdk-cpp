/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3/S3_EXPORTS.h>
#include <smithy/identity/auth/AuthSchemeOption.h>

namespace Aws {
namespace S3 {

    struct AWS_S3_API S3ExpressSigV4AuthSchemeOption
    {
        static smithy::AuthSchemeOption s3ExpressSigV4AuthSchemeOption;
        static smithy::AuthSchemeOption GetS3ExpressSigV4AuthSchemeOption() {
            return s3ExpressSigV4AuthSchemeOption;
        }

    };
}
}
