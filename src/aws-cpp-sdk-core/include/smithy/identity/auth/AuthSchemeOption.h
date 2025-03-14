/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/crt/Variant.h>

#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/endpoint/EndpointParameter.h>

namespace smithy {
/* AuthSchemeOption and AuthSchemeOptionResolver */
class AuthSchemeOption
{
  using PropertyBag = Aws::UnorderedMap<Aws::String, Aws::Crt::Variant<Aws::String, bool>>;
  using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;
  /* note: AuthSchemeOption is not connected with AuthScheme by type system, only by the String of schemeId, this is in accordance with SRA */
public:
  AuthSchemeOption(const char* id = nullptr): schemeId(id) {}
  virtual ~AuthSchemeOption() = default;

  const char* schemeId = nullptr;

  PropertyBag virtual identityProperties() const { return m_identityProperties; };
  PropertyBag virtual signerProperties() const { return m_signerProperties; };
  void putIdentityProperty( const Aws::String& key,const Aws::Crt::Variant<Aws::String, bool>& value) {
    auto it = m_identityProperties.emplace(key, value);
    if(!it.second) {
      it.first->second = value;
    }
  };
  void putSignerProperty( const Aws::String& key,const Aws::Crt::Variant<Aws::String, bool>& value) {
    auto it = m_signerProperties.emplace(key, value);
    if(!it.second) {
      it.first->second = value;
    }
  };
  EndpointParameters virtual endpointParameters() const { return EndpointParameters{}; };

private:
  PropertyBag m_identityProperties;
  PropertyBag m_signerProperties;
};
}