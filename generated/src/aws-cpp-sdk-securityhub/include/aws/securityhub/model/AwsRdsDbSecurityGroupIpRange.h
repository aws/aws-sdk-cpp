/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>IP range information for an RDS DB security group.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbSecurityGroupIpRange">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbSecurityGroupIpRange
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupIpRange();
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupIpRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbSecurityGroupIpRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the IP range.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>Specifies the IP range.</p>
     */
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }

    /**
     * <p>Specifies the IP range.</p>
     */
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>Specifies the IP range.</p>
     */
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }

    /**
     * <p>Specifies the IP range.</p>
     */
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }

    /**
     * <p>Specifies the IP range.</p>
     */
    inline AwsRdsDbSecurityGroupIpRange& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}

    /**
     * <p>Specifies the IP range.</p>
     */
    inline AwsRdsDbSecurityGroupIpRange& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}

    /**
     * <p>Specifies the IP range.</p>
     */
    inline AwsRdsDbSecurityGroupIpRange& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}


    /**
     * <p>Specifies the status of the IP range.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of the IP range.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the status of the IP range.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of the IP range.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the status of the IP range.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Specifies the status of the IP range.</p>
     */
    inline AwsRdsDbSecurityGroupIpRange& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of the IP range.</p>
     */
    inline AwsRdsDbSecurityGroupIpRange& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Specifies the status of the IP range.</p>
     */
    inline AwsRdsDbSecurityGroupIpRange& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
