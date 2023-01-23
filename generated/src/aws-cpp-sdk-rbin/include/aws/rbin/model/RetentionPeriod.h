/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rbin/RecycleBin_EXPORTS.h>
#include <aws/rbin/model/RetentionPeriodUnit.h>
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
namespace RecycleBin
{
namespace Model
{

  /**
   * <p>Information about the retention period for which the retention rule is to
   * retain resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rbin-2021-06-15/RetentionPeriod">AWS
   * API Reference</a></p>
   */
  class RetentionPeriod
  {
  public:
    AWS_RECYCLEBIN_API RetentionPeriod();
    AWS_RECYCLEBIN_API RetentionPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API RetentionPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RECYCLEBIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period value for which the retention rule is to retain resources. The
     * period is measured using the unit specified for <b>RetentionPeriodUnit</b>.</p>
     */
    inline int GetRetentionPeriodValue() const{ return m_retentionPeriodValue; }

    /**
     * <p>The period value for which the retention rule is to retain resources. The
     * period is measured using the unit specified for <b>RetentionPeriodUnit</b>.</p>
     */
    inline bool RetentionPeriodValueHasBeenSet() const { return m_retentionPeriodValueHasBeenSet; }

    /**
     * <p>The period value for which the retention rule is to retain resources. The
     * period is measured using the unit specified for <b>RetentionPeriodUnit</b>.</p>
     */
    inline void SetRetentionPeriodValue(int value) { m_retentionPeriodValueHasBeenSet = true; m_retentionPeriodValue = value; }

    /**
     * <p>The period value for which the retention rule is to retain resources. The
     * period is measured using the unit specified for <b>RetentionPeriodUnit</b>.</p>
     */
    inline RetentionPeriod& WithRetentionPeriodValue(int value) { SetRetentionPeriodValue(value); return *this;}


    /**
     * <p>The unit of time in which the retention period is measured. Currently, only
     * <code>DAYS</code> is supported.</p>
     */
    inline const RetentionPeriodUnit& GetRetentionPeriodUnit() const{ return m_retentionPeriodUnit; }

    /**
     * <p>The unit of time in which the retention period is measured. Currently, only
     * <code>DAYS</code> is supported.</p>
     */
    inline bool RetentionPeriodUnitHasBeenSet() const { return m_retentionPeriodUnitHasBeenSet; }

    /**
     * <p>The unit of time in which the retention period is measured. Currently, only
     * <code>DAYS</code> is supported.</p>
     */
    inline void SetRetentionPeriodUnit(const RetentionPeriodUnit& value) { m_retentionPeriodUnitHasBeenSet = true; m_retentionPeriodUnit = value; }

    /**
     * <p>The unit of time in which the retention period is measured. Currently, only
     * <code>DAYS</code> is supported.</p>
     */
    inline void SetRetentionPeriodUnit(RetentionPeriodUnit&& value) { m_retentionPeriodUnitHasBeenSet = true; m_retentionPeriodUnit = std::move(value); }

    /**
     * <p>The unit of time in which the retention period is measured. Currently, only
     * <code>DAYS</code> is supported.</p>
     */
    inline RetentionPeriod& WithRetentionPeriodUnit(const RetentionPeriodUnit& value) { SetRetentionPeriodUnit(value); return *this;}

    /**
     * <p>The unit of time in which the retention period is measured. Currently, only
     * <code>DAYS</code> is supported.</p>
     */
    inline RetentionPeriod& WithRetentionPeriodUnit(RetentionPeriodUnit&& value) { SetRetentionPeriodUnit(std::move(value)); return *this;}

  private:

    int m_retentionPeriodValue;
    bool m_retentionPeriodValueHasBeenSet = false;

    RetentionPeriodUnit m_retentionPeriodUnit;
    bool m_retentionPeriodUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
