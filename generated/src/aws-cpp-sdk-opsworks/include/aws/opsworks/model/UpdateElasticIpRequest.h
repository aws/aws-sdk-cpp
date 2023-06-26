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
  class UpdateElasticIpRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API UpdateElasticIpRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateElasticIp"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The IP address for which you want to update the name.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }

    /**
     * <p>The IP address for which you want to update the name.</p>
     */
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }

    /**
     * <p>The IP address for which you want to update the name.</p>
     */
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }

    /**
     * <p>The IP address for which you want to update the name.</p>
     */
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }

    /**
     * <p>The IP address for which you want to update the name.</p>
     */
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }

    /**
     * <p>The IP address for which you want to update the name.</p>
     */
    inline UpdateElasticIpRequest& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}

    /**
     * <p>The IP address for which you want to update the name.</p>
     */
    inline UpdateElasticIpRequest& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}

    /**
     * <p>The IP address for which you want to update the name.</p>
     */
    inline UpdateElasticIpRequest& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}


    /**
     * <p>The new name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name.</p>
     */
    inline UpdateElasticIpRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name.</p>
     */
    inline UpdateElasticIpRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name.</p>
     */
    inline UpdateElasticIpRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
