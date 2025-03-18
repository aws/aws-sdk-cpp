/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/IamIdentityCenterUserAttribute.h>
#include <aws/opensearchserverless/model/IamIdentityCenterGroupAttribute.h>
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
    AWS_OPENSEARCHSERVERLESS_API IamIdentityCenterConfigOptions() = default;
    AWS_OPENSEARCHSERVERLESS_API IamIdentityCenterConfigOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API IamIdentityCenterConfigOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance used to integrate with OpenSearch
     * Serverless.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    IamIdentityCenterConfigOptions& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center application used to integrate with
     * OpenSearch Serverless.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    IamIdentityCenterConfigOptions& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM Identity Center application used to integrate with
     * OpenSearch Serverless.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    IamIdentityCenterConfigOptions& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the IAM Identity Center application used to integrate with
     * OpenSearch Serverless.</p>
     */
    inline const Aws::String& GetApplicationDescription() const { return m_applicationDescription; }
    inline bool ApplicationDescriptionHasBeenSet() const { return m_applicationDescriptionHasBeenSet; }
    template<typename ApplicationDescriptionT = Aws::String>
    void SetApplicationDescription(ApplicationDescriptionT&& value) { m_applicationDescriptionHasBeenSet = true; m_applicationDescription = std::forward<ApplicationDescriptionT>(value); }
    template<typename ApplicationDescriptionT = Aws::String>
    IamIdentityCenterConfigOptions& WithApplicationDescription(ApplicationDescriptionT&& value) { SetApplicationDescription(std::forward<ApplicationDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user attribute for this IAM Identity Center integration. Defaults to
     * <code>UserId</code> </p>
     */
    inline IamIdentityCenterUserAttribute GetUserAttribute() const { return m_userAttribute; }
    inline bool UserAttributeHasBeenSet() const { return m_userAttributeHasBeenSet; }
    inline void SetUserAttribute(IamIdentityCenterUserAttribute value) { m_userAttributeHasBeenSet = true; m_userAttribute = value; }
    inline IamIdentityCenterConfigOptions& WithUserAttribute(IamIdentityCenterUserAttribute value) { SetUserAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group attribute for this IAM Identity Center integration. Defaults to
     * <code>GroupId</code>.</p>
     */
    inline IamIdentityCenterGroupAttribute GetGroupAttribute() const { return m_groupAttribute; }
    inline bool GroupAttributeHasBeenSet() const { return m_groupAttributeHasBeenSet; }
    inline void SetGroupAttribute(IamIdentityCenterGroupAttribute value) { m_groupAttributeHasBeenSet = true; m_groupAttribute = value; }
    inline IamIdentityCenterConfigOptions& WithGroupAttribute(IamIdentityCenterGroupAttribute value) { SetGroupAttribute(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_applicationDescription;
    bool m_applicationDescriptionHasBeenSet = false;

    IamIdentityCenterUserAttribute m_userAttribute{IamIdentityCenterUserAttribute::NOT_SET};
    bool m_userAttributeHasBeenSet = false;

    IamIdentityCenterGroupAttribute m_groupAttribute{IamIdentityCenterGroupAttribute::NOT_SET};
    bool m_groupAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
