﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class DescribeActivitiesRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API DescribeActivitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeActivities"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }
    inline DescribeActivitiesRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline DescribeActivitiesRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline DescribeActivitiesRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that determines the starting time of the activities. The
     * response includes the activities performed after the specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline DescribeActivitiesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DescribeActivitiesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that determines the end time of the activities. The response
     * includes the activities performed before the specified timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline DescribeActivitiesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DescribeActivitiesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the organization. This is a mandatory parameter when using
     * administrative API (SigV4) requests.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline DescribeActivitiesRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline DescribeActivitiesRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline DescribeActivitiesRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies which activity types to include in the response. If this field is
     * left empty, all activity types are returned.</p>
     */
    inline const Aws::String& GetActivityTypes() const{ return m_activityTypes; }
    inline bool ActivityTypesHasBeenSet() const { return m_activityTypesHasBeenSet; }
    inline void SetActivityTypes(const Aws::String& value) { m_activityTypesHasBeenSet = true; m_activityTypes = value; }
    inline void SetActivityTypes(Aws::String&& value) { m_activityTypesHasBeenSet = true; m_activityTypes = std::move(value); }
    inline void SetActivityTypes(const char* value) { m_activityTypesHasBeenSet = true; m_activityTypes.assign(value); }
    inline DescribeActivitiesRequest& WithActivityTypes(const Aws::String& value) { SetActivityTypes(value); return *this;}
    inline DescribeActivitiesRequest& WithActivityTypes(Aws::String&& value) { SetActivityTypes(std::move(value)); return *this;}
    inline DescribeActivitiesRequest& WithActivityTypes(const char* value) { SetActivityTypes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document or folder ID for which to describe activity types.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline DescribeActivitiesRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline DescribeActivitiesRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline DescribeActivitiesRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user who performed the action. The response includes activities
     * pertaining to this user. This is an optional parameter and is only applicable
     * for administrative API (SigV4) requests.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline DescribeActivitiesRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline DescribeActivitiesRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline DescribeActivitiesRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Includes indirect activities. An indirect activity results from a direct
     * activity performed on a parent resource. For example, sharing a parent folder
     * (the direct activity) shares all of the subfolders and documents within the
     * parent folder (the indirect activity).</p>
     */
    inline bool GetIncludeIndirectActivities() const{ return m_includeIndirectActivities; }
    inline bool IncludeIndirectActivitiesHasBeenSet() const { return m_includeIndirectActivitiesHasBeenSet; }
    inline void SetIncludeIndirectActivities(bool value) { m_includeIndirectActivitiesHasBeenSet = true; m_includeIndirectActivities = value; }
    inline DescribeActivitiesRequest& WithIncludeIndirectActivities(bool value) { SetIncludeIndirectActivities(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeActivitiesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeActivitiesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeActivitiesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeActivitiesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_activityTypes;
    bool m_activityTypesHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    bool m_includeIndirectActivities;
    bool m_includeIndirectActivitiesHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
