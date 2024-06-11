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
    AWS_SECURITYHUB_API AwsRdsDbParameterGroup();
    AWS_SECURITYHUB_API AwsRdsDbParameterGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRdsDbParameterGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter group.</p>
     */
    inline const Aws::String& GetDbParameterGroupName() const{ return m_dbParameterGroupName; }
    inline bool DbParameterGroupNameHasBeenSet() const { return m_dbParameterGroupNameHasBeenSet; }
    inline void SetDbParameterGroupName(const Aws::String& value) { m_dbParameterGroupNameHasBeenSet = true; m_dbParameterGroupName = value; }
    inline void SetDbParameterGroupName(Aws::String&& value) { m_dbParameterGroupNameHasBeenSet = true; m_dbParameterGroupName = std::move(value); }
    inline void SetDbParameterGroupName(const char* value) { m_dbParameterGroupNameHasBeenSet = true; m_dbParameterGroupName.assign(value); }
    inline AwsRdsDbParameterGroup& WithDbParameterGroupName(const Aws::String& value) { SetDbParameterGroupName(value); return *this;}
    inline AwsRdsDbParameterGroup& WithDbParameterGroupName(Aws::String&& value) { SetDbParameterGroupName(std::move(value)); return *this;}
    inline AwsRdsDbParameterGroup& WithDbParameterGroupName(const char* value) { SetDbParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of parameter updates.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }
    inline AwsRdsDbParameterGroup& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}
    inline AwsRdsDbParameterGroup& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}
    inline AwsRdsDbParameterGroup& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}
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
