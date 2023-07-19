/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/BackintMode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SsmSap
{
namespace Model
{

  /**
   * <p>Configuration parameters for AWS Backint Agent for SAP HANA. You can backup
   * your SAP HANA database with AWS Backup or Amazon S3.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/BackintConfig">AWS
   * API Reference</a></p>
   */
  class BackintConfig
  {
  public:
    AWS_SSMSAP_API BackintConfig();
    AWS_SSMSAP_API BackintConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API BackintConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>AWS service for your database backup.</p>
     */
    inline const BackintMode& GetBackintMode() const{ return m_backintMode; }

    /**
     * <p>AWS service for your database backup.</p>
     */
    inline bool BackintModeHasBeenSet() const { return m_backintModeHasBeenSet; }

    /**
     * <p>AWS service for your database backup.</p>
     */
    inline void SetBackintMode(const BackintMode& value) { m_backintModeHasBeenSet = true; m_backintMode = value; }

    /**
     * <p>AWS service for your database backup.</p>
     */
    inline void SetBackintMode(BackintMode&& value) { m_backintModeHasBeenSet = true; m_backintMode = std::move(value); }

    /**
     * <p>AWS service for your database backup.</p>
     */
    inline BackintConfig& WithBackintMode(const BackintMode& value) { SetBackintMode(value); return *this;}

    /**
     * <p>AWS service for your database backup.</p>
     */
    inline BackintConfig& WithBackintMode(BackintMode&& value) { SetBackintMode(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline bool GetEnsureNoBackupInProcess() const{ return m_ensureNoBackupInProcess; }

    /**
     * <p/>
     */
    inline bool EnsureNoBackupInProcessHasBeenSet() const { return m_ensureNoBackupInProcessHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetEnsureNoBackupInProcess(bool value) { m_ensureNoBackupInProcessHasBeenSet = true; m_ensureNoBackupInProcess = value; }

    /**
     * <p/>
     */
    inline BackintConfig& WithEnsureNoBackupInProcess(bool value) { SetEnsureNoBackupInProcess(value); return *this;}

  private:

    BackintMode m_backintMode;
    bool m_backintModeHasBeenSet = false;

    bool m_ensureNoBackupInProcess;
    bool m_ensureNoBackupInProcessHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
