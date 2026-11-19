/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>Filters assessment list results by the resource that was assessed. Provide an
 * entity identifier, a change set identifier, or both.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/AssessmentTargetFilter">AWS
 * API Reference</a></p>
 */
class AssessmentTargetFilter {
 public:
  AWS_MARKETPLACECATALOG_API AssessmentTargetFilter() = default;
  AWS_MARKETPLACECATALOG_API AssessmentTargetFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API AssessmentTargetFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique ID of the entity whose assessments you want to list.</p>
   */
  inline const Aws::String& GetEntityId() const { return m_entityId; }
  inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
  template <typename EntityIdT = Aws::String>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = Aws::String>
  AssessmentTargetFilter& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of the change set that triggered the assessments you want to
   * list.</p>
   */
  inline const Aws::String& GetChangeSetId() const { return m_changeSetId; }
  inline bool ChangeSetIdHasBeenSet() const { return m_changeSetIdHasBeenSet; }
  template <typename ChangeSetIdT = Aws::String>
  void SetChangeSetId(ChangeSetIdT&& value) {
    m_changeSetIdHasBeenSet = true;
    m_changeSetId = std::forward<ChangeSetIdT>(value);
  }
  template <typename ChangeSetIdT = Aws::String>
  AssessmentTargetFilter& WithChangeSetId(ChangeSetIdT&& value) {
    SetChangeSetId(std::forward<ChangeSetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of up to 50 entity IDs whose assessments you want to list. The
   * response includes only the latest published assessment of each entity. You must
   * also specify <code>FrameworkId</code> in the request, and you can't combine
   * <code>EntityIds</code> with <code>EntityId</code> or
   * <code>ChangeSetId</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEntityIds() const { return m_entityIds; }
  inline bool EntityIdsHasBeenSet() const { return m_entityIdsHasBeenSet; }
  template <typename EntityIdsT = Aws::Vector<Aws::String>>
  void SetEntityIds(EntityIdsT&& value) {
    m_entityIdsHasBeenSet = true;
    m_entityIds = std::forward<EntityIdsT>(value);
  }
  template <typename EntityIdsT = Aws::Vector<Aws::String>>
  AssessmentTargetFilter& WithEntityIds(EntityIdsT&& value) {
    SetEntityIds(std::forward<EntityIdsT>(value));
    return *this;
  }
  template <typename EntityIdsT = Aws::String>
  AssessmentTargetFilter& AddEntityIds(EntityIdsT&& value) {
    m_entityIdsHasBeenSet = true;
    m_entityIds.emplace_back(std::forward<EntityIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_entityId;

  Aws::String m_changeSetId;

  Aws::Vector<Aws::String> m_entityIds;
  bool m_entityIdHasBeenSet = false;
  bool m_changeSetIdHasBeenSet = false;
  bool m_entityIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
