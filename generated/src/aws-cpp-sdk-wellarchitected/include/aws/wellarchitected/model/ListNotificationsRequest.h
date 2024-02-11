/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class ListNotificationsRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListNotificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListNotifications"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline ListNotificationsRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline ListNotificationsRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline ListNotificationsRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListNotificationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListNotificationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListNotificationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListNotificationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The ARN for the related resource for the notification.</p>  <p>Only one
     * of <code>WorkloadID</code> or <code>ResourceARN</code> should be specified.</p>
     * 
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN for the related resource for the notification.</p>  <p>Only one
     * of <code>WorkloadID</code> or <code>ResourceARN</code> should be specified.</p>
     * 
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN for the related resource for the notification.</p>  <p>Only one
     * of <code>WorkloadID</code> or <code>ResourceARN</code> should be specified.</p>
     * 
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN for the related resource for the notification.</p>  <p>Only one
     * of <code>WorkloadID</code> or <code>ResourceARN</code> should be specified.</p>
     * 
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN for the related resource for the notification.</p>  <p>Only one
     * of <code>WorkloadID</code> or <code>ResourceARN</code> should be specified.</p>
     * 
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN for the related resource for the notification.</p>  <p>Only one
     * of <code>WorkloadID</code> or <code>ResourceARN</code> should be specified.</p>
     * 
     */
    inline ListNotificationsRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN for the related resource for the notification.</p>  <p>Only one
     * of <code>WorkloadID</code> or <code>ResourceARN</code> should be specified.</p>
     * 
     */
    inline ListNotificationsRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the related resource for the notification.</p>  <p>Only one
     * of <code>WorkloadID</code> or <code>ResourceARN</code> should be specified.</p>
     * 
     */
    inline ListNotificationsRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
