/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/s3/s3express_credentials_provider.h>
#include <aws/s3-crt/S3ExpressIdentityProvider.h>

namespace Aws {
  namespace S3Crt {
    /**
      * Userdata class for ensuring lifetime of the identity provider and
      * implementation pointers for crt.
      */
    class S3CrtIdentityProviderUserData final {
    public:
      explicit S3CrtIdentityProviderUserData(std::shared_ptr<S3ExpressIdentityProvider> identity_provider);
      std::shared_ptr<S3ExpressIdentityProvider> GetIdentityProvider() const { return m_identityProvider; }
      std::shared_ptr<aws_s3express_credentials_provider_vtable> GetImpl() const { return m_impl; }

    private:
      std::shared_ptr<S3ExpressIdentityProvider> m_identityProvider;
      std::shared_ptr<struct aws_s3express_credentials_provider_vtable> m_impl;
    };

    /**
     * Factory for a CRT aws_s3express_credentials_provider. Cannot subclass or instantiate,
     * only for building a crt provider to be used in crt configuration.
     */
    class S3CrtIdentityProviderAdapter final {
    public:
      S3CrtIdentityProviderAdapter() = delete;
      S3CrtIdentityProviderAdapter(const S3CrtIdentityProviderAdapter &other) = delete;
      S3CrtIdentityProviderAdapter(S3CrtIdentityProviderAdapter &&other) noexcept = delete;
      S3CrtIdentityProviderAdapter& operator=(const S3CrtIdentityProviderAdapter &other) = delete;
      S3CrtIdentityProviderAdapter& operator=(S3CrtIdentityProviderAdapter &&other) noexcept = delete;

      /**
       * Returns a c style function pointer that can be used in CRT configuration for
       * the delegation of the identity provider for S3 Express requests.
       */
      static aws_s3express_credentials_provider* ProviderFactory(struct aws_allocator* allocator,
        struct aws_s3_client* client,
        aws_simple_completion_callback on_provider_shutdown_callback,
        void* shutdown_user_data,
        void* factory_user_data);
    };
  }
}
