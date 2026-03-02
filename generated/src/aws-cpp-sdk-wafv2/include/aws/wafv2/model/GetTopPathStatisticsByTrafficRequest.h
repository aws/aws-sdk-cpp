/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/TimeWindow.h>

#include <utility>

namespace Aws {
namespace WAFV2 {
namespace Model {

/**
 */
class GetTopPathStatisticsByTrafficRequest : public WAFV2Request {
 public:
  AWS_WAFV2_API GetTopPathStatisticsByTrafficRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetTopPathStatisticsByTraffic"; }

  AWS_WAFV2_API Aws::String SerializePayload() const override;

  AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the web ACL for which you want to retrieve
   * path statistics.</p>
   */
  inline const Aws::String& GetWebAclArn() const { return m_webAclArn; }
  inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }
  template <typename WebAclArnT = Aws::String>
  void SetWebAclArn(WebAclArnT&& value) {
    m_webAclArnHasBeenSet = true;
    m_webAclArn = std::forward<WebAclArnT>(value);
  }
  template <typename WebAclArnT = Aws::String>
  GetTopPathStatisticsByTrafficRequest& WithWebAclArn(WebAclArnT&& value) {
    SetWebAclArn(std::forward<WebAclArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the web ACL is for an Amazon Web Services CloudFront
   * distribution or for a regional application. A regional application can be an
   * Application Load Balancer, an AppSync GraphQL API, an Amazon Cognito user pool,
   * an Amazon Web Services App Runner service, or an Amazon Web Services Verified
   * Access instance.</p>
   */
  inline Scope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(Scope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline GetTopPathStatisticsByTrafficRequest& WithScope(Scope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A URI path prefix to filter the results. When you specify this parameter, the
   * operation returns statistics for individual URIs within the specified path
   * prefix. For example, if you specify <code>/api</code>, the response includes
   * statistics for paths like <code>/api/v1/users</code> and
   * <code>/api/v2/orders</code>. If you don't specify this parameter, the operation
   * returns top-level path statistics.</p>
   */
  inline const Aws::String& GetUriPathPrefix() const { return m_uriPathPrefix; }
  inline bool UriPathPrefixHasBeenSet() const { return m_uriPathPrefixHasBeenSet; }
  template <typename UriPathPrefixT = Aws::String>
  void SetUriPathPrefix(UriPathPrefixT&& value) {
    m_uriPathPrefixHasBeenSet = true;
    m_uriPathPrefix = std::forward<UriPathPrefixT>(value);
  }
  template <typename UriPathPrefixT = Aws::String>
  GetTopPathStatisticsByTrafficRequest& WithUriPathPrefix(UriPathPrefixT&& value) {
    SetUriPathPrefix(std::forward<UriPathPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time window for which you want to retrieve path statistics. The time
   * window must be within the data retention period for your web ACL.</p>
   */
  inline const TimeWindow& GetTimeWindow() const { return m_timeWindow; }
  inline bool TimeWindowHasBeenSet() const { return m_timeWindowHasBeenSet; }
  template <typename TimeWindowT = TimeWindow>
  void SetTimeWindow(TimeWindowT&& value) {
    m_timeWindowHasBeenSet = true;
    m_timeWindow = std::forward<TimeWindowT>(value);
  }
  template <typename TimeWindowT = TimeWindow>
  GetTopPathStatisticsByTrafficRequest& WithTimeWindow(TimeWindowT&& value) {
    SetTimeWindow(std::forward<TimeWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to include only traffic from bots in the specified
   * category. For example, you can filter by <code>ai</code> to see only AI crawler
   * traffic, or <code>search_engine</code> to see only search engine bot traffic.
   * When you apply this filter, the <code>Source</code> field is populated in the
   * response.</p>
   */
  inline const Aws::String& GetBotCategory() const { return m_botCategory; }
  inline bool BotCategoryHasBeenSet() const { return m_botCategoryHasBeenSet; }
  template <typename BotCategoryT = Aws::String>
  void SetBotCategory(BotCategoryT&& value) {
    m_botCategoryHasBeenSet = true;
    m_botCategory = std::forward<BotCategoryT>(value);
  }
  template <typename BotCategoryT = Aws::String>
  GetTopPathStatisticsByTrafficRequest& WithBotCategory(BotCategoryT&& value) {
    SetBotCategory(std::forward<BotCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to include only traffic from bots belonging to the
   * specified organization. For example, you can filter by <code>openai</code> or
   * <code>google</code>. When you apply this filter, the <code>Source</code> field
   * is populated in the response.</p>
   */
  inline const Aws::String& GetBotOrganization() const { return m_botOrganization; }
  inline bool BotOrganizationHasBeenSet() const { return m_botOrganizationHasBeenSet; }
  template <typename BotOrganizationT = Aws::String>
  void SetBotOrganization(BotOrganizationT&& value) {
    m_botOrganizationHasBeenSet = true;
    m_botOrganization = std::forward<BotOrganizationT>(value);
  }
  template <typename BotOrganizationT = Aws::String>
  GetTopPathStatisticsByTrafficRequest& WithBotOrganization(BotOrganizationT&& value) {
    SetBotOrganization(std::forward<BotOrganizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to include only traffic from the specified bot. For
   * example, you can filter by <code>gptbot</code> or <code>googlebot</code>. When
   * you apply this filter, the <code>Source</code> field is populated in the
   * response.</p>
   */
  inline const Aws::String& GetBotName() const { return m_botName; }
  inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
  template <typename BotNameT = Aws::String>
  void SetBotName(BotNameT&& value) {
    m_botNameHasBeenSet = true;
    m_botName = std::forward<BotNameT>(value);
  }
  template <typename BotNameT = Aws::String>
  GetTopPathStatisticsByTrafficRequest& WithBotName(BotNameT&& value) {
    SetBotName(std::forward<BotNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of path statistics to return. Valid values are 1 to
   * 100.</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline GetTopPathStatisticsByTrafficRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of top bots to include in the statistics for each path.
   * Valid values are 1 to 10.</p>
   */
  inline int GetNumberOfTopTrafficBotsPerPath() const { return m_numberOfTopTrafficBotsPerPath; }
  inline bool NumberOfTopTrafficBotsPerPathHasBeenSet() const { return m_numberOfTopTrafficBotsPerPathHasBeenSet; }
  inline void SetNumberOfTopTrafficBotsPerPath(int value) {
    m_numberOfTopTrafficBotsPerPathHasBeenSet = true;
    m_numberOfTopTrafficBotsPerPath = value;
  }
  inline GetTopPathStatisticsByTrafficRequest& WithNumberOfTopTrafficBotsPerPath(int value) {
    SetNumberOfTopTrafficBotsPerPath(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you request a list of objects with a <code>Limit</code> setting, if the
   * number of objects that are still available for retrieval exceeds the limit, WAF
   * returns a <code>NextMarker</code> value in the response. To retrieve the next
   * batch of objects, provide the marker from the prior call in your next
   * request.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  GetTopPathStatisticsByTrafficRequest& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_webAclArn;

  Scope m_scope{Scope::NOT_SET};

  Aws::String m_uriPathPrefix;

  TimeWindow m_timeWindow;

  Aws::String m_botCategory;

  Aws::String m_botOrganization;

  Aws::String m_botName;

  int m_limit{0};

  int m_numberOfTopTrafficBotsPerPath{0};

  Aws::String m_nextMarker;
  bool m_webAclArnHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_uriPathPrefixHasBeenSet = false;
  bool m_timeWindowHasBeenSet = false;
  bool m_botCategoryHasBeenSet = false;
  bool m_botOrganizationHasBeenSet = false;
  bool m_botNameHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_numberOfTopTrafficBotsPerPathHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
