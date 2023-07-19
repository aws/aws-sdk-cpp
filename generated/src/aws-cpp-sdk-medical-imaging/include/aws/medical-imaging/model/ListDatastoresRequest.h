/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/medical-imaging/model/DatastoreStatus.h>
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
  class ListDatastoresRequest : public MedicalImagingRequest
  {
  public:
    AWS_MEDICALIMAGING_API ListDatastoresRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatastores"; }

    AWS_MEDICALIMAGING_API Aws::String SerializePayload() const override;

    AWS_MEDICALIMAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The data store status.</p>
     */
    inline const DatastoreStatus& GetDatastoreStatus() const{ return m_datastoreStatus; }

    /**
     * <p>The data store status.</p>
     */
    inline bool DatastoreStatusHasBeenSet() const { return m_datastoreStatusHasBeenSet; }

    /**
     * <p>The data store status.</p>
     */
    inline void SetDatastoreStatus(const DatastoreStatus& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = value; }

    /**
     * <p>The data store status.</p>
     */
    inline void SetDatastoreStatus(DatastoreStatus&& value) { m_datastoreStatusHasBeenSet = true; m_datastoreStatus = std::move(value); }

    /**
     * <p>The data store status.</p>
     */
    inline ListDatastoresRequest& WithDatastoreStatus(const DatastoreStatus& value) { SetDatastoreStatus(value); return *this;}

    /**
     * <p>The data store status.</p>
     */
    inline ListDatastoresRequest& WithDatastoreStatus(DatastoreStatus&& value) { SetDatastoreStatus(std::move(value)); return *this;}


    /**
     * <p>The pagination token used to request the list of data stores on the next
     * page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to request the list of data stores on the next
     * page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token used to request the list of data stores on the next
     * page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token used to request the list of data stores on the next
     * page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to request the list of data stores on the next
     * page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to request the list of data stores on the next
     * page.</p>
     */
    inline ListDatastoresRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to request the list of data stores on the next
     * page.</p>
     */
    inline ListDatastoresRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to request the list of data stores on the next
     * page.</p>
     */
    inline ListDatastoresRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Valid Range: Minimum value of 1. Maximum value of 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Valid Range: Minimum value of 1. Maximum value of 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Valid Range: Minimum value of 1. Maximum value of 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Valid Range: Minimum value of 1. Maximum value of 50.</p>
     */
    inline ListDatastoresRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    DatastoreStatus m_datastoreStatus;
    bool m_datastoreStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
