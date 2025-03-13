/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/HandshakeResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains additional data that is needed to process a handshake.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/HandshakeResource">AWS
   * API Reference</a></p>
   */
  class HandshakeResource
  {
  public:
    AWS_ORGANIZATIONS_API HandshakeResource() = default;
    AWS_ORGANIZATIONS_API HandshakeResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API HandshakeResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The information that is passed to the other party in the handshake. The
     * format of the value string must match the requirements of the specified
     * type.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    HandshakeResource& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of information being passed, specifying how the value is to be
     * interpreted by the other party:</p> <ul> <li> <p> <code>ACCOUNT</code> -
     * Specifies an Amazon Web Services account ID number.</p> </li> <li> <p>
     * <code>ORGANIZATION</code> - Specifies an organization ID number.</p> </li> <li>
     * <p> <code>EMAIL</code> - Specifies the email address that is associated with the
     * account that receives the handshake. </p> </li> <li> <p>
     * <code>OWNER_EMAIL</code> - Specifies the email address associated with the
     * management account. Included as information about an organization. </p> </li>
     * <li> <p> <code>OWNER_NAME</code> - Specifies the name associated with the
     * management account. Included as information about an organization. </p> </li>
     * <li> <p> <code>NOTES</code> - Additional text provided by the handshake
     * initiator and intended for the recipient to read.</p> </li> </ul>
     */
    inline HandshakeResourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(HandshakeResourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline HandshakeResource& WithType(HandshakeResourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When needed, contains an additional array of <code>HandshakeResource</code>
     * objects.</p>
     */
    inline const Aws::Vector<HandshakeResource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<HandshakeResource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<HandshakeResource>>
    HandshakeResource& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = HandshakeResource>
    HandshakeResource& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    HandshakeResourceType m_type{HandshakeResourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<HandshakeResource> m_resources;
    bool m_resourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
