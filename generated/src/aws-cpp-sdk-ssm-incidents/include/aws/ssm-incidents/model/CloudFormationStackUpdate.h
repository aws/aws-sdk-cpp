/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Information about an CloudFormation stack creation or update that occurred
   * around the time of an incident and could be a potential cause of the
   * incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CloudFormationStackUpdate">AWS
   * API Reference</a></p>
   */
  class CloudFormationStackUpdate
  {
  public:
    AWS_SSMINCIDENTS_API CloudFormationStackUpdate();
    AWS_SSMINCIDENTS_API CloudFormationStackUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API CloudFormationStackUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp for when the CloudFormation stack creation or update ended. Not
     * reported for deployments that are still in progress.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp for when the CloudFormation stack creation or update ended. Not
     * reported for deployments that are still in progress.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the CloudFormation stack creation or update ended. Not
     * reported for deployments that are still in progress.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp for when the CloudFormation stack creation or update ended. Not
     * reported for deployments that are still in progress.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp for when the CloudFormation stack creation or update ended. Not
     * reported for deployments that are still in progress.</p>
     */
    inline CloudFormationStackUpdate& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp for when the CloudFormation stack creation or update ended. Not
     * reported for deployments that are still in progress.</p>
     */
    inline CloudFormationStackUpdate& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack involved in the
     * update.</p>
     */
    inline const Aws::String& GetStackArn() const{ return m_stackArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack involved in the
     * update.</p>
     */
    inline bool StackArnHasBeenSet() const { return m_stackArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack involved in the
     * update.</p>
     */
    inline void SetStackArn(const Aws::String& value) { m_stackArnHasBeenSet = true; m_stackArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack involved in the
     * update.</p>
     */
    inline void SetStackArn(Aws::String&& value) { m_stackArnHasBeenSet = true; m_stackArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack involved in the
     * update.</p>
     */
    inline void SetStackArn(const char* value) { m_stackArnHasBeenSet = true; m_stackArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack involved in the
     * update.</p>
     */
    inline CloudFormationStackUpdate& WithStackArn(const Aws::String& value) { SetStackArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack involved in the
     * update.</p>
     */
    inline CloudFormationStackUpdate& WithStackArn(Aws::String&& value) { SetStackArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the CloudFormation stack involved in the
     * update.</p>
     */
    inline CloudFormationStackUpdate& WithStackArn(const char* value) { SetStackArn(value); return *this;}


    /**
     * <p>The timestamp for when the CloudFormation stack creation or update began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp for when the CloudFormation stack creation or update began.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the CloudFormation stack creation or update began.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp for when the CloudFormation stack creation or update began.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp for when the CloudFormation stack creation or update began.</p>
     */
    inline CloudFormationStackUpdate& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp for when the CloudFormation stack creation or update began.</p>
     */
    inline CloudFormationStackUpdate& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_stackArn;
    bool m_stackArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
