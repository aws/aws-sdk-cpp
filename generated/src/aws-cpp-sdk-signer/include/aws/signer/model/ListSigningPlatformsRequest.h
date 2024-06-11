﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace signer
{
namespace Model
{

  /**
   */
  class ListSigningPlatformsRequest : public SignerRequest
  {
  public:
    AWS_SIGNER_API ListSigningPlatformsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSigningPlatforms"; }

    AWS_SIGNER_API Aws::String SerializePayload() const override;

    AWS_SIGNER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The category type of a signing platform.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }
    inline ListSigningPlatformsRequest& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline ListSigningPlatformsRequest& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline ListSigningPlatformsRequest& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any partner entities connected to a signing platform.</p>
     */
    inline const Aws::String& GetPartner() const{ return m_partner; }
    inline bool PartnerHasBeenSet() const { return m_partnerHasBeenSet; }
    inline void SetPartner(const Aws::String& value) { m_partnerHasBeenSet = true; m_partner = value; }
    inline void SetPartner(Aws::String&& value) { m_partnerHasBeenSet = true; m_partner = std::move(value); }
    inline void SetPartner(const char* value) { m_partnerHasBeenSet = true; m_partner.assign(value); }
    inline ListSigningPlatformsRequest& WithPartner(const Aws::String& value) { SetPartner(value); return *this;}
    inline ListSigningPlatformsRequest& WithPartner(Aws::String&& value) { SetPartner(std::move(value)); return *this;}
    inline ListSigningPlatformsRequest& WithPartner(const char* value) { SetPartner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline ListSigningPlatformsRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline ListSigningPlatformsRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline ListSigningPlatformsRequest& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned by this operation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSigningPlatformsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value for specifying the next set of paginated results to return. After you
     * receive a response with truncated results, use this parameter in a subsequent
     * request. Set it to the value of <code>nextToken</code> from the response that
     * you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSigningPlatformsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSigningPlatformsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSigningPlatformsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_partner;
    bool m_partnerHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
