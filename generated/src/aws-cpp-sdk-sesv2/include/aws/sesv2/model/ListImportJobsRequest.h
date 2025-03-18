/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/sesv2/model/ImportDestinationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to list all of the import jobs for a data destination
   * within the specified maximum number of import jobs.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListImportJobsRequest">AWS
   * API Reference</a></p>
   */
  class ListImportJobsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API ListImportJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImportJobs"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The destination of the import job, which can be used to list import jobs that
     * have a certain <code>ImportDestinationType</code>.</p>
     */
    inline ImportDestinationType GetImportDestinationType() const { return m_importDestinationType; }
    inline bool ImportDestinationTypeHasBeenSet() const { return m_importDestinationTypeHasBeenSet; }
    inline void SetImportDestinationType(ImportDestinationType value) { m_importDestinationTypeHasBeenSet = true; m_importDestinationType = value; }
    inline ListImportJobsRequest& WithImportDestinationType(ImportDestinationType value) { SetImportDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string token indicating that there might be additional import jobs
     * available to be listed. Copy this token to a subsequent call to
     * <code>ListImportJobs</code> with the same parameters to retrieve the next page
     * of import jobs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImportJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of import jobs to return at once. Use this parameter to
     * paginate results. If additional import jobs exist beyond the specified limit,
     * the <code>NextToken</code> element is sent in the response. Use the
     * <code>NextToken</code> value in subsequent requests to retrieve additional
     * addresses.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListImportJobsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    ImportDestinationType m_importDestinationType{ImportDestinationType::NOT_SET};
    bool m_importDestinationTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
