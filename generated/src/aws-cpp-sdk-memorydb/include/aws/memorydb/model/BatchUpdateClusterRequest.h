/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ServiceUpdateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class BatchUpdateClusterRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API BatchUpdateClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateCluster"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The cluster names to apply the updates.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterNames() const { return m_clusterNames; }
    inline bool ClusterNamesHasBeenSet() const { return m_clusterNamesHasBeenSet; }
    template<typename ClusterNamesT = Aws::Vector<Aws::String>>
    void SetClusterNames(ClusterNamesT&& value) { m_clusterNamesHasBeenSet = true; m_clusterNames = std::forward<ClusterNamesT>(value); }
    template<typename ClusterNamesT = Aws::Vector<Aws::String>>
    BatchUpdateClusterRequest& WithClusterNames(ClusterNamesT&& value) { SetClusterNames(std::forward<ClusterNamesT>(value)); return *this;}
    template<typename ClusterNamesT = Aws::String>
    BatchUpdateClusterRequest& AddClusterNames(ClusterNamesT&& value) { m_clusterNamesHasBeenSet = true; m_clusterNames.emplace_back(std::forward<ClusterNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique ID of the service update</p>
     */
    inline const ServiceUpdateRequest& GetServiceUpdate() const { return m_serviceUpdate; }
    inline bool ServiceUpdateHasBeenSet() const { return m_serviceUpdateHasBeenSet; }
    template<typename ServiceUpdateT = ServiceUpdateRequest>
    void SetServiceUpdate(ServiceUpdateT&& value) { m_serviceUpdateHasBeenSet = true; m_serviceUpdate = std::forward<ServiceUpdateT>(value); }
    template<typename ServiceUpdateT = ServiceUpdateRequest>
    BatchUpdateClusterRequest& WithServiceUpdate(ServiceUpdateT&& value) { SetServiceUpdate(std::forward<ServiceUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_clusterNames;
    bool m_clusterNamesHasBeenSet = false;

    ServiceUpdateRequest m_serviceUpdate;
    bool m_serviceUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
