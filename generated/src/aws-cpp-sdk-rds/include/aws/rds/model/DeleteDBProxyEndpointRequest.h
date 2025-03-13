/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DeleteDBProxyEndpointRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteDBProxyEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBProxyEndpoint"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB proxy endpoint to delete.</p>
     */
    inline const Aws::String& GetDBProxyEndpointName() const { return m_dBProxyEndpointName; }
    inline bool DBProxyEndpointNameHasBeenSet() const { return m_dBProxyEndpointNameHasBeenSet; }
    template<typename DBProxyEndpointNameT = Aws::String>
    void SetDBProxyEndpointName(DBProxyEndpointNameT&& value) { m_dBProxyEndpointNameHasBeenSet = true; m_dBProxyEndpointName = std::forward<DBProxyEndpointNameT>(value); }
    template<typename DBProxyEndpointNameT = Aws::String>
    DeleteDBProxyEndpointRequest& WithDBProxyEndpointName(DBProxyEndpointNameT&& value) { SetDBProxyEndpointName(std::forward<DBProxyEndpointNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBProxyEndpointName;
    bool m_dBProxyEndpointNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
