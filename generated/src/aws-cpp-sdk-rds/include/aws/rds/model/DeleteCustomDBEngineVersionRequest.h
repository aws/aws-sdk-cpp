﻿/**
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

    ///@{
    /**
     * <p>The database engine. RDS Custom for Oracle supports the following values:</p>
     * <ul> <li> <p> <code>custom-oracle-ee</code> </p> </li> <li> <p>
     * <code>custom-oracle-ee-cdb</code> </p> </li> <li> <p>
     * <code>custom-oracle-se2</code> </p> </li> <li> <p>
     * <code>custom-oracle-se2-cdb</code> </p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline DeleteCustomDBEngineVersionRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline DeleteCustomDBEngineVersionRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline DeleteCustomDBEngineVersionRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom engine version (CEV) for your DB instance. This option is required
     * for RDS Custom, but optional for Amazon RDS. The combination of
     * <code>Engine</code> and <code>EngineVersion</code> is unique per customer per
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline DeleteCustomDBEngineVersionRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline DeleteCustomDBEngineVersionRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline DeleteCustomDBEngineVersionRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
