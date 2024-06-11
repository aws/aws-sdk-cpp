/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters for Amazon RDS.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RdsParameters">AWS
   * API Reference</a></p>
   */
  class RdsParameters
  {
  public:
    AWS_QUICKSIGHT_API RdsParameters();
    AWS_QUICKSIGHT_API RdsParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RdsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline RdsParameters& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline RdsParameters& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline RdsParameters& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Database.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline RdsParameters& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline RdsParameters& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline RdsParameters& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
