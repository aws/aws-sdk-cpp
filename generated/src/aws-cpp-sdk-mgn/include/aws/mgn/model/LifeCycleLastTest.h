/**
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
    AWS_MGN_API LifeCycleLastTest() = default;
    AWS_MGN_API LifeCycleLastTest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LifeCycleLastTest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Lifecycle last Test finalized.</p>
     */
    inline const LifeCycleLastTestFinalized& GetFinalized() const { return m_finalized; }
    inline bool FinalizedHasBeenSet() const { return m_finalizedHasBeenSet; }
    template<typename FinalizedT = LifeCycleLastTestFinalized>
    void SetFinalized(FinalizedT&& value) { m_finalizedHasBeenSet = true; m_finalized = std::forward<FinalizedT>(value); }
    template<typename FinalizedT = LifeCycleLastTestFinalized>
    LifeCycleLastTest& WithFinalized(FinalizedT&& value) { SetFinalized(std::forward<FinalizedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle last Test initiated.</p>
     */
    inline const LifeCycleLastTestInitiated& GetInitiated() const { return m_initiated; }
    inline bool InitiatedHasBeenSet() const { return m_initiatedHasBeenSet; }
    template<typename InitiatedT = LifeCycleLastTestInitiated>
    void SetInitiated(InitiatedT&& value) { m_initiatedHasBeenSet = true; m_initiated = std::forward<InitiatedT>(value); }
    template<typename InitiatedT = LifeCycleLastTestInitiated>
    LifeCycleLastTest& WithInitiated(InitiatedT&& value) { SetInitiated(std::forward<InitiatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lifecycle last Test reverted.</p>
     */
    inline const LifeCycleLastTestReverted& GetReverted() const { return m_reverted; }
    inline bool RevertedHasBeenSet() const { return m_revertedHasBeenSet; }
    template<typename RevertedT = LifeCycleLastTestReverted>
    void SetReverted(RevertedT&& value) { m_revertedHasBeenSet = true; m_reverted = std::forward<RevertedT>(value); }
    template<typename RevertedT = LifeCycleLastTestReverted>
    LifeCycleLastTest& WithReverted(RevertedT&& value) { SetReverted(std::forward<RevertedT>(value)); return *this;}
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
