/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes the status of the elastic IP (EIP) address.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ElasticIpStatus">AWS
   * API Reference</a></p>
   */
  class ElasticIpStatus
  {
  public:
    AWS_REDSHIFT_API ElasticIpStatus();
    AWS_REDSHIFT_API ElasticIpStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ElasticIpStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The elastic IP (EIP) address for the cluster.</p>
     */
    inline const Aws::String& GetElasticIp() const{ return m_elasticIp; }
    inline bool ElasticIpHasBeenSet() const { return m_elasticIpHasBeenSet; }
    inline void SetElasticIp(const Aws::String& value) { m_elasticIpHasBeenSet = true; m_elasticIp = value; }
    inline void SetElasticIp(Aws::String&& value) { m_elasticIpHasBeenSet = true; m_elasticIp = std::move(value); }
    inline void SetElasticIp(const char* value) { m_elasticIpHasBeenSet = true; m_elasticIp.assign(value); }
    inline ElasticIpStatus& WithElasticIp(const Aws::String& value) { SetElasticIp(value); return *this;}
    inline ElasticIpStatus& WithElasticIp(Aws::String&& value) { SetElasticIp(std::move(value)); return *this;}
    inline ElasticIpStatus& WithElasticIp(const char* value) { SetElasticIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the elastic IP (EIP) address.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ElasticIpStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ElasticIpStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ElasticIpStatus& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_elasticIp;
    bool m_elasticIpHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
