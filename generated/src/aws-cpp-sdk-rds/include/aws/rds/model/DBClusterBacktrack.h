/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rds/model/ResponseMetadata.h>
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
   * <code>DescribeDBClusterBacktracks</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterBacktrack">AWS
   * API Reference</a></p>
   */
  class DBClusterBacktrack
  {
  public:
    AWS_RDS_API DBClusterBacktrack() = default;
    AWS_RDS_API DBClusterBacktrack(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBClusterBacktrack& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Contains a user-supplied DB cluster identifier. This identifier is the unique
     * key that identifies a DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    DBClusterBacktrack& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the backtrack identifier.</p>
     */
    inline const Aws::String& GetBacktrackIdentifier() const { return m_backtrackIdentifier; }
    inline bool BacktrackIdentifierHasBeenSet() const { return m_backtrackIdentifierHasBeenSet; }
    template<typename BacktrackIdentifierT = Aws::String>
    void SetBacktrackIdentifier(BacktrackIdentifierT&& value) { m_backtrackIdentifierHasBeenSet = true; m_backtrackIdentifier = std::forward<BacktrackIdentifierT>(value); }
    template<typename BacktrackIdentifierT = Aws::String>
    DBClusterBacktrack& WithBacktrackIdentifier(BacktrackIdentifierT&& value) { SetBacktrackIdentifier(std::forward<BacktrackIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the time to which the DB cluster was backtracked.</p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackTo() const { return m_backtrackTo; }
    inline bool BacktrackToHasBeenSet() const { return m_backtrackToHasBeenSet; }
    template<typename BacktrackToT = Aws::Utils::DateTime>
    void SetBacktrackTo(BacktrackToT&& value) { m_backtrackToHasBeenSet = true; m_backtrackTo = std::forward<BacktrackToT>(value); }
    template<typename BacktrackToT = Aws::Utils::DateTime>
    DBClusterBacktrack& WithBacktrackTo(BacktrackToT&& value) { SetBacktrackTo(std::forward<BacktrackToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the time from which the DB cluster was backtracked.</p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackedFrom() const { return m_backtrackedFrom; }
    inline bool BacktrackedFromHasBeenSet() const { return m_backtrackedFromHasBeenSet; }
    template<typename BacktrackedFromT = Aws::Utils::DateTime>
    void SetBacktrackedFrom(BacktrackedFromT&& value) { m_backtrackedFromHasBeenSet = true; m_backtrackedFrom = std::forward<BacktrackedFromT>(value); }
    template<typename BacktrackedFromT = Aws::Utils::DateTime>
    DBClusterBacktrack& WithBacktrackedFrom(BacktrackedFromT&& value) { SetBacktrackedFrom(std::forward<BacktrackedFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the time at which the backtrack was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackRequestCreationTime() const { return m_backtrackRequestCreationTime; }
    inline bool BacktrackRequestCreationTimeHasBeenSet() const { return m_backtrackRequestCreationTimeHasBeenSet; }
    template<typename BacktrackRequestCreationTimeT = Aws::Utils::DateTime>
    void SetBacktrackRequestCreationTime(BacktrackRequestCreationTimeT&& value) { m_backtrackRequestCreationTimeHasBeenSet = true; m_backtrackRequestCreationTime = std::forward<BacktrackRequestCreationTimeT>(value); }
    template<typename BacktrackRequestCreationTimeT = Aws::Utils::DateTime>
    DBClusterBacktrack& WithBacktrackRequestCreationTime(BacktrackRequestCreationTimeT&& value) { SetBacktrackRequestCreationTime(std::forward<BacktrackRequestCreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the backtrack. This property returns one of the following
     * values:</p> <ul> <li> <p> <code>applying</code> - The backtrack is currently
     * being applied to or rolled back from the DB cluster.</p> </li> <li> <p>
     * <code>completed</code> - The backtrack has successfully been applied to or
     * rolled back from the DB cluster.</p> </li> <li> <p> <code>failed</code> - An
     * error occurred while the backtrack was applied to or rolled back from the DB
     * cluster.</p> </li> <li> <p> <code>pending</code> - The backtrack is currently
     * pending application to or rollback from the DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DBClusterBacktrack& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DBClusterBacktrack& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_backtrackIdentifier;
    bool m_backtrackIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_backtrackTo{};
    bool m_backtrackToHasBeenSet = false;

    Aws::Utils::DateTime m_backtrackedFrom{};
    bool m_backtrackedFromHasBeenSet = false;

    Aws::Utils::DateTime m_backtrackRequestCreationTime{};
    bool m_backtrackRequestCreationTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = true;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
