/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>

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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Specifies UDP configuration for ENA SRD.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/EnaSrdUdpSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class EnaSrdUdpSpecificationRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API EnaSrdUdpSpecificationRequest() = default;
    AWS_WORKSPACESINSTANCES_API EnaSrdUdpSpecificationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API EnaSrdUdpSpecificationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables or disables ENA SRD for UDP traffic.</p>
     */
    inline bool GetEnaSrdUdpEnabled() const { return m_enaSrdUdpEnabled; }
    inline bool EnaSrdUdpEnabledHasBeenSet() const { return m_enaSrdUdpEnabledHasBeenSet; }
    inline void SetEnaSrdUdpEnabled(bool value) { m_enaSrdUdpEnabledHasBeenSet = true; m_enaSrdUdpEnabled = value; }
    inline EnaSrdUdpSpecificationRequest& WithEnaSrdUdpEnabled(bool value) { SetEnaSrdUdpEnabled(value); return *this;}
    ///@}
  private:

    bool m_enaSrdUdpEnabled{false};
    bool m_enaSrdUdpEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
