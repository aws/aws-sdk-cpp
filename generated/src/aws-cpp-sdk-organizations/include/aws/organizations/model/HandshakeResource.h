/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/HandshakeResourceType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Organizations {
namespace Model {

/**
 * <p>Contains additional details for a handshake.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/HandshakeResource">AWS
 * API Reference</a></p>
 */
class HandshakeResource {
 public:
  AWS_ORGANIZATIONS_API HandshakeResource() = default;
  AWS_ORGANIZATIONS_API HandshakeResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_ORGANIZATIONS_API HandshakeResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Additional information for the handshake. The format of the value string must
   * match the requirements of the specified type.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  HandshakeResource& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of information being passed, specifying how the value is to be
   * interpreted by the other party:</p> <ul> <li> <p> <b>ACCOUNT</b>: ID for an
   * Amazon Web Services account.</p> </li> <li> <p> <b>ORGANIZATION</b>: ID for an
   * organization.</p> </li> <li> <p> <b>EMAIL</b>: Email address for the
   * recipient.</p> </li> <li> <p> <b>OWNER_EMAIL</b>: Email address for the
   * sender.</p> </li> <li> <p> <b>OWNER_NAME</b>: Name of the sender.</p> </li> <li>
   * <p> <b>NOTES</b>: Additional text included by the sender for the recipient.</p>
   * </li> </ul>
   */
  inline HandshakeResourceType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(HandshakeResourceType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline HandshakeResource& WithType(HandshakeResourceType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of <code>HandshakeResource</code> objects. When needed, contains
   * additional details for a handshake. For example, the email address for the
   * sender.</p>
   */
  inline const Aws::Vector<HandshakeResource>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<HandshakeResource>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<HandshakeResource>>
  HandshakeResource& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = HandshakeResource>
  HandshakeResource& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  HandshakeResourceType m_type{HandshakeResourceType::NOT_SET};

  Aws::Vector<HandshakeResource> m_resources;
  bool m_valueHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
