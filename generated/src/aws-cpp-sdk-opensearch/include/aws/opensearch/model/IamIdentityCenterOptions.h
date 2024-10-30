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
   * <p>Settings for IAM Identity Center for an OpenSearch Application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/IamIdentityCenterOptions">AWS
   * API Reference</a></p>
   */
  class IamIdentityCenterOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API IamIdentityCenterOptions();
    AWS_OPENSEARCHSERVICE_API IamIdentityCenterOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API IamIdentityCenterOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IAM Identity Center is enabled for the OpenSearch Application.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline IamIdentityCenterOptions& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetIamIdentityCenterInstanceArn() const{ return m_iamIdentityCenterInstanceArn; }
    inline bool IamIdentityCenterInstanceArnHasBeenSet() const { return m_iamIdentityCenterInstanceArnHasBeenSet; }
    inline void SetIamIdentityCenterInstanceArn(const Aws::String& value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn = value; }
    inline void SetIamIdentityCenterInstanceArn(Aws::String&& value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn = std::move(value); }
    inline void SetIamIdentityCenterInstanceArn(const char* value) { m_iamIdentityCenterInstanceArnHasBeenSet = true; m_iamIdentityCenterInstanceArn.assign(value); }
    inline IamIdentityCenterOptions& WithIamIdentityCenterInstanceArn(const Aws::String& value) { SetIamIdentityCenterInstanceArn(value); return *this;}
    inline IamIdentityCenterOptions& WithIamIdentityCenterInstanceArn(Aws::String&& value) { SetIamIdentityCenterInstanceArn(std::move(value)); return *this;}
    inline IamIdentityCenterOptions& WithIamIdentityCenterInstanceArn(const char* value) { SetIamIdentityCenterInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name of the IAM Identity Center's Application created for the
     * OpenSearch Application after enabling IAM Identity Center.</p>
     */
    inline const Aws::String& GetIamRoleForIdentityCenterApplicationArn() const{ return m_iamRoleForIdentityCenterApplicationArn; }
    inline bool IamRoleForIdentityCenterApplicationArnHasBeenSet() const { return m_iamRoleForIdentityCenterApplicationArnHasBeenSet; }
    inline void SetIamRoleForIdentityCenterApplicationArn(const Aws::String& value) { m_iamRoleForIdentityCenterApplicationArnHasBeenSet = true; m_iamRoleForIdentityCenterApplicationArn = value; }
    inline void SetIamRoleForIdentityCenterApplicationArn(Aws::String&& value) { m_iamRoleForIdentityCenterApplicationArnHasBeenSet = true; m_iamRoleForIdentityCenterApplicationArn = std::move(value); }
    inline void SetIamRoleForIdentityCenterApplicationArn(const char* value) { m_iamRoleForIdentityCenterApplicationArnHasBeenSet = true; m_iamRoleForIdentityCenterApplicationArn.assign(value); }
    inline IamIdentityCenterOptions& WithIamRoleForIdentityCenterApplicationArn(const Aws::String& value) { SetIamRoleForIdentityCenterApplicationArn(value); return *this;}
    inline IamIdentityCenterOptions& WithIamRoleForIdentityCenterApplicationArn(Aws::String&& value) { SetIamRoleForIdentityCenterApplicationArn(std::move(value)); return *this;}
    inline IamIdentityCenterOptions& WithIamRoleForIdentityCenterApplicationArn(const char* value) { SetIamRoleForIdentityCenterApplicationArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetIamIdentityCenterApplicationArn() const{ return m_iamIdentityCenterApplicationArn; }
    inline bool IamIdentityCenterApplicationArnHasBeenSet() const { return m_iamIdentityCenterApplicationArnHasBeenSet; }
    inline void SetIamIdentityCenterApplicationArn(const Aws::String& value) { m_iamIdentityCenterApplicationArnHasBeenSet = true; m_iamIdentityCenterApplicationArn = value; }
    inline void SetIamIdentityCenterApplicationArn(Aws::String&& value) { m_iamIdentityCenterApplicationArnHasBeenSet = true; m_iamIdentityCenterApplicationArn = std::move(value); }
    inline void SetIamIdentityCenterApplicationArn(const char* value) { m_iamIdentityCenterApplicationArnHasBeenSet = true; m_iamIdentityCenterApplicationArn.assign(value); }
    inline IamIdentityCenterOptions& WithIamIdentityCenterApplicationArn(const Aws::String& value) { SetIamIdentityCenterApplicationArn(value); return *this;}
    inline IamIdentityCenterOptions& WithIamIdentityCenterApplicationArn(Aws::String&& value) { SetIamIdentityCenterApplicationArn(std::move(value)); return *this;}
    inline IamIdentityCenterOptions& WithIamIdentityCenterApplicationArn(const char* value) { SetIamIdentityCenterApplicationArn(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_iamIdentityCenterInstanceArn;
    bool m_iamIdentityCenterInstanceArnHasBeenSet = false;

    Aws::String m_iamRoleForIdentityCenterApplicationArn;
    bool m_iamRoleForIdentityCenterApplicationArnHasBeenSet = false;

    Aws::String m_iamIdentityCenterApplicationArn;
    bool m_iamIdentityCenterApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
