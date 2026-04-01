/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InsightEntity.h>

#include <utility>

namespace Aws {
namespace OpenSearchService {
namespace Model {

/**
 * <p>Container for the parameters to the <code>DescribeInsightDetails</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeInsightDetailsRequest">AWS
 * API Reference</a></p>
 */
class DescribeInsightDetailsRequest : public OpenSearchServiceRequest {
 public:
  AWS_OPENSEARCHSERVICE_API DescribeInsightDetailsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeInsightDetails"; }

  AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The entity for which to retrieve insight details. Specifies the type and
   * value of the entity, such as a domain name or Amazon Web Services account
   * ID.</p>
   */
  inline const InsightEntity& GetEntity() const { return m_entity; }
  inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
  template <typename EntityT = InsightEntity>
  void SetEntity(EntityT&& value) {
    m_entityHasBeenSet = true;
    m_entity = std::forward<EntityT>(value);
  }
  template <typename EntityT = InsightEntity>
  DescribeInsightDetailsRequest& WithEntity(EntityT&& value) {
    SetEntity(std::forward<EntityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the insight to describe.</p>
   */
  inline const Aws::String& GetInsightId() const { return m_insightId; }
  inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }
  template <typename InsightIdT = Aws::String>
  void SetInsightId(InsightIdT&& value) {
    m_insightIdHasBeenSet = true;
    m_insightId = std::forward<InsightIdT>(value);
  }
  template <typename InsightIdT = Aws::String>
  DescribeInsightDetailsRequest& WithInsightId(InsightIdT&& value) {
    SetInsightId(std::forward<InsightIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to show response with HTML content in response or not.</p>
   */
  inline bool GetShowHtmlContent() const { return m_showHtmlContent; }
  inline bool ShowHtmlContentHasBeenSet() const { return m_showHtmlContentHasBeenSet; }
  inline void SetShowHtmlContent(bool value) {
    m_showHtmlContentHasBeenSet = true;
    m_showHtmlContent = value;
  }
  inline DescribeInsightDetailsRequest& WithShowHtmlContent(bool value) {
    SetShowHtmlContent(value);
    return *this;
  }
  ///@}
 private:
  InsightEntity m_entity;

  Aws::String m_insightId;

  bool m_showHtmlContent{false};
  bool m_entityHasBeenSet = false;
  bool m_insightIdHasBeenSet = false;
  bool m_showHtmlContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
