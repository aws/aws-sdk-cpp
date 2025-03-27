/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/VersionToPublish.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class PutManagedRuleSetVersionsRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API PutManagedRuleSetVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutManagedRuleSetVersions"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the managed rule set. You use this, along with the rule set ID,
     * to identify the rule set.</p> <p>This name is assigned to the corresponding
     * managed rule group, which your customers can access and use. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutManagedRuleSetVersionsRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this is for a global resource type, such as a Amazon
     * CloudFront distribution. For an Amplify application, use
     * <code>CLOUDFRONT</code>.</p> <p>To work with CloudFront, you must also specify
     * the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline Scope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(Scope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline PutManagedRuleSetVersionsRequest& WithScope(Scope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the managed rule set. The ID is returned in the
     * responses to commands like <code>list</code>. You provide it to operations like
     * <code>get</code> and <code>update</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PutManagedRuleSetVersionsRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    inline const Aws::String& GetLockToken() const { return m_lockToken; }
    inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }
    template<typename LockTokenT = Aws::String>
    void SetLockToken(LockTokenT&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::forward<LockTokenT>(value); }
    template<typename LockTokenT = Aws::String>
    PutManagedRuleSetVersionsRequest& WithLockToken(LockTokenT&& value) { SetLockToken(std::forward<LockTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the named managed rule group that you'd like your customers to
     * choose, from among your version offerings. </p>
     */
    inline const Aws::String& GetRecommendedVersion() const { return m_recommendedVersion; }
    inline bool RecommendedVersionHasBeenSet() const { return m_recommendedVersionHasBeenSet; }
    template<typename RecommendedVersionT = Aws::String>
    void SetRecommendedVersion(RecommendedVersionT&& value) { m_recommendedVersionHasBeenSet = true; m_recommendedVersion = std::forward<RecommendedVersionT>(value); }
    template<typename RecommendedVersionT = Aws::String>
    PutManagedRuleSetVersionsRequest& WithRecommendedVersion(RecommendedVersionT&& value) { SetRecommendedVersion(std::forward<RecommendedVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The versions of the named managed rule group that you want to offer to your
     * customers. </p>
     */
    inline const Aws::Map<Aws::String, VersionToPublish>& GetVersionsToPublish() const { return m_versionsToPublish; }
    inline bool VersionsToPublishHasBeenSet() const { return m_versionsToPublishHasBeenSet; }
    template<typename VersionsToPublishT = Aws::Map<Aws::String, VersionToPublish>>
    void SetVersionsToPublish(VersionsToPublishT&& value) { m_versionsToPublishHasBeenSet = true; m_versionsToPublish = std::forward<VersionsToPublishT>(value); }
    template<typename VersionsToPublishT = Aws::Map<Aws::String, VersionToPublish>>
    PutManagedRuleSetVersionsRequest& WithVersionsToPublish(VersionsToPublishT&& value) { SetVersionsToPublish(std::forward<VersionsToPublishT>(value)); return *this;}
    template<typename VersionsToPublishKeyT = Aws::String, typename VersionsToPublishValueT = VersionToPublish>
    PutManagedRuleSetVersionsRequest& AddVersionsToPublish(VersionsToPublishKeyT&& key, VersionsToPublishValueT&& value) {
      m_versionsToPublishHasBeenSet = true; m_versionsToPublish.emplace(std::forward<VersionsToPublishKeyT>(key), std::forward<VersionsToPublishValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope{Scope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet = false;

    Aws::String m_recommendedVersion;
    bool m_recommendedVersionHasBeenSet = false;

    Aws::Map<Aws::String, VersionToPublish> m_versionsToPublish;
    bool m_versionsToPublishHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
