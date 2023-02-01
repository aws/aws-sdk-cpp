/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/LifeCycleLastCutoverFinalized.h>
#include <aws/mgn/model/LifeCycleLastCutoverInitiated.h>
#include <aws/mgn/model/LifeCycleLastCutoverReverted.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Lifecycle last Cutover .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LifeCycleLastCutover">AWS
   * API Reference</a></p>
   */
  class LifeCycleLastCutover
  {
  public:
    AWS_MGN_API LifeCycleLastCutover();
    AWS_MGN_API LifeCycleLastCutover(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LifeCycleLastCutover& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lifecycle Cutover finalized date and time.</p>
     */
    inline const LifeCycleLastCutoverFinalized& GetFinalized() const{ return m_finalized; }

    /**
     * <p>Lifecycle Cutover finalized date and time.</p>
     */
    inline bool FinalizedHasBeenSet() const { return m_finalizedHasBeenSet; }

    /**
     * <p>Lifecycle Cutover finalized date and time.</p>
     */
    inline void SetFinalized(const LifeCycleLastCutoverFinalized& value) { m_finalizedHasBeenSet = true; m_finalized = value; }

    /**
     * <p>Lifecycle Cutover finalized date and time.</p>
     */
    inline void SetFinalized(LifeCycleLastCutoverFinalized&& value) { m_finalizedHasBeenSet = true; m_finalized = std::move(value); }

    /**
     * <p>Lifecycle Cutover finalized date and time.</p>
     */
    inline LifeCycleLastCutover& WithFinalized(const LifeCycleLastCutoverFinalized& value) { SetFinalized(value); return *this;}

    /**
     * <p>Lifecycle Cutover finalized date and time.</p>
     */
    inline LifeCycleLastCutover& WithFinalized(LifeCycleLastCutoverFinalized&& value) { SetFinalized(std::move(value)); return *this;}


    /**
     * <p>Lifecycle last Cutover initiated.</p>
     */
    inline const LifeCycleLastCutoverInitiated& GetInitiated() const{ return m_initiated; }

    /**
     * <p>Lifecycle last Cutover initiated.</p>
     */
    inline bool InitiatedHasBeenSet() const { return m_initiatedHasBeenSet; }

    /**
     * <p>Lifecycle last Cutover initiated.</p>
     */
    inline void SetInitiated(const LifeCycleLastCutoverInitiated& value) { m_initiatedHasBeenSet = true; m_initiated = value; }

    /**
     * <p>Lifecycle last Cutover initiated.</p>
     */
    inline void SetInitiated(LifeCycleLastCutoverInitiated&& value) { m_initiatedHasBeenSet = true; m_initiated = std::move(value); }

    /**
     * <p>Lifecycle last Cutover initiated.</p>
     */
    inline LifeCycleLastCutover& WithInitiated(const LifeCycleLastCutoverInitiated& value) { SetInitiated(value); return *this;}

    /**
     * <p>Lifecycle last Cutover initiated.</p>
     */
    inline LifeCycleLastCutover& WithInitiated(LifeCycleLastCutoverInitiated&& value) { SetInitiated(std::move(value)); return *this;}


    /**
     * <p>Lifecycle last Cutover reverted.</p>
     */
    inline const LifeCycleLastCutoverReverted& GetReverted() const{ return m_reverted; }

    /**
     * <p>Lifecycle last Cutover reverted.</p>
     */
    inline bool RevertedHasBeenSet() const { return m_revertedHasBeenSet; }

    /**
     * <p>Lifecycle last Cutover reverted.</p>
     */
    inline void SetReverted(const LifeCycleLastCutoverReverted& value) { m_revertedHasBeenSet = true; m_reverted = value; }

    /**
     * <p>Lifecycle last Cutover reverted.</p>
     */
    inline void SetReverted(LifeCycleLastCutoverReverted&& value) { m_revertedHasBeenSet = true; m_reverted = std::move(value); }

    /**
     * <p>Lifecycle last Cutover reverted.</p>
     */
    inline LifeCycleLastCutover& WithReverted(const LifeCycleLastCutoverReverted& value) { SetReverted(value); return *this;}

    /**
     * <p>Lifecycle last Cutover reverted.</p>
     */
    inline LifeCycleLastCutover& WithReverted(LifeCycleLastCutoverReverted&& value) { SetReverted(std::move(value)); return *this;}

  private:

    LifeCycleLastCutoverFinalized m_finalized;
    bool m_finalizedHasBeenSet = false;

    LifeCycleLastCutoverInitiated m_initiated;
    bool m_initiatedHasBeenSet = false;

    LifeCycleLastCutoverReverted m_reverted;
    bool m_revertedHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
