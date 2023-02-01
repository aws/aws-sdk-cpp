/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class UpdateManagedRuleSetVersionExpiryDateRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API UpdateManagedRuleSetVersionExpiryDateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateManagedRuleSetVersionExpiryDate"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Specifies whether this is for an Amazon CloudFront distribution or for a
     * regional application. A regional application can be an Application Load Balancer
     * (ALB), an Amazon API Gateway REST API, an AppSync GraphQL API, or an Amazon
     * Cognito user pool. </p> <p>To work with CloudFront, you must also specify the
     * Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithId(const char* value) { SetId(value); return *this;}


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
    inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }

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
    inline void SetLockToken(const Aws::String& value) { m_lockTokenHasBeenSet = true; m_lockToken = value; }

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
    inline void SetLockToken(Aws::String&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::move(value); }

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
    inline void SetLockToken(const char* value) { m_lockTokenHasBeenSet = true; m_lockToken.assign(value); }

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
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}

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
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}

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
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithLockToken(const char* value) { SetLockToken(value); return *this;}


    /**
     * <p>The version that you want to remove from your list of offerings for the named
     * managed rule group. </p>
     */
    inline const Aws::String& GetVersionToExpire() const{ return m_versionToExpire; }

    /**
     * <p>The version that you want to remove from your list of offerings for the named
     * managed rule group. </p>
     */
    inline bool VersionToExpireHasBeenSet() const { return m_versionToExpireHasBeenSet; }

    /**
     * <p>The version that you want to remove from your list of offerings for the named
     * managed rule group. </p>
     */
    inline void SetVersionToExpire(const Aws::String& value) { m_versionToExpireHasBeenSet = true; m_versionToExpire = value; }

    /**
     * <p>The version that you want to remove from your list of offerings for the named
     * managed rule group. </p>
     */
    inline void SetVersionToExpire(Aws::String&& value) { m_versionToExpireHasBeenSet = true; m_versionToExpire = std::move(value); }

    /**
     * <p>The version that you want to remove from your list of offerings for the named
     * managed rule group. </p>
     */
    inline void SetVersionToExpire(const char* value) { m_versionToExpireHasBeenSet = true; m_versionToExpire.assign(value); }

    /**
     * <p>The version that you want to remove from your list of offerings for the named
     * managed rule group. </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithVersionToExpire(const Aws::String& value) { SetVersionToExpire(value); return *this;}

    /**
     * <p>The version that you want to remove from your list of offerings for the named
     * managed rule group. </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithVersionToExpire(Aws::String&& value) { SetVersionToExpire(std::move(value)); return *this;}

    /**
     * <p>The version that you want to remove from your list of offerings for the named
     * managed rule group. </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithVersionToExpire(const char* value) { SetVersionToExpire(value); return *this;}


    /**
     * <p>The time that you want the version to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline const Aws::Utils::DateTime& GetExpiryTimestamp() const{ return m_expiryTimestamp; }

    /**
     * <p>The time that you want the version to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline bool ExpiryTimestampHasBeenSet() const { return m_expiryTimestampHasBeenSet; }

    /**
     * <p>The time that you want the version to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline void SetExpiryTimestamp(const Aws::Utils::DateTime& value) { m_expiryTimestampHasBeenSet = true; m_expiryTimestamp = value; }

    /**
     * <p>The time that you want the version to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline void SetExpiryTimestamp(Aws::Utils::DateTime&& value) { m_expiryTimestampHasBeenSet = true; m_expiryTimestamp = std::move(value); }

    /**
     * <p>The time that you want the version to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithExpiryTimestamp(const Aws::Utils::DateTime& value) { SetExpiryTimestamp(value); return *this;}

    /**
     * <p>The time that you want the version to expire.</p> <p>Times are in Coordinated
     * Universal Time (UTC) format. UTC format includes the special designator, Z. For
     * example, "2016-09-27T14:50Z". </p>
     */
    inline UpdateManagedRuleSetVersionExpiryDateRequest& WithExpiryTimestamp(Aws::Utils::DateTime&& value) { SetExpiryTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet = false;

    Aws::String m_versionToExpire;
    bool m_versionToExpireHasBeenSet = false;

    Aws::Utils::DateTime m_expiryTimestamp;
    bool m_expiryTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
