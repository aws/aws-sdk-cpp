/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/IamIdentityCenterGroupAttribute.h>
#include <aws/opensearchserverless/model/IamIdentityCenterUserAttribute.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Describes IAM Identity Center options for an OpenSearch Serverless security
   * configuration in the form of a key-value map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/IamIdentityCenterConfigOptions">AWS
   * API Reference</a></p>
   */
  class IamIdentityCenterConfigOptions
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API IamIdentityCenterConfigOptions();
    AWS_OPENSEARCHSERVERLESS_API IamIdentityCenterConfigOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API IamIdentityCenterConfigOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM Identity Center application used to integrate with
     * OpenSearch Serverless.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }
    inline IamIdentityCenterConfigOptions& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline IamIdentityCenterConfigOptions& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline IamIdentityCenterConfigOptions& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the IAM Identity Center application used to integrate with
     * OpenSearch Serverless.</p>
     */
    inline const Aws::String& GetApplicationDescription() const{ return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    inline void SetApplicationDescription(const Aws::String& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = value; }
    inline void SetApplicationDescription(Aws::String&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::move(value); }
    inline void SetApplicationDescription(const char* value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription.assign(value); }
    inline IamIdentityCenterConfigOptions& WithApplicationDescription(const Aws::String& value) { SetApplicationDescription(value); return *this;}
    inline IamIdentityCenterConfigOptions& WithApplicationDescription(Aws::String&& value) { SetApplicationDescription(std::move(value)); return *this;}
    inline IamIdentityCenterConfigOptions& WithApplicationDescription(const char* value) { SetApplicationDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM Identity Center application used to integrate with
     * OpenSearch Serverless.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline IamIdentityCenterConfigOptions& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline IamIdentityCenterConfigOptions& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline IamIdentityCenterConfigOptions& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group attribute for this IAM Identity Center integration. Defaults to
     * <code>GroupId</code>.</p>
     */
    inline const IamIdentityCenterGroupAttribute& GetGroupAttribute() const{ return m_groupAttribute; }
    inline bool GroupAttributeHasBeenSet() const { return m_groupAttributeHasBeenSet; }
    inline void SetGroupAttribute(const IamIdentityCenterGroupAttribute& value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = value; }
    inline void SetGroupAttribute(IamIdentityCenterGroupAttribute&& value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = std::move(value); }
    inline IamIdentityCenterConfigOptions& WithGroupAttribute(const IamIdentityCenterGroupAttribute& value) { SetGroupAttribute(value); return *this;}
    inline IamIdentityCenterConfigOptions& WithGroupAttribute(IamIdentityCenterGroupAttribute&& value) { SetGroupAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance used to integrate with OpenSearch
     * Serverless.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }
    inline IamIdentityCenterConfigOptions& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline IamIdentityCenterConfigOptions& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline IamIdentityCenterConfigOptions& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user attribute for this IAM Identity Center integration. Defaults to
     * <code>UserId</code> </p>
     */
    inline const IamIdentityCenterUserAttribute& GetUserAttribute() const{ return m_userAttribute; }
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }
    inline void SetUserAttribute(const IamIdentityCenterUserAttribute& value) { m_userAttributeHasBeenSet = true; m_userAttribute = value; }
    inline void SetUserAttribute(IamIdentityCenterUserAttribute&& value) { m_userAttributeHasBeenSet = true; m_userAttribute = std::move(value); }
    inline IamIdentityCenterConfigOptions& WithUserAttribute(const IamIdentityCenterUserAttribute& value) { SetUserAttribute(value); return *this;}
    inline IamIdentityCenterConfigOptions& WithUserAttribute(IamIdentityCenterUserAttribute&& value) { SetUserAttribute(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    IamIdentityCenterGroupAttribute m_groupAttribute;
    bool m_groupAttributeHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    IamIdentityCenterUserAttribute m_userAttribute;
    bool m_userAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
