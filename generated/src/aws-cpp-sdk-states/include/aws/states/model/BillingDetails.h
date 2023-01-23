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
   * <p>An object that describes workflow billing details.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/BillingDetails">AWS
   * API Reference</a></p>
   */
  class BillingDetails
  {
  public:
    AWS_SFN_API BillingDetails();
    AWS_SFN_API BillingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API BillingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Billed memory consumption of your workflow, in MB.</p>
     */
    inline long long GetBilledMemoryUsedInMB() const{ return m_billedMemoryUsedInMB; }

    /**
     * <p>Billed memory consumption of your workflow, in MB.</p>
     */
    inline bool BilledMemoryUsedInMBHasBeenSet() const { return m_billedMemoryUsedInMBHasBeenSet; }

    /**
     * <p>Billed memory consumption of your workflow, in MB.</p>
     */
    inline void SetBilledMemoryUsedInMB(long long value) { m_billedMemoryUsedInMBHasBeenSet = true; m_billedMemoryUsedInMB = value; }

    /**
     * <p>Billed memory consumption of your workflow, in MB.</p>
     */
    inline BillingDetails& WithBilledMemoryUsedInMB(long long value) { SetBilledMemoryUsedInMB(value); return *this;}


    /**
     * <p>Billed duration of your workflow, in milliseconds.</p>
     */
    inline long long GetBilledDurationInMilliseconds() const{ return m_billedDurationInMilliseconds; }

    /**
     * <p>Billed duration of your workflow, in milliseconds.</p>
     */
    inline bool BilledDurationInMillisecondsHasBeenSet() const { return m_billedDurationInMillisecondsHasBeenSet; }

    /**
     * <p>Billed duration of your workflow, in milliseconds.</p>
     */
    inline void SetBilledDurationInMilliseconds(long long value) { m_billedDurationInMillisecondsHasBeenSet = true; m_billedDurationInMilliseconds = value; }

    /**
     * <p>Billed duration of your workflow, in milliseconds.</p>
     */
    inline BillingDetails& WithBilledDurationInMilliseconds(long long value) { SetBilledDurationInMilliseconds(value); return *this;}

  private:

    long long m_billedMemoryUsedInMB;
    bool m_billedMemoryUsedInMBHasBeenSet = false;

    long long m_billedDurationInMilliseconds;
    bool m_billedDurationInMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
