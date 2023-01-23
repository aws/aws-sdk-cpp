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
    AWS_MEMORYDB_API BatchUpdateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateCluster"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The cluster names to apply the updates.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterNames() const{ return m_clusterNames; }

    /**
     * <p>The cluster names to apply the updates.</p>
     */
    inline bool ClusterNamesHasBeenSet() const { return m_clusterNamesHasBeenSet; }

    /**
     * <p>The cluster names to apply the updates.</p>
     */
    inline void SetClusterNames(const Aws::Vector<Aws::String>& value) { m_clusterNamesHasBeenSet = true; m_clusterNames = value; }

    /**
     * <p>The cluster names to apply the updates.</p>
     */
    inline void SetClusterNames(Aws::Vector<Aws::String>&& value) { m_clusterNamesHasBeenSet = true; m_clusterNames = std::move(value); }

    /**
     * <p>The cluster names to apply the updates.</p>
     */
    inline BatchUpdateClusterRequest& WithClusterNames(const Aws::Vector<Aws::String>& value) { SetClusterNames(value); return *this;}

    /**
     * <p>The cluster names to apply the updates.</p>
     */
    inline BatchUpdateClusterRequest& WithClusterNames(Aws::Vector<Aws::String>&& value) { SetClusterNames(std::move(value)); return *this;}

    /**
     * <p>The cluster names to apply the updates.</p>
     */
    inline BatchUpdateClusterRequest& AddClusterNames(const Aws::String& value) { m_clusterNamesHasBeenSet = true; m_clusterNames.push_back(value); return *this; }

    /**
     * <p>The cluster names to apply the updates.</p>
     */
    inline BatchUpdateClusterRequest& AddClusterNames(Aws::String&& value) { m_clusterNamesHasBeenSet = true; m_clusterNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The cluster names to apply the updates.</p>
     */
    inline BatchUpdateClusterRequest& AddClusterNames(const char* value) { m_clusterNamesHasBeenSet = true; m_clusterNames.push_back(value); return *this; }


    /**
     * <p>The unique ID of the service update</p>
     */
    inline const ServiceUpdateRequest& GetServiceUpdate() const{ return m_serviceUpdate; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline bool ServiceUpdateHasBeenSet() const { return m_serviceUpdateHasBeenSet; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdate(const ServiceUpdateRequest& value) { m_serviceUpdateHasBeenSet = true; m_serviceUpdate = value; }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline void SetServiceUpdate(ServiceUpdateRequest&& value) { m_serviceUpdateHasBeenSet = true; m_serviceUpdate = std::move(value); }

    /**
     * <p>The unique ID of the service update</p>
     */
    inline BatchUpdateClusterRequest& WithServiceUpdate(const ServiceUpdateRequest& value) { SetServiceUpdate(value); return *this;}

    /**
     * <p>The unique ID of the service update</p>
     */
    inline BatchUpdateClusterRequest& WithServiceUpdate(ServiceUpdateRequest&& value) { SetServiceUpdate(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_clusterNames;
    bool m_clusterNamesHasBeenSet = false;

    ServiceUpdateRequest m_serviceUpdate;
    bool m_serviceUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
