/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ServiceReference.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Describes changes to service references.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceReferenceChanges">AWS
 * API Reference</a></p>
 */
class ServiceReferenceChanges {
 public:
  AWS_RESILIENCEHUBV2_API ServiceReferenceChanges() = default;
  AWS_RESILIENCEHUBV2_API ServiceReferenceChanges(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceReferenceChanges& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of service references that were added.</p>
   */
  inline const Aws::Vector<ServiceReference>& GetAdded() const { return m_added; }
  inline bool AddedHasBeenSet() const { return m_addedHasBeenSet; }
  template <typename AddedT = Aws::Vector<ServiceReference>>
  void SetAdded(AddedT&& value) {
    m_addedHasBeenSet = true;
    m_added = std::forward<AddedT>(value);
  }
  template <typename AddedT = Aws::Vector<ServiceReference>>
  ServiceReferenceChanges& WithAdded(AddedT&& value) {
    SetAdded(std::forward<AddedT>(value));
    return *this;
  }
  template <typename AddedT = ServiceReference>
  ServiceReferenceChanges& AddAdded(AddedT&& value) {
    m_addedHasBeenSet = true;
    m_added.emplace_back(std::forward<AddedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of service references that were removed.</p>
   */
  inline const Aws::Vector<ServiceReference>& GetRemoved() const { return m_removed; }
  inline bool RemovedHasBeenSet() const { return m_removedHasBeenSet; }
  template <typename RemovedT = Aws::Vector<ServiceReference>>
  void SetRemoved(RemovedT&& value) {
    m_removedHasBeenSet = true;
    m_removed = std::forward<RemovedT>(value);
  }
  template <typename RemovedT = Aws::Vector<ServiceReference>>
  ServiceReferenceChanges& WithRemoved(RemovedT&& value) {
    SetRemoved(std::forward<RemovedT>(value));
    return *this;
  }
  template <typename RemovedT = ServiceReference>
  ServiceReferenceChanges& AddRemoved(RemovedT&& value) {
    m_removedHasBeenSet = true;
    m_removed.emplace_back(std::forward<RemovedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ServiceReference> m_added;

  Aws::Vector<ServiceReference> m_removed;
  bool m_addedHasBeenSet = false;
  bool m_removedHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
