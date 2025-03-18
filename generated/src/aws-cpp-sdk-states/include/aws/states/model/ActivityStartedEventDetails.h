/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about the start of an activity during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ActivityStartedEventDetails">AWS
   * API Reference</a></p>
   */
  class ActivityStartedEventDetails
  {
  public:
    AWS_SFN_API ActivityStartedEventDetails() = default;
    AWS_SFN_API ActivityStartedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ActivityStartedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the worker that the task is assigned to. These names are provided
     * by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline const Aws::String& GetWorkerName() const { return m_workerName; }
    inline bool WorkerNameHasBeenSet() const { return m_workerNameHasBeenSet; }
    template<typename WorkerNameT = Aws::String>
    void SetWorkerName(WorkerNameT&& value) { m_workerNameHasBeenSet = true; m_workerName = std::forward<WorkerNameT>(value); }
    template<typename WorkerNameT = Aws::String>
    ActivityStartedEventDetails& WithWorkerName(WorkerNameT&& value) { SetWorkerName(std::forward<WorkerNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workerName;
    bool m_workerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
