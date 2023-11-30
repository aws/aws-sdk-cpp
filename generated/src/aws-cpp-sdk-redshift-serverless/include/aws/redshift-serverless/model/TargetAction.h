/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/CreateSnapshotScheduleActionParameters.h>
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
namespace RedshiftServerless
{
namespace Model
{

  /**
   * <p>A JSON format string of the Amazon Redshift Serverless API operation with
   * input parameters. The following is an example of a target action.</p> <p>
   * <code>"{"CreateSnapshot": {"NamespaceName": "sampleNamespace","SnapshotName":
   * "sampleSnapshot", "retentionPeriod": "1"}}"</code> </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-serverless-2021-04-21/TargetAction">AWS
   * API Reference</a></p>
   */
  class TargetAction
  {
  public:
    AWS_REDSHIFTSERVERLESS_API TargetAction();
    AWS_REDSHIFTSERVERLESS_API TargetAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API TargetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const CreateSnapshotScheduleActionParameters& GetCreateSnapshot() const{ return m_createSnapshot; }

    
    inline bool CreateSnapshotHasBeenSet() const { return m_createSnapshotHasBeenSet; }

    
    inline void SetCreateSnapshot(const CreateSnapshotScheduleActionParameters& value) { m_createSnapshotHasBeenSet = true; m_createSnapshot = value; }

    
    inline void SetCreateSnapshot(CreateSnapshotScheduleActionParameters&& value) { m_createSnapshotHasBeenSet = true; m_createSnapshot = std::move(value); }

    
    inline TargetAction& WithCreateSnapshot(const CreateSnapshotScheduleActionParameters& value) { SetCreateSnapshot(value); return *this;}

    
    inline TargetAction& WithCreateSnapshot(CreateSnapshotScheduleActionParameters&& value) { SetCreateSnapshot(std::move(value)); return *this;}

  private:

    CreateSnapshotScheduleActionParameters m_createSnapshot;
    bool m_createSnapshotHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
