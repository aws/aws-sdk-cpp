/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Details about a sequence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/SequenceInformation">AWS
   * API Reference</a></p>
   */
  class SequenceInformation
  {
  public:
    AWS_OMICS_API SequenceInformation() = default;
    AWS_OMICS_API SequenceInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SequenceInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sequence's total read count.</p>
     */
    inline long long GetTotalReadCount() const { return m_totalReadCount; }
    inline bool TotalReadCountHasBeenSet() const { return m_totalReadCountHasBeenSet; }
    inline void SetTotalReadCount(long long value) { m_totalReadCountHasBeenSet = true; m_totalReadCount = value; }
    inline SequenceInformation& WithTotalReadCount(long long value) { SetTotalReadCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence's total base count.</p>
     */
    inline long long GetTotalBaseCount() const { return m_totalBaseCount; }
    inline bool TotalBaseCountHasBeenSet() const { return m_totalBaseCountHasBeenSet; }
    inline void SetTotalBaseCount(long long value) { m_totalBaseCountHasBeenSet = true; m_totalBaseCount = value; }
    inline SequenceInformation& WithTotalBaseCount(long long value) { SetTotalBaseCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where the sequence originated.</p>
     */
    inline const Aws::String& GetGeneratedFrom() const { return m_generatedFrom; }
    inline bool GeneratedFromHasBeenSet() const { return m_generatedFromHasBeenSet; }
    template<typename GeneratedFromT = Aws::String>
    void SetGeneratedFrom(GeneratedFromT&& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = std::forward<GeneratedFromT>(value); }
    template<typename GeneratedFromT = Aws::String>
    SequenceInformation& WithGeneratedFrom(GeneratedFromT&& value) { SetGeneratedFrom(std::forward<GeneratedFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence's alignment setting.</p>
     */
    inline const Aws::String& GetAlignment() const { return m_alignment; }
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }
    template<typename AlignmentT = Aws::String>
    void SetAlignment(AlignmentT&& value) { m_alignmentHasBeenSet = true; m_alignment = std::forward<AlignmentT>(value); }
    template<typename AlignmentT = Aws::String>
    SequenceInformation& WithAlignment(AlignmentT&& value) { SetAlignment(std::forward<AlignmentT>(value)); return *this;}
    ///@}
  private:

    long long m_totalReadCount{0};
    bool m_totalReadCountHasBeenSet = false;

    long long m_totalBaseCount{0};
    bool m_totalBaseCountHasBeenSet = false;

    Aws::String m_generatedFrom;
    bool m_generatedFromHasBeenSet = false;

    Aws::String m_alignment;
    bool m_alignmentHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
