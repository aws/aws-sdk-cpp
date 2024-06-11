/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/TsvOptions.h>
#include <aws/omics/model/VcfOptions.h>
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
   * <p>Formatting options for a file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/FormatOptions">AWS
   * API Reference</a></p>
   */
  class FormatOptions
  {
  public:
    AWS_OMICS_API FormatOptions();
    AWS_OMICS_API FormatOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API FormatOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Options for a TSV file.</p>
     */
    inline const TsvOptions& GetTsvOptions() const{ return m_tsvOptions; }
    inline bool TsvOptionsHasBeenSet() const { return m_tsvOptionsHasBeenSet; }
    inline void SetTsvOptions(const TsvOptions& value) { m_tsvOptionsHasBeenSet = true; m_tsvOptions = value; }
    inline void SetTsvOptions(TsvOptions&& value) { m_tsvOptionsHasBeenSet = true; m_tsvOptions = std::move(value); }
    inline FormatOptions& WithTsvOptions(const TsvOptions& value) { SetTsvOptions(value); return *this;}
    inline FormatOptions& WithTsvOptions(TsvOptions&& value) { SetTsvOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options for a VCF file.</p>
     */
    inline const VcfOptions& GetVcfOptions() const{ return m_vcfOptions; }
    inline bool VcfOptionsHasBeenSet() const { return m_vcfOptionsHasBeenSet; }
    inline void SetVcfOptions(const VcfOptions& value) { m_vcfOptionsHasBeenSet = true; m_vcfOptions = value; }
    inline void SetVcfOptions(VcfOptions&& value) { m_vcfOptionsHasBeenSet = true; m_vcfOptions = std::move(value); }
    inline FormatOptions& WithVcfOptions(const VcfOptions& value) { SetVcfOptions(value); return *this;}
    inline FormatOptions& WithVcfOptions(VcfOptions&& value) { SetVcfOptions(std::move(value)); return *this;}
    ///@}
  private:

    TsvOptions m_tsvOptions;
    bool m_tsvOptionsHasBeenSet = false;

    VcfOptions m_vcfOptions;
    bool m_vcfOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
