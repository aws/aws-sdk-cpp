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
   * <p>The status of the elastic IP (EIP) address for an Amazon Redshift
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterElasticIpStatus">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterElasticIpStatus
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterElasticIpStatus();
    AWS_SECURITYHUB_API AwsRedshiftClusterElasticIpStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterElasticIpStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The elastic IP address for the cluster.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }
    inline AwsRedshiftClusterElasticIpStatus& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}
    inline AwsRedshiftClusterElasticIpStatus& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}
    inline AwsRedshiftClusterElasticIpStatus& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the elastic IP address.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsRedshiftClusterElasticIpStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsRedshiftClusterElasticIpStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsRedshiftClusterElasticIpStatus& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
