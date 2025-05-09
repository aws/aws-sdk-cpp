/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>

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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure contains information about the canary's retry
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/RetryConfigOutput">AWS
   * API Reference</a></p>
   */
  class RetryConfigOutput
  {
  public:
    AWS_SYNTHETICS_API RetryConfigOutput() = default;
    AWS_SYNTHETICS_API RetryConfigOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API RetryConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of retries. The value must be less than or equal to 2.</p>
     */
    inline int GetMaxRetries() const { return m_maxRetries; }
    inline bool MaxRetriesHasBeenSet() const { return m_maxRetriesHasBeenSet; }
    inline void SetMaxRetries(int value) { m_maxRetriesHasBeenSet = true; m_maxRetries = value; }
    inline RetryConfigOutput& WithMaxRetries(int value) { SetMaxRetries(value); return *this;}
    ///@}
  private:

    int m_maxRetries{0};
    bool m_maxRetriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
