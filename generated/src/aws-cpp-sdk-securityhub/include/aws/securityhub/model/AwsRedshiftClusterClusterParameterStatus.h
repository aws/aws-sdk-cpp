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
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterStatus() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterClusterParameterStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const { return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    template<typename ParameterNameT = Aws::String>
    void SetParameterName(ParameterNameT&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::forward<ParameterNameT>(value); }
    template<typename ParameterNameT = Aws::String>
    AwsRedshiftClusterClusterParameterStatus& WithParameterName(ParameterNameT&& value) { SetParameterName(std::forward<ParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the parameter. Indicates whether the parameter is in sync with
     * the database, waiting for a cluster reboot, or encountered an error when it was
     * applied.</p> <p>Valid values: <code>in-sync</code> | <code>pending-reboot</code>
     * | <code>applying</code> | <code>invalid-parameter</code> |
     * <code>apply-deferred</code> | <code>apply-error</code> |
     * <code>unknown-error</code> </p>
     */
    inline const Aws::String& GetParameterApplyStatus() const { return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    template<typename ParameterApplyStatusT = Aws::String>
    void SetParameterApplyStatus(ParameterApplyStatusT&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::forward<ParameterApplyStatusT>(value); }
    template<typename ParameterApplyStatusT = Aws::String>
    AwsRedshiftClusterClusterParameterStatus& WithParameterApplyStatus(ParameterApplyStatusT&& value) { SetParameterApplyStatus(std::forward<ParameterApplyStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline const Aws::String& GetParameterApplyErrorDescription() const { return m_parameterApplyErrorDescription; }
    inline bool ParameterApplyErrorDescriptionHasBeenSet() const { return m_parameterApplyErrorDescriptionHasBeenSet; }
    template<typename ParameterApplyErrorDescriptionT = Aws::String>
    void SetParameterApplyErrorDescription(ParameterApplyErrorDescriptionT&& value) { m_parameterApplyErrorDescriptionHasBeenSet = true; m_parameterApplyErrorDescription = std::forward<ParameterApplyErrorDescriptionT>(value); }
    template<typename ParameterApplyErrorDescriptionT = Aws::String>
    AwsRedshiftClusterClusterParameterStatus& WithParameterApplyErrorDescription(ParameterApplyErrorDescriptionT&& value) { SetParameterApplyErrorDescription(std::forward<ParameterApplyErrorDescriptionT>(value)); return *this;}
    ///@}
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
