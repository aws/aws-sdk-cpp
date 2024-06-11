﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Regex.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class UpdateRegexPatternSetRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API UpdateRegexPatternSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRegexPatternSet"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the set. You cannot change the name after you create the set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateRegexPatternSetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateRegexPatternSetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateRegexPatternSetRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, an Amazon Cognito
     * user pool, an App Runner service, or an Amazon Web Services Verified Access
     * instance. </p> <p>To work with CloudFront, you must also specify the Region US
     * East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the Region when
     * you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline UpdateRegexPatternSetRequest& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline UpdateRegexPatternSetRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateRegexPatternSetRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateRegexPatternSetRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateRegexPatternSetRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the set that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateRegexPatternSetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateRegexPatternSetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateRegexPatternSetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<Regex>& GetRegularExpressionList() const{ return m_regularExpressionList; }
    inline bool RegularExpressionListHasBeenSet() const { return m_regularExpressionListHasBeenSet; }
    inline void SetRegularExpressionList(const Aws::Vector<Regex>& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = value; }
    inline void SetRegularExpressionList(Aws::Vector<Regex>&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList = std::move(value); }
    inline UpdateRegexPatternSetRequest& WithRegularExpressionList(const Aws::Vector<Regex>& value) { SetRegularExpressionList(value); return *this;}
    inline UpdateRegexPatternSetRequest& WithRegularExpressionList(Aws::Vector<Regex>&& value) { SetRegularExpressionList(std::move(value)); return *this;}
    inline UpdateRegexPatternSetRequest& AddRegularExpressionList(const Regex& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.push_back(value); return *this; }
    inline UpdateRegexPatternSetRequest& AddRegularExpressionList(Regex&& value) { m_regularExpressionListHasBeenSet = true; m_regularExpressionList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetLockToken() const{ return m_lockToken; }
    inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }
    inline void SetLockToken(const Aws::String& value) { m_lockTokenHasBeenSet = true; m_lockToken = value; }
    inline void SetLockToken(Aws::String&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::move(value); }
    inline void SetLockToken(const char* value) { m_lockTokenHasBeenSet = true; m_lockToken.assign(value); }
    inline UpdateRegexPatternSetRequest& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}
    inline UpdateRegexPatternSetRequest& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}
    inline UpdateRegexPatternSetRequest& WithLockToken(const char* value) { SetLockToken(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Regex> m_regularExpressionList;
    bool m_regularExpressionListHasBeenSet = false;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
