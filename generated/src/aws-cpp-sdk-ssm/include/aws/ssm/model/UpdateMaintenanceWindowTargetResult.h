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
    AWS_SSM_API UpdateMaintenanceWindowTargetResult();
    AWS_SSM_API UpdateMaintenanceWindowTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UpdateMaintenanceWindowTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The maintenance window ID specified in the update request.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }
    inline UpdateMaintenanceWindowTargetResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target ID specified in the update request.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetId = value; }
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetId = std::move(value); }
    inline void SetWindowTargetId(const char* value) { m_windowTargetId.assign(value); }
    inline UpdateMaintenanceWindowTargetResult& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated targets.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targets = std::move(value); }
    inline UpdateMaintenanceWindowTargetResult& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetResult& AddTargets(const Target& value) { m_targets.push_back(value); return *this; }
    inline UpdateMaintenanceWindowTargetResult& AddTargets(Target&& value) { m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated owner.</p>
     */
    inline const Aws::String& GetOwnerInformation() const{ return m_ownerInformation; }
    inline void SetOwnerInformation(const Aws::String& value) { m_ownerInformation = value; }
    inline void SetOwnerInformation(Aws::String&& value) { m_ownerInformation = std::move(value); }
    inline void SetOwnerInformation(const char* value) { m_ownerInformation.assign(value); }
    inline UpdateMaintenanceWindowTargetResult& WithOwnerInformation(const Aws::String& value) { SetOwnerInformation(value); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithOwnerInformation(Aws::String&& value) { SetOwnerInformation(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithOwnerInformation(const char* value) { SetOwnerInformation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateMaintenanceWindowTargetResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateMaintenanceWindowTargetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateMaintenanceWindowTargetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateMaintenanceWindowTargetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_windowId;

    Aws::String m_windowTargetId;

    Aws::Vector<Target> m_targets;

    Aws::String m_ownerInformation;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
