/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace odb
{
namespace Model
{

  /**
   */
  class GetCloudExadataInfrastructureUnallocatedResourcesRequest : public OdbRequest
  {
  public:
    AWS_ODB_API GetCloudExadataInfrastructureUnallocatedResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCloudExadataInfrastructureUnallocatedResources"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Cloud Exadata infrastructure for which to
     * retrieve unallocated resources.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
    inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { m_cloudExadataInfrastructureIdHasBeenSet = true; m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value); }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    GetCloudExadataInfrastructureUnallocatedResourcesRequest& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database servers to include in the unallocated resources query.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbServers() const { return m_dbServers; }
    inline bool DbServersHasBeenSet() const { return m_dbServersHasBeenSet; }
    template<typename DbServersT = Aws::Vector<Aws::String>>
    void SetDbServers(DbServersT&& value) { m_dbServersHasBeenSet = true; m_dbServers = std::forward<DbServersT>(value); }
    template<typename DbServersT = Aws::Vector<Aws::String>>
    GetCloudExadataInfrastructureUnallocatedResourcesRequest& WithDbServers(DbServersT&& value) { SetDbServers(std::forward<DbServersT>(value)); return *this;}
    template<typename DbServersT = Aws::String>
    GetCloudExadataInfrastructureUnallocatedResourcesRequest& AddDbServers(DbServersT&& value) { m_dbServersHasBeenSet = true; m_dbServers.emplace_back(std::forward<DbServersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cloudExadataInfrastructureId;
    bool m_cloudExadataInfrastructureIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_dbServers;
    bool m_dbServersHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
