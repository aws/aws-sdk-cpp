/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Target.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class UpdateMaintenanceWindowTargetResult
  {
  public:
    AWS_SSM_API UpdateMaintenanceWindowTargetResult() = default;
    AWS_SSM_API UpdateMaintenanceWindowTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UpdateMaintenanceWindowTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The maintenance window ID specified in the update request.</p>
     */
    inline const Aws::String& GetWindowId() const { return m_windowId; }
    template<typename WindowIdT = Aws::String>
    void SetWindowId(WindowIdT&& value) { m_windowIdHasBeenSet = true; m_windowId = std::forward<WindowIdT>(value); }
    template<typename WindowIdT = Aws::String>
    UpdateMaintenanceWindowTargetResult& WithWindowId(WindowIdT&& value) { SetWindowId(std::forward<WindowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target ID specified in the update request.</p>
     */
    inline const Aws::String& GetWindowTargetId() const { return m_windowTargetId; }
    template<typename WindowTargetIdT = Aws::String>
    void SetWindowTargetId(WindowTargetIdT&& value) { m_windowTargetIdHasBeenSet = true; m_windowTargetId = std::forward<WindowTargetIdT>(value); }
    template<typename WindowTargetIdT = Aws::String>
    UpdateMaintenanceWindowTargetResult& WithWindowTargetId(WindowTargetIdT&& value) { SetWindowTargetId(std::forward<WindowTargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated targets.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    UpdateMaintenanceWindowTargetResult& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    UpdateMaintenanceWindowTargetResult& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated owner.</p>
     */
    inline const Aws::String& GetOwnerInformation() const { return m_ownerInformation; }
    template<typename OwnerInformationT = Aws::String>
    void SetOwnerInformation(OwnerInformationT&& value) { m_ownerInformationHasBeenSet = true; m_ownerInformation = std::forward<OwnerInformationT>(value); }
    template<typename OwnerInformationT = Aws::String>
    UpdateMaintenanceWindowTargetResult& WithOwnerInformation(OwnerInformationT&& value) { SetOwnerInformation(std::forward<OwnerInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateMaintenanceWindowTargetResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateMaintenanceWindowTargetResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateMaintenanceWindowTargetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_windowTargetId;
    bool m_windowTargetIdHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_ownerInformation;
    bool m_ownerInformationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
