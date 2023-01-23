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
    AWS_SSOADMIN_API DescribeInstanceAccessControlAttributeConfigurationResult();
    AWS_SSOADMIN_API DescribeInstanceAccessControlAttributeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeInstanceAccessControlAttributeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the attribute configuration process.</p>
     */
    inline const InstanceAccessControlAttributeConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the attribute configuration process.</p>
     */
    inline void SetStatus(const InstanceAccessControlAttributeConfigurationStatus& value) { m_status = value; }

    /**
     * <p>The status of the attribute configuration process.</p>
     */
    inline void SetStatus(InstanceAccessControlAttributeConfigurationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the attribute configuration process.</p>
     */
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatus(const InstanceAccessControlAttributeConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the attribute configuration process.</p>
     */
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatus(InstanceAccessControlAttributeConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Provides more details about the current status of the specified
     * attribute.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>Provides more details about the current status of the specified
     * attribute.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>Provides more details about the current status of the specified
     * attribute.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>Provides more details about the current status of the specified
     * attribute.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>Provides more details about the current status of the specified
     * attribute.</p>
     */
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>Provides more details about the current status of the specified
     * attribute.</p>
     */
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>Provides more details about the current status of the specified
     * attribute.</p>
     */
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>Gets the list of IAM Identity Center identity store attributes that have been
     * added to your ABAC configuration.</p>
     */
    inline const InstanceAccessControlAttributeConfiguration& GetInstanceAccessControlAttributeConfiguration() const{ return m_instanceAccessControlAttributeConfiguration; }

    /**
     * <p>Gets the list of IAM Identity Center identity store attributes that have been
     * added to your ABAC configuration.</p>
     */
    inline void SetInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfiguration& value) { m_instanceAccessControlAttributeConfiguration = value; }

    /**
     * <p>Gets the list of IAM Identity Center identity store attributes that have been
     * added to your ABAC configuration.</p>
     */
    inline void SetInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfiguration&& value) { m_instanceAccessControlAttributeConfiguration = std::move(value); }

    /**
     * <p>Gets the list of IAM Identity Center identity store attributes that have been
     * added to your ABAC configuration.</p>
     */
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithInstanceAccessControlAttributeConfiguration(const InstanceAccessControlAttributeConfiguration& value) { SetInstanceAccessControlAttributeConfiguration(value); return *this;}

    /**
     * <p>Gets the list of IAM Identity Center identity store attributes that have been
     * added to your ABAC configuration.</p>
     */
    inline DescribeInstanceAccessControlAttributeConfigurationResult& WithInstanceAccessControlAttributeConfiguration(InstanceAccessControlAttributeConfiguration&& value) { SetInstanceAccessControlAttributeConfiguration(std::move(value)); return *this;}

  private:

    InstanceAccessControlAttributeConfigurationStatus m_status;

    Aws::String m_statusReason;

    InstanceAccessControlAttributeConfiguration m_instanceAccessControlAttributeConfiguration;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
