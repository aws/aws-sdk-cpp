/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an Elastic IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ElasticIp">AWS
   * API Reference</a></p>
   */
  class ElasticIp
  {
  public:
    AWS_OPSWORKS_API ElasticIp();
    AWS_OPSWORKS_API ElasticIp(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API ElasticIp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetIp() const{ return m_ip; }
    inline bool IpHasBeenSet() const { return m_ipHasBeenSet; }
    inline void SetIp(const Aws::String& value) { m_ipHasBeenSet = true; m_ip = value; }
    inline void SetIp(Aws::String&& value) { m_ipHasBeenSet = true; m_ip = std::move(value); }
    inline void SetIp(const char* value) { m_ipHasBeenSet = true; m_ip.assign(value); }
    inline ElasticIp& WithIp(const Aws::String& value) { SetIp(value); return *this;}
    inline ElasticIp& WithIp(Aws::String&& value) { SetIp(std::move(value)); return *this;}
    inline ElasticIp& WithIp(const char* value) { SetIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name, which can be a maximum of 32 characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ElasticIp& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ElasticIp& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ElasticIp& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline ElasticIp& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline ElasticIp& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline ElasticIp& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and
     * Endpoints</a>.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline ElasticIp& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline ElasticIp& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline ElasticIp& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance that the address is attached to.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ElasticIp& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ElasticIp& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ElasticIp& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}
  private:

    Aws::String m_ip;
    bool m_ipHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
