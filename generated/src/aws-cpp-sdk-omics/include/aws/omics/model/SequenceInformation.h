﻿/**
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
    AWS_OMICS_API SequenceInformation();
    AWS_OMICS_API SequenceInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SequenceInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sequence's total read count.</p>
     */
    inline long long GetTotalReadCount() const{ return m_totalReadCount; }
    inline bool TotalReadCountHasBeenSet() const { return m_totalReadCountHasBeenSet; }
    inline void SetTotalReadCount(long long value) { m_totalReadCountHasBeenSet = true; m_totalReadCount = value; }
    inline SequenceInformation& WithTotalReadCount(long long value) { SetTotalReadCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence's total base count.</p>
     */
    inline long long GetTotalBaseCount() const{ return m_totalBaseCount; }
    inline bool TotalBaseCountHasBeenSet() const { return m_totalBaseCountHasBeenSet; }
    inline void SetTotalBaseCount(long long value) { m_totalBaseCountHasBeenSet = true; m_totalBaseCount = value; }
    inline SequenceInformation& WithTotalBaseCount(long long value) { SetTotalBaseCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where the sequence originated.</p>
     */
    inline const Aws::String& GetGeneratedFrom() const{ return m_generatedFrom; }
    inline bool GeneratedFromHasBeenSet() const { return m_generatedFromHasBeenSet; }
    inline void SetGeneratedFrom(const Aws::String& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = value; }
    inline void SetGeneratedFrom(Aws::String&& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = std::move(value); }
    inline void SetGeneratedFrom(const char* value) { m_generatedFromHasBeenSet = true; m_generatedFrom.assign(value); }
    inline SequenceInformation& WithGeneratedFrom(const Aws::String& value) { SetGeneratedFrom(value); return *this;}
    inline SequenceInformation& WithGeneratedFrom(Aws::String&& value) { SetGeneratedFrom(std::move(value)); return *this;}
    inline SequenceInformation& WithGeneratedFrom(const char* value) { SetGeneratedFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence's alignment setting.</p>
     */
    inline const Aws::String& GetAlignment() const{ return m_alignment; }
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }
    inline void SetAlignment(const Aws::String& value) { m_alignmentHasBeenSet = true; m_alignment = value; }
    inline void SetAlignment(Aws::String&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }
    inline void SetAlignment(const char* value) { m_alignmentHasBeenSet = true; m_alignment.assign(value); }
    inline SequenceInformation& WithAlignment(const Aws::String& value) { SetAlignment(value); return *this;}
    inline SequenceInformation& WithAlignment(Aws::String&& value) { SetAlignment(std::move(value)); return *this;}
    inline SequenceInformation& WithAlignment(const char* value) { SetAlignment(value); return *this;}
    ///@}
  private:

    long long m_totalReadCount;
    bool m_totalReadCountHasBeenSet = false;

    long long m_totalBaseCount;
    bool m_totalBaseCountHasBeenSet = false;

    Aws::String m_generatedFrom;
    bool m_generatedFromHasBeenSet = false;

    Aws::String m_alignment;
    bool m_alignmentHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
