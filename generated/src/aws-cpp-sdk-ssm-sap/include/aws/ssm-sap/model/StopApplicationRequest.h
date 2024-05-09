/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/SsmSapRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ConnectedEntityType.h>
#include <utility>

namespace Aws
{
namespace SsmSap
{
namespace Model
{

  /**
   */
  class StopApplicationRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API StopApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopApplication"; }

    AWS_SSMSAP_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline StopApplicationRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline StopApplicationRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline StopApplicationRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>Specify the <code>ConnectedEntityType</code>. Accepted type is
     * <code>DBMS</code>.</p> <p>If this parameter is included, the connected DBMS
     * (Database Management System) will be stopped.</p>
     */
    inline const ConnectedEntityType& GetStopConnectedEntity() const{ return m_stopConnectedEntity; }

    /**
     * <p>Specify the <code>ConnectedEntityType</code>. Accepted type is
     * <code>DBMS</code>.</p> <p>If this parameter is included, the connected DBMS
     * (Database Management System) will be stopped.</p>
     */
    inline bool StopConnectedEntityHasBeenSet() const { return m_stopConnectedEntityHasBeenSet; }

    /**
     * <p>Specify the <code>ConnectedEntityType</code>. Accepted type is
     * <code>DBMS</code>.</p> <p>If this parameter is included, the connected DBMS
     * (Database Management System) will be stopped.</p>
     */
    inline void SetStopConnectedEntity(const ConnectedEntityType& value) { m_stopConnectedEntityHasBeenSet = true; m_stopConnectedEntity = value; }

    /**
     * <p>Specify the <code>ConnectedEntityType</code>. Accepted type is
     * <code>DBMS</code>.</p> <p>If this parameter is included, the connected DBMS
     * (Database Management System) will be stopped.</p>
     */
    inline void SetStopConnectedEntity(ConnectedEntityType&& value) { m_stopConnectedEntityHasBeenSet = true; m_stopConnectedEntity = std::move(value); }

    /**
     * <p>Specify the <code>ConnectedEntityType</code>. Accepted type is
     * <code>DBMS</code>.</p> <p>If this parameter is included, the connected DBMS
     * (Database Management System) will be stopped.</p>
     */
    inline StopApplicationRequest& WithStopConnectedEntity(const ConnectedEntityType& value) { SetStopConnectedEntity(value); return *this;}

    /**
     * <p>Specify the <code>ConnectedEntityType</code>. Accepted type is
     * <code>DBMS</code>.</p> <p>If this parameter is included, the connected DBMS
     * (Database Management System) will be stopped.</p>
     */
    inline StopApplicationRequest& WithStopConnectedEntity(ConnectedEntityType&& value) { SetStopConnectedEntity(std::move(value)); return *this;}


    /**
     * <p>Boolean. If included and if set to <code>True</code>, the StopApplication
     * operation will shut down the associated Amazon EC2 instance in addition to the
     * application.</p>
     */
    inline bool GetIncludeEc2InstanceShutdown() const{ return m_includeEc2InstanceShutdown; }

    /**
     * <p>Boolean. If included and if set to <code>True</code>, the StopApplication
     * operation will shut down the associated Amazon EC2 instance in addition to the
     * application.</p>
     */
    inline bool IncludeEc2InstanceShutdownHasBeenSet() const { return m_includeEc2InstanceShutdownHasBeenSet; }

    /**
     * <p>Boolean. If included and if set to <code>True</code>, the StopApplication
     * operation will shut down the associated Amazon EC2 instance in addition to the
     * application.</p>
     */
    inline void SetIncludeEc2InstanceShutdown(bool value) { m_includeEc2InstanceShutdownHasBeenSet = true; m_includeEc2InstanceShutdown = value; }

    /**
     * <p>Boolean. If included and if set to <code>True</code>, the StopApplication
     * operation will shut down the associated Amazon EC2 instance in addition to the
     * application.</p>
     */
    inline StopApplicationRequest& WithIncludeEc2InstanceShutdown(bool value) { SetIncludeEc2InstanceShutdown(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    ConnectedEntityType m_stopConnectedEntity;
    bool m_stopConnectedEntityHasBeenSet = false;

    bool m_includeEc2InstanceShutdown;
    bool m_includeEc2InstanceShutdownHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
