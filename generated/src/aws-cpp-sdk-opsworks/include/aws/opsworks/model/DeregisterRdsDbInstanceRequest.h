/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DeregisterRdsDbInstanceRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DeregisterRdsDbInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterRdsDbInstance"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline const Aws::String& GetRdsDbInstanceArn() const{ return m_rdsDbInstanceArn; }
    inline bool RdsDbInstanceArnHasBeenSet() const { return m_rdsDbInstanceArnHasBeenSet; }
    inline void SetRdsDbInstanceArn(const Aws::String& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = value; }
    inline void SetRdsDbInstanceArn(Aws::String&& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = std::move(value); }
    inline void SetRdsDbInstanceArn(const char* value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn.assign(value); }
    inline DeregisterRdsDbInstanceRequest& WithRdsDbInstanceArn(const Aws::String& value) { SetRdsDbInstanceArn(value); return *this;}
    inline DeregisterRdsDbInstanceRequest& WithRdsDbInstanceArn(Aws::String&& value) { SetRdsDbInstanceArn(std::move(value)); return *this;}
    inline DeregisterRdsDbInstanceRequest& WithRdsDbInstanceArn(const char* value) { SetRdsDbInstanceArn(value); return *this;}
    ///@}
  private:

    Aws::String m_rdsDbInstanceArn;
    bool m_rdsDbInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
