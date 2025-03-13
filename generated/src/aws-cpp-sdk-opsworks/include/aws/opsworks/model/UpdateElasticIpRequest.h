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
    AWS_OPSWORKS_API UpdateElasticIpRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateElasticIp"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IP address for which you want to update the name.</p>
     */
    inline const Aws::String& GetElasticIp() const { return m_elasticIp; }
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }
    template<typename ElasticIpT = Aws::String>
    void SetElasticIp(ElasticIpT&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::forward<ElasticIpT>(value); }
    template<typename ElasticIpT = Aws::String>
    UpdateElasticIpRequest& WithElasticIp(ElasticIpT&& value) { SetElasticIp(std::forward<ElasticIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name, which can be a maximum of 32 characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateElasticIpRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
