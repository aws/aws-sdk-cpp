/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Authentication.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Represents an entity that interacts with the system during security
 * testing</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/Actor">AWS
 * API Reference</a></p>
 */
class Actor {
 public:
  AWS_SECURITYAGENT_API Actor() = default;
  AWS_SECURITYAGENT_API Actor(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Actor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier for the actor (case-insensitive)</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  Actor& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of URIs accessible with the actor's credentials</p>
   */
  inline const Aws::Vector<Aws::String>& GetUris() const { return m_uris; }
  inline bool UrisHasBeenSet() const { return m_urisHasBeenSet; }
  template <typename UrisT = Aws::Vector<Aws::String>>
  void SetUris(UrisT&& value) {
    m_urisHasBeenSet = true;
    m_uris = std::forward<UrisT>(value);
  }
  template <typename UrisT = Aws::Vector<Aws::String>>
  Actor& WithUris(UrisT&& value) {
    SetUris(std::forward<UrisT>(value));
    return *this;
  }
  template <typename UrisT = Aws::String>
  Actor& AddUris(UrisT&& value) {
    m_urisHasBeenSet = true;
    m_uris.emplace_back(std::forward<UrisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Authentication information used by the actor to access resources</p>
   */
  inline const Authentication& GetAuthentication() const { return m_authentication; }
  inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
  template <typename AuthenticationT = Authentication>
  void SetAuthentication(AuthenticationT&& value) {
    m_authenticationHasBeenSet = true;
    m_authentication = std::forward<AuthenticationT>(value);
  }
  template <typename AuthenticationT = Authentication>
  Actor& WithAuthentication(AuthenticationT&& value) {
    SetAuthentication(std::forward<AuthenticationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional description or details about the actor</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  Actor& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::Vector<Aws::String> m_uris;

  Authentication m_authentication;

  Aws::String m_description;
  bool m_identifierHasBeenSet = false;
  bool m_urisHasBeenSet = false;
  bool m_authenticationHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
