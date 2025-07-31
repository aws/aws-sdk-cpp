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
   * <p>Represents a request to delete a tenant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeleteTenantRequest">AWS
   * API Reference</a></p>
   */
  class DeleteTenantRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API DeleteTenantRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTenant"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the tenant to delete.</p>
     */
    inline const Aws::String& GetTenantName() const { return m_tenantName; }
    inline bool TenantNameHasBeenSet() const { return m_tenantNameHasBeenSet; }
    template<typename TenantNameT = Aws::String>
    void SetTenantName(TenantNameT&& value) { m_tenantNameHasBeenSet = true; m_tenantName = std::forward<TenantNameT>(value); }
    template<typename TenantNameT = Aws::String>
    DeleteTenantRequest& WithTenantName(TenantNameT&& value) { SetTenantName(std::forward<TenantNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tenantName;
    bool m_tenantNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
