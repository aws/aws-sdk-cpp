/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/InstanceAccessControlAttributeConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/InstanceAccessControlAttributeConfiguration.h>
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
namespace SSOAdmin
{
namespace Model
{
  class DescribeInstanceAccessControlAttributeConfigurationResult
  {
  public:
    AWS_SSOADMIN_API DescribeInstanceAccessControlAttributeConfigurationResult() = default;
    AWS_SSOADMIN_API DescribeInstanceAccessControlAttributeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeInstanceAccessControlAttributeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the attribute configuration process.</p>
     */
    inline InstanceAccessControlAttributeConfigurationStatus GetStatus() const { return m_status; }
    inline void SetStatus(InstanceAccessControlAttributeConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatus(InstanceAccessControlAttributeConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides more details about the current status of the specified
     * attribute.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DescribeInstanceAccessControlAttributeConfigurationResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gets the list of IAM Identity Center identity store attributes that have been
     * added to your ABAC configuration.</p>
     */
    inline const InstanceAccessControlAttributeConfiguration& GetInstanceAccessControlAttributeConfiguration() const { return m_instanceAccessControlAttributeConfiguration; }
    template<typename InstanceAccessControlAttributeConfigurationT = InstanceAccessControlAttributeConfiguration>
    void SetInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfigurationT&& value) { m_instanceAccessControlAttributeConfigurationHasBeenSet = true; m_instanceAccessControlAttributeConfiguration = std::forward<InstanceAccessControlAttributeConfigurationT>(value); }
    template<typename InstanceAccessControlAttributeConfigurationT = InstanceAccessControlAttributeConfiguration>
    DescribeInstanceAccessControlAttributeConfigurationResult& WithInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfigurationT&& value) { SetInstanceAccessControlAttributeConfiguration(std::forward<InstanceAccessControlAttributeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInstanceAccessControlAttributeConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InstanceAccessControlAttributeConfigurationStatus m_status{InstanceAccessControlAttributeConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    InstanceAccessControlAttributeConfiguration m_instanceAccessControlAttributeConfiguration;
    bool m_instanceAccessControlAttributeConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
