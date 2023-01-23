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
    AWS_OMICS_API SourceFiles();
    AWS_OMICS_API SourceFiles(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API SourceFiles& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline const Aws::String& GetSource1() const{ return m_source1; }

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline bool Source1HasBeenSet() const { return m_source1HasBeenSet; }

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline void SetSource1(const Aws::String& value) { m_source1HasBeenSet = true; m_source1 = value; }

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline void SetSource1(Aws::String&& value) { m_source1HasBeenSet = true; m_source1 = std::move(value); }

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline void SetSource1(const char* value) { m_source1HasBeenSet = true; m_source1.assign(value); }

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline SourceFiles& WithSource1(const Aws::String& value) { SetSource1(value); return *this;}

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline SourceFiles& WithSource1(Aws::String&& value) { SetSource1(std::move(value)); return *this;}

    /**
     * <p>The location of the first file in Amazon S3.</p>
     */
    inline SourceFiles& WithSource1(const char* value) { SetSource1(value); return *this;}


    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline const Aws::String& GetSource2() const{ return m_source2; }

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline bool Source2HasBeenSet() const { return m_source2HasBeenSet; }

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline void SetSource2(const Aws::String& value) { m_source2HasBeenSet = true; m_source2 = value; }

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline void SetSource2(Aws::String&& value) { m_source2HasBeenSet = true; m_source2 = std::move(value); }

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline void SetSource2(const char* value) { m_source2HasBeenSet = true; m_source2.assign(value); }

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline SourceFiles& WithSource2(const Aws::String& value) { SetSource2(value); return *this;}

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline SourceFiles& WithSource2(Aws::String&& value) { SetSource2(std::move(value)); return *this;}

    /**
     * <p>The location of the second file in Amazon S3.</p>
     */
    inline SourceFiles& WithSource2(const char* value) { SetSource2(value); return *this;}

  private:

    Aws::String m_source1;
    bool m_source1HasBeenSet = false;

    Aws::String m_source2;
    bool m_source2HasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
