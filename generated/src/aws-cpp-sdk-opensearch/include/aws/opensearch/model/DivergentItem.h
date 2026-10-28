/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DivergentField.h>

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
 * <p>An item that exists on both domains but whose contents differ.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DivergentItem">AWS
 * API Reference</a></p>
 */
class DivergentItem {
 public:
  AWS_OPENSEARCHSERVICE_API DivergentItem() = default;
  AWS_OPENSEARCHSERVICE_API DivergentItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API DivergentItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the item.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DivergentItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fields of the item that differ.</p>
   */
  inline const Aws::Vector<DivergentField>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<DivergentField>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<DivergentField>>
  DivergentItem& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = DivergentField>
  DivergentItem& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<DivergentField> m_fields;
  bool m_nameHasBeenSet = false;
  bool m_fieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
