/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ConnectionDirection.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Contains information about the network connection involved in an Amazon
   * GuardDuty Extended Threat Detection attack sequence. GuardDuty generates an
   * attack sequence finding when multiple events align to a potentially suspicious
   * activity. To receive GuardDuty attack sequence findings in Security Hub, you
   * must have GuardDuty enabled. For more information, see <a
   * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty-extended-threat-detection.html">GuardDuty
   * Extended Threat Detection </a> in the <i>Amazon GuardDuty User Guide</i>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NetworkConnection">AWS
   * API Reference</a></p>
   */
  class NetworkConnection
  {
  public:
    AWS_SECURITYHUB_API NetworkConnection() = default;
    AWS_SECURITYHUB_API NetworkConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NetworkConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The direction in which the network traffic is flowing. </p>
     */
    inline ConnectionDirection GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(ConnectionDirection value) { m_directionHasBeenSet = true; m_direction = value; }
    inline NetworkConnection& WithDirection(ConnectionDirection value) { SetDirection(value); return *this;}
    ///@}
  private:

    ConnectionDirection m_direction{ConnectionDirection::NOT_SET};
    bool m_directionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
