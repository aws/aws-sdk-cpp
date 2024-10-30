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
   * <p>Settings for IAM Identity Center.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/IamIdentityCenterOptionsInput">AWS
   * API Reference</a></p>
   */
  class IamIdentityCenterOptionsInput
  {
  public:
    AWS_OPENSEARCHSERVICE_API IamIdentityCenterOptionsInput();
    AWS_OPENSEARCHSERVICE_API IamIdentityCenterOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API IamIdentityCenterOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enable/disable settings for IAM Identity Center.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline IamIdentityCenterOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetIamIdentityCenterInstanceArn() const{ return m_iamIdentityCenterInstanceArn; }
    inline bool IamIdentityCenterInstanceArnHasBeenSet() const { return m_iamIdentityCenterInstanceArnHasBeenSet; }
    inline void SetIamIdentityCenterInstanceArn(const Aws::String& value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn = value; }
    inline void SetIamIdentityCenterInstanceArn(Aws::String&& value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn = std::move(value); }
    inline void SetIamIdentityCenterInstanceArn(const char* value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn.assign(value); }
    inline IamIdentityCenterOptionsInput& WithIamIdentityCenterInstanceArn(const Aws::String& value) { SetIamIdentityCenterInstanceArn(value); return *this;}
    inline IamIdentityCenterOptionsInput& WithIamIdentityCenterInstanceArn(Aws::String&& value) { SetIamIdentityCenterInstanceArn(std::move(value)); return *this;}
    inline IamIdentityCenterOptionsInput& WithIamIdentityCenterInstanceArn(const char* value) { SetIamIdentityCenterInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name of IAM Identity Center's application.</p>
     */
    inline const Aws::String& GetIamRoleForIdentityCenterApplicationArn() const{ return m_iamRoleForIdentityCenterApplicationArn; }
    inline bool IamRoleForIdentityCenterApplicationArnHasBeenSet() const { return m_iamRoleForIdentityCenterApplicationArnHasBeenSet; }
    inline void SetIamRoleForIdentityCenterApplicationArn(const Aws::String& value) { m_iamRoleForIdentityCenterApplicationArnHasBeenSet = true; m_iamRoleForIdentityCenterApplicationArn = value; }
    inline void SetIamRoleForIdentityCenterApplicationArn(Aws::String&& value) { m_iamRoleForIdentityCenterApplicationArnHasBeenSet = true; m_iamRoleForIdentityCenterApplicationArn = std::move(value); }
    inline void SetIamRoleForIdentityCenterApplicationArn(const char* value) { m_iamRoleForIdentityCenterApplicationArnHasBeenSet = true; m_iamRoleForIdentityCenterApplicationArn.assign(value); }
    inline IamIdentityCenterOptionsInput& WithIamRoleForIdentityCenterApplicationArn(const Aws::String& value) { SetIamRoleForIdentityCenterApplicationArn(value); return *this;}
    inline IamIdentityCenterOptionsInput& WithIamRoleForIdentityCenterApplicationArn(Aws::String&& value) { SetIamRoleForIdentityCenterApplicationArn(std::move(value)); return *this;}
    inline IamIdentityCenterOptionsInput& WithIamRoleForIdentityCenterApplicationArn(const char* value) { SetIamRoleForIdentityCenterApplicationArn(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_iamIdentityCenterInstanceArn;
    bool m_iamIdentityCenterInstanceArnHasBeenSet = false;

    Aws::String m_iamRoleForIdentityCenterApplicationArn;
    bool m_iamRoleForIdentityCenterApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
