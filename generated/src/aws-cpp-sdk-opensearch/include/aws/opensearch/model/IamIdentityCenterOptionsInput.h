/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Configuration settings for enabling and managing IAM Identity
   * Center.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/IamIdentityCenterOptionsInput">AWS
   * API Reference</a></p>
   */
  class IamIdentityCenterOptionsInput
  {
  public:
    AWS_OPENSEARCHSERVICE_API IamIdentityCenterOptionsInput() = default;
    AWS_OPENSEARCHSERVICE_API IamIdentityCenterOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API IamIdentityCenterOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether IAM Identity Center is enabled or disabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline IamIdentityCenterOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetIamIdentityCenterInstanceArn() const { return m_iamIdentityCenterInstanceArn; }
    inline bool IamIdentityCenterInstanceArnHasBeenSet() const { return m_iamIdentityCenterInstanceArnHasBeenSet; }
    template<typename IamIdentityCenterInstanceArnT = Aws::String>
    void SetIamIdentityCenterInstanceArn(IamIdentityCenterInstanceArnT&& value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn = std::forward<IamIdentityCenterInstanceArnT>(value); }
    template<typename IamIdentityCenterInstanceArnT = Aws::String>
    IamIdentityCenterOptionsInput& WithIamIdentityCenterInstanceArn(IamIdentityCenterInstanceArnT&& value) { SetIamIdentityCenterInstanceArn(std::forward<IamIdentityCenterInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role associated with the IAM Identity Center
     * application.</p>
     */
    inline const Aws::String& GetIamRoleForIdentityCenterApplicationArn() const { return m_iamRoleForIdentityCenterApplicationArn; }
    inline bool IamRoleForIdentityCenterApplicationArnHasBeenSet() const { return m_iamRoleForIdentityCenterApplicationArnHasBeenSet; }
    template<typename IamRoleForIdentityCenterApplicationArnT = Aws::String>
    void SetIamRoleForIdentityCenterApplicationArn(IamRoleForIdentityCenterApplicationArnT&& value) { m_iamRoleForIdentityCenterApplicationArnHasBeenSet = true; m_iamRoleForIdentityCenterApplicationArn = std::forward<IamRoleForIdentityCenterApplicationArnT>(value); }
    template<typename IamRoleForIdentityCenterApplicationArnT = Aws::String>
    IamIdentityCenterOptionsInput& WithIamRoleForIdentityCenterApplicationArn(IamRoleForIdentityCenterApplicationArnT&& value) { SetIamRoleForIdentityCenterApplicationArn(std::forward<IamRoleForIdentityCenterApplicationArnT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_iamIdentityCenterInstanceArn;
    bool m_iamIdentityCenterInstanceArnHasBeenSet = false;

    Aws::String m_iamRoleForIdentityCenterApplicationArn;
    bool m_iamRoleForIdentityCenterApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
