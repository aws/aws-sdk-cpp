/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/S3ExpressSigV4AuthSchemeOption.h>
namespace Aws {
namespace S3Crt {

AWS_S3CRT_API smithy::AuthSchemeOption S3ExpressSigV4AuthSchemeOption::s3ExpressSigV4AuthSchemeOption = smithy::AuthSchemeOption("sigv4-s3express");

}
}
