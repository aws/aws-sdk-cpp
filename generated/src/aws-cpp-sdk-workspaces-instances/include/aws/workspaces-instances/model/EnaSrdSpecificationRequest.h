/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/EnaSrdUdpSpecificationRequest.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines Elastic Network Adapter (ENA) Scalable Reliable Datagram (SRD)
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/EnaSrdSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class EnaSrdSpecificationRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API EnaSrdSpecificationRequest() = default;
    AWS_WORKSPACESINSTANCES_API EnaSrdSpecificationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API EnaSrdSpecificationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables or disables ENA SRD for network performance.</p>
     */
    inline bool GetEnaSrdEnabled() const { return m_enaSrdEnabled; }
    inline bool EnaSrdEnabledHasBeenSet() const { return m_enaSrdEnabledHasBeenSet; }
    inline void SetEnaSrdEnabled(bool value) { m_enaSrdEnabledHasBeenSet = true; m_enaSrdEnabled = value; }
    inline EnaSrdSpecificationRequest& WithEnaSrdEnabled(bool value) { SetEnaSrdEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures UDP-specific ENA SRD settings.</p>
     */
    inline const EnaSrdUdpSpecificationRequest& GetEnaSrdUdpSpecification() const { return m_enaSrdUdpSpecification; }
    inline bool EnaSrdUdpSpecificationHasBeenSet() const { return m_enaSrdUdpSpecificationHasBeenSet; }
    template<typename EnaSrdUdpSpecificationT = EnaSrdUdpSpecificationRequest>
    void SetEnaSrdUdpSpecification(EnaSrdUdpSpecificationT&& value) { m_enaSrdUdpSpecificationHasBeenSet = true; m_enaSrdUdpSpecification = std::forward<EnaSrdUdpSpecificationT>(value); }
    template<typename EnaSrdUdpSpecificationT = EnaSrdUdpSpecificationRequest>
    EnaSrdSpecificationRequest& WithEnaSrdUdpSpecification(EnaSrdUdpSpecificationT&& value) { SetEnaSrdUdpSpecification(std::forward<EnaSrdUdpSpecificationT>(value)); return *this;}
    ///@}
  private:

    bool m_enaSrdEnabled{false};
    bool m_enaSrdEnabledHasBeenSet = false;

    EnaSrdUdpSpecificationRequest m_enaSrdUdpSpecification;
    bool m_enaSrdUdpSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
