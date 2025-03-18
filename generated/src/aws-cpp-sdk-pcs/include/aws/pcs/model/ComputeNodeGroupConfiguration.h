/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>The compute node group configuration for a queue.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/ComputeNodeGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class ComputeNodeGroupConfiguration
  {
  public:
    AWS_PCS_API ComputeNodeGroupConfiguration() = default;
    AWS_PCS_API ComputeNodeGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API ComputeNodeGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute node group ID for the compute node group configuration.</p>
     */
    inline const Aws::String& GetComputeNodeGroupId() const { return m_computeNodeGroupId; }
    inline bool ComputeNodeGroupIdHasBeenSet() const { return m_computeNodeGroupIdHasBeenSet; }
    template<typename ComputeNodeGroupIdT = Aws::String>
    void SetComputeNodeGroupId(ComputeNodeGroupIdT&& value) { m_computeNodeGroupIdHasBeenSet = true; m_computeNodeGroupId = std::forward<ComputeNodeGroupIdT>(value); }
    template<typename ComputeNodeGroupIdT = Aws::String>
    ComputeNodeGroupConfiguration& WithComputeNodeGroupId(ComputeNodeGroupIdT&& value) { SetComputeNodeGroupId(std::forward<ComputeNodeGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computeNodeGroupId;
    bool m_computeNodeGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
