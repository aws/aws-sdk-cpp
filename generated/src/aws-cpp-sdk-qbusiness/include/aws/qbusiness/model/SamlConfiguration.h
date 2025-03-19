/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides the SAML 2.0 compliant identity provider (IdP) configuration
   * information Amazon Q Business needs to deploy a Amazon Q Business web
   * experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/SamlConfiguration">AWS
   * API Reference</a></p>
   */
  class SamlConfiguration
  {
  public:
    AWS_QBUSINESS_API SamlConfiguration() = default;
    AWS_QBUSINESS_API SamlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API SamlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metadata XML that your IdP generated.</p>
     */
    inline const Aws::String& GetMetadataXML() const { return m_metadataXML; }
    inline bool MetadataXMLHasBeenSet() const { return m_metadataXMLHasBeenSet; }
    template<typename MetadataXMLT = Aws::String>
    void SetMetadataXML(MetadataXMLT&& value) { m_metadataXMLHasBeenSet = true; m_metadataXML = std::forward<MetadataXMLT>(value); }
    template<typename MetadataXMLT = Aws::String>
    SamlConfiguration& WithMetadataXML(MetadataXMLT&& value) { SetMetadataXML(std::forward<MetadataXMLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role assumed by users when they
     * authenticate into their Amazon Q Business web experience, containing the
     * relevant Amazon Q Business permissions for conversing with Amazon Q
     * Business.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    SamlConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user attribute name in your IdP that maps to the user email.</p>
     */
    inline const Aws::String& GetUserIdAttribute() const { return m_userIdAttribute; }
    inline bool UserIdAttributeHasBeenSet() const { return m_userIdAttributeHasBeenSet; }
    template<typename UserIdAttributeT = Aws::String>
    void SetUserIdAttribute(UserIdAttributeT&& value) { m_userIdAttributeHasBeenSet = true; m_userIdAttribute = std::forward<UserIdAttributeT>(value); }
    template<typename UserIdAttributeT = Aws::String>
    SamlConfiguration& WithUserIdAttribute(UserIdAttributeT&& value) { SetUserIdAttribute(std::forward<UserIdAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group attribute name in your IdP that maps to user groups.</p>
     */
    inline const Aws::String& GetUserGroupAttribute() const { return m_userGroupAttribute; }
    inline bool UserGroupAttributeHasBeenSet() const { return m_userGroupAttributeHasBeenSet; }
    template<typename UserGroupAttributeT = Aws::String>
    void SetUserGroupAttribute(UserGroupAttributeT&& value) { m_userGroupAttributeHasBeenSet = true; m_userGroupAttribute = std::forward<UserGroupAttributeT>(value); }
    template<typename UserGroupAttributeT = Aws::String>
    SamlConfiguration& WithUserGroupAttribute(UserGroupAttributeT&& value) { SetUserGroupAttribute(std::forward<UserGroupAttributeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metadataXML;
    bool m_metadataXMLHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_userIdAttribute;
    bool m_userIdAttributeHasBeenSet = false;

    Aws::String m_userGroupAttribute;
    bool m_userGroupAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
