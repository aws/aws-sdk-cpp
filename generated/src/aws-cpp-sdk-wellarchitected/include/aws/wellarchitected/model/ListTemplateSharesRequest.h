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
  class ListTemplateSharesRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListTemplateSharesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTemplateShares"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The review template ARN.</p>
     */
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline ListTemplateSharesRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline ListTemplateSharesRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline ListTemplateSharesRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


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
    inline ListTemplateSharesRequest& WithSharedWithPrefix(const Aws::String& value) { SetSharedWithPrefix(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the profile is shared.</p>
     */
    inline ListTemplateSharesRequest& WithSharedWithPrefix(Aws::String&& value) { SetSharedWithPrefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the profile is shared.</p>
     */
    inline ListTemplateSharesRequest& WithSharedWithPrefix(const char* value) { SetSharedWithPrefix(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListTemplateSharesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListTemplateSharesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListTemplateSharesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListTemplateSharesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const ShareStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const ShareStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(ShareStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline ListTemplateSharesRequest& WithStatus(const ShareStatus& value) { SetStatus(value); return *this;}

    
    inline ListTemplateSharesRequest& WithStatus(ShareStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

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
