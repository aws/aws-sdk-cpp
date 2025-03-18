/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Splice insert message configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/SpliceInsertMessage">AWS
   * API Reference</a></p>
   */
  class SpliceInsertMessage
  {
  public:
    AWS_MEDIATAILOR_API SpliceInsertMessage() = default;
    AWS_MEDIATAILOR_API SpliceInsertMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API SpliceInsertMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is written to <code>splice_insert.avail_num</code>, as defined in
     * section 9.7.3.1 of the SCTE-35 specification. The default value is
     * <code>0</code>. Values must be between <code>0</code> and <code>256</code>,
     * inclusive.</p>
     */
    inline int GetAvailNum() const { return m_availNum; }
    inline bool AvailNumHasBeenSet() const { return m_availNumHasBeenSet; }
    inline void SetAvailNum(int value) { m_availNumHasBeenSet = true; m_availNum = value; }
    inline SpliceInsertMessage& WithAvailNum(int value) { SetAvailNum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is written to <code>splice_insert.avails_expected</code>, as defined in
     * section 9.7.3.1 of the SCTE-35 specification. The default value is
     * <code>0</code>. Values must be between <code>0</code> and <code>256</code>,
     * inclusive.</p>
     */
    inline int GetAvailsExpected() const { return m_availsExpected; }
    inline bool AvailsExpectedHasBeenSet() const { return m_availsExpectedHasBeenSet; }
    inline void SetAvailsExpected(int value) { m_availsExpectedHasBeenSet = true; m_availsExpected = value; }
    inline SpliceInsertMessage& WithAvailsExpected(int value) { SetAvailsExpected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is written to <code>splice_insert.splice_event_id</code>, as defined in
     * section 9.7.3.1 of the SCTE-35 specification. The default value is
     * <code>1</code>.</p>
     */
    inline int GetSpliceEventId() const { return m_spliceEventId; }
    inline bool SpliceEventIdHasBeenSet() const { return m_spliceEventIdHasBeenSet; }
    inline void SetSpliceEventId(int value) { m_spliceEventIdHasBeenSet = true; m_spliceEventId = value; }
    inline SpliceInsertMessage& WithSpliceEventId(int value) { SetSpliceEventId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is written to <code>splice_insert.unique_program_id</code>, as defined
     * in section 9.7.3.1 of the SCTE-35 specification. The default value is
     * <code>0</code>. Values must be between <code>0</code> and <code>256</code>,
     * inclusive.</p>
     */
    inline int GetUniqueProgramId() const { return m_uniqueProgramId; }
    inline bool UniqueProgramIdHasBeenSet() const { return m_uniqueProgramIdHasBeenSet; }
    inline void SetUniqueProgramId(int value) { m_uniqueProgramIdHasBeenSet = true; m_uniqueProgramId = value; }
    inline SpliceInsertMessage& WithUniqueProgramId(int value) { SetUniqueProgramId(value); return *this;}
    ///@}
  private:

    int m_availNum{0};
    bool m_availNumHasBeenSet = false;

    int m_availsExpected{0};
    bool m_availsExpectedHasBeenSet = false;

    int m_spliceEventId{0};
    bool m_spliceEventIdHasBeenSet = false;

    int m_uniqueProgramId{0};
    bool m_uniqueProgramIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
