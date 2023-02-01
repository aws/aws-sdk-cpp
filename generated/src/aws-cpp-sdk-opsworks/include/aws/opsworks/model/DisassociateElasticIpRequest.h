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
  class DisassociateElasticIpRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DisassociateElasticIpRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateElasticIp"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline DisassociateElasticIpRequest& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline DisassociateElasticIpRequest& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline DisassociateElasticIpRequest& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}

  private:

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
