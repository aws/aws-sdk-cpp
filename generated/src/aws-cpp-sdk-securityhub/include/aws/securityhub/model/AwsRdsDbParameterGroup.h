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
   * <p>Provides information about a parameter group for a DB instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRdsDbParameterGroup">AWS
   * API Reference</a></p>
   */
  class AwsRdsDbParameterGroup
  {
  public:
    AWS_SECURITYHUB_API AwsRdsDbParameterGroup() = default;
    AWS_SECURITYHUB_API AwsRdsDbParameterGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbParameterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter group.</p>
     */
    inline const Aws::String& GetDbParameterGroupName() const { return m_dbParameterGroupName; }
    inline bool DbParameterGroupNameHasBeenSet() const { return m_dbParameterGroupNameHasBeenSet; }
    template<typename DbParameterGroupNameT = Aws::String>
    void SetDbParameterGroupName(DbParameterGroupNameT&& value) { m_dbParameterGroupNameHasBeenSet = true; m_dbParameterGroupName = std::forward<DbParameterGroupNameT>(value); }
    template<typename DbParameterGroupNameT = Aws::String>
    AwsRdsDbParameterGroup& WithDbParameterGroupName(DbParameterGroupNameT&& value) { SetDbParameterGroupName(std::forward<DbParameterGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of parameter updates.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const { return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    template<typename ParameterApplyStatusT = Aws::String>
    void SetParameterApplyStatus(ParameterApplyStatusT&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::forward<ParameterApplyStatusT>(value); }
    template<typename ParameterApplyStatusT = Aws::String>
    AwsRdsDbParameterGroup& WithParameterApplyStatus(ParameterApplyStatusT&& value) { SetParameterApplyStatus(std::forward<ParameterApplyStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dbParameterGroupName;
    bool m_dbParameterGroupNameHasBeenSet = false;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
