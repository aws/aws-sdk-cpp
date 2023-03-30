/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/model/ReportFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class GetConsolidatedReportRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API GetConsolidatedReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConsolidatedReport"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The format of the consolidated report.</p> <p>For <code>PDF</code>,
     * <code>Base64String</code> is returned. For <code>JSON</code>,
     * <code>Metrics</code> is returned.</p>
     */
    inline const ReportFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the consolidated report.</p> <p>For <code>PDF</code>,
     * <code>Base64String</code> is returned. For <code>JSON</code>,
     * <code>Metrics</code> is returned.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the consolidated report.</p> <p>For <code>PDF</code>,
     * <code>Base64String</code> is returned. For <code>JSON</code>,
     * <code>Metrics</code> is returned.</p>
     */
    inline void SetFormat(const ReportFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the consolidated report.</p> <p>For <code>PDF</code>,
     * <code>Base64String</code> is returned. For <code>JSON</code>,
     * <code>Metrics</code> is returned.</p>
     */
    inline void SetFormat(ReportFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the consolidated report.</p> <p>For <code>PDF</code>,
     * <code>Base64String</code> is returned. For <code>JSON</code>,
     * <code>Metrics</code> is returned.</p>
     */
    inline GetConsolidatedReportRequest& WithFormat(const ReportFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the consolidated report.</p> <p>For <code>PDF</code>,
     * <code>Base64String</code> is returned. For <code>JSON</code>,
     * <code>Metrics</code> is returned.</p>
     */
    inline GetConsolidatedReportRequest& WithFormat(ReportFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>Set to <code>true</code> to have shared resources included in the report.</p>
     */
    inline bool GetIncludeSharedResources() const{ return m_includeSharedResources; }

    /**
     * <p>Set to <code>true</code> to have shared resources included in the report.</p>
     */
    inline bool IncludeSharedResourcesHasBeenSet() const { return m_includeSharedResourcesHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to have shared resources included in the report.</p>
     */
    inline void SetIncludeSharedResources(bool value) { m_includeSharedResourcesHasBeenSet = true; m_includeSharedResources = value; }

    /**
     * <p>Set to <code>true</code> to have shared resources included in the report.</p>
     */
    inline GetConsolidatedReportRequest& WithIncludeSharedResources(bool value) { SetIncludeSharedResources(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline GetConsolidatedReportRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetConsolidatedReportRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetConsolidatedReportRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline GetConsolidatedReportRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ReportFormat m_format;
    bool m_formatHasBeenSet = false;

    bool m_includeSharedResources;
    bool m_includeSharedResourcesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
