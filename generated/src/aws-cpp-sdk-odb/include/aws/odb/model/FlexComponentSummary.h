/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ComputeModel.h>
#include <aws/odb/model/HardwareType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>Information about a flex component that's available for an Exadata
 * infrastructure. A flex component defines the hardware resources, such as CPU
 * cores, memory, and storage, that can be allocated to a shape.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/FlexComponentSummary">AWS
 * API Reference</a></p>
 */
class FlexComponentSummary {
 public:
  AWS_ODB_API FlexComponentSummary() = default;
  AWS_ODB_API FlexComponentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API FlexComponentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of CPU cores that can be enabled for the flex
   * component.</p>
   */
  inline int GetAvailableCoreCount() const { return m_availableCoreCount; }
  inline bool AvailableCoreCountHasBeenSet() const { return m_availableCoreCountHasBeenSet; }
  inline void SetAvailableCoreCount(int value) {
    m_availableCoreCountHasBeenSet = true;
    m_availableCoreCount = value;
  }
  inline FlexComponentSummary& WithAvailableCoreCount(int value) {
    SetAvailableCoreCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum amount of database storage, in gigabytes (GB), that can be
   * enabled for the flex component.</p>
   */
  inline int GetAvailableDbStorageInGBs() const { return m_availableDbStorageInGBs; }
  inline bool AvailableDbStorageInGBsHasBeenSet() const { return m_availableDbStorageInGBsHasBeenSet; }
  inline void SetAvailableDbStorageInGBs(int value) {
    m_availableDbStorageInGBsHasBeenSet = true;
    m_availableDbStorageInGBs = value;
  }
  inline FlexComponentSummary& WithAvailableDbStorageInGBs(int value) {
    SetAvailableDbStorageInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum amount of local storage, in gigabytes (GB), that can be enabled
   * for the flex component.</p>
   */
  inline int GetAvailableLocalStorageInGBs() const { return m_availableLocalStorageInGBs; }
  inline bool AvailableLocalStorageInGBsHasBeenSet() const { return m_availableLocalStorageInGBsHasBeenSet; }
  inline void SetAvailableLocalStorageInGBs(int value) {
    m_availableLocalStorageInGBsHasBeenSet = true;
    m_availableLocalStorageInGBs = value;
  }
  inline FlexComponentSummary& WithAvailableLocalStorageInGBs(int value) {
    SetAvailableLocalStorageInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum amount of memory, in gigabytes (GB), that can be enabled for the
   * flex component.</p>
   */
  inline int GetAvailableMemoryInGBs() const { return m_availableMemoryInGBs; }
  inline bool AvailableMemoryInGBsHasBeenSet() const { return m_availableMemoryInGBsHasBeenSet; }
  inline void SetAvailableMemoryInGBs(int value) {
    m_availableMemoryInGBsHasBeenSet = true;
    m_availableMemoryInGBs = value;
  }
  inline FlexComponentSummary& WithAvailableMemoryInGBs(int value) {
    SetAvailableMemoryInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCI model compute model used when you create or clone an instance: ECPU
   * or OCPU. An ECPU is an abstracted measure of compute resources. ECPUs are based
   * on the number of cores elastically allocated from a pool of compute and storage
   * servers. An OCPU is a legacy physical measure of compute resources. OCPUs are
   * based on the physical core of a processor with hyper-threading enabled. </p>
   */
  inline ComputeModel GetComputeModel() const { return m_computeModel; }
  inline bool ComputeModelHasBeenSet() const { return m_computeModelHasBeenSet; }
  inline void SetComputeModel(ComputeModel value) {
    m_computeModelHasBeenSet = true;
    m_computeModel = value;
  }
  inline FlexComponentSummary& WithComputeModel(ComputeModel value) {
    SetComputeModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary description of the flex component.</p>
   */
  inline const Aws::String& GetDescriptionSummary() const { return m_descriptionSummary; }
  inline bool DescriptionSummaryHasBeenSet() const { return m_descriptionSummaryHasBeenSet; }
  template <typename DescriptionSummaryT = Aws::String>
  void SetDescriptionSummary(DescriptionSummaryT&& value) {
    m_descriptionSummaryHasBeenSet = true;
    m_descriptionSummary = std::forward<DescriptionSummaryT>(value);
  }
  template <typename DescriptionSummaryT = Aws::String>
  FlexComponentSummary& WithDescriptionSummary(DescriptionSummaryT&& value) {
    SetDescriptionSummary(std::forward<DescriptionSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of hardware for the flex component. Valid values are
   * <code>COMPUTE</code> for compute servers and <code>CELL</code> for storage
   * servers.</p>
   */
  inline HardwareType GetHardwareType() const { return m_hardwareType; }
  inline bool HardwareTypeHasBeenSet() const { return m_hardwareTypeHasBeenSet; }
  inline void SetHardwareType(HardwareType value) {
    m_hardwareTypeHasBeenSet = true;
    m_hardwareType = value;
  }
  inline FlexComponentSummary& WithHardwareType(HardwareType value) {
    SetHardwareType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of CPU cores that can be enabled for the flex
   * component.</p>
   */
  inline int GetMinimumCoreCount() const { return m_minimumCoreCount; }
  inline bool MinimumCoreCountHasBeenSet() const { return m_minimumCoreCountHasBeenSet; }
  inline void SetMinimumCoreCount(int value) {
    m_minimumCoreCountHasBeenSet = true;
    m_minimumCoreCount = value;
  }
  inline FlexComponentSummary& WithMinimumCoreCount(int value) {
    SetMinimumCoreCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the flex component.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  FlexComponentSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime minimum number of CPU cores that can be enabled for the flex
   * component.</p>
   */
  inline int GetRuntimeMinimumCoreCount() const { return m_runtimeMinimumCoreCount; }
  inline bool RuntimeMinimumCoreCountHasBeenSet() const { return m_runtimeMinimumCoreCountHasBeenSet; }
  inline void SetRuntimeMinimumCoreCount(int value) {
    m_runtimeMinimumCoreCountHasBeenSet = true;
    m_runtimeMinimumCoreCount = value;
  }
  inline FlexComponentSummary& WithRuntimeMinimumCoreCount(int value) {
    SetRuntimeMinimumCoreCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shape that uses the flex component.</p>
   */
  inline const Aws::String& GetShape() const { return m_shape; }
  inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
  template <typename ShapeT = Aws::String>
  void SetShape(ShapeT&& value) {
    m_shapeHasBeenSet = true;
    m_shape = std::forward<ShapeT>(value);
  }
  template <typename ShapeT = Aws::String>
  FlexComponentSummary& WithShape(ShapeT&& value) {
    SetShape(std::forward<ShapeT>(value));
    return *this;
  }
  ///@}
 private:
  int m_availableCoreCount{0};

  int m_availableDbStorageInGBs{0};

  int m_availableLocalStorageInGBs{0};

  int m_availableMemoryInGBs{0};

  ComputeModel m_computeModel{ComputeModel::NOT_SET};

  Aws::String m_descriptionSummary;

  HardwareType m_hardwareType{HardwareType::NOT_SET};

  int m_minimumCoreCount{0};

  Aws::String m_name;

  int m_runtimeMinimumCoreCount{0};

  Aws::String m_shape;
  bool m_availableCoreCountHasBeenSet = false;
  bool m_availableDbStorageInGBsHasBeenSet = false;
  bool m_availableLocalStorageInGBsHasBeenSet = false;
  bool m_availableMemoryInGBsHasBeenSet = false;
  bool m_computeModelHasBeenSet = false;
  bool m_descriptionSummaryHasBeenSet = false;
  bool m_hardwareTypeHasBeenSet = false;
  bool m_minimumCoreCountHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_runtimeMinimumCoreCountHasBeenSet = false;
  bool m_shapeHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
