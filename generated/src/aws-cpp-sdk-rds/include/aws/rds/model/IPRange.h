﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>This data type is used as a response element in the
   * <code>DescribeDBSecurityGroups</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/IPRange">AWS API
   * Reference</a></p>
   */
  class IPRange
  {
  public:
    AWS_RDS_API IPRange();
    AWS_RDS_API IPRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API IPRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The status of the IP range. Status can be "authorizing", "authorized",
     * "revoking", and "revoked".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline IPRange& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline IPRange& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline IPRange& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP range.</p>
     */
    inline const Aws::String& GetCIDRIP() const{ return m_cIDRIP; }
    inline bool CIDRIPHasBeenSet() const { return m_cIDRIPHasBeenSet; }
    inline void SetCIDRIP(const Aws::String& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = value; }
    inline void SetCIDRIP(Aws::String&& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = std::move(value); }
    inline void SetCIDRIP(const char* value) { m_cIDRIPHasBeenSet = true; m_cIDRIP.assign(value); }
    inline IPRange& WithCIDRIP(const Aws::String& value) { SetCIDRIP(value); return *this;}
    inline IPRange& WithCIDRIP(Aws::String&& value) { SetCIDRIP(std::move(value)); return *this;}
    inline IPRange& WithCIDRIP(const char* value) { SetCIDRIP(value); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_cIDRIP;
    bool m_cIDRIPHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
