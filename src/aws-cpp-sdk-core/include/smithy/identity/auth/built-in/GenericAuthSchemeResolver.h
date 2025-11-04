/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <smithy/identity/auth/AuthSchemeResolverBase.h>
#include <smithy/identity/auth/built-in/SigV4aAuthSchemeOption.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeOption.h>
#include <smithy/identity/auth/built-in/BearerTokenAuthSchemeOption.h>


namespace smithy {
    template<typename ServiceAuthSchemeParametersT = DefaultAuthSchemeResolverParameters>
    class GenericAuthSchemeResolver : public AuthSchemeResolverBase<ServiceAuthSchemeParametersT>
    {
    public:
        using ServiceAuthSchemeParameters = ServiceAuthSchemeParametersT;
        GenericAuthSchemeResolver(const Aws::Vector<AuthSchemeOption>& allowedAuth) : m_allowedAuth(allowedAuth) {}
        GenericAuthSchemeResolver() = default;
        virtual ~GenericAuthSchemeResolver() = default;

    private:
      Aws::Vector<AuthSchemeOption> m_allowedAuth;

    protected:
        Aws::Vector<AuthSchemeOption> resolveAuthSchemeImpl(const ServiceAuthSchemeParameters& identityProperties) override
        {
          AWS_UNREFERENCED_PARAM(identityProperties);
          return m_allowedAuth;
        }
    };
}