/**
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
    AWS_RDS_API IPRange() = default;
    AWS_RDS_API IPRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API IPRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The status of the IP range. Status can be "authorizing", "authorized",
     * "revoking", and "revoked".</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    IPRange& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP range.</p>
     */
    inline const Aws::String& GetCIDRIP() const { return m_cIDRIP; }
    inline bool CIDRIPHasBeenSet() const { return m_cIDRIPHasBeenSet; }
    template<typename CIDRIPT = Aws::String>
    void SetCIDRIP(CIDRIPT&& value) { m_cIDRIPHasBeenSet = true; m_cIDRIP = std::forward<CIDRIPT>(value); }
    template<typename CIDRIPT = Aws::String>
    IPRange& WithCIDRIP(CIDRIPT&& value) { SetCIDRIP(std::forward<CIDRIPT>(value)); return *this;}
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
