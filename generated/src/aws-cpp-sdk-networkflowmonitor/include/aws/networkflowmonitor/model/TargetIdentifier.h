/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/TargetId.h>
#include <aws/networkflowmonitor/model/TargetType.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   * <p>A target identifier is a pair of identifying information for a scope that is
   * included in a target. A target identifier is made up of a target ID and a target
   * type. Currently the target ID is always an account ID and the target type is
   * always ACCOUNT.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/TargetIdentifier">AWS
   * API Reference</a></p>
   */
  class TargetIdentifier
  {
  public:
    AWS_NETWORKFLOWMONITOR_API TargetIdentifier() = default;
    AWS_NETWORKFLOWMONITOR_API TargetIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API TargetIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a target, which is currently always an account ID .</p>
     */
    inline const TargetId& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = TargetId>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = TargetId>
    TargetIdentifier& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a target. A target type is currently always
     * <code>ACCOUNT</code>.</p>
     */
    inline TargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(TargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline TargetIdentifier& WithTargetType(TargetType value) { SetTargetType(value); return *this;}
    ///@}
  private:

    TargetId m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetType m_targetType{TargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
