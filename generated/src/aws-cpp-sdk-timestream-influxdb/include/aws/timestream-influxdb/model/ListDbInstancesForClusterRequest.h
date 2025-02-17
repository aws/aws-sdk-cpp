/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   */
  class ListDbInstancesForClusterRequest : public TimestreamInfluxDBRequest
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API ListDbInstancesForClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDbInstancesForCluster"; }

    AWS_TIMESTREAMINFLUXDB_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMINFLUXDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Service-generated unique identifier of the DB cluster.</p>
     */
    inline const Aws::String& GetDbClusterId() const{ return m_dbClusterId; }
    inline bool DbClusterIdHasBeenSet() const { return m_dbClusterIdHasBeenSet; }
    inline void SetDbClusterId(const Aws::String& value) { m_dbClusterIdHasBeenSet = true; m_dbClusterId = value; }
    inline void SetDbClusterId(Aws::String&& value) { m_dbClusterIdHasBeenSet = true; m_dbClusterId = std::move(value); }
    inline void SetDbClusterId(const char* value) { m_dbClusterIdHasBeenSet = true; m_dbClusterId.assign(value); }
    inline ListDbInstancesForClusterRequest& WithDbClusterId(const Aws::String& value) { SetDbClusterId(value); return *this;}
    inline ListDbInstancesForClusterRequest& WithDbClusterId(Aws::String&& value) { SetDbClusterId(std::move(value)); return *this;}
    inline ListDbInstancesForClusterRequest& WithDbClusterId(const char* value) { SetDbClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token. To resume pagination, provide the nextToken value as an
     * argument of a subsequent API invocation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDbInstancesForClusterRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDbInstancesForClusterRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDbInstancesForClusterRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return in the output. If the total number of
     * items available is more than the value specified, a nextToken is provided in the
     * output. To resume pagination, provide the nextToken value as an argument of a
     * subsequent API invocation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDbInstancesForClusterRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_dbClusterId;
    bool m_dbClusterIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
