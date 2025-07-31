/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to delete an association between a tenant and a
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteTenantResourceAssociationRequest">AWS
   * API Reference</a></p>
   */
  class DeleteTenantResourceAssociationRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API DeleteTenantResourceAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTenantResourceAssociation"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the tenant to remove the resource association from.</p>
     */
    inline const Aws::String& GetTenantName() const { return m_tenantName; }
    inline bool TenantNameHasBeenSet() const { return m_tenantNameHasBeenSet; }
    template<typename TenantNameT = Aws::String>
    void SetTenantName(TenantNameT&& value) { m_tenantNameHasBeenSet = true; m_tenantName = std::forward<TenantNameT>(value); }
    template<typename TenantNameT = Aws::String>
    DeleteTenantResourceAssociationRequest& WithTenantName(TenantNameT&& value) { SetTenantName(std::forward<TenantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource to remove from the tenant
     * association.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    DeleteTenantResourceAssociationRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tenantName;
    bool m_tenantNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
