/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/PartnerIntegrationStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes a partner integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/PartnerIntegrationInfo">AWS
   * API Reference</a></p>
   */
  class PartnerIntegrationInfo
  {
  public:
    AWS_REDSHIFT_API PartnerIntegrationInfo();
    AWS_REDSHIFT_API PartnerIntegrationInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API PartnerIntegrationInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the database that receives data from a partner.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the database that receives data from a partner.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the database that receives data from a partner.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the database that receives data from a partner.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the database that receives data from a partner.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the database that receives data from a partner.</p>
     */
    inline PartnerIntegrationInfo& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database that receives data from a partner.</p>
     */
    inline PartnerIntegrationInfo& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database that receives data from a partner.</p>
     */
    inline PartnerIntegrationInfo& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the partner.</p>
     */
    inline const Aws::String& GetPartnerName() const{ return m_partnerName; }

    /**
     * <p>The name of the partner.</p>
     */
    inline bool PartnerNameHasBeenSet() const { return m_partnerNameHasBeenSet; }

    /**
     * <p>The name of the partner.</p>
     */
    inline void SetPartnerName(const Aws::String& value) { m_partnerNameHasBeenSet = true; m_partnerName = value; }

    /**
     * <p>The name of the partner.</p>
     */
    inline void SetPartnerName(Aws::String&& value) { m_partnerNameHasBeenSet = true; m_partnerName = std::move(value); }

    /**
     * <p>The name of the partner.</p>
     */
    inline void SetPartnerName(const char* value) { m_partnerNameHasBeenSet = true; m_partnerName.assign(value); }

    /**
     * <p>The name of the partner.</p>
     */
    inline PartnerIntegrationInfo& WithPartnerName(const Aws::String& value) { SetPartnerName(value); return *this;}

    /**
     * <p>The name of the partner.</p>
     */
    inline PartnerIntegrationInfo& WithPartnerName(Aws::String&& value) { SetPartnerName(std::move(value)); return *this;}

    /**
     * <p>The name of the partner.</p>
     */
    inline PartnerIntegrationInfo& WithPartnerName(const char* value) { SetPartnerName(value); return *this;}


    /**
     * <p>The partner integration status.</p>
     */
    inline const PartnerIntegrationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The partner integration status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The partner integration status.</p>
     */
    inline void SetStatus(const PartnerIntegrationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The partner integration status.</p>
     */
    inline void SetStatus(PartnerIntegrationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The partner integration status.</p>
     */
    inline PartnerIntegrationInfo& WithStatus(const PartnerIntegrationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The partner integration status.</p>
     */
    inline PartnerIntegrationInfo& WithStatus(PartnerIntegrationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status message provided by the partner.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline PartnerIntegrationInfo& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline PartnerIntegrationInfo& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message provided by the partner.</p>
     */
    inline PartnerIntegrationInfo& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The date (UTC) that the partner integration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date (UTC) that the partner integration was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date (UTC) that the partner integration was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date (UTC) that the partner integration was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date (UTC) that the partner integration was created.</p>
     */
    inline PartnerIntegrationInfo& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date (UTC) that the partner integration was created.</p>
     */
    inline PartnerIntegrationInfo& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date (UTC) that the partner integration status was last updated by the
     * partner.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date (UTC) that the partner integration status was last updated by the
     * partner.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date (UTC) that the partner integration status was last updated by the
     * partner.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date (UTC) that the partner integration status was last updated by the
     * partner.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date (UTC) that the partner integration status was last updated by the
     * partner.</p>
     */
    inline PartnerIntegrationInfo& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date (UTC) that the partner integration status was last updated by the
     * partner.</p>
     */
    inline PartnerIntegrationInfo& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_partnerName;
    bool m_partnerNameHasBeenSet = false;

    PartnerIntegrationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
