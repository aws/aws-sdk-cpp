/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The status of a parameter in a cluster parameter group for an Amazon Redshift
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterClusterParameterStatus">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterClusterParameterStatus
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterStatus();
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline AwsRedshiftClusterClusterParameterStatus& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline AwsRedshiftClusterClusterParameterStatus& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline AwsRedshiftClusterClusterParameterStatus& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>The status of the parameter. Indicates whether the parameter is in sync with
     * the database, waiting for a cluster reboot, or encountered an error when it was
     * applied.</p> <p>Valid values: <code>in-sync</code> | <code>pending-reboot</code>
     * | <code>applying</code> | <code>invalid-parameter</code> |
     * <code>apply-deferred</code> | <code>apply-error</code> |
     * <code>unknown-error</code> </p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }

    /**
     * <p>The status of the parameter. Indicates whether the parameter is in sync with
     * the database, waiting for a cluster reboot, or encountered an error when it was
     * applied.</p> <p>Valid values: <code>in-sync</code> | <code>pending-reboot</code>
     * | <code>applying</code> | <code>invalid-parameter</code> |
     * <code>apply-deferred</code> | <code>apply-error</code> |
     * <code>unknown-error</code> </p>
     */
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }

    /**
     * <p>The status of the parameter. Indicates whether the parameter is in sync with
     * the database, waiting for a cluster reboot, or encountered an error when it was
     * applied.</p> <p>Valid values: <code>in-sync</code> | <code>pending-reboot</code>
     * | <code>applying</code> | <code>invalid-parameter</code> |
     * <code>apply-deferred</code> | <code>apply-error</code> |
     * <code>unknown-error</code> </p>
     */
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }

    /**
     * <p>The status of the parameter. Indicates whether the parameter is in sync with
     * the database, waiting for a cluster reboot, or encountered an error when it was
     * applied.</p> <p>Valid values: <code>in-sync</code> | <code>pending-reboot</code>
     * | <code>applying</code> | <code>invalid-parameter</code> |
     * <code>apply-deferred</code> | <code>apply-error</code> |
     * <code>unknown-error</code> </p>
     */
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }

    /**
     * <p>The status of the parameter. Indicates whether the parameter is in sync with
     * the database, waiting for a cluster reboot, or encountered an error when it was
     * applied.</p> <p>Valid values: <code>in-sync</code> | <code>pending-reboot</code>
     * | <code>applying</code> | <code>invalid-parameter</code> |
     * <code>apply-deferred</code> | <code>apply-error</code> |
     * <code>unknown-error</code> </p>
     */
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }

    /**
     * <p>The status of the parameter. Indicates whether the parameter is in sync with
     * the database, waiting for a cluster reboot, or encountered an error when it was
     * applied.</p> <p>Valid values: <code>in-sync</code> | <code>pending-reboot</code>
     * | <code>applying</code> | <code>invalid-parameter</code> |
     * <code>apply-deferred</code> | <code>apply-error</code> |
     * <code>unknown-error</code> </p>
     */
    inline AwsRedshiftClusterClusterParameterStatus& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}

    /**
     * <p>The status of the parameter. Indicates whether the parameter is in sync with
     * the database, waiting for a cluster reboot, or encountered an error when it was
     * applied.</p> <p>Valid values: <code>in-sync</code> | <code>pending-reboot</code>
     * | <code>applying</code> | <code>invalid-parameter</code> |
     * <code>apply-deferred</code> | <code>apply-error</code> |
     * <code>unknown-error</code> </p>
     */
    inline AwsRedshiftClusterClusterParameterStatus& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the parameter. Indicates whether the parameter is in sync with
     * the database, waiting for a cluster reboot, or encountered an error when it was
     * applied.</p> <p>Valid values: <code>in-sync</code> | <code>pending-reboot</code>
     * | <code>applying</code> | <code>invalid-parameter</code> |
     * <code>apply-deferred</code> | <code>apply-error</code> |
     * <code>unknown-error</code> </p>
     */
    inline AwsRedshiftClusterClusterParameterStatus& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}


    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline const Aws::String& GetParameterApplyErrorDescription() const{ return m_parameterApplyErrorDescription; }

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline bool ParameterApplyErrorDescriptionHasBeenSet() const { return m_parameterApplyErrorDescriptionHasBeenSet; }

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline void SetParameterApplyErrorDescription(const Aws::String& value) { m_parameterApplyErrorDescriptionHasBeenSet = true; m_parameterApplyErrorDescription = value; }

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline void SetParameterApplyErrorDescription(Aws::String&& value) { m_parameterApplyErrorDescriptionHasBeenSet = true; m_parameterApplyErrorDescription = std::move(value); }

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline void SetParameterApplyErrorDescription(const char* value) { m_parameterApplyErrorDescriptionHasBeenSet = true; m_parameterApplyErrorDescription.assign(value); }

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline AwsRedshiftClusterClusterParameterStatus& WithParameterApplyErrorDescription(const Aws::String& value) { SetParameterApplyErrorDescription(value); return *this;}

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline AwsRedshiftClusterClusterParameterStatus& WithParameterApplyErrorDescription(Aws::String&& value) { SetParameterApplyErrorDescription(std::move(value)); return *this;}

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline AwsRedshiftClusterClusterParameterStatus& WithParameterApplyErrorDescription(const char* value) { SetParameterApplyErrorDescription(value); return *this;}

  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet = false;

    Aws::String m_parameterApplyErrorDescription;
    bool m_parameterApplyErrorDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
