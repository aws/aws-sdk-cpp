/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/SchedulerType.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>The cluster management and job scheduling software associated with the
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/Scheduler">AWS API
   * Reference</a></p>
   */
  class Scheduler
  {
  public:
    AWS_PCS_API Scheduler();
    AWS_PCS_API Scheduler(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Scheduler& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The software Amazon Web Services PCS uses to manage cluster scaling and job
     * scheduling.</p>
     */
    inline const SchedulerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SchedulerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SchedulerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Scheduler& WithType(const SchedulerType& value) { SetType(value); return *this;}
    inline Scheduler& WithType(SchedulerType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the specified scheduling software that Amazon Web Services PCS
     * uses to manage cluster scaling and job scheduling.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline Scheduler& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline Scheduler& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline Scheduler& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    SchedulerType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
