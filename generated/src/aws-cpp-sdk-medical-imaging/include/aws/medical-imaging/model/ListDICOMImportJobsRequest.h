/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/MedicalImagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/JobStatus.h>
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
  class ListDICOMImportJobsRequest : public MedicalImagingRequest
  {
  public:
    AWS_MEDICALIMAGING_API ListDICOMImportJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDICOMImportJobs"; }

    AWS_MEDICALIMAGING_API Aws::String SerializePayload() const override;

    AWS_MEDICALIMAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }
    inline ListDICOMImportJobsRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline ListDICOMImportJobsRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline ListDICOMImportJobsRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters for listing import jobs based on status.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline ListDICOMImportJobsRequest& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline ListDICOMImportJobsRequest& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token used to request the list of import jobs on the next
     * page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDICOMImportJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDICOMImportJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDICOMImportJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The max results count. The upper bound is determined by load testing.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDICOMImportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
