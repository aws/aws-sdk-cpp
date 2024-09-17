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
    AWS_PCS_API ComputeNodeGroupConfiguration();
    AWS_PCS_API ComputeNodeGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API ComputeNodeGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute node group ID for the compute node group configuration.</p>
     */
    inline const Aws::String& GetComputeNodeGroupId() const{ return m_computeNodeGroupId; }
    inline bool ComputeNodeGroupIdHasBeenSet() const { return m_computeNodeGroupIdHasBeenSet; }
    inline void SetComputeNodeGroupId(const Aws::String& value) { m_computeNodeGroupIdHasBeenSet = true; m_computeNodeGroupId = value; }
    inline void SetComputeNodeGroupId(Aws::String&& value) { m_computeNodeGroupIdHasBeenSet = true; m_computeNodeGroupId = std::move(value); }
    inline void SetComputeNodeGroupId(const char* value) { m_computeNodeGroupIdHasBeenSet = true; m_computeNodeGroupId.assign(value); }
    inline ComputeNodeGroupConfiguration& WithComputeNodeGroupId(const Aws::String& value) { SetComputeNodeGroupId(value); return *this;}
    inline ComputeNodeGroupConfiguration& WithComputeNodeGroupId(Aws::String&& value) { SetComputeNodeGroupId(std::move(value)); return *this;}
    inline ComputeNodeGroupConfiguration& WithComputeNodeGroupId(const char* value) { SetComputeNodeGroupId(value); return *this;}
    ///@}
  private:

    Aws::String m_computeNodeGroupId;
    bool m_computeNodeGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
