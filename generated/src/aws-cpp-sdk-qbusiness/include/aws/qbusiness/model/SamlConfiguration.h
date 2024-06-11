﻿/**
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
    AWS_QBUSINESS_API SamlConfiguration();
    AWS_QBUSINESS_API SamlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API SamlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metadata XML that your IdP generated.</p>
     */
    inline const Aws::String& GetMetadataXML() const{ return m_metadataXML; }
    inline bool MetadataXMLHasBeenSet() const { return m_metadataXMLHasBeenSet; }
    inline void SetMetadataXML(const Aws::String& value) { m_metadataXMLHasBeenSet = true; m_metadataXML = value; }
    inline void SetMetadataXML(Aws::String&& value) { m_metadataXMLHasBeenSet = true; m_metadataXML = std::move(value); }
    inline void SetMetadataXML(const char* value) { m_metadataXMLHasBeenSet = true; m_metadataXML.assign(value); }
    inline SamlConfiguration& WithMetadataXML(const Aws::String& value) { SetMetadataXML(value); return *this;}
    inline SamlConfiguration& WithMetadataXML(Aws::String&& value) { SetMetadataXML(std::move(value)); return *this;}
    inline SamlConfiguration& WithMetadataXML(const char* value) { SetMetadataXML(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role assumed by users when they
     * authenticate into their Amazon Q Business web experience, containing the
     * relevant Amazon Q Business permissions for conversing with Amazon Q
     * Business.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline SamlConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline SamlConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline SamlConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user attribute name in your IdP that maps to the user email.</p>
     */
    inline const Aws::String& GetUserIdAttribute() const{ return m_userIdAttribute; }
    inline bool UserIdAttributeHasBeenSet() const { return m_userIdAttributeHasBeenSet; }
    inline void SetUserIdAttribute(const Aws::String& value) { m_userIdAttributeHasBeenSet = true; m_userIdAttribute = value; }
    inline void SetUserIdAttribute(Aws::String&& value) { m_userIdAttributeHasBeenSet = true; m_userIdAttribute = std::move(value); }
    inline void SetUserIdAttribute(const char* value) { m_userIdAttributeHasBeenSet = true; m_userIdAttribute.assign(value); }
    inline SamlConfiguration& WithUserIdAttribute(const Aws::String& value) { SetUserIdAttribute(value); return *this;}
    inline SamlConfiguration& WithUserIdAttribute(Aws::String&& value) { SetUserIdAttribute(std::move(value)); return *this;}
    inline SamlConfiguration& WithUserIdAttribute(const char* value) { SetUserIdAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group attribute name in your IdP that maps to user groups.</p>
     */
    inline const Aws::String& GetUserGroupAttribute() const{ return m_userGroupAttribute; }
    inline bool UserGroupAttributeHasBeenSet() const { return m_userGroupAttributeHasBeenSet; }
    inline void SetUserGroupAttribute(const Aws::String& value) { m_userGroupAttributeHasBeenSet = true; m_userGroupAttribute = value; }
    inline void SetUserGroupAttribute(Aws::String&& value) { m_userGroupAttributeHasBeenSet = true; m_userGroupAttribute = std::move(value); }
    inline void SetUserGroupAttribute(const char* value) { m_userGroupAttributeHasBeenSet = true; m_userGroupAttribute.assign(value); }
    inline SamlConfiguration& WithUserGroupAttribute(const Aws::String& value) { SetUserGroupAttribute(value); return *this;}
    inline SamlConfiguration& WithUserGroupAttribute(Aws::String&& value) { SetUserGroupAttribute(std::move(value)); return *this;}
    inline SamlConfiguration& WithUserGroupAttribute(const char* value) { SetUserGroupAttribute(value); return *this;}
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
