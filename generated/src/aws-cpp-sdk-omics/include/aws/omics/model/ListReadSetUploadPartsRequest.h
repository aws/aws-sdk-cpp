/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetPartSource.h>
#include <aws/omics/model/ReadSetUploadPartListFilter.h>
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
  class ListReadSetUploadPartsRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListReadSetUploadPartsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReadSetUploadParts"; }

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
    inline ListReadSetUploadPartsRequest& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p> The Sequence Store ID used for the multipart uploads. </p>
     */
    inline ListReadSetUploadPartsRequest& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p> The Sequence Store ID used for the multipart uploads. </p>
     */
    inline ListReadSetUploadPartsRequest& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}


    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline ListReadSetUploadPartsRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline ListReadSetUploadPartsRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p> The ID for the initiated multipart upload. </p>
     */
    inline ListReadSetUploadPartsRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * <p> The source file for the upload part. </p>
     */
    inline const ReadSetPartSource& GetPartSource() const{ return m_partSource; }

    /**
     * <p> The source file for the upload part. </p>
     */
    inline bool PartSourceHasBeenSet() const { return m_partSourceHasBeenSet; }

    /**
     * <p> The source file for the upload part. </p>
     */
    inline void SetPartSource(const ReadSetPartSource& value) { m_partSourceHasBeenSet = true; m_partSource = value; }

    /**
     * <p> The source file for the upload part. </p>
     */
    inline void SetPartSource(ReadSetPartSource&& value) { m_partSourceHasBeenSet = true; m_partSource = std::move(value); }

    /**
     * <p> The source file for the upload part. </p>
     */
    inline ListReadSetUploadPartsRequest& WithPartSource(const ReadSetPartSource& value) { SetPartSource(value); return *this;}

    /**
     * <p> The source file for the upload part. </p>
     */
    inline ListReadSetUploadPartsRequest& WithPartSource(ReadSetPartSource&& value) { SetPartSource(std::move(value)); return *this;}


    /**
     * <p> The maximum number of read set upload parts returned in a page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of read set upload parts returned in a page. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of read set upload parts returned in a page. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of read set upload parts returned in a page. </p>
     */
    inline ListReadSetUploadPartsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline ListReadSetUploadPartsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline ListReadSetUploadPartsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Next token returned in the response of a previous
     * ListReadSetUploadPartsRequest call. Used to get the next page of results. </p>
     */
    inline ListReadSetUploadPartsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Attributes used to filter for a specific subset of read set part uploads.
     * </p>
     */
    inline const ReadSetUploadPartListFilter& GetFilter() const{ return m_filter; }

    /**
     * <p> Attributes used to filter for a specific subset of read set part uploads.
     * </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p> Attributes used to filter for a specific subset of read set part uploads.
     * </p>
     */
    inline void SetFilter(const ReadSetUploadPartListFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p> Attributes used to filter for a specific subset of read set part uploads.
     * </p>
     */
    inline void SetFilter(ReadSetUploadPartListFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p> Attributes used to filter for a specific subset of read set part uploads.
     * </p>
     */
    inline ListReadSetUploadPartsRequest& WithFilter(const ReadSetUploadPartListFilter& value) { SetFilter(value); return *this;}

    /**
     * <p> Attributes used to filter for a specific subset of read set part uploads.
     * </p>
     */
    inline ListReadSetUploadPartsRequest& WithFilter(ReadSetUploadPartListFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    ReadSetPartSource m_partSource;
    bool m_partSourceHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ReadSetUploadPartListFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
