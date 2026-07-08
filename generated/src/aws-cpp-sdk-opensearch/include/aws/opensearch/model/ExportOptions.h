/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/SavedObjectIdentifier.h>

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
 * <p>Options to filter the scope of saved objects to export during a
 * migration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ExportOptions">AWS
 * API Reference</a></p>
 */
class ExportOptions {
 public:
  AWS_OPENSEARCHSERVICE_API ExportOptions() = default;
  AWS_OPENSEARCHSERVICE_API ExportOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API ExportOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of saved object types to include in the migration. Valid values
   * include <code>dashboard</code>, <code>visualization</code>,
   * <code>index-pattern</code>, <code>search</code>, and <code>query</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetTypes() const { return m_types; }
  inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
  template <typename TypesT = Aws::Vector<Aws::String>>
  void SetTypes(TypesT&& value) {
    m_typesHasBeenSet = true;
    m_types = std::forward<TypesT>(value);
  }
  template <typename TypesT = Aws::Vector<Aws::String>>
  ExportOptions& WithTypes(TypesT&& value) {
    SetTypes(std::forward<TypesT>(value));
    return *this;
  }
  template <typename TypesT = Aws::String>
  ExportOptions& AddTypes(TypesT&& value) {
    m_typesHasBeenSet = true;
    m_types.emplace_back(std::forward<TypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of specific saved objects to include in the migration, identified by
   * type and ID.</p>
   */
  inline const Aws::Vector<SavedObjectIdentifier>& GetObjects() const { return m_objects; }
  inline bool ObjectsHasBeenSet() const { return m_objectsHasBeenSet; }
  template <typename ObjectsT = Aws::Vector<SavedObjectIdentifier>>
  void SetObjects(ObjectsT&& value) {
    m_objectsHasBeenSet = true;
    m_objects = std::forward<ObjectsT>(value);
  }
  template <typename ObjectsT = Aws::Vector<SavedObjectIdentifier>>
  ExportOptions& WithObjects(ObjectsT&& value) {
    SetObjects(std::forward<ObjectsT>(value));
    return *this;
  }
  template <typename ObjectsT = SavedObjectIdentifier>
  ExportOptions& AddObjects(ObjectsT&& value) {
    m_objectsHasBeenSet = true;
    m_objects.emplace_back(std::forward<ObjectsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to include all objects referenced by the exported objects,
   * recursively.</p>
   */
  inline bool GetIncludeReferencesDeep() const { return m_includeReferencesDeep; }
  inline bool IncludeReferencesDeepHasBeenSet() const { return m_includeReferencesDeepHasBeenSet; }
  inline void SetIncludeReferencesDeep(bool value) {
    m_includeReferencesDeepHasBeenSet = true;
    m_includeReferencesDeep = value;
  }
  inline ExportOptions& WithIncludeReferencesDeep(bool value) {
    SetIncludeReferencesDeep(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_types;

  Aws::Vector<SavedObjectIdentifier> m_objects;

  bool m_includeReferencesDeep{false};
  bool m_typesHasBeenSet = false;
  bool m_objectsHasBeenSet = false;
  bool m_includeReferencesDeepHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
