/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthSchemeOption.h>
namespace smithy
{
struct BearerTokenAuthSchemeOption
{
    static AuthSchemeOption bearerTokenAuthSchemeOption;
    static char BEARER_SCHEME[];
};

char BearerTokenAuthSchemeOption::BEARER_SCHEME[] = "smithy.api#HTTPBearerAuth";

AuthSchemeOption BearerTokenAuthSchemeOption::bearerTokenAuthSchemeOption =
    AuthSchemeOption(BEARER_SCHEME);
} // namespace smithy