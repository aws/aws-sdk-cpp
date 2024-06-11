/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaPackage
{
namespace Model
{

  /**
   */
  class ListHarvestJobsRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API ListHarvestJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHarvestJobs"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;

    AWS_MEDIAPACKAGE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * When specified, the request will return only HarvestJobs associated with the
     * given Channel ID.
     */
    inline const Aws::String& GetIncludeChannelId() const{ return m_includeChannelId; }
    inline bool IncludeChannelIdHasBeenSet() const { return m_includeChannelIdHasBeenSet; }
    inline void SetIncludeChannelId(const Aws::String& value) { m_includeChannelIdHasBeenSet = true; m_includeChannelId = value; }
    inline void SetIncludeChannelId(Aws::String&& value) { m_includeChannelIdHasBeenSet = true; m_includeChannelId = std::move(value); }
    inline void SetIncludeChannelId(const char* value) { m_includeChannelIdHasBeenSet = true; m_includeChannelId.assign(value); }
    inline ListHarvestJobsRequest& WithIncludeChannelId(const Aws::String& value) { SetIncludeChannelId(value); return *this;}
    inline ListHarvestJobsRequest& WithIncludeChannelId(Aws::String&& value) { SetIncludeChannelId(std::move(value)); return *this;}
    inline ListHarvestJobsRequest& WithIncludeChannelId(const char* value) { SetIncludeChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * When specified, the request will return only HarvestJobs in the given status.
     */
    inline const Aws::String& GetIncludeStatus() const{ return m_includeStatus; }
    inline bool IncludeStatusHasBeenSet() const { return m_includeStatusHasBeenSet; }
    inline void SetIncludeStatus(const Aws::String& value) { m_includeStatusHasBeenSet = true; m_includeStatus = value; }
    inline void SetIncludeStatus(Aws::String&& value) { m_includeStatusHasBeenSet = true; m_includeStatus = std::move(value); }
    inline void SetIncludeStatus(const char* value) { m_includeStatusHasBeenSet = true; m_includeStatus.assign(value); }
    inline ListHarvestJobsRequest& WithIncludeStatus(const Aws::String& value) { SetIncludeStatus(value); return *this;}
    inline ListHarvestJobsRequest& WithIncludeStatus(Aws::String&& value) { SetIncludeStatus(std::move(value)); return *this;}
    inline ListHarvestJobsRequest& WithIncludeStatus(const char* value) { SetIncludeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * The upper bound on the number of records to return.
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListHarvestJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListHarvestJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHarvestJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHarvestJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_includeChannelId;
    bool m_includeChannelIdHasBeenSet = false;

    Aws::String m_includeStatus;
    bool m_includeStatusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
