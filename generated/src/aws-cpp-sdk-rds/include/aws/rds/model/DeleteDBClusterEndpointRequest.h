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
  class DeleteDBClusterEndpointRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteDBClusterEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBClusterEndpoint"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier associated with the custom endpoint. This parameter is stored
     * as a lowercase string.</p>
     */
    inline const Aws::String& GetDBClusterEndpointIdentifier() const { return m_dBClusterEndpointIdentifier; }
    inline bool DBClusterEndpointIdentifierHasBeenSet() const { return m_dBClusterEndpointIdentifierHasBeenSet; }
    template<typename DBClusterEndpointIdentifierT = Aws::String>
    void SetDBClusterEndpointIdentifier(DBClusterEndpointIdentifierT&& value) { m_dBClusterEndpointIdentifierHasBeenSet = true; m_dBClusterEndpointIdentifier = std::forward<DBClusterEndpointIdentifierT>(value); }
    template<typename DBClusterEndpointIdentifierT = Aws::String>
    DeleteDBClusterEndpointRequest& WithDBClusterEndpointIdentifier(DBClusterEndpointIdentifierT&& value) { SetDBClusterEndpointIdentifier(std::forward<DBClusterEndpointIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterEndpointIdentifier;
    bool m_dBClusterEndpointIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
