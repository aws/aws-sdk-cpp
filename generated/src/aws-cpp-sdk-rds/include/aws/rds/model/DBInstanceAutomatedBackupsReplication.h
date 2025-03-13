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
   * <p>Automated backups of a DB instance replicated to another Amazon Web Services
   * Region. They consist of system backups, transaction logs, and database instance
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBInstanceAutomatedBackupsReplication">AWS
   * API Reference</a></p>
   */
  class DBInstanceAutomatedBackupsReplication
  {
  public:
    AWS_RDS_API DBInstanceAutomatedBackupsReplication() = default;
    AWS_RDS_API DBInstanceAutomatedBackupsReplication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBInstanceAutomatedBackupsReplication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups.</p>
     */
    inline const Aws::String& GetDBInstanceAutomatedBackupsArn() const { return m_dBInstanceAutomatedBackupsArn; }
    inline bool DBInstanceAutomatedBackupsArnHasBeenSet() const { return m_dBInstanceAutomatedBackupsArnHasBeenSet; }
    template<typename DBInstanceAutomatedBackupsArnT = Aws::String>
    void SetDBInstanceAutomatedBackupsArn(DBInstanceAutomatedBackupsArnT&& value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn = std::forward<DBInstanceAutomatedBackupsArnT>(value); }
    template<typename DBInstanceAutomatedBackupsArnT = Aws::String>
    DBInstanceAutomatedBackupsReplication& WithDBInstanceAutomatedBackupsArn(DBInstanceAutomatedBackupsArnT&& value) { SetDBInstanceAutomatedBackupsArn(std::forward<DBInstanceAutomatedBackupsArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceAutomatedBackupsArn;
    bool m_dBInstanceAutomatedBackupsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
