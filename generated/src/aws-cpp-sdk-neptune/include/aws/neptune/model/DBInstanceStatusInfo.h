/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Provides a list of status information for a DB instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/DBInstanceStatusInfo">AWS
   * API Reference</a></p>
   */
  class DBInstanceStatusInfo
  {
  public:
    AWS_NEPTUNE_API DBInstanceStatusInfo();
    AWS_NEPTUNE_API DBInstanceStatusInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API DBInstanceStatusInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>This value is currently "read replication."</p>
     */
    inline const Aws::String& GetStatusType() const{ return m_statusType; }
    inline bool StatusTypeHasBeenSet() const { return m_statusTypeHasBeenSet; }
    inline void SetStatusType(const Aws::String& value) { m_statusTypeHasBeenSet = true; m_statusType = value; }
    inline void SetStatusType(Aws::String&& value) { m_statusTypeHasBeenSet = true; m_statusType = std::move(value); }
    inline void SetStatusType(const char* value) { m_statusTypeHasBeenSet = true; m_statusType.assign(value); }
    inline DBInstanceStatusInfo& WithStatusType(const Aws::String& value) { SetStatusType(value); return *this;}
    inline DBInstanceStatusInfo& WithStatusType(Aws::String&& value) { SetStatusType(std::move(value)); return *this;}
    inline DBInstanceStatusInfo& WithStatusType(const char* value) { SetStatusType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean value that is true if the instance is operating normally, or false if
     * the instance is in an error state.</p>
     */
    inline bool GetNormal() const{ return m_normal; }
    inline bool NormalHasBeenSet() const { return m_normalHasBeenSet; }
    inline void SetNormal(bool value) { m_normalHasBeenSet = true; m_normal = value; }
    inline DBInstanceStatusInfo& WithNormal(bool value) { SetNormal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the DB instance. For a StatusType of read replica, the values can
     * be replicating, error, stopped, or terminated.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline DBInstanceStatusInfo& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DBInstanceStatusInfo& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DBInstanceStatusInfo& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * is not in an error state, this value is blank.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline DBInstanceStatusInfo& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DBInstanceStatusInfo& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DBInstanceStatusInfo& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_statusType;
    bool m_statusTypeHasBeenSet = false;

    bool m_normal;
    bool m_normalHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
