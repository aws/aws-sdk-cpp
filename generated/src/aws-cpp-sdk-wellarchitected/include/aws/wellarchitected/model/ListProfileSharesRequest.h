/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ShareStatus.h>
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
  class ListProfileSharesRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListProfileSharesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfileShares"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The profile ARN.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline ListProfileSharesRequest& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline ListProfileSharesRequest& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline ListProfileSharesRequest& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the profile is shared.</p>
     */
    inline const Aws::String& GetSharedWithPrefix() const{ return m_sharedWithPrefix; }

    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the profile is shared.</p>
     */
    inline bool SharedWithPrefixHasBeenSet() const { return m_sharedWithPrefixHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the profile is shared.</p>
     */
    inline void SetSharedWithPrefix(const Aws::String& value) { m_sharedWithPrefixHasBeenSet = true; m_sharedWithPrefix = value; }

    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the profile is shared.</p>
     */
    inline void SetSharedWithPrefix(Aws::String&& value) { m_sharedWithPrefixHasBeenSet = true; m_sharedWithPrefix = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the profile is shared.</p>
     */
    inline void SetSharedWithPrefix(const char* value) { m_sharedWithPrefixHasBeenSet = true; m_sharedWithPrefix.assign(value); }

    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the profile is shared.</p>
     */
    inline ListProfileSharesRequest& WithSharedWithPrefix(const Aws::String& value) { SetSharedWithPrefix(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the profile is shared.</p>
     */
    inline ListProfileSharesRequest& WithSharedWithPrefix(Aws::String&& value) { SetSharedWithPrefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the profile is shared.</p>
     */
    inline ListProfileSharesRequest& WithSharedWithPrefix(const char* value) { SetSharedWithPrefix(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListProfileSharesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListProfileSharesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListProfileSharesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListProfileSharesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const ShareStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline ListProfileSharesRequest& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    
    inline ListProfileSharesRequest& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_sharedWithPrefix;
    bool m_sharedWithPrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ShareStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
