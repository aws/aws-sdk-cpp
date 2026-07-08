/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InsightFeedbackEntityType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Specifies the entity for which to submit insight feedback. An entity
 * represents an Amazon OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InsightFeedbackEntity">AWS
 * API Reference</a></p>
 */
class InsightFeedbackEntity {
 public:
  AWS_OPENSEARCHSERVICE_API InsightFeedbackEntity() = default;
  AWS_OPENSEARCHSERVICE_API InsightFeedbackEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API InsightFeedbackEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the entity. Possible values are <code>DomainName</code>.</p>
   */
  inline InsightFeedbackEntityType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(InsightFeedbackEntityType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline InsightFeedbackEntity& WithType(InsightFeedbackEntityType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the entity, such as a domain name.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  InsightFeedbackEntity& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  InsightFeedbackEntityType m_type{InsightFeedbackEntityType::NOT_SET};

  Aws::String m_value;
  bool m_typeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
