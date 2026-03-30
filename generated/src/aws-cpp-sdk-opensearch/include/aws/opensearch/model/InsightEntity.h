/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InsightEntityType.h>

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
 * <p>Specifies the entity for which to retrieve insights. An entity can be an
 * Amazon OpenSearch Service domain or an Amazon Web Services
 * account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InsightEntity">AWS
 * API Reference</a></p>
 */
class InsightEntity {
 public:
  AWS_OPENSEARCHSERVICE_API InsightEntity() = default;
  AWS_OPENSEARCHSERVICE_API InsightEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API InsightEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the entity. Possible values are <code>Account</code> and
   * <code>DomainName</code>.</p>
   */
  inline InsightEntityType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(InsightEntityType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline InsightEntity& WithType(InsightEntityType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the entity. For <code>DomainName</code>, this is the domain
   * name. For <code>Account</code>, this is the Amazon Web Services account ID.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  InsightEntity& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  InsightEntityType m_type{InsightEntityType::NOT_SET};

  Aws::String m_value;
  bool m_typeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
