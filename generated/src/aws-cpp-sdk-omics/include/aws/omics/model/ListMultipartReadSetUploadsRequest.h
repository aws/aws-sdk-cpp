/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class ListMultipartReadSetUploadsRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListMultipartReadSetUploadsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMultipartReadSetUploads"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The Sequence Store ID used for the multipart uploads. </p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }

    /**
     * <p> The Sequence Store ID used for the multipart uploads. </p>
     */
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }

    /**
     * <p> The Sequence Store ID used for the multipart uploads. </p>
     */
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }

    /**
     * <p> The Sequence Store ID used for the multipart uploads. </p>
     */
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }

    /**
     * <p> The Sequence Store ID used for the multipart uploads. </p>
     */
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }

    /**
     * <p> The Sequence Store ID used for the multipart uploads. </p>
     */
    inline ListMultipartReadSetUploadsRequest& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p> The Sequence Store ID used for the multipart uploads. </p>
     */
    inline ListMultipartReadSetUploadsRequest& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p> The Sequence Store ID used for the multipart uploads. </p>
     */
    inline ListMultipartReadSetUploadsRequest& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}


    /**
     * <p> The maximum number of multipart uploads returned in a page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of multipart uploads returned in a page. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of multipart uploads returned in a page. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of multipart uploads returned in a page. </p>
     */
    inline ListMultipartReadSetUploadsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline ListMultipartReadSetUploadsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline ListMultipartReadSetUploadsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Next token returned in the response of a previous
     * ListMultipartReadSetUploads call. Used to get the next page of results. </p>
     */
    inline ListMultipartReadSetUploadsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
