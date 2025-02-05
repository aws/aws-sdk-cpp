/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/S3ExpressSigV4AuthSchemeOption.h>
namespace Aws {
namespace S3 {

smithy::AuthSchemeOption S3ExpressSigV4AuthSchemeOption::s3ExpressSigV4AuthSchemeOption = smithy::AuthSchemeOption("sigv4-s3express");

}
}
