/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ExportSourceType.h>
#include <aws/sesv2/model/JobStatus.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to list all export jobs with filters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListExportJobsRequest">AWS
   * API Reference</a></p>
   */
  class ListExportJobsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API ListExportJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExportJobs"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The pagination token returned from a previous call to
     * <code>ListExportJobs</code> to indicate the position in the list of export
     * jobs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExportJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of export jobs to return at once. Use this parameter to
     * paginate results. If additional export jobs exist beyond the specified limit,
     * the <code>NextToken</code> element is sent in the response. Use the
     * <code>NextToken</code> value in subsequent calls to <code>ListExportJobs</code>
     * to retrieve additional export jobs.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListExportJobsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value used to list export jobs that have a certain
     * <code>ExportSourceType</code>.</p>
     */
    inline ExportSourceType GetExportSourceType() const { return m_exportSourceType; }
    inline bool ExportSourceTypeHasBeenSet() const { return m_exportSourceTypeHasBeenSet; }
    inline void SetExportSourceType(ExportSourceType value) { m_exportSourceTypeHasBeenSet = true; m_exportSourceType = value; }
    inline ListExportJobsRequest& WithExportSourceType(ExportSourceType value) { SetExportSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value used to list export jobs that have a certain
     * <code>JobStatus</code>.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline ListExportJobsRequest& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    ExportSourceType m_exportSourceType{ExportSourceType::NOT_SET};
    bool m_exportSourceTypeHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
