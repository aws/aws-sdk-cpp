﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/LifeCycleLastTestFinalized.h>
#include <aws/mgn/model/LifeCycleLastTestInitiated.h>
#include <aws/mgn/model/LifeCycleLastTestReverted.h>
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
   * <p>Lifecycle last Test.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LifeCycleLastTest">AWS
   * API Reference</a></p>
   */
  class LifeCycleLastTest
  {
  public:
    AWS_MGN_API LifeCycleLastTest();
    AWS_MGN_API LifeCycleLastTest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LifeCycleLastTest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lifecycle last Test finalized.</p>
     */
    inline const LifeCycleLastTestFinalized& GetFinalized() const{ return m_finalized; }
    inline bool FinalizedHasBeenSet() const { return m_finalizedHasBeenSet; }
    inline void SetFinalized(const LifeCycleLastTestFinalized& value) { m_finalizedHasBeenSet = true; m_finalized = value; }
    inline void SetFinalized(LifeCycleLastTestFinalized&& value) { m_finalizedHasBeenSet = true; m_finalized = std::move(value); }
    inline LifeCycleLastTest& WithFinalized(const LifeCycleLastTestFinalized& value) { SetFinalized(value); return *this;}
    inline LifeCycleLastTest& WithFinalized(LifeCycleLastTestFinalized&& value) { SetFinalized(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle last Test initiated.</p>
     */
    inline const LifeCycleLastTestInitiated& GetInitiated() const{ return m_initiated; }
    inline bool InitiatedHasBeenSet() const { return m_initiatedHasBeenSet; }
    inline void SetInitiated(const LifeCycleLastTestInitiated& value) { m_initiatedHasBeenSet = true; m_initiated = value; }
    inline void SetInitiated(LifeCycleLastTestInitiated&& value) { m_initiatedHasBeenSet = true; m_initiated = std::move(value); }
    inline LifeCycleLastTest& WithInitiated(const LifeCycleLastTestInitiated& value) { SetInitiated(value); return *this;}
    inline LifeCycleLastTest& WithInitiated(LifeCycleLastTestInitiated&& value) { SetInitiated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle last Test reverted.</p>
     */
    inline const LifeCycleLastTestReverted& GetReverted() const{ return m_reverted; }
    inline bool RevertedHasBeenSet() const { return m_revertedHasBeenSet; }
    inline void SetReverted(const LifeCycleLastTestReverted& value) { m_revertedHasBeenSet = true; m_reverted = value; }
    inline void SetReverted(LifeCycleLastTestReverted&& value) { m_revertedHasBeenSet = true; m_reverted = std::move(value); }
    inline LifeCycleLastTest& WithReverted(const LifeCycleLastTestReverted& value) { SetReverted(value); return *this;}
    inline LifeCycleLastTest& WithReverted(LifeCycleLastTestReverted&& value) { SetReverted(std::move(value)); return *this;}
    ///@}
  private:

    LifeCycleLastTestFinalized m_finalized;
    bool m_finalizedHasBeenSet = false;

    LifeCycleLastTestInitiated m_initiated;
    bool m_initiatedHasBeenSet = false;

    LifeCycleLastTestReverted m_reverted;
    bool m_revertedHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
