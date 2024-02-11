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
   * <p> The entity tag (ETag) is a hash of the object representing its semantic
   * content. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ETag">AWS API
   * Reference</a></p>
   */
  class ETag
  {
  public:
    AWS_OMICS_API ETag();
    AWS_OMICS_API ETag(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ETag& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The algorithm used to calculate the read set’s ETag(s). </p>
     */
    inline const ETagAlgorithm& GetAlgorithm() const{ return m_algorithm; }

    /**
     * <p> The algorithm used to calculate the read set’s ETag(s). </p>
     */
    inline bool AlgorithmHasBeenSet() const { return m_algorithmHasBeenSet; }

    /**
     * <p> The algorithm used to calculate the read set’s ETag(s). </p>
     */
    inline void SetAlgorithm(const ETagAlgorithm& value) { m_algorithmHasBeenSet = true; m_algorithm = value; }

    /**
     * <p> The algorithm used to calculate the read set’s ETag(s). </p>
     */
    inline void SetAlgorithm(ETagAlgorithm&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::move(value); }

    /**
     * <p> The algorithm used to calculate the read set’s ETag(s). </p>
     */
    inline ETag& WithAlgorithm(const ETagAlgorithm& value) { SetAlgorithm(value); return *this;}

    /**
     * <p> The algorithm used to calculate the read set’s ETag(s). </p>
     */
    inline ETag& WithAlgorithm(ETagAlgorithm&& value) { SetAlgorithm(std::move(value)); return *this;}


    /**
     * <p> The ETag hash calculated on Source1 of the read set. </p>
     */
    inline const Aws::String& GetSource1() const{ return m_source1; }

    /**
     * <p> The ETag hash calculated on Source1 of the read set. </p>
     */
    inline bool Source1HasBeenSet() const { return m_source1HasBeenSet; }

    /**
     * <p> The ETag hash calculated on Source1 of the read set. </p>
     */
    inline void SetSource1(const Aws::String& value) { m_source1HasBeenSet = true; m_source1 = value; }

    /**
     * <p> The ETag hash calculated on Source1 of the read set. </p>
     */
    inline void SetSource1(Aws::String&& value) { m_source1HasBeenSet = true; m_source1 = std::move(value); }

    /**
     * <p> The ETag hash calculated on Source1 of the read set. </p>
     */
    inline void SetSource1(const char* value) { m_source1HasBeenSet = true; m_source1.assign(value); }

    /**
     * <p> The ETag hash calculated on Source1 of the read set. </p>
     */
    inline ETag& WithSource1(const Aws::String& value) { SetSource1(value); return *this;}

    /**
     * <p> The ETag hash calculated on Source1 of the read set. </p>
     */
    inline ETag& WithSource1(Aws::String&& value) { SetSource1(std::move(value)); return *this;}

    /**
     * <p> The ETag hash calculated on Source1 of the read set. </p>
     */
    inline ETag& WithSource1(const char* value) { SetSource1(value); return *this;}


    /**
     * <p> The ETag hash calculated on Source2 of the read set. </p>
     */
    inline const Aws::String& GetSource2() const{ return m_source2; }

    /**
     * <p> The ETag hash calculated on Source2 of the read set. </p>
     */
    inline bool Source2HasBeenSet() const { return m_source2HasBeenSet; }

    /**
     * <p> The ETag hash calculated on Source2 of the read set. </p>
     */
    inline void SetSource2(const Aws::String& value) { m_source2HasBeenSet = true; m_source2 = value; }

    /**
     * <p> The ETag hash calculated on Source2 of the read set. </p>
     */
    inline void SetSource2(Aws::String&& value) { m_source2HasBeenSet = true; m_source2 = std::move(value); }

    /**
     * <p> The ETag hash calculated on Source2 of the read set. </p>
     */
    inline void SetSource2(const char* value) { m_source2HasBeenSet = true; m_source2.assign(value); }

    /**
     * <p> The ETag hash calculated on Source2 of the read set. </p>
     */
    inline ETag& WithSource2(const Aws::String& value) { SetSource2(value); return *this;}

    /**
     * <p> The ETag hash calculated on Source2 of the read set. </p>
     */
    inline ETag& WithSource2(Aws::String&& value) { SetSource2(std::move(value)); return *this;}

    /**
     * <p> The ETag hash calculated on Source2 of the read set. </p>
     */
    inline ETag& WithSource2(const char* value) { SetSource2(value); return *this;}

  private:

    ETagAlgorithm m_algorithm;
    bool m_algorithmHasBeenSet = false;

    Aws::String m_source1;
    bool m_source1HasBeenSet = false;

    Aws::String m_source2;
    bool m_source2HasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
