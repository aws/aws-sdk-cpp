/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/QueryType.h>
#include <aws/monitoring/model/Tag.h>

#include <utility>

namespace Aws {
namespace CloudWatch {
namespace Model {

/**
 */
class PutMetricDataQueryDefinitionRequest : public CloudWatchRequest {
 public:
  AWS_CLOUDWATCH_API PutMetricDataQueryDefinitionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutMetricDataQueryDefinition"; }

  AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the metric data query definition to update. Omit this parameter to
   * create a definition. CloudWatch then generates the ID and returns it in the
   * response.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  PutMetricDataQueryDefinitionRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the metric data query definition. Use slashes (<code>/</code>) to
   * organize definitions into folders, for example <code>team/web/latency</code>.
   * The path must meet the following requirements:</p> <ul> <li> <p>It must be
   * unique in your account and Region.</p> </li> <li> <p>It can't start or end with
   * a slash.</p> </li> <li> <p>It can't contain an empty folder name
   * (<code>//</code>).</p> </li> <li> <p>It can be at most 1,015 bytes when encoded
   * as UTF-8.</p> </li> </ul>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  PutMetricDataQueryDefinitionRequest& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query expression, in the language that <code>Type</code> specifies.
   * CloudWatch doesn't validate or run the expression when you save it.</p>
   */
  inline const Aws::String& GetExpression() const { return m_expression; }
  inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
  template <typename ExpressionT = Aws::String>
  void SetExpression(ExpressionT&& value) {
    m_expressionHasBeenSet = true;
    m_expression = std::forward<ExpressionT>(value);
  }
  template <typename ExpressionT = Aws::String>
  PutMetricDataQueryDefinitionRequest& WithExpression(ExpressionT&& value) {
    SetExpression(std::forward<ExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language of the expression. Valid values are the following:</p> <ul> <li>
   * <p> <code>PROMQL</code> – A PromQL query.</p> </li> <li> <p> <code>SQL</code> –
   * A CloudWatch Metrics Insights query.</p> </li> <li> <p> <code>METRIC_MATH</code>
   * – A metric math expression.</p> </li> </ul>
   */
  inline QueryType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(QueryType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PutMetricDataQueryDefinitionRequest& WithType(QueryType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs to associate with the metric data query definition.
   * You can use tags to categorize definitions and to control access to them. Tags
   * are applied only when the request creates a definition, that is, when you omit
   * <code>Id</code>. To change the tags of an existing definition, use
   * <code>TagResource</code> and <code>UntagResource</code>.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  PutMetricDataQueryDefinitionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  PutMetricDataQueryDefinitionRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_path;

  Aws::String m_expression;

  QueryType m_type{QueryType::NOT_SET};

  Aws::Vector<Tag> m_tags;
  bool m_idHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_expressionHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
