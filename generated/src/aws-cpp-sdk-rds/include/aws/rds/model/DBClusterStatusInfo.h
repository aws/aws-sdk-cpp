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
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterStatusInfo">AWS
   * API Reference</a></p>
   */
  class DBClusterStatusInfo
  {
  public:
    AWS_RDS_API DBClusterStatusInfo();
    AWS_RDS_API DBClusterStatusInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBClusterStatusInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetStatusType() const{ return m_statusType; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool StatusTypeHasBeenSet() const { return m_statusTypeHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetStatusType(const Aws::String& value) { m_statusTypeHasBeenSet = true; m_statusType = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetStatusType(Aws::String&& value) { m_statusTypeHasBeenSet = true; m_statusType = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetStatusType(const char* value) { m_statusTypeHasBeenSet = true; m_statusType.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline DBClusterStatusInfo& WithStatusType(const Aws::String& value) { SetStatusType(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline DBClusterStatusInfo& WithStatusType(Aws::String&& value) { SetStatusType(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline DBClusterStatusInfo& WithStatusType(const char* value) { SetStatusType(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline bool GetNormal() const{ return m_normal; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool NormalHasBeenSet() const { return m_normalHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNormal(bool value) { m_normalHasBeenSet = true; m_normal = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline DBClusterStatusInfo& WithNormal(bool value) { SetNormal(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline DBClusterStatusInfo& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline DBClusterStatusInfo& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline DBClusterStatusInfo& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline DBClusterStatusInfo& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline DBClusterStatusInfo& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline DBClusterStatusInfo& WithMessage(const char* value) { SetMessage(value); return *this;}

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
} // namespace RDS
} // namespace Aws
