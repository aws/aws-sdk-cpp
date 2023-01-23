/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/MigrationHubConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhub-config/model/Target.h>
#include <utility>

namespace Aws
{
namespace MigrationHubConfig
{
namespace Model
{

  /**
   */
  class DescribeHomeRegionControlsRequest : public MigrationHubConfigRequest
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API DescribeHomeRegionControlsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeHomeRegionControls"; }

    AWS_MIGRATIONHUBCONFIG_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUBCONFIG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>ControlID</code> is a unique identifier string of your
     * <code>HomeRegionControl</code> object.</p>
     */
    inline const Aws::String& GetControlId() const{ return m_controlId; }

    /**
     * <p>The <code>ControlID</code> is a unique identifier string of your
     * <code>HomeRegionControl</code> object.</p>
     */
    inline bool ControlIdHasBeenSet() const { return m_controlIdHasBeenSet; }

    /**
     * <p>The <code>ControlID</code> is a unique identifier string of your
     * <code>HomeRegionControl</code> object.</p>
     */
    inline void SetControlId(const Aws::String& value) { m_controlIdHasBeenSet = true; m_controlId = value; }

    /**
     * <p>The <code>ControlID</code> is a unique identifier string of your
     * <code>HomeRegionControl</code> object.</p>
     */
    inline void SetControlId(Aws::String&& value) { m_controlIdHasBeenSet = true; m_controlId = std::move(value); }

    /**
     * <p>The <code>ControlID</code> is a unique identifier string of your
     * <code>HomeRegionControl</code> object.</p>
     */
    inline void SetControlId(const char* value) { m_controlIdHasBeenSet = true; m_controlId.assign(value); }

    /**
     * <p>The <code>ControlID</code> is a unique identifier string of your
     * <code>HomeRegionControl</code> object.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithControlId(const Aws::String& value) { SetControlId(value); return *this;}

    /**
     * <p>The <code>ControlID</code> is a unique identifier string of your
     * <code>HomeRegionControl</code> object.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithControlId(Aws::String&& value) { SetControlId(std::move(value)); return *this;}

    /**
     * <p>The <code>ControlID</code> is a unique identifier string of your
     * <code>HomeRegionControl</code> object.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithControlId(const char* value) { SetControlId(value); return *this;}


    /**
     * <p>The name of the home region you'd like to view.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }

    /**
     * <p>The name of the home region you'd like to view.</p>
     */
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }

    /**
     * <p>The name of the home region you'd like to view.</p>
     */
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }

    /**
     * <p>The name of the home region you'd like to view.</p>
     */
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }

    /**
     * <p>The name of the home region you'd like to view.</p>
     */
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }

    /**
     * <p>The name of the home region you'd like to view.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}

    /**
     * <p>The name of the home region you'd like to view.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}

    /**
     * <p>The name of the home region you'd like to view.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}


    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always of type <code>ACCOUNT</code>. It applies the home
     * region to the current <code>ACCOUNT</code>.</p>
     */
    inline const Target& GetTarget() const{ return m_target; }

    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always of type <code>ACCOUNT</code>. It applies the home
     * region to the current <code>ACCOUNT</code>.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always of type <code>ACCOUNT</code>. It applies the home
     * region to the current <code>ACCOUNT</code>.</p>
     */
    inline void SetTarget(const Target& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always of type <code>ACCOUNT</code>. It applies the home
     * region to the current <code>ACCOUNT</code>.</p>
     */
    inline void SetTarget(Target&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always of type <code>ACCOUNT</code>. It applies the home
     * region to the current <code>ACCOUNT</code>.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithTarget(const Target& value) { SetTarget(value); return *this;}

    /**
     * <p>The target parameter specifies the identifier to which the home region is
     * applied, which is always of type <code>ACCOUNT</code>. It applies the home
     * region to the current <code>ACCOUNT</code>.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithTarget(Target&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>The maximum number of filtering results to display per page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of filtering results to display per page. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of filtering results to display per page. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of filtering results to display per page. </p>
     */
    inline DescribeHomeRegionControlsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a <code>NextToken</code> was returned by a previous call, more results are
     * available. To retrieve the next page of results, make the call again using the
     * returned token in <code>NextToken</code>.</p>
     */
    inline DescribeHomeRegionControlsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_controlId;
    bool m_controlIdHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    Target m_target;
    bool m_targetHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
