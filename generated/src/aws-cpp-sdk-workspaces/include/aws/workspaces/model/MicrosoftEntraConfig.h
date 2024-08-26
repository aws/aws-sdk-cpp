/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Specifies the configurations of the Microsoft Entra.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/MicrosoftEntraConfig">AWS
   * API Reference</a></p>
   */
  class MicrosoftEntraConfig
  {
  public:
    AWS_WORKSPACES_API MicrosoftEntraConfig();
    AWS_WORKSPACES_API MicrosoftEntraConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API MicrosoftEntraConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the tenant.</p>
     */
    inline const Aws::String& GetTenantId() const{ return m_tenantId; }
    inline bool TenantIdHasBeenSet() const { return m_tenantIdHasBeenSet; }
    inline void SetTenantId(const Aws::String& value) { m_tenantIdHasBeenSet = true; m_tenantId = value; }
    inline void SetTenantId(Aws::String&& value) { m_tenantIdHasBeenSet = true; m_tenantId = std::move(value); }
    inline void SetTenantId(const char* value) { m_tenantIdHasBeenSet = true; m_tenantId.assign(value); }
    inline MicrosoftEntraConfig& WithTenantId(const Aws::String& value) { SetTenantId(value); return *this;}
    inline MicrosoftEntraConfig& WithTenantId(Aws::String&& value) { SetTenantId(std::move(value)); return *this;}
    inline MicrosoftEntraConfig& WithTenantId(const char* value) { SetTenantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application config.</p>
     */
    inline const Aws::String& GetApplicationConfigSecretArn() const{ return m_applicationConfigSecretArn; }
    inline bool ApplicationConfigSecretArnHasBeenSet() const { return m_applicationConfigSecretArnHasBeenSet; }
    inline void SetApplicationConfigSecretArn(const Aws::String& value) { m_applicationConfigSecretArnHasBeenSet = true; m_applicationConfigSecretArn = value; }
    inline void SetApplicationConfigSecretArn(Aws::String&& value) { m_applicationConfigSecretArnHasBeenSet = true; m_applicationConfigSecretArn = std::move(value); }
    inline void SetApplicationConfigSecretArn(const char* value) { m_applicationConfigSecretArnHasBeenSet = true; m_applicationConfigSecretArn.assign(value); }
    inline MicrosoftEntraConfig& WithApplicationConfigSecretArn(const Aws::String& value) { SetApplicationConfigSecretArn(value); return *this;}
    inline MicrosoftEntraConfig& WithApplicationConfigSecretArn(Aws::String&& value) { SetApplicationConfigSecretArn(std::move(value)); return *this;}
    inline MicrosoftEntraConfig& WithApplicationConfigSecretArn(const char* value) { SetApplicationConfigSecretArn(value); return *this;}
    ///@}
  private:

    Aws::String m_tenantId;
    bool m_tenantIdHasBeenSet = false;

    Aws::String m_applicationConfigSecretArn;
    bool m_applicationConfigSecretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
