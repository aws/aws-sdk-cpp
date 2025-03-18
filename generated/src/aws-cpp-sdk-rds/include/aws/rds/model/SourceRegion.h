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
   * <p>Contains an Amazon Web Services Region name as the result of a successful
   * call to the <code>DescribeSourceRegions</code> action.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/SourceRegion">AWS
   * API Reference</a></p>
   */
  class SourceRegion
  {
  public:
    AWS_RDS_API SourceRegion() = default;
    AWS_RDS_API SourceRegion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API SourceRegion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the source Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    SourceRegion& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for the source Amazon Web Services Region endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    SourceRegion& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the source Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SourceRegion& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the source Amazon Web Services Region supports replicating
     * automated backups to the current Amazon Web Services Region.</p>
     */
    inline bool GetSupportsDBInstanceAutomatedBackupsReplication() const { return m_supportsDBInstanceAutomatedBackupsReplication; }
    inline bool SupportsDBInstanceAutomatedBackupsReplicationHasBeenSet() const { return m_supportsDBInstanceAutomatedBackupsReplicationHasBeenSet; }
    inline void SetSupportsDBInstanceAutomatedBackupsReplication(bool value) { m_supportsDBInstanceAutomatedBackupsReplicationHasBeenSet = true; m_supportsDBInstanceAutomatedBackupsReplication = value; }
    inline SourceRegion& WithSupportsDBInstanceAutomatedBackupsReplication(bool value) { SetSupportsDBInstanceAutomatedBackupsReplication(value); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_supportsDBInstanceAutomatedBackupsReplication{false};
    bool m_supportsDBInstanceAutomatedBackupsReplicationHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
