/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataLakeDatasetPartitionFieldTransform.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The detail of the partition field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataLakeDatasetPartitionField">AWS
   * API Reference</a></p>
   */
  class DataLakeDatasetPartitionField
  {
  public:
    AWS_SUPPLYCHAIN_API DataLakeDatasetPartitionField() = default;
    AWS_SUPPLYCHAIN_API DataLakeDatasetPartitionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataLakeDatasetPartitionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the partition field.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataLakeDatasetPartitionField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transformation of the partition field. A transformation specifies how to
     * partition on a given field. For example, with timestamp you can specify that
     * you'd like to partition fields by day, e.g. data record with value
     * 2025-01-03T00:00:00Z in partition field is in 2025-01-03 partition. Also noted
     * that data record without any value in optional partition field is in NULL
     * partition.</p>
     */
    inline const DataLakeDatasetPartitionFieldTransform& GetTransform() const { return m_transform; }
    inline bool TransformHasBeenSet() const { return m_transformHasBeenSet; }
    template<typename TransformT = DataLakeDatasetPartitionFieldTransform>
    void SetTransform(TransformT&& value) { m_transformHasBeenSet = true; m_transform = std::forward<TransformT>(value); }
    template<typename TransformT = DataLakeDatasetPartitionFieldTransform>
    DataLakeDatasetPartitionField& WithTransform(TransformT&& value) { SetTransform(std::forward<TransformT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataLakeDatasetPartitionFieldTransform m_transform;
    bool m_transformHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
