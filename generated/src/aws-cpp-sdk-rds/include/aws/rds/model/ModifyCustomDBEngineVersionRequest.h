/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/CustomEngineVersionStatus.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyCustomDBEngineVersionRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyCustomDBEngineVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCustomDBEngineVersion"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB engine. The only supported value is <code>custom-oracle-ee</code>.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The DB engine. The only supported value is <code>custom-oracle-ee</code>.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The DB engine. The only supported value is <code>custom-oracle-ee</code>.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The DB engine. The only supported value is <code>custom-oracle-ee</code>.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The DB engine. The only supported value is <code>custom-oracle-ee</code>.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The DB engine. The only supported value is <code>custom-oracle-ee</code>.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The DB engine. The only supported value is <code>custom-oracle-ee</code>.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The DB engine. The only supported value is <code>custom-oracle-ee</code>.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The custom engine version (CEV) that you want to modify. This option is
     * required for RDS Custom for Oracle, but optional for Amazon RDS. The combination
     * of <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The custom engine version (CEV) that you want to modify. This option is
     * required for RDS Custom for Oracle, but optional for Amazon RDS. The combination
     * of <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The custom engine version (CEV) that you want to modify. This option is
     * required for RDS Custom for Oracle, but optional for Amazon RDS. The combination
     * of <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The custom engine version (CEV) that you want to modify. This option is
     * required for RDS Custom for Oracle, but optional for Amazon RDS. The combination
     * of <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The custom engine version (CEV) that you want to modify. This option is
     * required for RDS Custom for Oracle, but optional for Amazon RDS. The combination
     * of <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The custom engine version (CEV) that you want to modify. This option is
     * required for RDS Custom for Oracle, but optional for Amazon RDS. The combination
     * of <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The custom engine version (CEV) that you want to modify. This option is
     * required for RDS Custom for Oracle, but optional for Amazon RDS. The combination
     * of <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The custom engine version (CEV) that you want to modify. This option is
     * required for RDS Custom for Oracle, but optional for Amazon RDS. The combination
     * of <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>An optional description of your CEV.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description of your CEV.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description of your CEV.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description of your CEV.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description of your CEV.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description of your CEV.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description of your CEV.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of your CEV.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The availability status to be assigned to the CEV. Valid values are as
     * follows:</p> <dl> <dt>available</dt> <dd> <p>You can use this CEV to create a
     * new RDS Custom DB instance.</p> </dd> <dt>inactive</dt> <dd> <p>You can create a
     * new RDS Custom instance by restoring a DB snapshot with this CEV. You can't
     * patch or create new instances with this CEV.</p> </dd> </dl> <p>You can change
     * any status to any status. A typical reason to change status is to prevent the
     * accidental use of a CEV, or to make a deprecated CEV eligible for use again. For
     * example, you might change the status of your CEV from <code>available</code> to
     * <code>inactive</code>, and from <code>inactive</code> back to
     * <code>available</code>. To change the availability status of the CEV, it must
     * not currently be in use by an RDS Custom instance, snapshot, or automated
     * backup.</p>
     */
    inline const CustomEngineVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The availability status to be assigned to the CEV. Valid values are as
     * follows:</p> <dl> <dt>available</dt> <dd> <p>You can use this CEV to create a
     * new RDS Custom DB instance.</p> </dd> <dt>inactive</dt> <dd> <p>You can create a
     * new RDS Custom instance by restoring a DB snapshot with this CEV. You can't
     * patch or create new instances with this CEV.</p> </dd> </dl> <p>You can change
     * any status to any status. A typical reason to change status is to prevent the
     * accidental use of a CEV, or to make a deprecated CEV eligible for use again. For
     * example, you might change the status of your CEV from <code>available</code> to
     * <code>inactive</code>, and from <code>inactive</code> back to
     * <code>available</code>. To change the availability status of the CEV, it must
     * not currently be in use by an RDS Custom instance, snapshot, or automated
     * backup.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The availability status to be assigned to the CEV. Valid values are as
     * follows:</p> <dl> <dt>available</dt> <dd> <p>You can use this CEV to create a
     * new RDS Custom DB instance.</p> </dd> <dt>inactive</dt> <dd> <p>You can create a
     * new RDS Custom instance by restoring a DB snapshot with this CEV. You can't
     * patch or create new instances with this CEV.</p> </dd> </dl> <p>You can change
     * any status to any status. A typical reason to change status is to prevent the
     * accidental use of a CEV, or to make a deprecated CEV eligible for use again. For
     * example, you might change the status of your CEV from <code>available</code> to
     * <code>inactive</code>, and from <code>inactive</code> back to
     * <code>available</code>. To change the availability status of the CEV, it must
     * not currently be in use by an RDS Custom instance, snapshot, or automated
     * backup.</p>
     */
    inline void SetStatus(const CustomEngineVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The availability status to be assigned to the CEV. Valid values are as
     * follows:</p> <dl> <dt>available</dt> <dd> <p>You can use this CEV to create a
     * new RDS Custom DB instance.</p> </dd> <dt>inactive</dt> <dd> <p>You can create a
     * new RDS Custom instance by restoring a DB snapshot with this CEV. You can't
     * patch or create new instances with this CEV.</p> </dd> </dl> <p>You can change
     * any status to any status. A typical reason to change status is to prevent the
     * accidental use of a CEV, or to make a deprecated CEV eligible for use again. For
     * example, you might change the status of your CEV from <code>available</code> to
     * <code>inactive</code>, and from <code>inactive</code> back to
     * <code>available</code>. To change the availability status of the CEV, it must
     * not currently be in use by an RDS Custom instance, snapshot, or automated
     * backup.</p>
     */
    inline void SetStatus(CustomEngineVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The availability status to be assigned to the CEV. Valid values are as
     * follows:</p> <dl> <dt>available</dt> <dd> <p>You can use this CEV to create a
     * new RDS Custom DB instance.</p> </dd> <dt>inactive</dt> <dd> <p>You can create a
     * new RDS Custom instance by restoring a DB snapshot with this CEV. You can't
     * patch or create new instances with this CEV.</p> </dd> </dl> <p>You can change
     * any status to any status. A typical reason to change status is to prevent the
     * accidental use of a CEV, or to make a deprecated CEV eligible for use again. For
     * example, you might change the status of your CEV from <code>available</code> to
     * <code>inactive</code>, and from <code>inactive</code> back to
     * <code>available</code>. To change the availability status of the CEV, it must
     * not currently be in use by an RDS Custom instance, snapshot, or automated
     * backup.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithStatus(const CustomEngineVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The availability status to be assigned to the CEV. Valid values are as
     * follows:</p> <dl> <dt>available</dt> <dd> <p>You can use this CEV to create a
     * new RDS Custom DB instance.</p> </dd> <dt>inactive</dt> <dd> <p>You can create a
     * new RDS Custom instance by restoring a DB snapshot with this CEV. You can't
     * patch or create new instances with this CEV.</p> </dd> </dl> <p>You can change
     * any status to any status. A typical reason to change status is to prevent the
     * accidental use of a CEV, or to make a deprecated CEV eligible for use again. For
     * example, you might change the status of your CEV from <code>available</code> to
     * <code>inactive</code>, and from <code>inactive</code> back to
     * <code>available</code>. To change the availability status of the CEV, it must
     * not currently be in use by an RDS Custom instance, snapshot, or automated
     * backup.</p>
     */
    inline ModifyCustomDBEngineVersionRequest& WithStatus(CustomEngineVersionStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    CustomEngineVersionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
