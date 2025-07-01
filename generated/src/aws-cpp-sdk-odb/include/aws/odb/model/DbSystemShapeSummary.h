/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/ShapeType.h>
#include <aws/odb/model/ComputeModel.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace odb
{
namespace Model
{

  /**
   * <p>Information about a hardware system model (shape) that's available for an
   * Exadata infrastructure. The shape determines resources, such as CPU cores,
   * memory, and storage, to allocate to the Exadata infrastructure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DbSystemShapeSummary">AWS
   * API Reference</a></p>
   */
  class DbSystemShapeSummary
  {
  public:
    AWS_ODB_API DbSystemShapeSummary() = default;
    AWS_ODB_API DbSystemShapeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API DbSystemShapeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of CPU cores that can be enabled for the shape.</p>
     */
    inline int GetAvailableCoreCount() const { return m_availableCoreCount; }
    inline bool AvailableCoreCountHasBeenSet() const { return m_availableCoreCountHasBeenSet; }
    inline void SetAvailableCoreCount(int value) { m_availableCoreCountHasBeenSet = true; m_availableCoreCount = value; }
    inline DbSystemShapeSummary& WithAvailableCoreCount(int value) { SetAvailableCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of CPU cores per DB node that can be enabled for the
     * shape.</p>
     */
    inline int GetAvailableCoreCountPerNode() const { return m_availableCoreCountPerNode; }
    inline bool AvailableCoreCountPerNodeHasBeenSet() const { return m_availableCoreCountPerNodeHasBeenSet; }
    inline void SetAvailableCoreCountPerNode(int value) { m_availableCoreCountPerNodeHasBeenSet = true; m_availableCoreCountPerNode = value; }
    inline DbSystemShapeSummary& WithAvailableCoreCountPerNode(int value) { SetAvailableCoreCountPerNode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of data storage, in terabytes (TB), that can be enabled
     * for the shape.</p>
     */
    inline int GetAvailableDataStorageInTBs() const { return m_availableDataStorageInTBs; }
    inline bool AvailableDataStorageInTBsHasBeenSet() const { return m_availableDataStorageInTBsHasBeenSet; }
    inline void SetAvailableDataStorageInTBs(int value) { m_availableDataStorageInTBsHasBeenSet = true; m_availableDataStorageInTBs = value; }
    inline DbSystemShapeSummary& WithAvailableDataStorageInTBs(int value) { SetAvailableDataStorageInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of data storage, in terabytes (TB), that's available per
     * storage server for the shape.</p>
     */
    inline int GetAvailableDataStoragePerServerInTBs() const { return m_availableDataStoragePerServerInTBs; }
    inline bool AvailableDataStoragePerServerInTBsHasBeenSet() const { return m_availableDataStoragePerServerInTBsHasBeenSet; }
    inline void SetAvailableDataStoragePerServerInTBs(int value) { m_availableDataStoragePerServerInTBsHasBeenSet = true; m_availableDataStoragePerServerInTBs = value; }
    inline DbSystemShapeSummary& WithAvailableDataStoragePerServerInTBs(int value) { SetAvailableDataStoragePerServerInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of DB node storage, in gigabytes (GB), that's available
     * per DB node for the shape.</p>
     */
    inline int GetAvailableDbNodePerNodeInGBs() const { return m_availableDbNodePerNodeInGBs; }
    inline bool AvailableDbNodePerNodeInGBsHasBeenSet() const { return m_availableDbNodePerNodeInGBsHasBeenSet; }
    inline void SetAvailableDbNodePerNodeInGBs(int value) { m_availableDbNodePerNodeInGBsHasBeenSet = true; m_availableDbNodePerNodeInGBs = value; }
    inline DbSystemShapeSummary& WithAvailableDbNodePerNodeInGBs(int value) { SetAvailableDbNodePerNodeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of DB node storage, in gigabytes (GB), that can be enabled
     * for the shape.</p>
     */
    inline int GetAvailableDbNodeStorageInGBs() const { return m_availableDbNodeStorageInGBs; }
    inline bool AvailableDbNodeStorageInGBsHasBeenSet() const { return m_availableDbNodeStorageInGBsHasBeenSet; }
    inline void SetAvailableDbNodeStorageInGBs(int value) { m_availableDbNodeStorageInGBsHasBeenSet = true; m_availableDbNodeStorageInGBs = value; }
    inline DbSystemShapeSummary& WithAvailableDbNodeStorageInGBs(int value) { SetAvailableDbNodeStorageInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of memory, in gigabytes (GB), that can be enabled for the
     * shape.</p>
     */
    inline int GetAvailableMemoryInGBs() const { return m_availableMemoryInGBs; }
    inline bool AvailableMemoryInGBsHasBeenSet() const { return m_availableMemoryInGBsHasBeenSet; }
    inline void SetAvailableMemoryInGBs(int value) { m_availableMemoryInGBsHasBeenSet = true; m_availableMemoryInGBs = value; }
    inline DbSystemShapeSummary& WithAvailableMemoryInGBs(int value) { SetAvailableMemoryInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of memory, in gigabytes (GB), that's available per DB node
     * for the shape.</p>
     */
    inline int GetAvailableMemoryPerNodeInGBs() const { return m_availableMemoryPerNodeInGBs; }
    inline bool AvailableMemoryPerNodeInGBsHasBeenSet() const { return m_availableMemoryPerNodeInGBsHasBeenSet; }
    inline void SetAvailableMemoryPerNodeInGBs(int value) { m_availableMemoryPerNodeInGBsHasBeenSet = true; m_availableMemoryPerNodeInGBs = value; }
    inline DbSystemShapeSummary& WithAvailableMemoryPerNodeInGBs(int value) { SetAvailableMemoryPerNodeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The discrete number by which the CPU core count for the shape can be
     * increased or decreased.</p>
     */
    inline int GetCoreCountIncrement() const { return m_coreCountIncrement; }
    inline bool CoreCountIncrementHasBeenSet() const { return m_coreCountIncrementHasBeenSet; }
    inline void SetCoreCountIncrement(int value) { m_coreCountIncrementHasBeenSet = true; m_coreCountIncrement = value; }
    inline DbSystemShapeSummary& WithCoreCountIncrement(int value) { SetCoreCountIncrement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Exadata storage servers that's available for the
     * shape.</p>
     */
    inline int GetMaxStorageCount() const { return m_maxStorageCount; }
    inline bool MaxStorageCountHasBeenSet() const { return m_maxStorageCountHasBeenSet; }
    inline void SetMaxStorageCount(int value) { m_maxStorageCountHasBeenSet = true; m_maxStorageCount = value; }
    inline DbSystemShapeSummary& WithMaxStorageCount(int value) { SetMaxStorageCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of compute servers that is available for the shape.</p>
     */
    inline int GetMaximumNodeCount() const { return m_maximumNodeCount; }
    inline bool MaximumNodeCountHasBeenSet() const { return m_maximumNodeCountHasBeenSet; }
    inline void SetMaximumNodeCount(int value) { m_maximumNodeCountHasBeenSet = true; m_maximumNodeCount = value; }
    inline DbSystemShapeSummary& WithMaximumNodeCount(int value) { SetMaximumNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of CPU cores that can be enabled per node for the
     * shape.</p>
     */
    inline int GetMinCoreCountPerNode() const { return m_minCoreCountPerNode; }
    inline bool MinCoreCountPerNodeHasBeenSet() const { return m_minCoreCountPerNodeHasBeenSet; }
    inline void SetMinCoreCountPerNode(int value) { m_minCoreCountPerNodeHasBeenSet = true; m_minCoreCountPerNode = value; }
    inline DbSystemShapeSummary& WithMinCoreCountPerNode(int value) { SetMinCoreCountPerNode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum amount of data storage, in terabytes (TB), that must be allocated
     * for the shape.</p>
     */
    inline int GetMinDataStorageInTBs() const { return m_minDataStorageInTBs; }
    inline bool MinDataStorageInTBsHasBeenSet() const { return m_minDataStorageInTBsHasBeenSet; }
    inline void SetMinDataStorageInTBs(int value) { m_minDataStorageInTBsHasBeenSet = true; m_minDataStorageInTBs = value; }
    inline DbSystemShapeSummary& WithMinDataStorageInTBs(int value) { SetMinDataStorageInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum amount of DB node storage, in gigabytes (GB), that must be
     * allocated per DB node for the shape.</p>
     */
    inline int GetMinDbNodeStoragePerNodeInGBs() const { return m_minDbNodeStoragePerNodeInGBs; }
    inline bool MinDbNodeStoragePerNodeInGBsHasBeenSet() const { return m_minDbNodeStoragePerNodeInGBsHasBeenSet; }
    inline void SetMinDbNodeStoragePerNodeInGBs(int value) { m_minDbNodeStoragePerNodeInGBsHasBeenSet = true; m_minDbNodeStoragePerNodeInGBs = value; }
    inline DbSystemShapeSummary& WithMinDbNodeStoragePerNodeInGBs(int value) { SetMinDbNodeStoragePerNodeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum amount of memory, in gigabytes (GB), that must be allocated per
     * DB node for the shape.</p>
     */
    inline int GetMinMemoryPerNodeInGBs() const { return m_minMemoryPerNodeInGBs; }
    inline bool MinMemoryPerNodeInGBsHasBeenSet() const { return m_minMemoryPerNodeInGBsHasBeenSet; }
    inline void SetMinMemoryPerNodeInGBs(int value) { m_minMemoryPerNodeInGBsHasBeenSet = true; m_minMemoryPerNodeInGBs = value; }
    inline DbSystemShapeSummary& WithMinMemoryPerNodeInGBs(int value) { SetMinMemoryPerNodeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of Exadata storage servers that are available for the
     * shape.</p>
     */
    inline int GetMinStorageCount() const { return m_minStorageCount; }
    inline bool MinStorageCountHasBeenSet() const { return m_minStorageCountHasBeenSet; }
    inline void SetMinStorageCount(int value) { m_minStorageCountHasBeenSet = true; m_minStorageCount = value; }
    inline DbSystemShapeSummary& WithMinStorageCount(int value) { SetMinStorageCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of CPU cores that can be enabled for the shape.</p>
     */
    inline int GetMinimumCoreCount() const { return m_minimumCoreCount; }
    inline bool MinimumCoreCountHasBeenSet() const { return m_minimumCoreCountHasBeenSet; }
    inline void SetMinimumCoreCount(int value) { m_minimumCoreCountHasBeenSet = true; m_minimumCoreCount = value; }
    inline DbSystemShapeSummary& WithMinimumCoreCount(int value) { SetMinimumCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum number of compute servers that are available for the shape.</p>
     */
    inline int GetMinimumNodeCount() const { return m_minimumNodeCount; }
    inline bool MinimumNodeCountHasBeenSet() const { return m_minimumNodeCountHasBeenSet; }
    inline void SetMinimumNodeCount(int value) { m_minimumNodeCountHasBeenSet = true; m_minimumNodeCount = value; }
    inline DbSystemShapeSummary& WithMinimumNodeCount(int value) { SetMinimumNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime minimum number of CPU cores that can be enabled for the
     * shape.</p>
     */
    inline int GetRuntimeMinimumCoreCount() const { return m_runtimeMinimumCoreCount; }
    inline bool RuntimeMinimumCoreCountHasBeenSet() const { return m_runtimeMinimumCoreCountHasBeenSet; }
    inline void SetRuntimeMinimumCoreCount(int value) { m_runtimeMinimumCoreCountHasBeenSet = true; m_runtimeMinimumCoreCount = value; }
    inline DbSystemShapeSummary& WithRuntimeMinimumCoreCount(int value) { SetRuntimeMinimumCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The family of the shape.</p>
     */
    inline const Aws::String& GetShapeFamily() const { return m_shapeFamily; }
    inline bool ShapeFamilyHasBeenSet() const { return m_shapeFamilyHasBeenSet; }
    template<typename ShapeFamilyT = Aws::String>
    void SetShapeFamily(ShapeFamilyT&& value) { m_shapeFamilyHasBeenSet = true; m_shapeFamily = std::forward<ShapeFamilyT>(value); }
    template<typename ShapeFamilyT = Aws::String>
    DbSystemShapeSummary& WithShapeFamily(ShapeFamilyT&& value) { SetShapeFamily(std::forward<ShapeFamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shape type. This property is determined by the CPU hardware.</p>
     */
    inline ShapeType GetShapeType() const { return m_shapeType; }
    inline bool ShapeTypeHasBeenSet() const { return m_shapeTypeHasBeenSet; }
    inline void SetShapeType(ShapeType value) { m_shapeTypeHasBeenSet = true; m_shapeType = value; }
    inline DbSystemShapeSummary& WithShapeType(ShapeType value) { SetShapeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the shape.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DbSystemShapeSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline void SetComputeModel(ComputeModel value) { m_computeModelHasBeenSet = true; m_computeModel = value; }
    inline DbSystemShapeSummary& WithComputeModel(ComputeModel value) { SetComputeModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the hardware system model supports configurable database
     * and server storage types.</p>
     */
    inline bool GetAreServerTypesSupported() const { return m_areServerTypesSupported; }
    inline bool AreServerTypesSupportedHasBeenSet() const { return m_areServerTypesSupportedHasBeenSet; }
    inline void SetAreServerTypesSupported(bool value) { m_areServerTypesSupportedHasBeenSet = true; m_areServerTypesSupported = value; }
    inline DbSystemShapeSummary& WithAreServerTypesSupported(bool value) { SetAreServerTypesSupported(value); return *this;}
    ///@}
  private:

    int m_availableCoreCount{0};
    bool m_availableCoreCountHasBeenSet = false;

    int m_availableCoreCountPerNode{0};
    bool m_availableCoreCountPerNodeHasBeenSet = false;

    int m_availableDataStorageInTBs{0};
    bool m_availableDataStorageInTBsHasBeenSet = false;

    int m_availableDataStoragePerServerInTBs{0};
    bool m_availableDataStoragePerServerInTBsHasBeenSet = false;

    int m_availableDbNodePerNodeInGBs{0};
    bool m_availableDbNodePerNodeInGBsHasBeenSet = false;

    int m_availableDbNodeStorageInGBs{0};
    bool m_availableDbNodeStorageInGBsHasBeenSet = false;

    int m_availableMemoryInGBs{0};
    bool m_availableMemoryInGBsHasBeenSet = false;

    int m_availableMemoryPerNodeInGBs{0};
    bool m_availableMemoryPerNodeInGBsHasBeenSet = false;

    int m_coreCountIncrement{0};
    bool m_coreCountIncrementHasBeenSet = false;

    int m_maxStorageCount{0};
    bool m_maxStorageCountHasBeenSet = false;

    int m_maximumNodeCount{0};
    bool m_maximumNodeCountHasBeenSet = false;

    int m_minCoreCountPerNode{0};
    bool m_minCoreCountPerNodeHasBeenSet = false;

    int m_minDataStorageInTBs{0};
    bool m_minDataStorageInTBsHasBeenSet = false;

    int m_minDbNodeStoragePerNodeInGBs{0};
    bool m_minDbNodeStoragePerNodeInGBsHasBeenSet = false;

    int m_minMemoryPerNodeInGBs{0};
    bool m_minMemoryPerNodeInGBsHasBeenSet = false;

    int m_minStorageCount{0};
    bool m_minStorageCountHasBeenSet = false;

    int m_minimumCoreCount{0};
    bool m_minimumCoreCountHasBeenSet = false;

    int m_minimumNodeCount{0};
    bool m_minimumNodeCountHasBeenSet = false;

    int m_runtimeMinimumCoreCount{0};
    bool m_runtimeMinimumCoreCountHasBeenSet = false;

    Aws::String m_shapeFamily;
    bool m_shapeFamilyHasBeenSet = false;

    ShapeType m_shapeType{ShapeType::NOT_SET};
    bool m_shapeTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ComputeModel m_computeModel{ComputeModel::NOT_SET};
    bool m_computeModelHasBeenSet = false;

    bool m_areServerTypesSupported{false};
    bool m_areServerTypesSupportedHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
