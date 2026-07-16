/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InsightFeedbackEntity.h>
#include <aws/opensearch/model/InsightFeedbackThumbs.h>

#include <utility>

namespace Aws {
namespace OpenSearchService {
namespace Model {

/**
 * <p>Container for the parameters to the <code>InsightFeedback</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InsightFeedbackRequest">AWS
 * API Reference</a></p>
 */
class InsightFeedbackRequest : public OpenSearchServiceRequest {
 public:
  AWS_OPENSEARCHSERVICE_API InsightFeedbackRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InsightFeedback"; }

  AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The entity for which to submit insight feedback. Specifies the type and value
   * of the entity, such as a domain name.</p>
   */
  inline const InsightFeedbackEntity& GetEntity() const { return m_entity; }
  inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
  template <typename EntityT = InsightFeedbackEntity>
  void SetEntity(EntityT&& value) {
    m_entityHasBeenSet = true;
    m_entity = std::forward<EntityT>(value);
  }
  template <typename EntityT = InsightFeedbackEntity>
  InsightFeedbackRequest& WithEntity(EntityT&& value) {
    SetEntity(std::forward<EntityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the insight for which to submit feedback.</p>
   */
  inline const Aws::String& GetInsightId() const { return m_insightId; }
  inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }
  template <typename InsightIdT = Aws::String>
  void SetInsightId(InsightIdT&& value) {
    m_insightIdHasBeenSet = true;
    m_insightId = std::forward<InsightIdT>(value);
  }
  template <typename InsightIdT = Aws::String>
  InsightFeedbackRequest& WithInsightId(InsightIdT&& value) {
    SetInsightId(std::forward<InsightIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The thumbs up or thumbs down feedback for the insight. Possible values are
   * <code>Up</code> and <code>Down</code>.</p>
   */
  inline InsightFeedbackThumbs GetThumbs() const { return m_thumbs; }
  inline bool ThumbsHasBeenSet() const { return m_thumbsHasBeenSet; }
  inline void SetThumbs(InsightFeedbackThumbs value) {
    m_thumbsHasBeenSet = true;
    m_thumbs = value;
  }
  inline InsightFeedbackRequest& WithThumbs(InsightFeedbackThumbs value) {
    SetThumbs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional text feedback providing additional details about the insight.
   * Maximum length is 1000 characters.</p>
   */
  inline const Aws::String& GetFeedbackText() const { return m_feedbackText; }
  inline bool FeedbackTextHasBeenSet() const { return m_feedbackTextHasBeenSet; }
  template <typename FeedbackTextT = Aws::String>
  void SetFeedbackText(FeedbackTextT&& value) {
    m_feedbackTextHasBeenSet = true;
    m_feedbackText = std::forward<FeedbackTextT>(value);
  }
  template <typename FeedbackTextT = Aws::String>
  InsightFeedbackRequest& WithFeedbackText(FeedbackTextT&& value) {
    SetFeedbackText(std::forward<FeedbackTextT>(value));
    return *this;
  }
  ///@}
 private:
  InsightFeedbackEntity m_entity;

  Aws::String m_insightId;

  InsightFeedbackThumbs m_thumbs{InsightFeedbackThumbs::NOT_SET};

  Aws::String m_feedbackText;
  bool m_entityHasBeenSet = false;
  bool m_insightIdHasBeenSet = false;
  bool m_thumbsHasBeenSet = false;
  bool m_feedbackTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
