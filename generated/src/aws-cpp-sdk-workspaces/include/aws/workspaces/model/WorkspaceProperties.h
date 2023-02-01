/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/RunningMode.h>
#include <aws/workspaces/model/Compute.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>  <p>The <code>MANUAL</code> value is
     * only supported by Amazon WorkSpaces Core. Contact your account team to be
     * allow-listed to use this value. For more information, see <a
     * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
     * 
     */
    inline const RunningMode& GetRunningMode() const{ return m_runningMode; }

    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>  <p>The <code>MANUAL</code> value is
     * only supported by Amazon WorkSpaces Core. Contact your account team to be
     * allow-listed to use this value. For more information, see <a
     * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
     * 
     */
    inline bool RunningModeHasBeenSet() const { return m_runningModeHasBeenSet; }

    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>  <p>The <code>MANUAL</code> value is
     * only supported by Amazon WorkSpaces Core. Contact your account team to be
     * allow-listed to use this value. For more information, see <a
     * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
     * 
     */
    inline void SetRunningMode(const RunningMode& value) { m_runningModeHasBeenSet = true; m_runningMode = value; }

    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>  <p>The <code>MANUAL</code> value is
     * only supported by Amazon WorkSpaces Core. Contact your account team to be
     * allow-listed to use this value. For more information, see <a
     * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
     * 
     */
    inline void SetRunningMode(RunningMode&& value) { m_runningModeHasBeenSet = true; m_runningMode = std::move(value); }

    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>  <p>The <code>MANUAL</code> value is
     * only supported by Amazon WorkSpaces Core. Contact your account team to be
     * allow-listed to use this value. For more information, see <a
     * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
     * 
     */
    inline WorkspaceProperties& WithRunningMode(const RunningMode& value) { SetRunningMode(value); return *this;}

    /**
     * <p>The running mode. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/running-mode.html">Manage
     * the WorkSpace Running Mode</a>.</p>  <p>The <code>MANUAL</code> value is
     * only supported by Amazon WorkSpaces Core. Contact your account team to be
     * allow-listed to use this value. For more information, see <a
     * href="http://aws.amazon.com/workspaces/core/">Amazon WorkSpaces Core</a>.</p>
     * 
     */
    inline WorkspaceProperties& WithRunningMode(RunningMode&& value) { SetRunningMode(std::move(value)); return *this;}


    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60-minute intervals.</p>
     */
    inline int GetRunningModeAutoStopTimeoutInMinutes() const{ return m_runningModeAutoStopTimeoutInMinutes; }

    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60-minute intervals.</p>
     */
    inline bool RunningModeAutoStopTimeoutInMinutesHasBeenSet() const { return m_runningModeAutoStopTimeoutInMinutesHasBeenSet; }

    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60-minute intervals.</p>
     */
    inline void SetRunningModeAutoStopTimeoutInMinutes(int value) { m_runningModeAutoStopTimeoutInMinutesHasBeenSet = true; m_runningModeAutoStopTimeoutInMinutes = value; }

    /**
     * <p>The time after a user logs off when WorkSpaces are automatically stopped.
     * Configured in 60-minute intervals.</p>
     */
    inline WorkspaceProperties& WithRunningModeAutoStopTimeoutInMinutes(int value) { SetRunningModeAutoStopTimeoutInMinutes(value); return *this;}


    /**
     * <p>The size of the root volume. For important information about how to modify
     * the size of the root and user volumes, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">Modify
     * a WorkSpace</a>.</p>
     */
    inline int GetRootVolumeSizeGib() const{ return m_rootVolumeSizeGib; }

    /**
     * <p>The size of the root volume. For important information about how to modify
     * the size of the root and user volumes, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">Modify
     * a WorkSpace</a>.</p>
     */
    inline bool RootVolumeSizeGibHasBeenSet() const { return m_rootVolumeSizeGibHasBeenSet; }

    /**
     * <p>The size of the root volume. For important information about how to modify
     * the size of the root and user volumes, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">Modify
     * a WorkSpace</a>.</p>
     */
    inline void SetRootVolumeSizeGib(int value) { m_rootVolumeSizeGibHasBeenSet = true; m_rootVolumeSizeGib = value; }

    /**
     * <p>The size of the root volume. For important information about how to modify
     * the size of the root and user volumes, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">Modify
     * a WorkSpace</a>.</p>
     */
    inline WorkspaceProperties& WithRootVolumeSizeGib(int value) { SetRootVolumeSizeGib(value); return *this;}


    /**
     * <p>The size of the user storage. For important information about how to modify
     * the size of the root and user volumes, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">Modify
     * a WorkSpace</a>.</p>
     */
    inline int GetUserVolumeSizeGib() const{ return m_userVolumeSizeGib; }

    /**
     * <p>The size of the user storage. For important information about how to modify
     * the size of the root and user volumes, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">Modify
     * a WorkSpace</a>.</p>
     */
    inline bool UserVolumeSizeGibHasBeenSet() const { return m_userVolumeSizeGibHasBeenSet; }

    /**
     * <p>The size of the user storage. For important information about how to modify
     * the size of the root and user volumes, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">Modify
     * a WorkSpace</a>.</p>
     */
    inline void SetUserVolumeSizeGib(int value) { m_userVolumeSizeGibHasBeenSet = true; m_userVolumeSizeGib = value; }

    /**
     * <p>The size of the user storage. For important information about how to modify
     * the size of the root and user volumes, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/modify-workspaces.html">Modify
     * a WorkSpace</a>.</p>
     */
    inline WorkspaceProperties& WithUserVolumeSizeGib(int value) { SetUserVolumeSizeGib(value); return *this;}


    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline const Compute& GetComputeTypeName() const{ return m_computeTypeName; }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline bool ComputeTypeNameHasBeenSet() const { return m_computeTypeNameHasBeenSet; }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline void SetComputeTypeName(const Compute& value) { m_computeTypeNameHasBeenSet = true; m_computeTypeName = value; }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline void SetComputeTypeName(Compute&& value) { m_computeTypeNameHasBeenSet = true; m_computeTypeName = std::move(value); }

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline WorkspaceProperties& WithComputeTypeName(const Compute& value) { SetComputeTypeName(value); return *this;}

    /**
     * <p>The compute type. For more information, see <a
     * href="http://aws.amazon.com/workspaces/details/#Amazon_WorkSpaces_Bundles">Amazon
     * WorkSpaces Bundles</a>.</p>
     */
    inline WorkspaceProperties& WithComputeTypeName(Compute&& value) { SetComputeTypeName(std::move(value)); return *this;}


    /**
     * <p>The protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-protocols.html">
     * Protocols for Amazon WorkSpaces</a>.</p>  <ul> <li> <p>Only available for
     * WorkSpaces created with PCoIP bundles.</p> </li> <li> <p>The
     * <code>Protocols</code> property is case sensitive. Ensure you use
     * <code>PCOIP</code> or <code>WSP</code>.</p> </li> <li> <p>Unavailable for
     * Windows 7 WorkSpaces and WorkSpaces using GPU-based bundles (Graphics,
     * GraphicsPro, Graphics.g4dn, and GraphicsPro.g4dn).</p> </li> </ul> 
     */
    inline const Aws::Vector<Protocol>& GetProtocols() const{ return m_protocols; }

    /**
     * <p>The protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-protocols.html">
     * Protocols for Amazon WorkSpaces</a>.</p>  <ul> <li> <p>Only available for
     * WorkSpaces created with PCoIP bundles.</p> </li> <li> <p>The
     * <code>Protocols</code> property is case sensitive. Ensure you use
     * <code>PCOIP</code> or <code>WSP</code>.</p> </li> <li> <p>Unavailable for
     * Windows 7 WorkSpaces and WorkSpaces using GPU-based bundles (Graphics,
     * GraphicsPro, Graphics.g4dn, and GraphicsPro.g4dn).</p> </li> </ul> 
     */
    inline bool ProtocolsHasBeenSet() const { return m_protocolsHasBeenSet; }

    /**
     * <p>The protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-protocols.html">
     * Protocols for Amazon WorkSpaces</a>.</p>  <ul> <li> <p>Only available for
     * WorkSpaces created with PCoIP bundles.</p> </li> <li> <p>The
     * <code>Protocols</code> property is case sensitive. Ensure you use
     * <code>PCOIP</code> or <code>WSP</code>.</p> </li> <li> <p>Unavailable for
     * Windows 7 WorkSpaces and WorkSpaces using GPU-based bundles (Graphics,
     * GraphicsPro, Graphics.g4dn, and GraphicsPro.g4dn).</p> </li> </ul> 
     */
    inline void SetProtocols(const Aws::Vector<Protocol>& value) { m_protocolsHasBeenSet = true; m_protocols = value; }

    /**
     * <p>The protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-protocols.html">
     * Protocols for Amazon WorkSpaces</a>.</p>  <ul> <li> <p>Only available for
     * WorkSpaces created with PCoIP bundles.</p> </li> <li> <p>The
     * <code>Protocols</code> property is case sensitive. Ensure you use
     * <code>PCOIP</code> or <code>WSP</code>.</p> </li> <li> <p>Unavailable for
     * Windows 7 WorkSpaces and WorkSpaces using GPU-based bundles (Graphics,
     * GraphicsPro, Graphics.g4dn, and GraphicsPro.g4dn).</p> </li> </ul> 
     */
    inline void SetProtocols(Aws::Vector<Protocol>&& value) { m_protocolsHasBeenSet = true; m_protocols = std::move(value); }

    /**
     * <p>The protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-protocols.html">
     * Protocols for Amazon WorkSpaces</a>.</p>  <ul> <li> <p>Only available for
     * WorkSpaces created with PCoIP bundles.</p> </li> <li> <p>The
     * <code>Protocols</code> property is case sensitive. Ensure you use
     * <code>PCOIP</code> or <code>WSP</code>.</p> </li> <li> <p>Unavailable for
     * Windows 7 WorkSpaces and WorkSpaces using GPU-based bundles (Graphics,
     * GraphicsPro, Graphics.g4dn, and GraphicsPro.g4dn).</p> </li> </ul> 
     */
    inline WorkspaceProperties& WithProtocols(const Aws::Vector<Protocol>& value) { SetProtocols(value); return *this;}

    /**
     * <p>The protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-protocols.html">
     * Protocols for Amazon WorkSpaces</a>.</p>  <ul> <li> <p>Only available for
     * WorkSpaces created with PCoIP bundles.</p> </li> <li> <p>The
     * <code>Protocols</code> property is case sensitive. Ensure you use
     * <code>PCOIP</code> or <code>WSP</code>.</p> </li> <li> <p>Unavailable for
     * Windows 7 WorkSpaces and WorkSpaces using GPU-based bundles (Graphics,
     * GraphicsPro, Graphics.g4dn, and GraphicsPro.g4dn).</p> </li> </ul> 
     */
    inline WorkspaceProperties& WithProtocols(Aws::Vector<Protocol>&& value) { SetProtocols(std::move(value)); return *this;}

    /**
     * <p>The protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-protocols.html">
     * Protocols for Amazon WorkSpaces</a>.</p>  <ul> <li> <p>Only available for
     * WorkSpaces created with PCoIP bundles.</p> </li> <li> <p>The
     * <code>Protocols</code> property is case sensitive. Ensure you use
     * <code>PCOIP</code> or <code>WSP</code>.</p> </li> <li> <p>Unavailable for
     * Windows 7 WorkSpaces and WorkSpaces using GPU-based bundles (Graphics,
     * GraphicsPro, Graphics.g4dn, and GraphicsPro.g4dn).</p> </li> </ul> 
     */
    inline WorkspaceProperties& AddProtocols(const Protocol& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(value); return *this; }

    /**
     * <p>The protocol. For more information, see <a
     * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/amazon-workspaces-protocols.html">
     * Protocols for Amazon WorkSpaces</a>.</p>  <ul> <li> <p>Only available for
     * WorkSpaces created with PCoIP bundles.</p> </li> <li> <p>The
     * <code>Protocols</code> property is case sensitive. Ensure you use
     * <code>PCOIP</code> or <code>WSP</code>.</p> </li> <li> <p>Unavailable for
     * Windows 7 WorkSpaces and WorkSpaces using GPU-based bundles (Graphics,
     * GraphicsPro, Graphics.g4dn, and GraphicsPro.g4dn).</p> </li> </ul> 
     */
    inline WorkspaceProperties& AddProtocols(Protocol&& value) { m_protocolsHasBeenSet = true; m_protocols.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
