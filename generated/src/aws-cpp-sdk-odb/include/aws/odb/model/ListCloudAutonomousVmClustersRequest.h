/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace odb
{
namespace Model
{

  /**
   */
  class ListCloudAutonomousVmClustersRequest : public OdbRequest
  {
  public:
    AWS_ODB_API ListCloudAutonomousVmClustersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCloudAutonomousVmClusters"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The maximum number of items to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCloudAutonomousVmClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token to continue listing from.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCloudAutonomousVmClustersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Cloud Exadata Infrastructure that hosts the
     * Autonomous VM clusters to be listed.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
    inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { m_cloudExadataInfrastructureIdHasBeenSet = true; m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value); }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    ListCloudAutonomousVmClustersRequest& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_cloudExadataInfrastructureId;
    bool m_cloudExadataInfrastructureIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
