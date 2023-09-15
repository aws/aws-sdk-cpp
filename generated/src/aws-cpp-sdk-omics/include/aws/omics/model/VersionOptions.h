/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/TsvVersionOptions.h>
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
   * <p> The options for an annotation store version. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/VersionOptions">AWS
   * API Reference</a></p>
   */
  class VersionOptions
  {
  public:
    AWS_OMICS_API VersionOptions();
    AWS_OMICS_API VersionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API VersionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> File settings for a version of a TSV store. </p>
     */
    inline const TsvVersionOptions& GetTsvVersionOptions() const{ return m_tsvVersionOptions; }

    /**
     * <p> File settings for a version of a TSV store. </p>
     */
    inline bool TsvVersionOptionsHasBeenSet() const { return m_tsvVersionOptionsHasBeenSet; }

    /**
     * <p> File settings for a version of a TSV store. </p>
     */
    inline void SetTsvVersionOptions(const TsvVersionOptions& value) { m_tsvVersionOptionsHasBeenSet = true; m_tsvVersionOptions = value; }

    /**
     * <p> File settings for a version of a TSV store. </p>
     */
    inline void SetTsvVersionOptions(TsvVersionOptions&& value) { m_tsvVersionOptionsHasBeenSet = true; m_tsvVersionOptions = std::move(value); }

    /**
     * <p> File settings for a version of a TSV store. </p>
     */
    inline VersionOptions& WithTsvVersionOptions(const TsvVersionOptions& value) { SetTsvVersionOptions(value); return *this;}

    /**
     * <p> File settings for a version of a TSV store. </p>
     */
    inline VersionOptions& WithTsvVersionOptions(TsvVersionOptions&& value) { SetTsvVersionOptions(std::move(value)); return *this;}

  private:

    TsvVersionOptions m_tsvVersionOptions;
    bool m_tsvVersionOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
