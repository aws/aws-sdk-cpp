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
   * <p>Source files for a sequence.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/SourceFiles">AWS
   * API Reference</a></p>
   */
  class SourceFiles
  {
  public:
    AWS_OMICS_API SourceFiles() = default;
    AWS_OMICS_API SourceFiles(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SourceFiles& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline const Aws::String& GetSource1() const { return m_source1; }
    inline bool Source1HasBeenSet() const { return m_source1HasBeenSet; }
    template<typename Source1T = Aws::String>
    void SetSource1(Source1T&& value) { m_source1HasBeenSet = true; m_source1 = std::forward<Source1T>(value); }
    template<typename Source1T = Aws::String>
    SourceFiles& WithSource1(Source1T&& value) { SetSource1(std::forward<Source1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline const Aws::String& GetSource2() const { return m_source2; }
    inline bool Source2HasBeenSet() const { return m_source2HasBeenSet; }
    template<typename Source2T = Aws::String>
    void SetSource2(Source2T&& value) { m_source2HasBeenSet = true; m_source2 = std::forward<Source2T>(value); }
    template<typename Source2T = Aws::String>
    SourceFiles& WithSource2(Source2T&& value) { SetSource2(std::forward<Source2T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_source1;
    bool m_source1HasBeenSet = false;

    Aws::String m_source2;
    bool m_source2HasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
