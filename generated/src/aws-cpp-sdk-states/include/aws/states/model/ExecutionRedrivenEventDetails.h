/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>

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
   * <p>Contains details about a redriven execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ExecutionRedrivenEventDetails">AWS
   * API Reference</a></p>
   */
  class ExecutionRedrivenEventDetails
  {
  public:
    AWS_SFN_API ExecutionRedrivenEventDetails();
    AWS_SFN_API ExecutionRedrivenEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API ExecutionRedrivenEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of times you've redriven an execution. If you have not yet
     * redriven an execution, the <code>redriveCount</code> is 0. This count is not
     * updated for redrives that failed to start or are pending to be redriven.</p>
     */
    inline int GetRedriveCount() const{ return m_redriveCount; }

    /**
     * <p>The number of times you've redriven an execution. If you have not yet
     * redriven an execution, the <code>redriveCount</code> is 0. This count is not
     * updated for redrives that failed to start or are pending to be redriven.</p>
     */
    inline bool RedriveCountHasBeenSet() const { return m_redriveCountHasBeenSet; }

    /**
     * <p>The number of times you've redriven an execution. If you have not yet
     * redriven an execution, the <code>redriveCount</code> is 0. This count is not
     * updated for redrives that failed to start or are pending to be redriven.</p>
     */
    inline void SetRedriveCount(int value) { m_redriveCountHasBeenSet = true; m_redriveCount = value; }

    /**
     * <p>The number of times you've redriven an execution. If you have not yet
     * redriven an execution, the <code>redriveCount</code> is 0. This count is not
     * updated for redrives that failed to start or are pending to be redriven.</p>
     */
    inline ExecutionRedrivenEventDetails& WithRedriveCount(int value) { SetRedriveCount(value); return *this;}

  private:

    int m_redriveCount;
    bool m_redriveCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
