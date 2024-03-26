/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/identity/AwsIdentity.h>

#include <aws/crt/Variant.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/utils/FutureOutcome.h>
#include <aws/core/utils/memory/stl/AWSMap.h>


namespace smithy {
    template<typename IDENTITY_T>
    class AwsSignerBase {
    public:
        using IdentityT = IDENTITY_T;
        static_assert(std::is_base_of<AwsIdentity, IDENTITY_T>::value_type, "Identity type should inherit AwsIdentity");
        using SigningProperties = Aws::UnorderedMap<Aws::String, Aws::String>;
        using AdditionalParameters = Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<Aws::String, bool>>;
        using HttpRequest = Aws::Http::HttpRequest;
        using SigningFutureOutcome = Aws::Utils::FutureOutcome<HttpRequest, Aws::Client::AWSError<Aws::Client::CoreErrors>>;


        virtual SigningFutureOutcome sign(const HttpRequest& httpRequest, const IdentityT& identity, SigningProperties properties, const AdditionalParameters& additionalParameters) = 0;

        virtual ~AwsSignerBase(){};
    };
}