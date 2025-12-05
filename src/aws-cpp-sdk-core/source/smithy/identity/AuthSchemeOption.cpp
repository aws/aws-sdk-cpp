/**
  * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * SPDX-License-Identifier: Apache-2.0.
  */
#include <smithy/identity/auth/built-in/SigV4AuthSchemeOption.h>
#include <smithy/identity/auth/built-in/SigV4aAuthSchemeOption.h>
#include <smithy/identity/auth/built-in/NoAuthSchemeOption.h>
#include <smithy/identity/auth/built-in/BearerTokenAuthSchemeOption.h>
using namespace smithy;

AuthSchemeOption SigV4AuthSchemeOption::sigV4AuthSchemeOption = AuthSchemeOption("aws.auth#sigv4");
AuthSchemeOption SigV4aAuthSchemeOption::sigV4aAuthSchemeOption = AuthSchemeOption("aws.auth#sigv4a");
AuthSchemeOption NoAuthSchemeOption::noAuthSchemeOption = AuthSchemeOption("smithy.api#noAuth");
AuthSchemeOption BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption = AuthSchemeOption("smithy.api#HTTPBearerAuth");
