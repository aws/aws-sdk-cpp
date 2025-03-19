/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>

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
   * <p>Specifies the boundaries of the compute node group auto
   * scaling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/ScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class ScalingConfiguration
  {
  public:
    AWS_PCS_API ScalingConfiguration() = default;
    AWS_PCS_API ScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API ScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lower bound of the number of instances allowed in the compute fleet.</p>
     */
    inline int GetMinInstanceCount() const { return m_minInstanceCount; }
    inline bool MinInstanceCountHasBeenSet() const { return m_minInstanceCountHasBeenSet; }
    inline void SetMinInstanceCount(int value) { m_minInstanceCountHasBeenSet = true; m_minInstanceCount = value; }
    inline ScalingConfiguration& WithMinInstanceCount(int value) { SetMinInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper bound of the number of instances allowed in the compute fleet.</p>
     */
    inline int GetMaxInstanceCount() const { return m_maxInstanceCount; }
    inline bool MaxInstanceCountHasBeenSet() const { return m_maxInstanceCountHasBeenSet; }
    inline void SetMaxInstanceCount(int value) { m_maxInstanceCountHasBeenSet = true; m_maxInstanceCount = value; }
    inline ScalingConfiguration& WithMaxInstanceCount(int value) { SetMaxInstanceCount(value); return *this;}
    ///@}
  private:

    int m_minInstanceCount{0};
    bool m_minInstanceCountHasBeenSet = false;

    int m_maxInstanceCount{0};
    bool m_maxInstanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
