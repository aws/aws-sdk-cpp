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
  class ListDbServersRequest : public OdbRequest
  {
  public:
    AWS_ODB_API ListDbServersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDbServers"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Oracle Exadata infrastructure.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
    inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { m_cloudExadataInfrastructureIdHasBeenSet = true; m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value); }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    ListDbServersRequest& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output.</p>
     * <p>Default: <code>10</code> </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDbServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDbServersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudExadataInfrastructureId;
    bool m_cloudExadataInfrastructureIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
