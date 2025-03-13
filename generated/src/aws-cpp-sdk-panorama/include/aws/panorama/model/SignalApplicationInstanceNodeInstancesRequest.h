/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/NodeSignal.h>
#include <utility>

namespace Aws
{
namespace Panorama
{
namespace Model
{

  /**
   */
  class SignalApplicationInstanceNodeInstancesRequest : public PanoramaRequest
  {
  public:
    AWS_PANORAMA_API SignalApplicationInstanceNodeInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SignalApplicationInstanceNodeInstances"; }

    AWS_PANORAMA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An application instance ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const { return m_applicationInstanceId; }
    inline bool ApplicationInstanceIdHasBeenSet() const { return m_applicationInstanceIdHasBeenSet; }
    template<typename ApplicationInstanceIdT = Aws::String>
    void SetApplicationInstanceId(ApplicationInstanceIdT&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::forward<ApplicationInstanceIdT>(value); }
    template<typename ApplicationInstanceIdT = Aws::String>
    SignalApplicationInstanceNodeInstancesRequest& WithApplicationInstanceId(ApplicationInstanceIdT&& value) { SetApplicationInstanceId(std::forward<ApplicationInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of signals.</p>
     */
    inline const Aws::Vector<NodeSignal>& GetNodeSignals() const { return m_nodeSignals; }
    inline bool NodeSignalsHasBeenSet() const { return m_nodeSignalsHasBeenSet; }
    template<typename NodeSignalsT = Aws::Vector<NodeSignal>>
    void SetNodeSignals(NodeSignalsT&& value) { m_nodeSignalsHasBeenSet = true; m_nodeSignals = std::forward<NodeSignalsT>(value); }
    template<typename NodeSignalsT = Aws::Vector<NodeSignal>>
    SignalApplicationInstanceNodeInstancesRequest& WithNodeSignals(NodeSignalsT&& value) { SetNodeSignals(std::forward<NodeSignalsT>(value)); return *this;}
    template<typename NodeSignalsT = NodeSignal>
    SignalApplicationInstanceNodeInstancesRequest& AddNodeSignals(NodeSignalsT&& value) { m_nodeSignalsHasBeenSet = true; m_nodeSignals.emplace_back(std::forward<NodeSignalsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationInstanceId;
    bool m_applicationInstanceIdHasBeenSet = false;

    Aws::Vector<NodeSignal> m_nodeSignals;
    bool m_nodeSignalsHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
