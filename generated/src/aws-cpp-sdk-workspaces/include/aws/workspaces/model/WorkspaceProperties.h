/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/RunningMode.h>
#include <aws/workspaces/model/Compute.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/OperatingSystemName.h>
#include <aws/workspaces/model/GlobalAcceleratorForWorkSpace.h>
#include <aws/workspaces/model/Protocol.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a WorkSpace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceProperties">AWS
   * API Reference</a></p>
   */
  class WorkspaceProperties
  {
  public:
    AWS_WORKSPACES_API WorkspaceProperties();
    AWS_WORKSPACES_API WorkspaceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>  <p>The <code>MANUAL</code> value is
     * only supported by Amazon WorkSpaces Core. Contact your account team to be
     * allow-listed to use this value. For more information, see <a
     * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
     *  <p>Review your running mode to ensure you are using one that is optimal
     * for your needs and budget. For more information on switching running modes, see
     * <a
     * href="http://aws.amazon.com/workspaces-family/workspaces/faqs/#:~:text=Can%20I%20switch%20between%20hourly%20and%20monthly%20billing%20on%20WorkSpaces%20Personal%3F">
     * Can I switch between hourly and monthly billing?</a> </p>
     */
    inline const RunningMode& GetRunningMode() const{ return m_runningMode; }
    inline bool RunningModeHasBeenSet() const { return m_runningModeHasBeenSet; }
    inline void SetRunningMode(const RunningMode& value) { m_runningModeHasBeenSet = true; m_runningMode = value; }
    inline void SetRunningMode(RunningMode&& value) { m_runningModeHasBeenSet = true; m_runningMode = std::move(value); }
    inline WorkspaceProperties& WithRunningMode(const RunningMode& value) { SetRunningMode(value); return *this;}
    inline WorkspaceProperties& WithRunningMode(RunningMode&& value) { SetRunningMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60-minute intervals.</p>
     */
    inline int GetRunningModeAutoStopTimeoutInMinutes() const{ return m_runningModeAutoStopTimeoutInMinutes; }
    inline bool RunningModeAutoStopTimeoutInMinutesHasBeenSet() const { return m_runningModeAutoStopTimeoutInMinutesHasBeenSet; }
    inline void SetRunningModeAutoStopTimeoutInMinutes(int value) { m_runningModeAutoStopTimeoutInMinutesHasBeenSet = true; m_runningModeAutoStopTimeoutInMinutes = value; }
    inline WorkspaceProperties& WithRunningModeAutoStopTimeoutInMinutes(int value) { SetRunningModeAutoStopTimeoutInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the root volume. For important information about how to modify
     * the size of the root and user volumes, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">Modify
     * a WorkSpace</a>.</p>
     */
    inline int GetRootVolumeSizeGib() const{ return m_rootVolumeSizeGib; }
    inline bool RootVolumeSizeGibHasBeenSet() const { return m_rootVolumeSizeGibHasBeenSet; }
    inline void SetRootVolumeSizeGib(int value) { m_rootVolumeSizeGibHasBeenSet = true; m_rootVolumeSizeGib = value; }
    inline WorkspaceProperties& WithRootVolumeSizeGib(int value) { SetRootVolumeSizeGib(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the user storage. For important information about how to modify
     * the size of the root and user volumes, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">Modify
     * a WorkSpace</a>.</p>
     */
    inline int GetUserVolumeSizeGib() const{ return m_userVolumeSizeGib; }
    inline bool UserVolumeSizeGibHasBeenSet() const { return m_userVolumeSizeGibHasBeenSet; }
    inline void SetUserVolumeSizeGib(int value) { m_userVolumeSizeGibHasBeenSet = true; m_userVolumeSizeGib = value; }
    inline WorkspaceProperties& WithUserVolumeSizeGib(int value) { SetUserVolumeSizeGib(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline const Compute& GetComputeTypeName() const{ return m_computeTypeName; }
    inline bool ComputeTypeNameHasBeenSet() const { return m_computeTypeNameHasBeenSet; }
    inline void SetComputeTypeName(const Compute& value) { m_computeTypeNameHasBeenSet = true; m_computeTypeName = value; }
    inline void SetComputeTypeName(Compute&& value) { m_computeTypeNameHasBeenSet = true; m_computeTypeName = std::move(value); }
    inline WorkspaceProperties& WithComputeTypeName(const Compute& value) { SetComputeTypeName(value); return *this;}
    inline WorkspaceProperties& WithComputeTypeName(Compute&& value) { SetComputeTypeName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-protocols.html">
     * Protocols for Amazon WorkSpaces</a>.</p>  <ul> <li> <p>Only available for
     * WorkSpaces created with PCoIP bundles.</p> </li> <li> <p>The
     * <code>Protocols</code> property is case sensitive. Ensure you use
     * <code>PCOIP</code> or <code>DCV</code> (formerly WSP).</p> </li> <li>
     * <p>Unavailable for Windows 7 WorkSpaces and WorkSpaces using GPU-based bundles
     * (Graphics, GraphicsPro, Graphics.g4dn, and GraphicsPro.g4dn).</p> </li> </ul>
     * 
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }
    inline WorkspaceProperties& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}
    inline WorkspaceProperties& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}
    inline WorkspaceProperties& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }
    inline WorkspaceProperties& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the operating system.</p>
     */
    inline const OperatingSystemName& GetOperatingSystemName() const{ return m_operatingSystemName; }
    inline bool OperatingSystemNameHasBeenSet() const { return m_operatingSystemNameHasBeenSet; }
    inline void SetOperatingSystemName(const OperatingSystemName& value) { m_operatingSystemNameHasBeenSet = true; m_operatingSystemName = value; }
    inline void SetOperatingSystemName(OperatingSystemName&& value) { m_operatingSystemNameHasBeenSet = true; m_operatingSystemName = std::move(value); }
    inline WorkspaceProperties& WithOperatingSystemName(const OperatingSystemName& value) { SetOperatingSystemName(value); return *this;}
    inline WorkspaceProperties& WithOperatingSystemName(OperatingSystemName&& value) { SetOperatingSystemName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the Global Accelerator properties.</p>
     */
    inline const GlobalAcceleratorForWorkSpace& GetGlobalAccelerator() const{ return m_globalAccelerator; }
    inline bool GlobalAcceleratorHasBeenSet() const { return m_globalAcceleratorHasBeenSet; }
    inline void SetGlobalAccelerator(const GlobalAcceleratorForWorkSpace& value) { m_globalAcceleratorHasBeenSet = true; m_globalAccelerator = value; }
    inline void SetGlobalAccelerator(GlobalAcceleratorForWorkSpace&& value) { m_globalAcceleratorHasBeenSet = true; m_globalAccelerator = std::move(value); }
    inline WorkspaceProperties& WithGlobalAccelerator(const GlobalAcceleratorForWorkSpace& value) { SetGlobalAccelerator(value); return *this;}
    inline WorkspaceProperties& WithGlobalAccelerator(GlobalAcceleratorForWorkSpace&& value) { SetGlobalAccelerator(std::move(value)); return *this;}
    ///@}
  private:

    RunningMode m_runningMode;
    bool m_runningModeHasBeenSet = false;

    int m_runningModeAutoStopTimeoutInMinutes;
    bool m_runningModeAutoStopTimeoutInMinutesHasBeenSet = false;

    int m_rootVolumeSizeGib;
    bool m_rootVolumeSizeGibHasBeenSet = false;

    int m_userVolumeSizeGib;
    bool m_userVolumeSizeGibHasBeenSet = false;

    Compute m_computeTypeName;
    bool m_computeTypeNameHasBeenSet = false;

    Aws::Vector<Protocol> m_protocols;
    bool m_protocolsHasBeenSet = false;

    OperatingSystemName m_operatingSystemName;
    bool m_operatingSystemNameHasBeenSet = false;

    GlobalAcceleratorForWorkSpace m_globalAccelerator;
    bool m_globalAcceleratorHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
