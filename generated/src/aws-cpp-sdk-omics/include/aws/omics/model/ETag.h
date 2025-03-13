/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ETagAlgorithm.h>
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
   * <p>The entity tag (ETag) is a hash of the object representing its semantic
   * content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ETag">AWS API
   * Reference</a></p>
   */
  class ETag
  {
  public:
    AWS_OMICS_API ETag() = default;
    AWS_OMICS_API ETag(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ETag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The algorithm used to calculate the read set’s ETag(s).</p>
     */
    inline ETagAlgorithm GetAlgorithm() const { return m_algorithm; }
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }
    inline void SetAlgorithm(ETagAlgorithm value) { m_algorithmHasBeenSet = true; m_algorithm = value; }
    inline ETag& WithAlgorithm(ETagAlgorithm value) { SetAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag hash calculated on Source1 of the read set.</p>
     */
    inline const Aws::String& GetSource1() const { return m_source1; }
    inline bool Source1HasBeenSet() const { return m_source1HasBeenSet; }
    template<typename Source1T = Aws::String>
    void SetSource1(Source1T&& value) { m_source1HasBeenSet = true; m_source1 = std::forward<Source1T>(value); }
    template<typename Source1T = Aws::String>
    ETag& WithSource1(Source1T&& value) { SetSource1(std::forward<Source1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag hash calculated on Source2 of the read set.</p>
     */
    inline const Aws::String& GetSource2() const { return m_source2; }
    inline bool Source2HasBeenSet() const { return m_source2HasBeenSet; }
    template<typename Source2T = Aws::String>
    void SetSource2(Source2T&& value) { m_source2HasBeenSet = true; m_source2 = std::forward<Source2T>(value); }
    template<typename Source2T = Aws::String>
    ETag& WithSource2(Source2T&& value) { SetSource2(std::forward<Source2T>(value)); return *this;}
    ///@}
  private:

    ETagAlgorithm m_algorithm{ETagAlgorithm::NOT_SET};
    bool m_algorithmHasBeenSet = false;

    Aws::String m_source1;
    bool m_source1HasBeenSet = false;

    Aws::String m_source2;
    bool m_source2HasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
