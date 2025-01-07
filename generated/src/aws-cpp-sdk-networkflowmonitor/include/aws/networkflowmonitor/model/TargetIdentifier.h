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
   * <p>A target identifier is a pair of identifying information for a resource that
   * is included in a target. A target identifier includes the target ID and the
   * target type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/TargetIdentifier">AWS
   * API Reference</a></p>
   */
  class TargetIdentifier
  {
  public:
    AWS_NETWORKFLOWMONITOR_API TargetIdentifier();
    AWS_NETWORKFLOWMONITOR_API TargetIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API TargetIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a target.</p>
     */
    inline const TargetId& GetTargetId() const{ return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    inline void SetTargetId(const TargetId& value) { m_targetIdHasBeenSet = true; m_targetId = value; }
    inline void SetTargetId(TargetId&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }
    inline TargetIdentifier& WithTargetId(const TargetId& value) { SetTargetId(value); return *this;}
    inline TargetIdentifier& WithTargetId(TargetId&& value) { SetTargetId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a target. A target type is currently always <code>ACCOUNT</code>
     * because a target is currently a single Amazon Web Services account.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline TargetIdentifier& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}
    inline TargetIdentifier& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}
  private:

    TargetId m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
