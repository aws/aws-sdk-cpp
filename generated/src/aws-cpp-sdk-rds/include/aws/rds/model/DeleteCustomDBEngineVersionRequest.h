/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DeleteCustomDBEngineVersionRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteCustomDBEngineVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomDBEngineVersion"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The database engine. The only supported engine is
     * <code>custom-oracle-ee</code>.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine. The only supported engine is
     * <code>custom-oracle-ee</code>.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database engine. The only supported engine is
     * <code>custom-oracle-ee</code>.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine. The only supported engine is
     * <code>custom-oracle-ee</code>.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database engine. The only supported engine is
     * <code>custom-oracle-ee</code>.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine. The only supported engine is
     * <code>custom-oracle-ee</code>.</p>
     */
    inline DeleteCustomDBEngineVersionRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine. The only supported engine is
     * <code>custom-oracle-ee</code>.</p>
     */
    inline DeleteCustomDBEngineVersionRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine. The only supported engine is
     * <code>custom-oracle-ee</code>.</p>
     */
    inline DeleteCustomDBEngineVersionRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The custom engine version (CEV) for your DB instance. This option is required
     * for RDS Custom, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The custom engine version (CEV) for your DB instance. This option is required
     * for RDS Custom, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The custom engine version (CEV) for your DB instance. This option is required
     * for RDS Custom, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The custom engine version (CEV) for your DB instance. This option is required
     * for RDS Custom, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The custom engine version (CEV) for your DB instance. This option is required
     * for RDS Custom, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The custom engine version (CEV) for your DB instance. This option is required
     * for RDS Custom, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline DeleteCustomDBEngineVersionRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The custom engine version (CEV) for your DB instance. This option is required
     * for RDS Custom, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline DeleteCustomDBEngineVersionRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The custom engine version (CEV) for your DB instance. This option is required
     * for RDS Custom, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline DeleteCustomDBEngineVersionRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
