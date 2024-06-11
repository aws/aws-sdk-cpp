﻿/**
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
    AWS_PANORAMA_API SignalApplicationInstanceNodeInstancesRequest();

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
    inline const Aws::String& GetApplicationInstanceId() const{ return m_applicationInstanceId; }
    inline bool ApplicationInstanceIdHasBeenSet() const { return m_applicationInstanceIdHasBeenSet; }
    inline void SetApplicationInstanceId(const Aws::String& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = value; }
    inline void SetApplicationInstanceId(Aws::String&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::move(value); }
    inline void SetApplicationInstanceId(const char* value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId.assign(value); }
    inline SignalApplicationInstanceNodeInstancesRequest& WithApplicationInstanceId(const Aws::String& value) { SetApplicationInstanceId(value); return *this;}
    inline SignalApplicationInstanceNodeInstancesRequest& WithApplicationInstanceId(Aws::String&& value) { SetApplicationInstanceId(std::move(value)); return *this;}
    inline SignalApplicationInstanceNodeInstancesRequest& WithApplicationInstanceId(const char* value) { SetApplicationInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of signals.</p>
     */
    inline const Aws::Vector<NodeSignal>& GetNodeSignals() const{ return m_nodeSignals; }
    inline bool NodeSignalsHasBeenSet() const { return m_nodeSignalsHasBeenSet; }
    inline void SetNodeSignals(const Aws::Vector<NodeSignal>& value) { m_nodeSignalsHasBeenSet = true; m_nodeSignals = value; }
    inline void SetNodeSignals(Aws::Vector<NodeSignal>&& value) { m_nodeSignalsHasBeenSet = true; m_nodeSignals = std::move(value); }
    inline SignalApplicationInstanceNodeInstancesRequest& WithNodeSignals(const Aws::Vector<NodeSignal>& value) { SetNodeSignals(value); return *this;}
    inline SignalApplicationInstanceNodeInstancesRequest& WithNodeSignals(Aws::Vector<NodeSignal>&& value) { SetNodeSignals(std::move(value)); return *this;}
    inline SignalApplicationInstanceNodeInstancesRequest& AddNodeSignals(const NodeSignal& value) { m_nodeSignalsHasBeenSet = true; m_nodeSignals.push_back(value); return *this; }
    inline SignalApplicationInstanceNodeInstancesRequest& AddNodeSignals(NodeSignal&& value) { m_nodeSignalsHasBeenSet = true; m_nodeSignals.push_back(std::move(value)); return *this; }
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
