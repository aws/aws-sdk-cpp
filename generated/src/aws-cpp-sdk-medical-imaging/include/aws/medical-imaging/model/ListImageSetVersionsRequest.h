/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MedicalImaging
{
namespace Model
{

  /**
   */
  class ListImageSetVersionsRequest : public MedicalImagingRequest
  {
  public:
    AWS_MEDICALIMAGING_API ListImageSetVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImageSetVersions"; }

    AWS_MEDICALIMAGING_API Aws::String SerializePayload() const override;

    AWS_MEDICALIMAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The data store identifier.</p>
     */
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline ListImageSetVersionsRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline ListImageSetVersionsRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline ListImageSetVersionsRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The image set identifier.</p>
     */
    inline const Aws::String& GetImageSetId() const{ return m_imageSetId; }

    /**
     * <p>The image set identifier.</p>
     */
    inline bool ImageSetIdHasBeenSet() const { return m_imageSetIdHasBeenSet; }

    /**
     * <p>The image set identifier.</p>
     */
    inline void SetImageSetId(const Aws::String& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = value; }

    /**
     * <p>The image set identifier.</p>
     */
    inline void SetImageSetId(Aws::String&& value) { m_imageSetIdHasBeenSet = true; m_imageSetId = std::move(value); }

    /**
     * <p>The image set identifier.</p>
     */
    inline void SetImageSetId(const char* value) { m_imageSetIdHasBeenSet = true; m_imageSetId.assign(value); }

    /**
     * <p>The image set identifier.</p>
     */
    inline ListImageSetVersionsRequest& WithImageSetId(const Aws::String& value) { SetImageSetId(value); return *this;}

    /**
     * <p>The image set identifier.</p>
     */
    inline ListImageSetVersionsRequest& WithImageSetId(Aws::String&& value) { SetImageSetId(std::move(value)); return *this;}

    /**
     * <p>The image set identifier.</p>
     */
    inline ListImageSetVersionsRequest& WithImageSetId(const char* value) { SetImageSetId(value); return *this;}


    /**
     * <p>The pagination token used to request the list of image set versions on the
     * next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to request the list of image set versions on the
     * next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token used to request the list of image set versions on the
     * next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token used to request the list of image set versions on the
     * next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to request the list of image set versions on the
     * next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to request the list of image set versions on the
     * next page.</p>
     */
    inline ListImageSetVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to request the list of image set versions on the
     * next page.</p>
     */
    inline ListImageSetVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to request the list of image set versions on the
     * next page.</p>
     */
    inline ListImageSetVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The max results count.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The max results count.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The max results count.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The max results count.</p>
     */
    inline ListImageSetVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_imageSetId;
    bool m_imageSetIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
