/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso-admin/model/AccessControlAttribute.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>Specifies the attributes to add to your attribute-based access control (ABAC)
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/InstanceAccessControlAttributeConfiguration">AWS
   * API Reference</a></p>
   */
  class InstanceAccessControlAttributeConfiguration
  {
  public:
    AWS_SSOADMIN_API InstanceAccessControlAttributeConfiguration() = default;
    AWS_SSOADMIN_API InstanceAccessControlAttributeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API InstanceAccessControlAttributeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lists the attributes that are configured for ABAC in the specified IAM
     * Identity Center instance.</p>
     */
    inline const Aws::Vector<AccessControlAttribute>& GetAccessControlAttributes() const { return m_accessControlAttributes; }
    inline bool AccessControlAttributesHasBeenSet() const { return m_accessControlAttributesHasBeenSet; }
    template<typename AccessControlAttributesT = Aws::Vector<AccessControlAttribute>>
    void SetAccessControlAttributes(AccessControlAttributesT&& value) { m_accessControlAttributesHasBeenSet = true; m_accessControlAttributes = std::forward<AccessControlAttributesT>(value); }
    template<typename AccessControlAttributesT = Aws::Vector<AccessControlAttribute>>
    InstanceAccessControlAttributeConfiguration& WithAccessControlAttributes(AccessControlAttributesT&& value) { SetAccessControlAttributes(std::forward<AccessControlAttributesT>(value)); return *this;}
    template<typename AccessControlAttributesT = AccessControlAttribute>
    InstanceAccessControlAttributeConfiguration& AddAccessControlAttributes(AccessControlAttributesT&& value) { m_accessControlAttributesHasBeenSet = true; m_accessControlAttributes.emplace_back(std::forward<AccessControlAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AccessControlAttribute> m_accessControlAttributes;
    bool m_accessControlAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
