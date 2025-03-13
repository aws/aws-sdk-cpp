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
   * <p>Provides a list of status information for a DB instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBInstanceStatusInfo">AWS
   * API Reference</a></p>
   */
  class DBInstanceStatusInfo
  {
  public:
    AWS_RDS_API DBInstanceStatusInfo() = default;
    AWS_RDS_API DBInstanceStatusInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBInstanceStatusInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>This value is currently "read replication."</p>
     */
    inline const Aws::String& GetStatusType() const { return m_statusType; }
    inline bool StatusTypeHasBeenSet() const { return m_statusTypeHasBeenSet; }
    template<typename StatusTypeT = Aws::String>
    void SetStatusType(StatusTypeT&& value) { m_statusTypeHasBeenSet = true; m_statusType = std::forward<StatusTypeT>(value); }
    template<typename StatusTypeT = Aws::String>
    DBInstanceStatusInfo& WithStatusType(StatusTypeT&& value) { SetStatusType(std::forward<StatusTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the instance is operating normally (TRUE) or is in an error
     * state (FALSE).</p>
     */
    inline bool GetNormal() const { return m_normal; }
    inline bool NormalHasBeenSet() const { return m_normalHasBeenSet; }
    inline void SetNormal(bool value) { m_normalHasBeenSet = true; m_normal = value; }
    inline DBInstanceStatusInfo& WithNormal(bool value) { SetNormal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the DB instance. For a StatusType of read replica, the values
     * can be replicating, replication stop point set, replication stop point reached,
     * error, stopped, or terminated.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DBInstanceStatusInfo& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * isn't in an error state, this value is blank.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DBInstanceStatusInfo& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_statusType;
    bool m_statusTypeHasBeenSet = false;

    bool m_normal{false};
    bool m_normalHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
